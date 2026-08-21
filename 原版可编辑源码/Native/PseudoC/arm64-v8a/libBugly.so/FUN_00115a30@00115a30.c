
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00115a30(char *param_1,long *param_2,size_t *param_3,int param_4)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  FILE *__stream;
  size_t sVar4;
  undefined8 uVar5;
  size_t sVar6;
  void *pvVar7;
  char *__src;
  char *__dest;
  char *pcVar8;
  long __off;
  ulong uVar9;
  ulong uVar10;
  void *__ptr;
  void *__ptr_00;
  size_t local_98;
  char *local_58;
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined4 uStack_1c;
  ushort local_c;
  ushort local_a;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *param_2 = 0;
  *param_3 = 0;
  __stream = fopen(param_1,"r");
  if (__stream == (FILE *)0x0) {
    uVar5 = 1;
    goto LAB_00115ae4;
  }
  sVar4 = fread(auStack_48,0x40,1,__stream);
  if (sVar4 == 1) {
    log2Console(3,"Bugly-libunwind","opened file \'%s\'. Section header at offset %d\n",param_1,
                local_20);
    fseek(__stream,CONCAT44(uStack_1c,local_20),0);
    uVar9 = (ulong)local_c;
    __ptr_00 = calloc(uVar9,0x40);
    if (__ptr_00 == (void *)0x0) goto LAB_00115aac;
    sVar4 = fread(__ptr_00,0x40,uVar9,__stream);
    if (sVar4 == local_c) {
      log2Console(3,"Bugly-libunwind","loading string table of size %ld\n",
                  *(undefined8 *)((long)__ptr_00 + (ulong)local_a * 0x40 + 0x20));
      sVar4 = *(size_t *)((long)__ptr_00 + (ulong)local_a * 0x40 + 0x20);
      __ptr = malloc(sVar4);
      fseek(__stream,*(long *)((long)__ptr_00 + (ulong)local_a * 0x40 + 0x18),0);
      if (__ptr == (void *)0x0) {
        local_58 = (char *)0x0;
      }
      else {
        local_58 = (char *)0x0;
        sVar6 = fread(__ptr,1,sVar4,__stream);
        if (sVar6 == sVar4) {
          if ((local_c < 2) || (*param_2 != 0)) {
            local_58 = (char *)0x0;
            free(__ptr);
            free(__ptr_00);
            fclose(__stream);
          }
          else {
            local_98 = 0;
            uVar9 = 1;
            do {
              lVar2 = uVar9 * 0x40;
              uVar10 = (ulong)*(uint *)((long)__ptr_00 + lVar2);
              if (uVar10 < sVar6) {
                if (uVar10 + 0xd <= sVar6) {
                  iVar3 = strcmp((char *)((long)__ptr + uVar10),".debug_frame");
                  if (iVar3 == 0) {
                    sVar4 = *(size_t *)((long)__ptr_00 + lVar2 + 0x20);
                    *param_3 = sVar4;
                    pvVar7 = malloc(sVar4);
                    __off = *(long *)((long)__ptr_00 + lVar2 + 0x18);
                    *param_2 = (long)pvVar7;
                    fseek(__stream,__off,0);
                    if ((void *)*param_2 != (void *)0x0) {
                      sVar4 = fread((void *)*param_2,1,*param_3,__stream);
                      if (sVar4 == *param_3) {
                        log2Console(3,"Bugly-libunwind",
                                    "read %zd bytes of .debug_frame from offset %ld\n",sVar4,
                                    *(undefined8 *)((long)__ptr_00 + lVar2 + 0x18));
                        goto LAB_00115cac;
                      }
                    }
                    goto LAB_00115ab8;
                  }
                }
                if (uVar10 + 0xf <= sVar6) {
                  iVar3 = strcmp((char *)((long)__ptr + uVar10),".gnu_debuglink");
                  if (iVar3 == 0) {
                    sVar4 = *(size_t *)((long)__ptr_00 + lVar2 + 0x20);
                    local_58 = malloc(sVar4);
                    fseek(__stream,*(long *)((long)__ptr_00 + lVar2 + 0x18),0);
                    if (local_58 == (char *)0x0) goto LAB_00115ab8;
                    local_98 = fread(local_58,1,sVar4,__stream);
                    if (local_98 != sVar4) goto LAB_00115ab8;
                    log2Console(3,"Bugly-libunwind",
                                "read %zd bytes of .gnu_debuglink from offset %ld\n",local_98,
                                *(undefined8 *)((long)__ptr_00 + lVar2 + 0x18));
                  }
                }
              }
LAB_00115cac:
              uVar1 = (int)uVar9 + 1;
              uVar9 = (ulong)uVar1;
            } while ((uVar1 < local_c) && (*param_2 == 0));
            free(__ptr);
            free(__ptr_00);
            fclose(__stream);
            if (local_58 != (char *)0x0) {
              if (param_4 == -1) {
                free(local_58);
                uVar5 = 1;
                goto LAB_00115ae4;
              }
              if ((*param_2 == 0) && (pvVar7 = memchr(local_58,0,local_98), pvVar7 != (void *)0x0))
              {
                sVar4 = strlen(param_1);
                __src = malloc(sVar4 + 1);
                sVar6 = strlen(local_58);
                __dest = malloc(sVar4 + sVar6 + 0x17);
                if ((__dest == (char *)0x0) || (__src == (char *)0x0)) goto LAB_00115ab8;
                pcVar8 = strrchr(param_1,0x2f);
                if (pcVar8 == (char *)0x0) {
                  *__src = '\0';
                }
                else {
                  memcpy(__src,param_1,(long)pcVar8 - (long)param_1);
                  __src[(long)pcVar8 - (long)param_1] = '\0';
                }
                pcVar8 = stpcpy(__dest,__src);
                *pcVar8 = '/';
                memcpy(pcVar8 + 1,local_58,sVar6 + 1);
                iVar3 = FUN_00115a30(__dest,param_2,param_3,0xffffffff);
                if (iVar3 == 1) {
                  pcVar8 = stpcpy(__dest,__src);
                  builtin_strncpy(pcVar8,"/.debug/",8);
                  strcpy(pcVar8 + 8,local_58);
                  iVar3 = FUN_00115a30(__dest,param_2,param_3,0xffffffff);
                  if ((iVar3 == 1) && (param_4 == 1)) {
                    builtin_strncpy(__dest,"/usr/lib/debug",0xe);
                    pcVar8 = stpcpy(__dest + 0xe,__src);
                    *pcVar8 = '/';
                    strcpy(__dest + (long)(pcVar8 + (1 - (long)__dest)),local_58);
                    FUN_00115a30(__dest,param_2,param_3,0xffffffff);
                  }
                }
                free(__src);
                free(__dest);
              }
            }
          }
          free(local_58);
          uVar5 = 0;
          goto LAB_00115ae4;
        }
      }
    }
    else {
      local_58 = (char *)0x0;
      __ptr = (void *)0x0;
    }
  }
  else {
LAB_00115aac:
    local_58 = (char *)0x0;
    __ptr = (void *)0x0;
    __ptr_00 = (void *)0x0;
  }
LAB_00115ab8:
  free(__ptr);
  free(__ptr_00);
  free(local_58);
  free((void *)*param_2);
  fclose(__stream);
  uVar5 = 1;
LAB_00115ae4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

