
void FUN_00a3e210(long param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  *(undefined8 *)(param_1 + 0x10) = 0;
  lVar1 = **(long **)(param_1 + 0x58);
  *(undefined1 *)(param_1 + 0x20) = 1;
  *(long *)(param_1 + 0x18) = lVar1 + 0xb08;
  auVar2 = FUN_00a18e40();
  *(undefined1 (*) [16])(param_1 + 0x40) = auVar2;
  return;
}

