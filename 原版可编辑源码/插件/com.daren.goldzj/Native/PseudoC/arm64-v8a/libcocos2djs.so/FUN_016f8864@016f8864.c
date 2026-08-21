
void FUN_016f8864(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = operator_new(0x18);
  *puVar1 = &PTR_FUN_01ccd7b0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  return;
}

