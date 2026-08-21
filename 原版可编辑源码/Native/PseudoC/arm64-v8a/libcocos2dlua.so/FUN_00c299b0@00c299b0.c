
undefined8 FUN_00c299b0(long param_1,undefined8 param_2,undefined1 param_3,char *param_4)

{
  size_t sVar1;
  undefined8 uVar2;
  ulong *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  lua_pushcclosure(param_1,param_2,0);
  uVar5 = *(ulong *)(*(long *)(param_1 + 0x28) + -8) & 0x7fffffffffff;
  *(undefined1 *)(uVar5 + 10) = param_3;
  *(long *)(uVar5 + 0x20) = *(long *)(param_1 + 0x10) + 0x150;
  lVar6 = *(long *)((*(ulong *)(*(long *)(param_1 + 0x20) + -0x10) & 0x7fffffffffff) + 0x10);
  sVar1 = strlen(param_4);
  uVar2 = FUN_00bfba1c(param_1,param_4,sVar1);
  puVar3 = (ulong *)FUN_00c1c6dc(param_1,lVar6,uVar2);
  *puVar3 = uVar5 | 0xfffb800000000000;
  if ((*(byte *)(lVar6 + 8) >> 2 & 1) != 0) {
    lVar4 = *(long *)(param_1 + 0x10);
    *(byte *)(lVar6 + 8) = *(byte *)(lVar6 + 8) & 0xfb;
    *(undefined8 *)(lVar6 + 0x18) = *(undefined8 *)(lVar4 + 0x50);
    *(long *)(lVar4 + 0x50) = lVar6;
  }
  puVar3 = *(ulong **)(param_1 + 0x28);
  *(ulong **)(param_1 + 0x28) = puVar3 + 1;
  *puVar3 = uVar5 | 0xfffb800000000000;
  return 1;
}

