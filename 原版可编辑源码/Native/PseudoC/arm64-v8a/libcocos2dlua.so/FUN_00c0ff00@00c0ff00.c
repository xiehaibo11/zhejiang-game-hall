
void FUN_00c0ff00(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(param_1 + 0x168);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_00c0ffd8(puVar3);
    uVar1 = *(uint *)((long)puVar3 + 0xc);
    uVar2 = *puVar3;
    *(ulong *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + (ulong)uVar1 * -0x18;
    (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 0x18),uVar2,(ulong)uVar1 * 0x18,0);
    uVar1 = *(uint *)(puVar3 + 0x19);
    uVar2 = puVar3[0x18];
    *(ulong *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + (ulong)uVar1 * -2;
    (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 0x18),uVar2,(ulong)uVar1 * 2,0);
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -0x1d8;
    (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 0x18),puVar3,0x1d8,0);
  }
  return;
}

