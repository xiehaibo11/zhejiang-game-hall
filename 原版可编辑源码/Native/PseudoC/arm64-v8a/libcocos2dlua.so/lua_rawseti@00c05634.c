
void lua_rawseti(long param_1,undefined8 param_2,uint param_3)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  puVar1 = (ulong *)FUN_00c03214();
  uVar5 = *puVar1 & 0x7fffffffffff;
  if (param_3 < *(uint *)(uVar5 + 0x30)) {
    puVar1 = (ulong *)(*(long *)(uVar5 + 0x10) + (long)(int)param_3 * 8);
  }
  else {
    puVar1 = (ulong *)FUN_00c1c648(param_1,uVar5);
  }
  lVar2 = *(long *)(param_1 + 0x28);
  uVar3 = *(ulong *)(lVar2 + -8);
  *puVar1 = uVar3;
  if (((0xfffffff6 < (int)((long)uVar3 >> 0x2f) + 4U) &&
      ((*(byte *)((uVar3 & 0x7fffffffffff) + 8) & 3) != 0)) &&
     ((*(byte *)(uVar5 + 8) >> 2 & 1) != 0)) {
    lVar4 = *(long *)(param_1 + 0x10);
    *(byte *)(uVar5 + 8) = *(byte *)(uVar5 + 8) & 0xfb;
    *(undefined8 *)(uVar5 + 0x18) = *(undefined8 *)(lVar4 + 0x50);
    *(ulong *)(lVar4 + 0x50) = uVar5;
  }
  *(long *)(param_1 + 0x28) = lVar2 + -8;
  return;
}

