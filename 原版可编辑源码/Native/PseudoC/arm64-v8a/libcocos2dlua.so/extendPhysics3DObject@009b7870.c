
/* extendPhysics3DObject(lua_State*) */

void extendPhysics3DObject(lua_State *param_1)

{
  int iVar1;
  
  lua_pushstring(param_1,"cc.Physics3DObject");
                    /* try { // try from 009b7890 to 00ab7897 has its CatchHandler @ 009b78a8 */
  lua_rawget(param_1,0xffffd8f0);
  iVar1 = lua_type(param_1,0xffffffff);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009b7890 with catch @ 009b78a8
                        */
  if (iVar1 == 5) {
    tolua_function(param_1,"setCollisionCallback",
                   lua_cocos2dx_physics3d_Physics3DObject_setCollisionCallback);
  }
  lua_settop(param_1,0xfffffffe);
  return;
}

