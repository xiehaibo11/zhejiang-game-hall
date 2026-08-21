
/* lua_cocos2dx_physics3d_Physics3DRigidBody_getCcdSweptSphereRadius(lua_State*) */

bool lua_cocos2dx_physics3d_Physics3DRigidBody_getCcdSweptSphereRadius(lua_State *param_1)

{
  int iVar1;
  Physics3DRigidBody *this;
  float fVar2;
  
                    /* try { // try from 009bb718 to 00abb723 has its CatchHandler @ 009bb760 */
                    /* try { // try from 009bb724 to 00abb767 has its CatchHandler @ 009bb600 */
  this = (Physics3DRigidBody *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    fVar2 = (float)cocos2d::Physics3DRigidBody::getCcdSweptSphereRadius(this);
    tolua_pushnumber((double)fVar2,param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Physics3DRigidBody:getCcdSweptSphereRadius",iVar1,0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009bb6c8 with catch @ 009bb760
                       catch(type#1 @ 00000000) { ... } // from try @ 009bb6f0 with catch @ 009bb760
                       catch(type#1 @ 00000000) { ... } // from try @ 009bb718 with catch @ 009bb760
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009bb668 with catch @ 009bb764
                       catch(type#1 @ 00000000) { ... } // from try @ 009bb694 with catch @ 009bb764
                        */
  }
  return iVar1 == 0;
}

