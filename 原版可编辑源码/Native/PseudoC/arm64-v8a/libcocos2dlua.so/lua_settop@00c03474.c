
void lua_settop(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  
  iVar2 = (int)param_2;
  if (iVar2 < 0) {
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + ((long)iVar2 + 1) * 8;
    return;
  }
  uVar4 = -(param_2 >> 0x1f & 1) & 0xfffffff800000000 | (param_2 & 0xffffffff) << 3;
  puVar3 = *(undefined8 **)(param_1 + 0x28);
  puVar1 = (undefined8 *)(*(long *)(param_1 + 0x20) + uVar4);
  if (puVar1 <= puVar3) {
    *(undefined8 **)(param_1 + 0x28) = puVar1;
    return;
  }
  if (*(undefined8 **)(param_1 + 0x30) <= puVar1) {
    FUN_00bfe0e0(param_1,iVar2 - (int)((long)puVar3 - *(long *)(param_1 + 0x20) >> 3));
    puVar3 = *(undefined8 **)(param_1 + 0x28);
  }
  do {
    *(undefined8 **)(param_1 + 0x28) = puVar3 + 1;
    *puVar3 = 0xffffffffffffffff;
    puVar3 = *(undefined8 **)(param_1 + 0x28);
  } while (puVar3 < (undefined8 *)(*(long *)(param_1 + 0x20) + uVar4));
  return;
}

