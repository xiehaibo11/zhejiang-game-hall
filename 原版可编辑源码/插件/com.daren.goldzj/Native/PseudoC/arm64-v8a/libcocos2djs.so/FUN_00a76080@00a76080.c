
void FUN_00a76080(long param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_01c6efc0;
                    /* try { // try from 00a76098 to 00b76197 has its CatchHandler @ 00a75e40 */
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined1 *)(param_2 + 3) = *(undefined1 *)(param_1 + 0x18);
  param_2[2] = uVar2;
  cocos2d::PcmData::PcmData((PcmData *)(param_2 + 4),(PcmData *)(param_1 + 0x20));
  plVar1 = *(long **)(param_1 + 0x70);
  if (plVar1 == (long *)0x0) {
    param_2[0xe] = 0;
  }
  else {
    if ((long *)(param_1 + 0x50) == plVar1) {
      param_2[0xe] = param_2 + 10;
                    /* catch() { ... } // from try @ 00a75f14 with catch @ 00a7610c
                       catch() { ... } // from try @ 00a76000 with catch @ 00a7610c */
                    /* WARNING: Could not recover jumptable at 0x00a76110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* catch() { ... } // from try @ 00a75f00 with catch @ 00a76110
                       catch() { ... } // from try @ 00a75fb8 with catch @ 00a76110 */
      (**(code **)(**(long **)(param_1 + 0x70) + 0x18))();
      return;
    }
    uVar2 = (**(code **)(*plVar1 + 0x10))();
    param_2[0xe] = uVar2;
  }
  return;
}

