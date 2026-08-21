
void FUN_00f96820(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined4 local_30;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_2c = *(undefined4 *)(param_1 + 8);
  lVar3 = *(long *)(param_1 + 0x10);
  local_30 = *(undefined4 *)(param_1 + 0xc);
  lVar2 = cocos2d::Director::getInstance();
  (**(code **)(**(long **)(lVar2 + 0x108) + 0x110))
            (*(long **)(lVar2 + 0x108),1,lVar3 + 0x148,&local_2c,&local_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

