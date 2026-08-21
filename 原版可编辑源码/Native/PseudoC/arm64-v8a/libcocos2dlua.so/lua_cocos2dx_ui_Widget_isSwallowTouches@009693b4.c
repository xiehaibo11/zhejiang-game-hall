
/* lua_cocos2dx_ui_Widget_isSwallowTouches(lua_State*) */

bool lua_cocos2dx_ui_Widget_isSwallowTouches(lua_State *param_1)

{
  int iVar1;
  uint uVar2;
  Widget *this;
  
  this = (Widget *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
                    /* catch() { ... } // from try @ 009692e0 with catch @ 009693e0 */
  if (iVar1 == 0) {
    uVar2 = cocos2d::ui::Widget::isSwallowTouches(this);
    tolua_pushboolean(param_1,uVar2 & 1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012d73e2,
               iVar1,0);
  }
  return iVar1 == 0;
}

