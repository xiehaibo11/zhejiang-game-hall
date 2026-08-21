
/* lua_register_cocos2dx_physics3d_Physics3DRigidBody(lua_State*) */

undefined8 lua_register_cocos2dx_physics3d_Physics3DRigidBody(lua_State *param_1)

{
  long lVar1;
  long lVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *local_78 [2];
  void *local_68;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_60 [16];
  void *local_50;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  tolua_usertype(param_1,"cc.Physics3DRigidBody");
                    /* catch() { ... } // from try @ 009bbd48 with catch @ 009bbdc8 */
                    /* catch() { ... } // from try @ 009bbd18 with catch @ 009bbdd8 */
  tolua_cclass(param_1,"Physics3DRigidBody","cc.Physics3DRigidBody","cc.Physics3DObject",0);
  tolua_beginmodule(param_1,"Physics3DRigidBody");
  tolua_function(param_1,"new",lua_cocos2dx_physics3d_Physics3DRigidBody_constructor);
  tolua_function(param_1,"setGravity",lua_cocos2dx_physics3d_Physics3DRigidBody_setGravity);
  tolua_function(param_1,"getFriction",lua_cocos2dx_physics3d_Physics3DRigidBody_getFriction);
  tolua_function(param_1,"setAngularFactor",
                 lua_cocos2dx_physics3d_Physics3DRigidBody_setAngularFactor);
  tolua_function(param_1,"addConstraint",lua_cocos2dx_physics3d_Physics3DRigidBody_addConstraint);
  tolua_function(param_1,"getRigidBody",lua_cocos2dx_physics3d_Physics3DRigidBody_getRigidBody);
  tolua_function(param_1,"getTotalForce",lua_cocos2dx_physics3d_Physics3DRigidBody_getTotalForce);
  tolua_function(param_1,"getConstraintCount",
                 lua_cocos2dx_physics3d_Physics3DRigidBody_getConstraintCount);
  tolua_function(param_1,"applyCentralForce",
                 lua_cocos2dx_physics3d_Physics3DRigidBody_applyCentralForce);
  tolua_function(param_1,"setMassProps",lua_cocos2dx_physics3d_Physics3DRigidBody_setMassProps);
  tolua_function(param_1,"setFriction",lua_cocos2dx_physics3d_Physics3DRigidBody_setFriction);
  tolua_function(param_1,"setKinematic",lua_cocos2dx_physics3d_Physics3DRigidBody_setKinematic);
  tolua_function(param_1,"setDamping",lua_cocos2dx_physics3d_Physics3DRigidBody_setDamping);
  tolua_function(param_1,"applyImpulse",lua_cocos2dx_physics3d_Physics3DRigidBody_applyImpulse);
  tolua_function(param_1,"isKinematic",lua_cocos2dx_physics3d_Physics3DRigidBody_isKinematic);
  tolua_function(param_1,"applyTorque",lua_cocos2dx_physics3d_Physics3DRigidBody_applyTorque);
  tolua_function(param_1,"setCcdMotionThreshold",
                 lua_cocos2dx_physics3d_Physics3DRigidBody_setCcdMotionThreshold);
  tolua_function(param_1,&DAT_012ea893,lua_cocos2dx_physics3d_Physics3DRigidBody_setRollingFriction)
  ;
  tolua_function(param_1,"getCcdMotionThreshold",
                 lua_cocos2dx_physics3d_Physics3DRigidBody_getCcdMotionThreshold);
  tolua_function(param_1,"getLinearFactor",lua_cocos2dx_physics3d_Physics3DRigidBody_getLinearFactor
                );
  tolua_function(param_1,"applyDamping",lua_cocos2dx_physics3d_Physics3DRigidBody_applyDamping);
  tolua_function(param_1,"getAngularVelocity",
                 lua_cocos2dx_physics3d_Physics3DRigidBody_getAngularVelocity);
  tolua_function(param_1,"init",lua_cocos2dx_physics3d_Physics3DRigidBody_init);
  tolua_function(param_1,"applyTorqueImpulse",
                 lua_cocos2dx_physics3d_Physics3DRigidBody_applyTorqueImpulse);
  tolua_function(param_1,"setActive",lua_cocos2dx_physics3d_Physics3DRigidBody_setActive);
  tolua_function(param_1,&DAT_012eab72,lua_cocos2dx_physics3d_Physics3DRigidBody_setLinearFactor);
  tolua_function(param_1,"setLinearVelocity",
                 lua_cocos2dx_physics3d_Physics3DRigidBody_setLinearVelocity);
  tolua_function(param_1,"getLinearVelocity",
                 lua_cocos2dx_physics3d_Physics3DRigidBody_getLinearVelocity);
  tolua_function(param_1,&DAT_012eac9e,
                 lua_cocos2dx_physics3d_Physics3DRigidBody_setCcdSweptSphereRadius);
  tolua_function(param_1,"applyForce",lua_cocos2dx_physics3d_Physics3DRigidBody_applyForce);
  tolua_function(param_1,"setAngularVelocity",
                 lua_cocos2dx_physics3d_Physics3DRigidBody_setAngularVelocity);
  tolua_function(param_1,"applyCentralImpulse",
                 lua_cocos2dx_physics3d_Physics3DRigidBody_applyCentralImpulse);
  tolua_function(param_1,"getGravity",lua_cocos2dx_physics3d_Physics3DRigidBody_getGravity);
  tolua_function(param_1,"getRollingFriction",
                 lua_cocos2dx_physics3d_Physics3DRigidBody_getRollingFriction);
  tolua_function(param_1,"setCenterOfMassTransform",
                 lua_cocos2dx_physics3d_Physics3DRigidBody_setCenterOfMassTransform);
  tolua_function(param_1,"setInvInertiaDiagLocal",
                 lua_cocos2dx_physics3d_Physics3DRigidBody_setInvInertiaDiagLocal);
  tolua_function(param_1,"removeConstraint",
                 lua_cocos2dx_physics3d_Physics3DRigidBody_removeConstraint);
  tolua_function(param_1,"getTotalTorque",lua_cocos2dx_physics3d_Physics3DRigidBody_getTotalTorque);
  tolua_function(param_1,"getInvMass",lua_cocos2dx_physics3d_Physics3DRigidBody_getInvMass);
  tolua_function(param_1,"getConstraint",lua_cocos2dx_physics3d_Physics3DRigidBody_getConstraint);
  tolua_function(param_1,"getRestitution",lua_cocos2dx_physics3d_Physics3DRigidBody_getRestitution);
  tolua_function(param_1,"getCcdSweptSphereRadius",
                 lua_cocos2dx_physics3d_Physics3DRigidBody_getCcdSweptSphereRadius);
  tolua_function(param_1,"getHitFraction",lua_cocos2dx_physics3d_Physics3DRigidBody_getHitFraction);
  tolua_function(param_1,"getAngularDamping",
                 lua_cocos2dx_physics3d_Physics3DRigidBody_getAngularDamping);
  tolua_function(param_1,"getInvInertiaDiagLocal",
                 lua_cocos2dx_physics3d_Physics3DRigidBody_getInvInertiaDiagLocal);
  tolua_function(param_1,"getCenterOfMassTransform",
                 lua_cocos2dx_physics3d_Physics3DRigidBody_getCenterOfMassTransform);
  tolua_function(param_1,"getAngularFactor",
                 lua_cocos2dx_physics3d_Physics3DRigidBody_getAngularFactor);
  tolua_function(param_1,"setRestitution",lua_cocos2dx_physics3d_Physics3DRigidBody_setRestitution);
  tolua_function(param_1,"setHitFraction",lua_cocos2dx_physics3d_Physics3DRigidBody_setHitFraction);
  tolua_function(param_1,"getLinearDamping",
                 lua_cocos2dx_physics3d_Physics3DRigidBody_getLinearDamping);
  tolua_endmodule(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N7cocos2d18Physics3DRigidBodyE");
  local_78[0] = local_60;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_012eecb7,(tuple *)local_78);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"cc.Physics3DRigidBody",0x15);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"Physics3DRigidBody");
  local_40 = local_78;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_012eecb7,(tuple *)&local_40);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"cc.Physics3DRigidBody",0x15);
  if (((ulong)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

