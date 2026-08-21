
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void uv__getpwuid_r(long *param_1)

{
  __uid_t __uid;
  int iVar1;
  size_t sVar2;
  size_t sVar3;
  size_t sVar4;
  void *__dest;
  char *__buffer;
  passwd *local_40;
  passwd local_38;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == (long *)0x0) {
    iVar1 = -0x16;
  }
  else {
    __buffer = (char *)0x0;
    sVar2 = sysconf(0x48);
    if ((long)sVar2 < 1) {
      sVar2 = 0x1000;
    }
    __uid = geteuid();
    while( true ) {
      uv__free(__buffer);
      __buffer = (char *)uv__malloc(sVar2);
      if (__buffer == (char *)0x0) break;
      iVar1 = getpwuid_r(__uid,&local_38,__buffer,sVar2,&local_40);
      if (iVar1 != 0x22) {
        if (iVar1 == 0) {
          if (local_40 == (passwd *)0x0) {
            uv__free(__buffer);
            iVar1 = -2;
          }
          else {
            sVar2 = strlen(local_38.pw_name);
            sVar2 = sVar2 + 1;
            sVar3 = strlen(local_38.pw_dir);
            sVar3 = sVar3 + 1;
            sVar4 = strlen(local_38.pw_shell);
            __dest = (void *)uv__malloc(sVar3 + sVar2 + sVar4 + 1);
            *param_1 = (long)__dest;
            if (__dest == (void *)0x0) {
              uv__free(__buffer);
              iVar1 = -0xc;
            }
            else {
              memcpy(__dest,local_38.pw_name,sVar2);
              param_1[4] = (long)(*param_1 + sVar2);
              memcpy((void *)(*param_1 + sVar2),local_38.pw_dir,sVar3);
              param_1[3] = (long)(param_1[4] + sVar3);
              memcpy((void *)(param_1[4] + sVar3),local_38.pw_shell,sVar4 + 1);
              param_1[1] = (ulong)local_38.pw_uid;
              param_1[2] = (ulong)local_38.pw_gid;
              uv__free(__buffer);
              iVar1 = 0;
            }
          }
        }
        else {
          uv__free(__buffer);
          iVar1 = -iVar1;
        }
        goto LAB_00bee9a4;
      }
      sVar2 = sVar2 << 1;
    }
    iVar1 = -0xc;
  }
LAB_00bee9a4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1);
}

