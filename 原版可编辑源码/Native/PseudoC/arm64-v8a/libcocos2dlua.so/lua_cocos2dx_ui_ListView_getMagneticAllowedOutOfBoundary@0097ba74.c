
/* lua_cocos2dx_ui_ListView_getMagneticAllowedOutOfBoundary(lua_State*) */

bool lua_cocos2dx_ui_ListView_getMagneticAllowedOutOfBoundary(lua_State *param_1)

{
  int iVar1;
  uint uVar2;
  ListView *this;
  
                    /* try { // try from 0097ba88 to 00a7badb has its CatchHandler @ 0097ba88
                       catch(type#1 @ 00000000) { ... } // from try @ 0097ba88 with catch @ 0097ba88
                       catch(type#1 @ 00000000) { ... } // from try @ 0097bb6c with catch @ 0097ba88
                       catch(type#1 @ 00000000) { ... } // from try @ 0097bbc0 with catch @ 0097ba88
                       catch(type#1 @ 00000000) { ... } // from try @ 0097bc34 with catch @ 0097ba88
                        */
  this = (ListView *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    uVar2 = cocos2d::ui::ListView::getMagneticAllowedOutOfBoundary(this);
    tolua_pushboolean(param_1,uVar2 & 1);
                    /* try { // try from 0097badc to 00a7baf3 has its CatchHandler @ 0097bc14 */
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.ListView:getMagneticAllowedOutOfBoundary",iVar1,0);
  }
  return iVar1 == 0;
}

