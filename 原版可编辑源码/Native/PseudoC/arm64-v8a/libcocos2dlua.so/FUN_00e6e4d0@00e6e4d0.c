
void FUN_00e6e4d0(long param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_016f3c48;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined1 *)(param_2 + 3) = *(undefined1 *)(param_1 + 0x18);
  param_2[2] = uVar2;
  cocos2d::experimental::PcmData::PcmData((PcmData *)(param_2 + 4),(PcmData *)(param_1 + 0x20));
  plVar1 = *(long **)(param_1 + 0x70);
  if (plVar1 == (long *)0x0) {
    param_2[0xe] = 0;
  }
  else {
    if ((long *)(param_1 + 0x50) == plVar1) {
      param_2[0xe] = param_2 + 10;
                    /* WARNING: Could not recover jumptable at 0x00e6e560. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_1 + 0x70) + 0x18))();
      return;
    }
    uVar2 = (**(code **)(*plVar1 + 0x10))();
    param_2[0xe] = uVar2;
  }
  return;
}

