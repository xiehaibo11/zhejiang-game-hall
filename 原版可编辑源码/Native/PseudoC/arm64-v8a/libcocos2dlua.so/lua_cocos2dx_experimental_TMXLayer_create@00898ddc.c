
/* lua_cocos2dx_experimental_TMXLayer_create(lua_State*) */

undefined8 lua_cocos2dx_experimental_TMXLayer_create(lua_State *param_1)

{
  int iVar1;
  ulong uVar2;
  TMXMapInfo *pTVar3;
  void *pvVar4;
  TMXTilesetInfo *unaff_x20;
  TMXLayerInfo *unaff_x21;
  byte bVar5;
  byte bVar6;
  
  iVar1 = lua_gettop();
  if (iVar1 + -1 == 3) {
    if (param_1 != (lua_State *)0x0) {
      iVar1 = lua_gettop(param_1);
      if ((iVar1 < 2) ||
         (uVar2 = luaval_is_usertype(param_1,2,"cc.TMXTilesetInfo",0), (uVar2 & 1) == 0)) {
        bVar5 = 0;
      }
      else {
        unaff_x20 = (TMXTilesetInfo *)tolua_tousertype(param_1,2,0);
        bVar5 = 1;
      }
      iVar1 = lua_gettop(param_1);
      if ((iVar1 < 3) ||
         (uVar2 = luaval_is_usertype(param_1,3,"cc.TMXLayerInfo",0), (uVar2 & 1) == 0)) {
        bVar6 = 0;
      }
      else {
        unaff_x21 = (TMXLayerInfo *)tolua_tousertype(param_1,3,0);
        bVar6 = 1;
      }
      iVar1 = lua_gettop(param_1);
      if (((3 < iVar1) &&
          (uVar2 = luaval_is_usertype(param_1,4,"cc.TMXMapInfo",0), (uVar2 & 1) != 0)) &&
         (pTVar3 = (TMXMapInfo *)tolua_tousertype(param_1,4,0), (bool)(bVar5 & bVar6))) {
        pvVar4 = (void *)cocos2d::experimental::TMXLayer::create(unaff_x20,unaff_x21,pTVar3);
        if (pvVar4 != (void *)0x0) {
          toluafix_pushusertype_ccobject
                    (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                     "ccexp.TMXLayer");
          return 1;
        }
        lua_pushnil(param_1);
        return 1;
      }
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_experimental_TMXLayer_create\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "ccexp.TMXLayer:create",iVar1 + -1,3);
  }
  return 0;
}

