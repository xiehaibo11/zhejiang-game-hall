
/* lua_cocos2dx_TMXLayer_setTiles(lua_State*) */

undefined4 lua_cocos2dx_TMXLayer_setTiles(lua_State *param_1)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  void *pvVar5;
  char *pcVar6;
  ulong uVar7;
  double dVar8;
  
  lVar3 = tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar4 = lua_objlen(param_1,2);
    if (uVar4 == 0) {
      pcVar6 = "Table\'s len equal 0";
    }
    else {
      uVar7 = uVar4 << 2;
      if (uVar4 >> 0x3e != 0) {
        uVar7 = 0xffffffffffffffff;
      }
      pvVar5 = operator_new__(uVar7,(nothrow_t *)&std::nothrow);
      if (pvVar5 != (void *)0x0) {
        uVar7 = 0;
        do {
          uVar1 = uVar7 + 1;
          dVar8 = (double)tolua_tofieldnumber(0,param_1,2,uVar1 & 0xffffffff);
          *(int *)((long)pvVar5 + uVar7 * 4) = (int)dVar8;
          uVar7 = uVar1;
        } while (uVar4 != uVar1);
        *(void **)(lVar3 + 0x3f0) = pvVar5;
        operator_delete__(pvVar5);
        lua_settop(param_1,1);
        return 1;
      }
      pcVar6 = "Allocate uint32_t array in the lua_cocos2dx_TMXLayer_setTiles failed!";
    }
    luaL_error(param_1,pcVar6);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.TMXLayer:setTiles",iVar2 + -1,1);
  }
  return 0;
}

