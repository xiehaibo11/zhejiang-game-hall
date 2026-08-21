
undefined8 * FUN_00e6e43c(long param_1)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  
  puVar2 = operator_new(0x80);
  *puVar2 = &PTR_FUN_016f3c48;
  uVar1 = *(undefined1 *)(param_1 + 0x18);
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *(undefined1 *)(puVar2 + 3) = uVar1;
  cocos2d::experimental::PcmData::PcmData((PcmData *)(puVar2 + 4),(PcmData *)(param_1 + 0x20));
  plVar3 = *(long **)(param_1 + 0x70);
  if (plVar3 == (long *)0x0) {
    puVar2[0xe] = 0;
  }
  else if ((long *)(param_1 + 0x50) == plVar3) {
    puVar2[0xe] = puVar2 + 10;
    (**(code **)(*plVar3 + 0x18))();
  }
  else {
    uVar4 = (**(code **)(*plVar3 + 0x10))();
    puVar2[0xe] = uVar4;
  }
  return puVar2;
}

