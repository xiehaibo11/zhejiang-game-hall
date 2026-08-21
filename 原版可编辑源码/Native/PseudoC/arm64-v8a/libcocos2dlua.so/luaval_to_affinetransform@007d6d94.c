
/* luaval_to_affinetransform(lua_State*, int, cocos2d::AffineTransform*, char const*) */

undefined4
luaval_to_affinetransform(lua_State *param_1,int param_2,AffineTransform *param_3,char *param_4)

{
  long lVar1;
  double dVar2;
  int iVar3;
  undefined4 uVar4;
  float fVar5;
  undefined1 auStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar4 = 0;
  if ((param_1 == (lua_State *)0x0) || (param_3 == (AffineTransform *)0x0)) goto LAB_007d6fd0;
  iVar3 = tolua_istable(param_1,param_2,0,auStack_58);
  if (iVar3 == 0) {
    uVar4 = 0;
    goto LAB_007d6fd0;
  }
  lua_pushstring(param_1,&DAT_013ce02a);
  lua_gettable(param_1,param_2);
  iVar3 = lua_type(param_1,0xffffffff);
  if (iVar3 == 0) {
LAB_007d6fc0:
    uVar4 = 0;
  }
  else {
    dVar2 = (double)lua_tonumber(param_1,0xffffffff);
    *(float *)param_3 = (float)dVar2;
    lua_pushstring(param_1,&DAT_014a2468);
    lua_gettable(param_1,param_2);
    iVar3 = lua_type(param_1,0xffffffff);
    if (iVar3 == 0) goto LAB_007d6fc0;
    dVar2 = (double)lua_tonumber(param_1,0xffffffff);
    *(float *)(param_3 + 4) = (float)dVar2;
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,"c");
    lua_gettable(param_1,param_2);
    iVar3 = lua_type(param_1,0xffffffff);
    if (iVar3 == 0) goto LAB_007d6fc0;
    dVar2 = (double)lua_tonumber(param_1,0xffffffff);
    *(float *)(param_3 + 8) = (float)dVar2;
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,"d");
    lua_gettable(param_1,param_2);
    iVar3 = lua_type(param_1,0xffffffff);
    if (iVar3 == 0) goto LAB_007d6fc0;
    dVar2 = (double)lua_tonumber(param_1,0xffffffff);
    *(float *)(param_3 + 0xc) = (float)dVar2;
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,"tx");
    lua_gettable(param_1,param_2);
    iVar3 = lua_type(param_1,0xffffffff);
    if (iVar3 == 0) goto LAB_007d6fc0;
    iVar3 = lua_type(param_1,0xffffffff);
    if (iVar3 == 0) {
      fVar5 = 0.0;
    }
    else {
      dVar2 = (double)lua_tonumber(param_1,0xffffffff);
      fVar5 = (float)dVar2;
    }
    *(float *)(param_3 + 0x10) = fVar5;
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,"ty");
    lua_gettable(param_1,param_2);
    iVar3 = lua_type(param_1,0xffffffff);
    if (iVar3 == 0) goto LAB_007d6fc0;
    iVar3 = lua_type(param_1,0xffffffff);
    if (iVar3 == 0) {
      fVar5 = 0.0;
    }
    else {
      dVar2 = (double)lua_tonumber(param_1,0xffffffff);
      fVar5 = (float)dVar2;
    }
    uVar4 = 1;
    *(float *)(param_3 + 0x14) = fVar5;
  }
  lua_settop(param_1,0xfffffffe);
LAB_007d6fd0:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

