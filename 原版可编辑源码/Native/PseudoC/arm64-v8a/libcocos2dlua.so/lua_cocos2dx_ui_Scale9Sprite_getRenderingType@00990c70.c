
/* lua_cocos2dx_ui_Scale9Sprite_getRenderingType(lua_State*) */

bool lua_cocos2dx_ui_Scale9Sprite_getRenderingType(lua_State *param_1)

{
  int iVar1;
  int iVar2;
  Scale9Sprite *this;
  
  this = (Scale9Sprite *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
                    /* try { // try from 00990c9c to 00a90e13 has its CatchHandler @ 00990c9c
                       catch() { ... } // from try @ 00990c9c with catch @ 00990c9c
                       catch() { ... } // from try @ 00990e94 with catch @ 00990c9c */
  if (iVar1 == 0) {
    iVar2 = cocos2d::ui::Scale9Sprite::getRenderingType(this);
    tolua_pushnumber((double)iVar2,param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012dfd72,
               iVar1,0);
  }
  return iVar1 == 0;
}

