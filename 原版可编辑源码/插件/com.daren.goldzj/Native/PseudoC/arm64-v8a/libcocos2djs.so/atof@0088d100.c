
/* cocos2d::utils::atof(char const*) */

void cocos2d::utils::atof(char *param_1)

{
  long lVar1;
  char *pcVar2;
  double dVar3;
  char acStack_138 [256];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1 == (char *)0x0) {
    dVar3 = 0.0;
  }
  else {
    strncpy(acStack_138,param_1,0x100);
    pcVar2 = strchr(acStack_138,0x2e);
    if ((pcVar2 != (char *)0x0) && ((long)pcVar2 - (long)acStack_138 < 0xf8)) {
      pcVar2[8] = '\0';
    }
    dVar3 = ::atof(acStack_138);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(dVar3);
}

