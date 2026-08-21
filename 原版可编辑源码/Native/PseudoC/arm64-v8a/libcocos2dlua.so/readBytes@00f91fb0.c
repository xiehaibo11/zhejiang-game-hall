
/* cocos2d::Console::readBytes(int, char*, unsigned long, bool*) */

void __thiscall
cocos2d::Console::readBytes(Console *this,int param_1,char *param_2,ulong param_3,bool *param_4)

{
  long lVar1;
  ssize_t sVar2;
  int *piVar3;
  ulong uVar4;
  char *pcVar5;
  ulong uVar6;
  char local_4c [4];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *param_4 = false;
  if (param_3 != 0) {
    uVar6 = 0;
    do {
      sVar2 = recvfrom(param_1,local_4c,1,0,(sockaddr *)0x0,(socklen_t *)0x0);
      if (sVar2 == 1) {
        pcVar5 = param_2 + 1;
        *param_2 = local_4c[0];
        uVar4 = uVar6;
        if (local_4c[0] == '\n') goto LAB_00f9205c;
      }
      else {
        uVar4 = 0;
        if (sVar2 == 0) goto LAB_00f9205c;
        piVar3 = (int *)__errno();
        pcVar5 = param_2;
        if (*piVar3 != 4) {
          uVar4 = 0xffffffffffffffff;
          goto LAB_00f9205c;
        }
      }
      uVar6 = uVar6 + 1;
      param_2 = pcVar5;
    } while (param_3 != uVar6);
  }
  *param_4 = true;
  uVar4 = param_3;
LAB_00f9205c:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}

