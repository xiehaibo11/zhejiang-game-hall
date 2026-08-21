
undefined8 FUN_00c2b050(long param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  char *pcVar9;
  
  lVar5 = FUN_00c29b44(param_1,2);
  lVar6 = FUN_00c29b44(param_1,3);
  if ((*(undefined8 **)(param_1 + 0x20) < *(undefined8 **)(param_1 + 0x28)) &&
     ((uVar3 = (uint)((long)**(undefined8 **)(param_1 + 0x20) >> 0x2f), uVar3 < 0xfffffff3 ||
      (uVar3 == 0xfffffffb)))) {
    lVar7 = FUN_00c29ac0(param_1,1);
    lua_settop(param_1,4);
    lVar1 = lVar6 + 0x18;
    lVar2 = lVar7 + 0x18;
    if (lVar5 != 0) {
      lVar2 = lVar5 + 0x18;
    }
    if (lVar6 == 0) {
      lVar1 = 0;
    }
    iVar4 = luaL_loadbufferx(param_1,lVar7 + 0x18,*(undefined4 *)(lVar7 + 0x10),lVar2,lVar1);
  }
  else {
    FUN_00c29dd4(param_1,1);
    lua_settop(param_1,5);
    if (lVar5 == 0) {
      pcVar9 = "=(load)";
    }
    else {
      pcVar9 = (char *)(lVar5 + 0x18);
    }
    lVar5 = lVar6 + 0x18;
    if (lVar6 == 0) {
      lVar5 = 0;
    }
    iVar4 = lua_loadx(param_1,FUN_00c2a354,0,pcVar9,lVar5);
  }
  if (iVar4 != 0) {
    *(undefined8 *)(*(long *)(param_1 + 0x28) + -0x10) = 0xffffffffffffffff;
    return 2;
  }
  uVar8 = FUN_00c2afe8(param_1,4);
  return uVar8;
}

