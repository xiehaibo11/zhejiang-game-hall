
/* lua_cocos2dx_3d_OBB_reset(lua_State*) */

bool lua_cocos2dx_3d_OBB_reset(lua_State *param_1)

{
  int iVar1;
  OBB *this;
  
                    /* try { // try from 008fe660 to 009fe6b7 has its CatchHandler @ 008fe660
                       catch() { ... } // from try @ 008fe660 with catch @ 008fe660
                       catch() { ... } // from try @ 008fe7f4 with catch @ 008fe660 */
  this = (OBB *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
                    /* try { // try from 008fe6b8 to 009fe6cf has its CatchHandler @ 008fe8b0 */
    cocos2d::OBB::reset(this);
    lua_settop(param_1,1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n","cc.OBB:reset",
               iVar1,0);
  }
                    /* try { // try from 008fe6d4 to 009fe6f3 has its CatchHandler @ 008fe8ac */
  return iVar1 == 0;
}

