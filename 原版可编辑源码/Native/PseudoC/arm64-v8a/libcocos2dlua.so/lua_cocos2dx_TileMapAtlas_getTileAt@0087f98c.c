
/* lua_cocos2dx_TileMapAtlas_getTileAt(lua_State*) */

void lua_cocos2dx_TileMapAtlas_getTileAt(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  TileMapAtlas *this;
  ulong uVar3;
  undefined8 uVar4;
  undefined2 local_48;
  undefined1 local_46;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (TileMapAtlas *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    local_40 = 0;
    uVar3 = luaval_to_vec2(param_1,2,(Vec2 *)&local_40,"cc.TileMapAtlas:getTileAt");
    if ((uVar3 & 1) != 0) {
      uVar4 = cocos2d::TileMapAtlas::getTileAt(this,(Vec2 *)&local_40);
      local_48 = (undefined2)uVar4;
      local_46 = (undefined1)((ulong)uVar4 >> 0x10);
      color3b_to_luaval(param_1,(Color3B *)&local_48);
      uVar4 = 1;
      goto LAB_0087fa58;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_TileMapAtlas_getTileAt\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.TileMapAtlas:getTileAt",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_0087fa58:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

