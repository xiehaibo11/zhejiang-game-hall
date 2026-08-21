
undefined8 * FUN_00a75fec(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  
                    /* try { // try from 00a76000 to 00b76043 has its CatchHandler @ 00a7610c */
  puVar1 = operator_new(0x80);
  *puVar1 = &PTR_FUN_01c6efc0;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  puVar1[2] = uVar3;
  cocos2d::PcmData::PcmData((PcmData *)(puVar1 + 4),(PcmData *)(param_1 + 0x20));
  plVar2 = *(long **)(param_1 + 0x70);
  if (plVar2 == (long *)0x0) {
    puVar1[0xe] = 0;
  }
  else if ((long *)(param_1 + 0x50) == plVar2) {
                    /* try { // try from 00a7605c to 00b76097 has its CatchHandler @ 00a76140 */
    puVar1[0xe] = puVar1 + 10;
    (**(code **)(*plVar2 + 0x18))();
  }
  else {
    uVar3 = (**(code **)(*plVar2 + 0x10))();
    puVar1[0xe] = uVar3;
  }
  return puVar1;
}

