
/* lua_cocos2dx_extension_Control_isEnabled(lua_State*) */

bool lua_cocos2dx_extension_Control_isEnabled(lua_State *param_1)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
                    /* try { // try from 0099fae8 to 00a9fb37 has its CatchHandler @ 0099fae8
                       catch() { ... } // from try @ 0099fae8 with catch @ 0099fae8
                       catch() { ... } // from try @ 0099fb68 with catch @ 0099fae8 */
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    uVar2 = (**(code **)(*plVar3 + 0x658))(plVar3);
    tolua_pushboolean(param_1,uVar2 & 1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Control:isEnabled",iVar1,0);
  }
                    /* try { // try from 0099fb38 to 00a9fb67 has its CatchHandler @ 0099fbc4 */
  return iVar1 == 0;
}

