
void FUN_0091aee8(undefined8 param_1,code *param_2,code *param_3,undefined8 param_4)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 local_488;
  char *local_480;
  char *pcStack_478;
  char *pcStack_470;
  char *pcStack_468;
  undefined8 local_460;
  long local_68;
  
  lVar1 = tpidr_el0;
                    /* catch() { ... } // from try @ 0091ae74 with catch @ 0091af0c */
                    /* catch() { ... } // from try @ 0091ae8c with catch @ 0091af10 */
  local_68 = *(long *)(lVar1 + 0x28);
  local_488 = 0;
  if (param_2 == deflate) {
                    /* catch() { ... } // from try @ 0091ae40 with catch @ 0091af40 */
    local_460 = 0;
    pcStack_478 = "sync";
    local_480 = "none";
    pcStack_468 = "finish";
    pcStack_470 = "full";
    iVar4 = luaL_checkoption(param_1,2,"none",&local_480);
    iVar3 = lua_gettop(param_1);
    if (iVar3 != 0) {
      iVar3 = 0;
      if (iVar4 != 0) {
        iVar3 = iVar4 + 1;
      }
      iVar4 = lua_type(param_1,1);
      if (iVar4 != 0) goto LAB_0091afb4;
    }
    iVar3 = 4;
  }
  else {
    iVar3 = 0;
  }
LAB_0091afb4:
  plVar6 = (long *)lua_touserdata(param_1,0xffffd8ed);
  if (plVar6 == (long *)0x0) {
    iVar4 = lua_gettop(param_1);
    if ((0 < iVar4) && (iVar4 = lua_isstring(param_1,1), iVar4 != 0)) {
      lua_pushfstring(param_1,"IllegalState: calling %s function when stream was previously closed",
                      param_4);
      lua_error(param_1);
    }
    lua_pushstring(param_1,&DAT_013c996e);
    lua_pushboolean(param_1,1);
    uVar8 = 2;
  }
  else {
    luaL_buffinit(param_1,&local_480);
    iVar4 = lua_gettop(param_1);
    if (1 < iVar4) {
      lua_pushvalue(param_1,1);
    }
    iVar4 = lua_isstring(param_1,0xffffd8ec);
    if (iVar4 != 0) {
      lua_pushvalue(param_1,0xffffd8ec);
      iVar4 = lua_gettop(param_1);
      if ((1 < iVar4) && (iVar4 = lua_isstring(param_1,0xfffffffe), iVar4 != 0)) {
        lua_concat(param_1,2);
      }
    }
    iVar4 = lua_gettop(param_1);
    if (iVar4 < 1) {
      lVar7 = 0;
    }
    else {
      lVar7 = lua_tolstring(param_1,0xffffffff,&local_488);
    }
    *plVar6 = lVar7;
    *(int *)(plVar6 + 1) = (int)local_488;
    if (iVar3 == 0 && (int)local_488 == 0) {
      lua_pushstring(param_1,&DAT_013c996e);
      bVar2 = false;
    }
    else {
      do {
        lVar7 = luaL_prepbuffer(&local_480);
        plVar6[3] = lVar7;
        *(undefined4 *)(plVar6 + 4) = 0x400;
        iVar4 = (*param_2)(plVar6,iVar3);
        if (iVar4 != -5) {
          FUN_0091ada0(param_1,iVar4,plVar6,0xa5);
        }
        local_480 = local_480 + (0x400 - (int)plVar6[4]);
      } while ((int)plVar6[4] == 0);
      luaL_pushresult(&local_480);
      if (*plVar6 != 0) {
        lua_pushlstring(param_1,*plVar6,(int)plVar6[1]);
        lua_replace(param_1,0xffffd8ec);
      }
      bVar2 = iVar4 == 1;
      if (bVar2) {
        lua_pushnil(param_1);
        lua_setmetatable(param_1,0xffffd8ed);
        lua_pushnil(param_1);
        lua_replace(param_1,0xffffd8ed);
        uVar5 = (*param_3)(plVar6);
        FUN_0091ada0(param_1,uVar5,plVar6,0xbe);
      }
    }
    lua_pushboolean(param_1,bVar2);
    lua_pushinteger(param_1,plVar6[2]);
    lua_pushinteger(param_1,plVar6[5]);
    uVar8 = 4;
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}

