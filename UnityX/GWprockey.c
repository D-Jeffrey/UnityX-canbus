#include <ctype.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char g17_proc_info[] = "/proc/cpuinfo";
char g19_Serial[] = "Serial";


#ifdef _MSC_BUILD
char* strcasestr(const char* str1, const char* str2) {
        const char* p1 = str1;
        const char* p2 = str2;
        const char* r = *p2 == 0 ? str1 : 0;
        while (*p1 != 0 && *p2 != 0) {
            if (tolower((unsigned char)*p1) == tolower((unsigned char)*p2)) {
                if (r == 0) { r = p1; }
                p2++;
            } else  {
                p2 = str2;
                if (r != 0) { p1 = r + 1; }
                if (tolower((unsigned char)*p1) == tolower((unsigned char)*p2)) {
                    r = p1;
                    p2++;
                }
                else { r = 0; }
            }
            p1++;
        }
        return *p2 == 0 ? (char*)r : 0;
    }
#endif // _MSC_BUILD

int32_t ReadFromProcInfo(char * readwindow, int32_t maxcharacters) {
#ifdef _MSC_BUILD
    FILE *file = fopen("cpuinfo", "r");
#else
    FILE *file = fopen("/proc/cpuinfo", "r");
#endif

    if (file == NULL) {
        printf("**Failed to open Proc Info\n");
        return -1;
    }
    char fileReadingBuffer[384];
    memset(fileReadingBuffer, 0, 380);
    if (fgets((char *)&fileReadingBuffer, 128, file) == NULL) {
        // 0x10b60
        printf("**Failed to on first Read\n");
        return -2;
    }
    printf("^^ 1 Read\n");
    // int32_t v1 = (int32_t)readwindow;
    char * v1 = readwindow;
    int32_t v2; 
    // uint32_t v3 = (int32_t)&v2;
    char * v3 = &fileReadingBuffer[381];
    char c; 
    char * v4; 
    char * v5;
    char * v6;
    int32_t v7; 
    char v8; 
    char * found_char_pos; 
    char * str3;
    char * next_token; 
    if (strcasestr((char *)&fileReadingBuffer, (char *)&g19_Serial) != NULL) {
        printf("--Looking at %s\n", (char*)&fileReadingBuffer);
        found_char_pos = strchr((char *)&fileReadingBuffer, ':');  // 58
        if (found_char_pos != NULL) {
            str3 = found_char_pos + 1;
            if (str3 >= v3 != str3 != v3) {
                next_token = strtok((char *)str3, " \t");
                if (next_token != NULL) {
                    v8 = *next_token;
                    c = v8;
                    v4 = next_token;
                    v5 = v1;
                    v7 = maxcharacters;
                    v6 = v1;
                    if (v8 == 0) {
                        goto ProcFinish;
                    } else {
                        goto lab_0x10b0c;
                    }
                }
            }
        }
    }
    memset(fileReadingBuffer, 0, 380);
    char * str = fgets((char *)&fileReadingBuffer, 128, file); 
    int32_t result = -2;
    while (str != NULL) {
        if (strcasestr((char *)&fileReadingBuffer, (char *)&g19_Serial) != NULL) {
            found_char_pos = strchr((char *)&fileReadingBuffer, ':');  // 58
            if (found_char_pos != NULL) {
                str3 = found_char_pos + 1;
                if (str3 >= v3 != str3 != v3) {
                    next_token = strtok((char *)str3, " \t");
                    if (next_token != NULL) {
                        v8 = *next_token;
                        c = v8;
                        v4 = next_token;
                        v5 = v1;
                        v7 = maxcharacters;
                        v6 = v1;
                        if (v8 == 0) {
                            goto ProcFinish;
                        } else {
                            goto lab_0x10b0c;
                        }
                    }
                }
            }
        }
        memset(fileReadingBuffer, 0, 380);
        str = fgets((char *)&fileReadingBuffer, 128, file);
        printf("**read of Proc Info looking for '%s' from> %s", (char *)&g19_Serial, (char*)&fileReadingBuffer);
        result = -2;
    }
    return result;
  ProcFinish:
    *(char *)v6 = 0;
    result = 0;
    printf("!! Good read of Proc Info?\n");
    return result;
  lab_0x10b0c:
    v6 = v5;
    if (c != 10 == v7 > 1) {
        *(char *)v5 = (char)toupper((int32_t)c);
        char * v9 = v5 + 1; 
        char * v10 = (char *)(v4 + 1); 
        char v11 = *v10; 
        c = v11;
        v4 = v10;
        v5 = v9;
        v7--;
        v6 = v9;
        if (v11 == 0) {
            goto ProcFinish;
        } else {
            goto lab_0x10b0c;
        }
    } else {
        goto ProcFinish;
    }
}

int main(){

    int rc;
    char procKey[1024];

    printf("Starting..\n");
    rc = ReadFromProcInfo((char *)&procKey[0], 256);
    printf("Read Result = %d\n", rc);
    printf("`%s`\n", procKey);
    return 1;
}