
void FUN_00f96118(long param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  
  puVar2 = operator_new(0x18);
  *puVar2 = &PTR_FUN_017228e0;
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  puVar2[1] = *(undefined8 *)(param_1 + 8);
  *(undefined4 *)(puVar2 + 2) = uVar1;
  return;
}

