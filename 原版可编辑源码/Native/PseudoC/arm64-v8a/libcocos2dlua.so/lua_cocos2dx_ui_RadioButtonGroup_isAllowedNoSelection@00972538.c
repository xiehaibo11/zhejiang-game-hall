
/* lua_cocos2dx_ui_RadioButtonGroup_isAllowedNoSelection(lua_State*) */

bool lua_cocos2dx_ui_RadioButtonGroup_isAllowedNoSelection(lua_State *param_1)

{
  int iVar1;
  uint uVar2;
  RadioButtonGroup *this;
  
                    /* try { // try from 0097253c to 00a725b7 has its CatchHandler @ 0097253c
                       catch() { ... } // from try @ 0097253c with catch @ 0097253c
                       catch() { ... } // from try @ 009725c0 with catch @ 0097253c */
  this = (RadioButtonGroup *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    uVar2 = cocos2d::ui::RadioButtonGroup::isAllowedNoSelection(this);
    tolua_pushboolean(param_1,uVar2 & 1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.RadioButtonGroup:isAllowedNoSelection",iVar1,0);
  }
  return iVar1 == 0;
}

