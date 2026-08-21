
undefined8 lua_resume(long param_1,int param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong *puVar7;
  
  if ((*(long *)(param_1 + 0x50) == 0) && (*(byte *)(param_1 + 0xb) < 2)) {
    if (*(byte *)(param_1 + 0xb) == 0) {
      puVar6 = *(undefined8 **)(param_1 + 0x28);
      puVar5 = puVar6 + -(long)param_2;
      puVar4 = puVar6 + 1;
      *(undefined8 **)(param_1 + 0x28) = puVar4;
      puVar2 = puVar6;
      if (puVar5 < puVar6) {
        do {
          puVar4 = puVar2 + -1;
          *puVar2 = puVar2[-1];
          puVar2 = puVar4;
        } while (puVar5 < puVar4);
        puVar6 = puVar6 + ~((ulong)((long)puVar6 + (-1 - (long)puVar5)) >> 3);
        puVar4 = puVar6 + 1;
      }
      *puVar6 = 0xffffffffffffffff;
    }
    else {
      puVar4 = (undefined8 *)(*(long *)(param_1 + 0x28) + (long)param_2 * -8);
    }
    uVar3 = FUN_00c17504(param_1,puVar4,0,0);
    return uVar3;
  }
  puVar7 = *(ulong **)(param_1 + 0x20);
  *(ulong **)(param_1 + 0x28) = puVar7;
  uVar1 = FUN_00bfab64(param_1,0x52f);
  *puVar7 = uVar1 | 0xfffd800000000000;
  uVar1 = *(long *)(param_1 + 0x28) + 8;
  *(ulong *)(param_1 + 0x28) = uVar1;
  if (*(ulong *)(param_1 + 0x30) <= uVar1) {
    FUN_00bfe164(param_1);
    return 2;
  }
  return 2;
}

