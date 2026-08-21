
/* lua_register_cocos2dx_physics_PhysicsBody(lua_State*) */

undefined8 lua_register_cocos2dx_physics_PhysicsBody(lua_State *param_1)

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
  tolua_usertype(param_1,"cc.PhysicsBody");
  tolua_cclass(param_1,"PhysicsBody","cc.PhysicsBody","cc.Component",0);
  tolua_beginmodule(param_1,"PhysicsBody");
  tolua_function(param_1,"isGravityEnabled",lua_cocos2dx_physics_PhysicsBody_isGravityEnabled);
  tolua_function(param_1,"resetForces",lua_cocos2dx_physics_PhysicsBody_resetForces);
  tolua_function(param_1,"getVelocityLimit",lua_cocos2dx_physics_PhysicsBody_getVelocityLimit);
  tolua_function(param_1,"setGroup",lua_cocos2dx_physics_PhysicsBody_setGroup);
  tolua_function(param_1,"getMass",lua_cocos2dx_physics_PhysicsBody_getMass);
  tolua_function(param_1,"getCollisionBitmask",lua_cocos2dx_physics_PhysicsBody_getCollisionBitmask)
  ;
  tolua_function(param_1,"getRotationOffset",lua_cocos2dx_physics_PhysicsBody_getRotationOffset);
  tolua_function(param_1,"getRotation",lua_cocos2dx_physics_PhysicsBody_getRotation);
  tolua_function(param_1,"getMoment",lua_cocos2dx_physics_PhysicsBody_getMoment);
  tolua_function(param_1,"applyImpulse",lua_cocos2dx_physics_PhysicsBody_applyImpulse);
  tolua_function(param_1,"setRotationOffset",lua_cocos2dx_physics_PhysicsBody_setRotationOffset);
  tolua_function(param_1,"applyForce",lua_cocos2dx_physics_PhysicsBody_applyForce);
  tolua_function(param_1,"addShape",lua_cocos2dx_physics_PhysicsBody_addShape);
  tolua_function(param_1,"applyTorque",lua_cocos2dx_physics_PhysicsBody_applyTorque);
  tolua_function(param_1,"getAngularVelocityLimit",
                 lua_cocos2dx_physics_PhysicsBody_getAngularVelocityLimit);
  tolua_function(param_1,"setAngularVelocityLimit",
                 lua_cocos2dx_physics_PhysicsBody_setAngularVelocityLimit);
  tolua_function(param_1,"getVelocity",lua_cocos2dx_physics_PhysicsBody_getVelocity);
  tolua_function(param_1,"getLinearDamping",lua_cocos2dx_physics_PhysicsBody_getLinearDamping);
  tolua_function(param_1,"removeAllShapes",lua_cocos2dx_physics_PhysicsBody_removeAllShapes);
  tolua_function(param_1,"setAngularDamping",lua_cocos2dx_physics_PhysicsBody_setAngularDamping);
  tolua_function(param_1,"setVelocityLimit",lua_cocos2dx_physics_PhysicsBody_setVelocityLimit);
  tolua_function(param_1,"setResting",lua_cocos2dx_physics_PhysicsBody_setResting);
  tolua_function(param_1,"getPositionOffset",lua_cocos2dx_physics_PhysicsBody_getPositionOffset);
  tolua_function(param_1,"setCategoryBitmask",lua_cocos2dx_physics_PhysicsBody_setCategoryBitmask);
  tolua_function(param_1,"getWorld",lua_cocos2dx_physics_PhysicsBody_getWorld);
  tolua_function(param_1,"getAngularVelocity",lua_cocos2dx_physics_PhysicsBody_getAngularVelocity);
  tolua_function(param_1,"getPosition",lua_cocos2dx_physics_PhysicsBody_getPosition);
  tolua_function(param_1,"setGravityEnable",lua_cocos2dx_physics_PhysicsBody_setGravityEnable);
  tolua_function(param_1,"getGroup",lua_cocos2dx_physics_PhysicsBody_getGroup);
  tolua_function(param_1,"setMoment",lua_cocos2dx_physics_PhysicsBody_setMoment);
  tolua_function(param_1,"getTag",lua_cocos2dx_physics_PhysicsBody_getTag);
  tolua_function(param_1,"local2World",lua_cocos2dx_physics_PhysicsBody_local2World);
  tolua_function(param_1,"getCategoryBitmask",lua_cocos2dx_physics_PhysicsBody_getCategoryBitmask);
  tolua_function(param_1,"setDynamic",lua_cocos2dx_physics_PhysicsBody_setDynamic);
  tolua_function(param_1,"getFirstShape",lua_cocos2dx_physics_PhysicsBody_getFirstShape);
  tolua_function(param_1,"getShapes",lua_cocos2dx_physics_PhysicsBody_getShapes);
  tolua_function(param_1,"getContactTestBitmask",
                 lua_cocos2dx_physics_PhysicsBody_getContactTestBitmask);
  tolua_function(param_1,"setAngularVelocity",lua_cocos2dx_physics_PhysicsBody_setAngularVelocity);
  tolua_function(param_1,"world2Local",lua_cocos2dx_physics_PhysicsBody_world2Local);
  tolua_function(param_1,"removeShape",lua_cocos2dx_physics_PhysicsBody_removeShape);
  tolua_function(param_1,"setMass",lua_cocos2dx_physics_PhysicsBody_setMass);
  tolua_function(param_1,"addMoment",lua_cocos2dx_physics_PhysicsBody_addMoment);
  tolua_function(param_1,"setVelocity",lua_cocos2dx_physics_PhysicsBody_setVelocity);
  tolua_function(param_1,"setLinearDamping",lua_cocos2dx_physics_PhysicsBody_setLinearDamping);
  tolua_function(param_1,"setCollisionBitmask",lua_cocos2dx_physics_PhysicsBody_setCollisionBitmask)
  ;
  tolua_function(param_1,"setPositionOffset",lua_cocos2dx_physics_PhysicsBody_setPositionOffset);
  tolua_function(param_1,"setRotationEnable",lua_cocos2dx_physics_PhysicsBody_setRotationEnable);
  tolua_function(param_1,"isRotationEnabled",lua_cocos2dx_physics_PhysicsBody_isRotationEnabled);
  tolua_function(param_1,"getCPBody",lua_cocos2dx_physics_PhysicsBody_getCPBody);
  tolua_function(param_1,"getAngularDamping",lua_cocos2dx_physics_PhysicsBody_getAngularDamping);
  tolua_function(param_1,"getVelocityAtLocalPoint",
                 lua_cocos2dx_physics_PhysicsBody_getVelocityAtLocalPoint);
  tolua_function(param_1,"isResting",lua_cocos2dx_physics_PhysicsBody_isResting);
  tolua_function(param_1,"addMass",lua_cocos2dx_physics_PhysicsBody_addMass);
  tolua_function(param_1,"getShape",lua_cocos2dx_physics_PhysicsBody_getShape);
  tolua_function(param_1,"setTag",lua_cocos2dx_physics_PhysicsBody_setTag);
  tolua_function(param_1,"getVelocityAtWorldPoint",
                 lua_cocos2dx_physics_PhysicsBody_getVelocityAtWorldPoint);
  tolua_function(param_1,"setContactTestBitmask",
                 lua_cocos2dx_physics_PhysicsBody_setContactTestBitmask);
  tolua_function(param_1,"removeFromWorld",lua_cocos2dx_physics_PhysicsBody_removeFromWorld);
  tolua_function(param_1,"isDynamic",lua_cocos2dx_physics_PhysicsBody_isDynamic);
  tolua_function(param_1,"getNode",lua_cocos2dx_physics_PhysicsBody_getNode);
  tolua_function(param_1,"createBox",lua_cocos2dx_physics_PhysicsBody_createBox);
  tolua_function(param_1,"createEdgeSegment",lua_cocos2dx_physics_PhysicsBody_createEdgeSegment);
  tolua_function(param_1,"create",lua_cocos2dx_physics_PhysicsBody_create);
  tolua_function(param_1,"createEdgeBox",lua_cocos2dx_physics_PhysicsBody_createEdgeBox);
  tolua_function(param_1,"createCircle",lua_cocos2dx_physics_PhysicsBody_createCircle);
  tolua_endmodule(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N7cocos2d11PhysicsBodyE");
  local_78[0] = local_60;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_0129c08f,(tuple *)local_78);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"cc.PhysicsBody",0xe);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"PhysicsBody");
  local_40 = local_78;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_0129c08f,(tuple *)&local_40);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"cc.PhysicsBody",0xe);
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

