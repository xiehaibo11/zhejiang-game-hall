
undefined8 FUN_009f75b8(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined1 auVar9 [16];
  
  auVar9 = FUN_009f9e20(param_1,1);
  lVar2 = auVar9._0_8_;
  if (lVar2 == 0) {
    uVar1 = lua_type(param_1,1);
    uVar3 = lua_typename(param_1,uVar1);
    lua_pushfstring(param_1,"%s expected, got %s","string/buffer/slice",uVar3);
    uVar3 = lua_tolstring(param_1,0xffffffff,0);
    luaL_argerror(param_1,1,uVar3);
  }
  uVar7 = auVar9._8_8_ - lVar2;
  lVar4 = luaL_optinteger(param_1,2,1);
  lVar8 = lVar4;
  if ((lVar4 < 0) && (lVar8 = 0, (ulong)-lVar4 <= uVar7)) {
    lVar8 = uVar7 + lVar4 + 1;
  }
  uVar5 = luaL_optinteger(param_1,3,uVar7);
  uVar6 = uVar5;
  if (((long)uVar5 < 0) && (uVar6 = 0, -uVar5 <= uVar7)) {
    uVar6 = uVar7 + uVar5 + 1;
  }
  if (lVar8 < 2) {
    lVar8 = 1;
  }
  if ((long)uVar6 <= (long)uVar7) {
    uVar7 = uVar6;
  }
  lVar4 = 0;
  if (lVar8 <= (long)uVar7) {
    lVar4 = (uVar7 - lVar8) + 1;
  }
  lua_pushlstring(param_1,lVar2 + lVar8 + -1,lVar4);
  return 1;
}

