
/* extendPhysics3DRigidBody(lua_State*) */

void extendPhysics3DRigidBody(lua_State *param_1)

{
  int iVar1;
  
  lua_pushstring(param_1,"cc.Physics3DRigidBody");
  lua_rawget(param_1,0xffffd8f0);
  iVar1 = lua_type(param_1,0xffffffff);
                    /* catch() { ... } // from try @ 009b66c0 with catch @ 009b676c */
  if (iVar1 == 5) {
    tolua_function(param_1,"create",lua_cocos2dx_physics3d_Physics3DRigidBody_create);
  }
                    /* try { // try from 009b6788 to 00ab67e3 has its CatchHandler @ 009b6788
                       catch() { ... } // from try @ 009b6788 with catch @ 009b6788
                       catch() { ... } // from try @ 009b68f8 with catch @ 009b6788
                       catch() { ... } // from try @ 009b6964 with catch @ 009b6788 */
  lua_settop(param_1,0xfffffffe);
  return;
}

