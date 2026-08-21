
void FUN_00bfdf4c(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  
  puVar4 = *(undefined8 **)(param_1 + 0x10);
  FUN_00bfbd3c(param_1,*(undefined8 *)(param_1 + 0x38));
  FUN_00c19f24(puVar4);
  FUN_00c0ff00(puVar4);
  puVar4[4] = puVar4[4] + (ulong)(*(int *)(puVar4 + 1) + 1) * -8;
  (*(code *)puVar4[2])(puVar4[3],*puVar4,(ulong)(*(int *)(puVar4 + 1) + 1) * 8,0);
  uVar3 = (ulong)(uint)((int)puVar4[0x12] - (int)puVar4[0x13]);
  puVar4[4] = puVar4[4] - uVar3;
  (*(code *)puVar4[2])(puVar4[3],puVar4[0x13],uVar3,0);
  uVar1 = *(uint *)(param_1 + 0x58);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  puVar4[4] = puVar4[4] + (ulong)uVar1 * -8;
  (*(code *)puVar4[2])(puVar4[3],uVar2,(ulong)uVar1 * 8,0);
  if ((code *)puVar4[2] != FUN_00c12650) {
    (*(code *)puVar4[2])(puVar4[3],puVar4 + -0xc,0xb80,0);
    return;
  }
  FUN_00c12608(puVar4[3]);
  return;
}

