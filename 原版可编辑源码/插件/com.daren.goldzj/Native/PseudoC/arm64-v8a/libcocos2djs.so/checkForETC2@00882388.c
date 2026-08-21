
/* cocos2d::Configuration::checkForETC2() const */

void cocos2d::Configuration::checkForETC2(void)

{
  int iVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  int local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_3c = 0;
  glGetIntegerv(0x86a2,&local_3c);
  uVar4 = (long)local_3c << 2;
  if ((ulong)(long)local_3c >> 0x3e != 0) {
    uVar4 = 0xffffffffffffffff;
  }
  pvVar3 = operator_new__(uVar4);
  glGetIntegerv(0x86a3,pvVar3);
  if (local_3c < 1) {
    iVar6 = 0;
  }
  else {
    lVar5 = 0;
    iVar6 = 0;
    do {
      iVar1 = *(int *)((long)pvVar3 + lVar5 * 4);
      if ((iVar1 == 0x9278) || (iVar1 == 0x9274)) {
        iVar6 = iVar6 + 1;
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < local_3c);
  }
  operator_delete__(pvVar3);
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(1 < iVar6);
  }
  return;
}

