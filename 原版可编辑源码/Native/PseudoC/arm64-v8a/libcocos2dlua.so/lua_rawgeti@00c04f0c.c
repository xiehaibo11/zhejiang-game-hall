
void lua_rawgeti(long param_1,undefined8 param_2,uint param_3)

{
  ulong *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar1 = (ulong *)FUN_00c03214();
  uVar2 = *puVar1 & 0x7fffffffffff;
  if (param_3 < *(uint *)(uVar2 + 0x30)) {
    puVar3 = (undefined8 *)(*(long *)(uVar2 + 0x10) + (long)(int)param_3 * 8);
  }
  else {
    puVar3 = (undefined8 *)FUN_00c1bbc0(uVar2,param_3);
  }
  if (puVar3 == (undefined8 *)0x0) {
    **(undefined8 **)(param_1 + 0x28) = 0xffffffffffffffff;
    puVar4 = *(undefined8 **)(param_1 + 0x28);
  }
  else {
    puVar4 = *(undefined8 **)(param_1 + 0x28);
    *puVar4 = *puVar3;
  }
  *(undefined8 **)(param_1 + 0x28) = puVar4 + 1;
  if (*(undefined8 **)(param_1 + 0x30) <= puVar4 + 1) {
    FUN_00bfe164(param_1);
    return;
  }
  return;
}

