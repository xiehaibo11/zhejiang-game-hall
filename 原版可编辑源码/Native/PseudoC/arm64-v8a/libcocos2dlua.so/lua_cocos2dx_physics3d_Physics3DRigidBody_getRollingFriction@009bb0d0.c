
/* lua_cocos2dx_physics3d_Physics3DRigidBody_getRollingFriction(lua_State*) */

bool lua_cocos2dx_physics3d_Physics3DRigidBody_getRollingFriction(lua_State *param_1)

{
  int iVar1;
  Physics3DRigidBody *this;
  float fVar2;
  
  this = (Physics3DRigidBody *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    fVar2 = (float)cocos2d::Physics3DRigidBody::getRollingFriction(this);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009bb1a0 with catch @ 009bb130
                       catch(type#1 @ 00000000) { ... } // from try @ 009bb1d0 with catch @ 009bb130
                       catch(type#1 @ 00000000) { ... } // from try @ 009bb200 with catch @ 009bb130
                       catch(type#1 @ 00000000) { ... } // from try @ 009bb228 with catch @ 009bb130
                       catch(type#1 @ 00000000) { ... } // from try @ 009bb254 with catch @ 009bb130
                        */
    tolua_pushnumber((double)fVar2,param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Physics3DRigidBody:getRollingFriction",iVar1,0);
  }
  return iVar1 == 0;
}

