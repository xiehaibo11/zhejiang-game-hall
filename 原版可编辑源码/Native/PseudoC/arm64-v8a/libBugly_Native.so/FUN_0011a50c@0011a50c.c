
void FUN_0011a50c(char *param_1,long *param_2,size_t *param_3,int param_4)

{
  long lVar1;
  int iVar2;
  FILE *__stream;
  size_t sVar3;
  void *__ptr;
  void *__ptr_00;
  size_t sVar4;
  size_t sVar5;
  undefined8 uVar6;
  void *pvVar7;
  char *pcVar8;
  char *__dest;
  char *pcVar9;
  char *pcVar10;
  size_t __off;
  ulong uVar11;
  ulong uVar12;
  ulong __nmemb;
  size_t *psVar13;
  size_t local_d8;
  char *local_c8;
  undefined1 auStack_a8 [40];
  ulong local_80;
  ushort local_6c;
  ushort local_6a;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  *param_2 = 0;
  *param_3 = 0;
  __stream = fopen(param_1,"r");
  if (__stream != (FILE *)0x0) {
    sVar3 = fread(auStack_a8,0x40,1,__stream);
    if (sVar3 == 1) {
      log2Console(3,"Bugly-libunwind","opened file \'%s\'. Section header at offset %d\n",param_1,
                  local_80 & 0xffffffff);
      fseek(__stream,local_80,0);
      __nmemb = (ulong)local_6c;
      __ptr = calloc(__nmemb,0x40);
      if ((__ptr == (void *)0x0) || (sVar3 = fread(__ptr,0x40,__nmemb,__stream), sVar3 != __nmemb))
      {
        local_c8 = (char *)0x0;
        __ptr_00 = (void *)0x0;
      }
      else {
        sVar3 = *(size_t *)((long)__ptr + (ulong)local_6a * 0x40 + 0x20);
        log2Console(3,"Bugly-libunwind","loading string table of size %ld\n",sVar3);
        __ptr_00 = malloc(sVar3);
        fseek(__stream,*(long *)((long)__ptr + (ulong)local_6a * 0x40 + 0x18),0);
        if ((__ptr_00 != (void *)0x0) && (sVar4 = fread(__ptr_00,1,sVar3,__stream), sVar4 == sVar3))
        {
          if (local_6c < 2) {
            local_c8 = (char *)0x0;
            local_d8 = 0;
          }
          else {
            psVar13 = (size_t *)((long)__ptr + 0x60);
            uVar11 = 1;
            local_d8 = 0;
            local_c8 = (char *)0x0;
            do {
              if (*param_2 != 0) break;
              uVar12 = (ulong)(uint)psVar13[-4];
              if (uVar12 < sVar3) {
                if ((sVar3 < uVar12 + 0xd) ||
                   (iVar2 = strcmp((char *)((long)__ptr_00 + uVar12),".debug_frame"), iVar2 != 0)) {
                  if ((sVar3 < uVar12 + 0xf) ||
                     (iVar2 = strcmp((char *)((long)__ptr_00 + uVar12),".gnu_debuglink"), iVar2 != 0
                     )) goto LAB_0011a7b8;
                  sVar4 = *psVar13;
                  local_c8 = malloc(sVar4);
                  __off = psVar13[-1];
                  fseek(__stream,__off,0);
                  if (local_c8 == (char *)0x0) {
                    local_c8 = (char *)0x0;
                    goto LAB_0011a7f0;
                  }
                  sVar5 = fread(local_c8,1,sVar4,__stream);
                  if (sVar5 != sVar4) goto LAB_0011a7f0;
                  pcVar8 = "read %zd bytes of .gnu_debuglink from offset %ld\n";
                  local_d8 = sVar4;
                }
                else {
                  sVar4 = *psVar13;
                  *param_3 = sVar4;
                  pvVar7 = malloc(sVar4);
                  *param_2 = (long)pvVar7;
                  __off = psVar13[-1];
                  fseek(__stream,__off,0);
                  if (((void *)*param_2 == (void *)0x0) ||
                     (sVar4 = fread((void *)*param_2,1,*param_3,__stream), sVar4 != *param_3))
                  goto LAB_0011a7f0;
                  pcVar8 = "read %zd bytes of .debug_frame from offset %ld\n";
                }
                log2Console(3,"Bugly-libunwind",pcVar8,sVar4,__off);
              }
LAB_0011a7b8:
              uVar11 = uVar11 + 1;
              psVar13 = psVar13 + 8;
            } while (uVar11 < __nmemb);
          }
          free(__ptr_00);
          free(__ptr);
          fclose(__stream);
          if ((param_4 == -1) && (local_c8 != (char *)0x0)) {
            free(local_c8);
            goto LAB_0011a818;
          }
          if (((local_c8 != (char *)0x0) && (*param_2 == 0)) &&
             (pvVar7 = memchr(local_c8,0,local_d8), pvVar7 != (void *)0x0)) {
            sVar3 = strlen(param_1);
            pcVar8 = malloc(sVar3 + 1);
            sVar4 = strlen(local_c8);
            __dest = malloc(sVar3 + sVar4 + 0x17);
            if ((pcVar8 == (char *)0x0) || (__dest == (char *)0x0)) goto LAB_0011a7f0;
            pcVar9 = strrchr(param_1,0x2f);
            pcVar10 = pcVar8;
            if (pcVar9 != (char *)0x0) {
              memcpy(pcVar8,param_1,(long)pcVar9 - (long)param_1);
              pcVar10 = pcVar8 + ((long)pcVar9 - (long)param_1);
            }
            *pcVar10 = '\0';
            pcVar10 = strcpy(__dest,pcVar8);
            sVar3 = strlen(pcVar10);
            (__dest + sVar3)[0] = '/';
            (__dest + sVar3)[1] = '\0';
            pcVar10 = strcat(__dest,local_c8);
            iVar2 = FUN_0011a50c(pcVar10,param_2,param_3,0xffffffff);
            if (iVar2 == 1) {
              pcVar10 = strcpy(__dest,pcVar8);
              sVar3 = strlen(pcVar10);
              builtin_strncpy(__dest + sVar3,"/.debug/",9);
              pcVar10 = strcat(__dest,local_c8);
              iVar2 = FUN_0011a50c(pcVar10,param_2,param_3,0xffffffff);
              if ((param_4 == 1) && (iVar2 == 1)) {
                builtin_strncpy(__dest,"/usr/lib/debug",0xf);
                pcVar10 = strcat(__dest,pcVar8);
                sVar3 = strlen(pcVar10);
                (__dest + sVar3)[0] = '/';
                (__dest + sVar3)[1] = '\0';
                pcVar10 = strcat(__dest,local_c8);
                FUN_0011a50c(pcVar10,param_2,param_3,0xffffffff);
              }
            }
            free(pcVar8);
            free(__dest);
          }
          free(local_c8);
          uVar6 = 0;
          goto LAB_0011a81c;
        }
        local_c8 = (char *)0x0;
      }
    }
    else {
      local_c8 = (char *)0x0;
      __ptr_00 = (void *)0x0;
      __ptr = (void *)0x0;
    }
LAB_0011a7f0:
    free(__ptr_00);
    free(__ptr);
    free(local_c8);
    free((void *)*param_2);
    fclose(__stream);
  }
LAB_0011a818:
  uVar6 = 1;
LAB_0011a81c:
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}

