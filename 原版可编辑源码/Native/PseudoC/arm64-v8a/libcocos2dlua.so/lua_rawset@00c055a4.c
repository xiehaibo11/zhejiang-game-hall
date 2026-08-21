
void lua_rawset(long param_1)

{
  ulong *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = (ulong *)FUN_00c03214();
  lVar5 = *(long *)(param_1 + 0x28);
  uVar3 = *puVar1 & 0x7fffffffffff;
  lVar4 = lVar5 + -0x10;
  puVar2 = (undefined8 *)FUN_00c1bdd4(param_1,uVar3,lVar4);
  *puVar2 = *(undefined8 *)(lVar5 + -8);
  if ((*(byte *)(uVar3 + 8) >> 2 & 1) == 0) {
    *(long *)(param_1 + 0x28) = lVar4;
    return;
  }
  lVar5 = *(long *)(param_1 + 0x10);
  *(byte *)(uVar3 + 8) = *(byte *)(uVar3 + 8) & 0xfb;
  *(undefined8 *)(uVar3 + 0x18) = *(undefined8 *)(lVar5 + 0x50);
  *(ulong *)(lVar5 + 0x50) = uVar3;
  *(long *)(param_1 + 0x28) = lVar4;
  return;
}

