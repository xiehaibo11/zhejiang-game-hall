
void FUN_00a30fe4(long param_1)

{
  undefined1 auVar1 [16];
  
  *(undefined4 *)(param_1 + 0xac8) = 0;
  auVar1 = FUN_00a2e828();
  *(undefined1 (*) [16])(param_1 + 0x9c8) = auVar1;
  *(undefined8 *)(param_1 + 0xa08) = 0;
  *(undefined8 *)(param_1 + 0xa10) = 0;
  *(undefined8 *)(param_1 + 0xa20) = 0;
  *(undefined8 *)(param_1 + 0xa28) = 0;
  *(uint *)(param_1 + 0x978) = *(uint *)(param_1 + 0x978) & 0x90;
  return;
}

