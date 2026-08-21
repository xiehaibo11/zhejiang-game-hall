
void luaL_openlib(undefined8 param_1,long param_2,long *param_3,uint param_4)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  
  if (param_2 != 0) {
    if (*param_3 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = 0;
      plVar2 = param_3;
      do {
        plVar2 = plVar2 + 2;
        iVar4 = iVar4 + 1;
      } while (*plVar2 != 0);
    }
    luaL_findtable(param_1,0xffffd8f0,"_LOADED",0x10);
    lua_getfield(param_1,0xffffffff,param_2);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 != 5) {
      lua_settop(param_1,0xfffffffe);
      lVar3 = luaL_findtable(param_1,0xffffd8ee,param_2,iVar4);
      if (lVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00bfb308(param_1,0x7a1,param_2);
      }
      lua_pushvalue(param_1,0xffffffff);
      lua_setfield(param_1,0xfffffffd,param_2);
    }
    lua_remove(param_1,0xfffffffe);
    lua_insert(param_1,~param_4);
  }
  if (*param_3 != 0) {
    do {
      if (0 < (int)param_4) {
        uVar5 = 0;
        do {
          uVar5 = uVar5 + 1;
          lua_pushvalue(param_1,-param_4);
        } while (uVar5 != param_4);
      }
      lua_pushcclosure(param_1,param_3[1],param_4);
      lua_setfield(param_1,-2 - param_4,*param_3);
      param_3 = param_3 + 2;
    } while (*param_3 != 0);
  }
  lua_settop(param_1,~param_4);
  return;
}

