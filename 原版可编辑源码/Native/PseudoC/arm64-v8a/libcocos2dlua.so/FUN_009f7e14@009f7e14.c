
undefined4 FUN_009f7e14(undefined8 param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  undefined4 uVar8;
  
  plVar2 = (long *)luaL_checkudata(param_1,1,"pb.Slice");
  lVar3 = lua_objlen(param_1,1);
  FUN_009fa638(param_1,lVar3 == 0x60,1,&DAT_012f5b84);
  iVar1 = lua_type(param_1,2);
  if (iVar1 < 1) {
    lVar3 = plVar2[4];
    uVar8 = 1;
  }
  else {
    uVar4 = luaL_checkinteger(param_1,2);
    uVar7 = plVar2[4];
    uVar5 = uVar4;
    if (((long)uVar4 < 0) && (uVar5 = 0, -uVar4 <= uVar7)) {
      uVar5 = uVar4 + uVar7 + 1;
    }
    if ((long)uVar7 < (long)uVar5) {
      return 0;
    }
    if (uVar5 == uVar7) {
      lVar3 = plVar2[3];
      plVar6 = plVar2;
    }
    else {
      lVar3 = plVar2[3];
      plVar6 = (long *)(lVar3 + uVar5 * 0x18);
    }
    lua_pushinteger(param_1,(*plVar6 - *(long *)(lVar3 + 0x10)) + 1);
    lua_pushinteger(param_1,(plVar6[2] - *(long *)(plVar2[3] + 0x10)) + 1);
    uVar8 = 3;
    lVar3 = plVar6[1] - *(long *)(plVar2[3] + 0x10);
  }
  lua_pushinteger(param_1,lVar3);
  return uVar8;
}

