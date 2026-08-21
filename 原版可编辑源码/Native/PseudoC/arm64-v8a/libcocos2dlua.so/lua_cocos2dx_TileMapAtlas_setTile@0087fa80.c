
/* lua_cocos2dx_TileMapAtlas_setTile(lua_State*) */

undefined4 lua_cocos2dx_TileMapAtlas_setTile(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  TileMapAtlas *this;
  ulong uVar3;
  ulong uVar4;
  undefined4 uVar5;
  undefined8 local_58;
  Color3B aCStack_50 [8];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = (TileMapAtlas *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
    cocos2d::Color3B::Color3B(aCStack_50);
    local_58 = 0;
    uVar3 = luaval_to_color3b(param_1,2,aCStack_50,"cc.TileMapAtlas:setTile");
    uVar4 = luaval_to_vec2(param_1,3,(Vec2 *)&local_58,"cc.TileMapAtlas:setTile");
    if (((uVar3 & 1) != 0) && ((uVar4 & 1) != 0)) {
      cocos2d::TileMapAtlas::setTile(this,aCStack_50,(Vec2 *)&local_58);
      uVar5 = 1;
      lua_settop(param_1,1);
      goto LAB_0087fb70;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_TileMapAtlas_setTile\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.TileMapAtlas:setTile",iVar2 + -1,2);
  }
  uVar5 = 0;
LAB_0087fb70:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

