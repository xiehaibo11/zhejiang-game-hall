
/* lua_cocos2dx_extension_Control_hasVisibleParents(lua_State*) */

bool lua_cocos2dx_extension_Control_hasVisibleParents(lua_State *param_1)

{
  int iVar1;
  uint uVar2;
  Control *this;
  
                    /* catch() { ... } // from try @ 0099fb38 with catch @ 0099fbc4 */
  this = (Control *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 0099fbe0 to 00a9fc53 has its CatchHandler @ 0099fbe0
                       catch() { ... } // from try @ 0099fbe0 with catch @ 0099fbe0
                       catch() { ... } // from try @ 0099fef0 with catch @ 0099fbe0 */
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    uVar2 = cocos2d::extension::Control::hasVisibleParents(this);
    tolua_pushboolean(param_1,uVar2 & 1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Control:hasVisibleParents",iVar1,0);
  }
  return iVar1 == 0;
}

