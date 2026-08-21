
void lua_upvaluejoin(long param_1,undefined8 param_2,int param_3,undefined4 param_4,int param_5)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  
  puVar1 = (ulong *)FUN_00c03214();
  uVar3 = *puVar1 & 0x7fffffffffff;
  puVar1 = (ulong *)FUN_00c03214(param_1,param_4);
  lVar2 = *(long *)((*puVar1 & 0x7fffffffffff) + (long)(param_5 + -1) * 8 + 0x28);
  *(long *)(uVar3 + (long)(param_3 + -1) * 8 + 0x28) = lVar2;
  if (((*(byte *)(lVar2 + 8) & 3) != 0) && ((*(byte *)(uVar3 + 8) >> 2 & 1) != 0)) {
    FUN_00c1a1ac(*(undefined8 *)(param_1 + 0x10),uVar3);
    return;
  }
  return;
}

