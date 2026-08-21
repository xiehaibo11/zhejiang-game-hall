
void FUN_01162dec(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = calloc(1,0x38);
  puVar1[6] = param_1[6];
  uVar2 = param_1[4];
  puVar1[5] = param_1[5];
  puVar1[4] = uVar2;
  uVar2 = param_1[2];
  puVar1[3] = param_1[3];
  puVar1[2] = uVar2;
  uVar2 = *param_1;
  puVar1[1] = param_1[1];
  *puVar1 = uVar2;
  return;
}

