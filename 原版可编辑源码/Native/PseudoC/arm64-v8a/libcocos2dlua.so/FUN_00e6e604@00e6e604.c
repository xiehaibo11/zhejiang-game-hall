
void FUN_00e6e604(long param_1)

{
  undefined1 uVar1;
  long lVar2;
  long *plVar3;
  PcmData aPStack_70 [52];
  undefined1 local_3c [4];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar1 = *(undefined1 *)(param_1 + 0x18);
  cocos2d::experimental::PcmData::PcmData(aPStack_70,(PcmData *)(param_1 + 0x20));
  plVar3 = *(long **)(param_1 + 0x70);
  local_3c[0] = uVar1;
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_009d64e4();
  }
  (**(code **)(*plVar3 + 0x30))(plVar3,local_3c,aPStack_70);
  cocos2d::experimental::PcmData::~PcmData(aPStack_70);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

