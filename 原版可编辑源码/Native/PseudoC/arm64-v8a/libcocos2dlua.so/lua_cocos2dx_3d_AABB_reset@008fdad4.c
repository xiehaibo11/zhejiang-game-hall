
/* lua_cocos2dx_3d_AABB_reset(lua_State*) */

bool lua_cocos2dx_3d_AABB_reset(lua_State *param_1)

{
  int iVar1;
  AABB *this;
  
                    /* catch() { ... } // from try @ 008fd9e4 with catch @ 008fdae4 */
  this = (AABB *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
                    /* try { // try from 008fdb00 to 009fdb3b has its CatchHandler @ 008fdb00
                       catch() { ... } // from try @ 008fdb00 with catch @ 008fdb00
                       catch() { ... } // from try @ 008fdb94 with catch @ 008fdb00
                       catch() { ... } // from try @ 008fdbdc with catch @ 008fdb00 */
  if (iVar1 == 0) {
    cocos2d::AABB::reset(this);
                    /* try { // try from 008fdb3c to 009fdb5f has its CatchHandler @ 008fdc34 */
    lua_settop(param_1,1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n","cc.AABB:reset",
               iVar1,0);
  }
  return iVar1 == 0;
}

