
/* cocos2d::Console::readline(int, char*, unsigned long) */

void __thiscall cocos2d::Console::readline(Console *this,int param_1,char *param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  ssize_t sVar3;
  int *piVar4;
  long lVar5;
  char *pcVar6;
  long lVar7;
  char local_4c [4];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar1 = param_3 - 1;
  if (lVar1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar7 = 0;
    pcVar6 = param_2;
    do {
      sVar3 = recvfrom(param_1,local_4c,1,0,(sockaddr *)0x0,(socklen_t *)0x0);
      if (sVar3 == 1) {
        param_2 = pcVar6 + 1;
        *pcVar6 = local_4c[0];
        lVar5 = lVar7;
        if (local_4c[0] == '\n') break;
      }
      else {
        lVar5 = 0;
        if (sVar3 == 0) goto LAB_00f91f84;
        piVar4 = (int *)__errno();
        param_2 = pcVar6;
        if (*piVar4 != 4) {
          lVar5 = -1;
          goto LAB_00f91f84;
        }
      }
      lVar7 = lVar7 + 1;
      pcVar6 = param_2;
      lVar5 = lVar1;
    } while (lVar1 != lVar7);
  }
  *param_2 = '\0';
LAB_00f91f84:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar5);
  }
  return;
}

