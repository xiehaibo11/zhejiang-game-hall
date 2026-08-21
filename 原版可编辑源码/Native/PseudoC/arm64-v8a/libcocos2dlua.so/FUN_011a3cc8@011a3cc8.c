
int FUN_011a3cc8(long *param_1)

{
  __uid_t __uid;
  int iVar1;
  size_t sVar2;
  char *__buffer;
  size_t sVar3;
  void *__dest;
  size_t sVar4;
  passwd local_70;
  passwd *local_38;
  
  if (param_1 == (long *)0x0) {
    iVar1 = -0x16;
  }
  else {
    sVar2 = sysconf(0x48);
    sVar4 = 0x1000;
    if (0 < (long)sVar2) {
      sVar4 = sVar2;
    }
    __uid = geteuid();
    FUN_0119f27c(0);
    __buffer = malloc(sVar4);
    while (__buffer != (char *)0x0) {
      iVar1 = getpwuid_r(__uid,&local_70,__buffer,sVar4,&local_38);
      if (iVar1 != 0x22) {
        if (iVar1 != 0) {
          FUN_0119f27c(__buffer);
          return -iVar1;
        }
        if (local_38 == (passwd *)0x0) {
          FUN_0119f27c(__buffer);
          return -2;
        }
        sVar4 = strlen(local_70.pw_name);
        sVar4 = sVar4 + 1;
        sVar2 = strlen(local_70.pw_dir);
        sVar2 = sVar2 + 1;
        sVar3 = strlen(local_70.pw_shell);
        __dest = malloc(sVar2 + sVar4 + sVar3 + 1);
        *param_1 = (long)__dest;
        if (__dest != (void *)0x0) {
          memcpy(__dest,local_70.pw_name,sVar4);
          param_1[4] = (long)(*param_1 + sVar4);
          memcpy((void *)(*param_1 + sVar4),local_70.pw_dir,sVar2);
          param_1[3] = (long)(param_1[4] + sVar2);
          memcpy((void *)(param_1[4] + sVar2),local_70.pw_shell,sVar3 + 1);
          param_1[2] = (ulong)local_70._16_8_ >> 0x20;
          param_1[1] = local_70._16_8_ & 0xffffffff;
          FUN_0119f27c(__buffer);
          return 0;
        }
        FUN_0119f27c(__buffer);
        break;
      }
      sVar4 = sVar4 << 1;
      FUN_0119f27c(__buffer);
      __buffer = malloc(sVar4);
    }
    iVar1 = -0xc;
  }
  return iVar1;
}

