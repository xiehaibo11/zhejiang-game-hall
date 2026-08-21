
/* lua_cocos2dx_TMXLayer_initWithTilesetInfo(lua_State*) */

undefined8 lua_cocos2dx_TMXLayer_initWithTilesetInfo(lua_State *param_1)

{
  int iVar1;
  uint uVar2;
  TMXLayer *this;
  ulong uVar3;
  TMXMapInfo *pTVar4;
  TMXTilesetInfo *unaff_x21;
  TMXLayerInfo *unaff_x22;
  byte bVar5;
  byte bVar6;
  
  this = (TMXLayer *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 3) {
    if (param_1 != (lua_State *)0x0) {
      iVar1 = lua_gettop(param_1);
      if ((iVar1 < 2) ||
         (uVar3 = luaval_is_usertype(param_1,2,"cc.TMXTilesetInfo",0), (uVar3 & 1) == 0)) {
        bVar5 = 0;
      }
      else {
        unaff_x21 = (TMXTilesetInfo *)tolua_tousertype(param_1,2,0);
        bVar5 = 1;
      }
      iVar1 = lua_gettop(param_1);
      if ((iVar1 < 3) ||
         (uVar3 = luaval_is_usertype(param_1,3,"cc.TMXLayerInfo",0), (uVar3 & 1) == 0)) {
        bVar6 = 0;
      }
      else {
        unaff_x22 = (TMXLayerInfo *)tolua_tousertype(param_1,3,0);
        bVar6 = 1;
      }
      iVar1 = lua_gettop(param_1);
      if (((3 < iVar1) &&
          (uVar3 = luaval_is_usertype(param_1,4,"cc.TMXMapInfo",0), (uVar3 & 1) != 0)) &&
         (pTVar4 = (TMXMapInfo *)tolua_tousertype(param_1,4,0), (bool)(bVar5 & bVar6))) {
        uVar2 = cocos2d::TMXLayer::initWithTilesetInfo(this,unaff_x21,unaff_x22,pTVar4);
        tolua_pushboolean(param_1,uVar2 & 1);
        return 1;
      }
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_TMXLayer_initWithTilesetInfo\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.TMXLayer:initWithTilesetInfo",iVar1 + -1,3);
  }
  return 0;
}

