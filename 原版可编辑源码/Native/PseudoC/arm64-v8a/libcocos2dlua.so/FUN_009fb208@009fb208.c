
void FUN_009fb208(undefined8 param_1,int param_2,undefined1 (*param_3) [16],long param_4)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined1 auVar10 [16];
  long local_68;
  long lStack_60;
  long local_58;
  
  if (param_4 == 0x60) {
    *(undefined8 *)(*param_3 + 8) = 0;
    *(undefined8 *)*param_3 = 0;
    *(undefined8 *)(param_3[1] + 8) = 0;
    *(undefined8 *)param_3[1] = 0;
    *(undefined8 *)(param_3[4] + 8) = 0;
    *(undefined8 *)param_3[4] = 0;
    *(undefined8 *)(param_3[5] + 8) = 0;
    *(undefined8 *)param_3[5] = 0;
    *(undefined8 *)(param_3[3] + 8) = 0;
    *(undefined8 *)param_3[3] = 0;
    *(undefined8 *)(param_3[2] + 8) = 0;
    *(undefined8 *)param_3[2] = 0;
    *(undefined1 (**) [16])(param_3[1] + 8) = param_3 + 3;
    *(undefined8 *)(param_3[2] + 8) = 2;
  }
  iVar1 = lua_type(param_1,param_2);
  if (0 < iVar1) {
    auVar10 = FUN_009f9e20(param_1,param_2);
    lVar3 = auVar10._0_8_;
    if (lVar3 == 0) {
      uVar2 = lua_type(param_1,param_2);
      uVar4 = lua_typename(param_1,uVar2);
      lua_pushfstring(param_1,"%s expected, got %s","string/buffer/slice",uVar4);
      uVar4 = lua_tolstring(param_1,0xffffffff,0);
      luaL_argerror(param_1,param_2,uVar4);
    }
    uVar8 = auVar10._8_8_ - lVar3;
    lVar5 = luaL_optinteger(param_1,param_2 + 1,1);
    lVar9 = lVar5;
    if ((lVar5 < 0) && (lVar9 = 0, (ulong)-lVar5 <= uVar8)) {
      lVar9 = uVar8 + lVar5 + 1;
    }
    uVar6 = luaL_optinteger(param_1,param_2 + 2,uVar8);
    uVar7 = uVar6;
    if (((long)uVar6 < 0) && (uVar7 = 0, -uVar6 <= uVar8)) {
      uVar7 = uVar8 + uVar6 + 1;
    }
    if (lVar9 < 2) {
      lVar9 = 1;
    }
    if ((long)uVar7 <= (long)uVar8) {
      uVar8 = uVar7;
    }
    *param_3 = auVar10;
    *(long *)param_3[1] = lVar3;
    if (param_4 == 0x60) {
      local_68 = lVar3 + lVar9 + -1;
      lStack_60 = 0;
      if (lVar9 <= (long)uVar8) {
        lStack_60 = (uVar8 - lVar9) + 1;
      }
      lStack_60 = local_68 + lStack_60;
      local_58 = lVar3;
      FUN_009fb3f4(param_1,param_3,&local_68);
    }
    lua_pushvalue(param_1,param_2);
    lua_pushlightuserdata(param_1,param_3);
    lua_insert(param_1,0xfffffffe);
    lua_rawset(param_1,0xffffd8f0);
    return;
  }
  return;
}

