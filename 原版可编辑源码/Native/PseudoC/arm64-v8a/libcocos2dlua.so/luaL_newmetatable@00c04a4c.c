
undefined8 luaL_newmetatable(long param_1,char *param_2)

{
  size_t sVar1;
  undefined8 uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong *puVar5;
  long lVar6;
  ulong uVar7;
  
  uVar7 = *(ulong *)(*(long *)(param_1 + 0x10) + 0xd0);
  sVar1 = strlen(param_2);
  uVar7 = uVar7 & 0x7fffffffffff;
  uVar2 = FUN_00bfba1c(param_1,param_2,sVar1);
  puVar3 = (ulong *)FUN_00c1c6dc(param_1,uVar7,uVar2);
  if (*puVar3 == 0xffffffffffffffff) {
    uVar4 = FUN_00c1b840(param_1,0,1);
    *puVar3 = uVar4 | 0xfffa000000000000;
    uVar2 = 1;
    puVar3 = *(ulong **)(param_1 + 0x28);
    *(ulong **)(param_1 + 0x28) = puVar3 + 1;
    *puVar3 = uVar4 | 0xfffa000000000000;
    if ((*(byte *)(uVar7 + 8) >> 2 & 1) != 0) {
      lVar6 = *(long *)(param_1 + 0x10);
      *(byte *)(uVar7 + 8) = *(byte *)(uVar7 + 8) & 0xfb;
      *(undefined8 *)(uVar7 + 0x18) = *(undefined8 *)(lVar6 + 0x50);
      *(ulong *)(lVar6 + 0x50) = uVar7;
    }
  }
  else {
    puVar5 = *(ulong **)(param_1 + 0x28);
    uVar2 = 0;
    uVar7 = *puVar3;
    *(ulong **)(param_1 + 0x28) = puVar5 + 1;
    *puVar5 = uVar7;
  }
  return uVar2;
}

