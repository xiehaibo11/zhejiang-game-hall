
/* extendBundle3D(lua_State*) */

void extendBundle3D(lua_State *param_1)

{
  int iVar1;
  
  lua_pushstring(param_1,"cc.Bundle3D");
  lua_rawget(param_1,0xffffd8f0);
  iVar1 = lua_type(param_1,0xffffffff);
  if (iVar1 == 5) {
                    /* catch() { ... } // from try @ 008fda18 with catch @ 008fdab0 */
                    /* catch() { ... } // from try @ 008fda30 with catch @ 008fdab4 */
    tolua_function(param_1,"getTrianglesList",lua_cocos2dx_3d_Bundle3D_getTrianglesList);
  }
  lua_settop(param_1,0xfffffffe);
  return;
}

