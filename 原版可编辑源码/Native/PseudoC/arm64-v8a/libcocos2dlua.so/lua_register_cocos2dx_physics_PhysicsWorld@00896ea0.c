
/* lua_register_cocos2dx_physics_PhysicsWorld(lua_State*) */

undefined8 lua_register_cocos2dx_physics_PhysicsWorld(lua_State *param_1)

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
  tolua_usertype(param_1,"cc.PhysicsWorld");
  tolua_cclass(param_1,"PhysicsWorld","cc.PhysicsWorld",&DAT_013c996e,0);
  tolua_beginmodule(param_1,"PhysicsWorld");
  tolua_function(param_1,"setGravity",lua_cocos2dx_physics_PhysicsWorld_setGravity);
  tolua_function(param_1,"getAllBodies",lua_cocos2dx_physics_PhysicsWorld_getAllBodies);
  tolua_function(param_1,"setFixedUpdateRate",lua_cocos2dx_physics_PhysicsWorld_setFixedUpdateRate);
  tolua_function(param_1,"setSubsteps",lua_cocos2dx_physics_PhysicsWorld_setSubsteps);
  tolua_function(param_1,"setAutoStep",lua_cocos2dx_physics_PhysicsWorld_setAutoStep);
  tolua_function(param_1,"addJoint",lua_cocos2dx_physics_PhysicsWorld_addJoint);
  tolua_function(param_1,"removeAllJoints",lua_cocos2dx_physics_PhysicsWorld_removeAllJoints);
  tolua_function(param_1,"getDebugDrawMask",lua_cocos2dx_physics_PhysicsWorld_getDebugDrawMask);
  tolua_function(param_1,"setPreUpdateCallback",
                 lua_cocos2dx_physics_PhysicsWorld_setPreUpdateCallback);
  tolua_function(param_1,"isAutoStep",lua_cocos2dx_physics_PhysicsWorld_isAutoStep);
  tolua_function(param_1,"setPostUpdateCallback",
                 lua_cocos2dx_physics_PhysicsWorld_setPostUpdateCallback);
  tolua_function(param_1,"removeBody",lua_cocos2dx_physics_PhysicsWorld_removeBody);
  tolua_function(param_1,"removeJoint",lua_cocos2dx_physics_PhysicsWorld_removeJoint);
  tolua_function(param_1,"getShapes",lua_cocos2dx_physics_PhysicsWorld_getShapes);
  tolua_function(param_1,"step",lua_cocos2dx_physics_PhysicsWorld_step);
  tolua_function(param_1,"setDebugDrawMask",lua_cocos2dx_physics_PhysicsWorld_setDebugDrawMask);
  tolua_function(param_1,"getGravity",lua_cocos2dx_physics_PhysicsWorld_getGravity);
  tolua_function(param_1,"setUpdateRate",lua_cocos2dx_physics_PhysicsWorld_setUpdateRate);
  tolua_function(param_1,"getFixedUpdateRate",lua_cocos2dx_physics_PhysicsWorld_getFixedUpdateRate);
  tolua_function(param_1,"getSubsteps",lua_cocos2dx_physics_PhysicsWorld_getSubsteps);
  tolua_function(param_1,"getSpeed",lua_cocos2dx_physics_PhysicsWorld_getSpeed);
  tolua_function(param_1,"getUpdateRate",lua_cocos2dx_physics_PhysicsWorld_getUpdateRate);
  tolua_function(param_1,"removeAllBodies",lua_cocos2dx_physics_PhysicsWorld_removeAllBodies);
  tolua_function(param_1,"setSpeed",lua_cocos2dx_physics_PhysicsWorld_setSpeed);
  tolua_function(param_1,"getShape",lua_cocos2dx_physics_PhysicsWorld_getShape);
  tolua_function(param_1,"getBody",lua_cocos2dx_physics_PhysicsWorld_getBody);
  tolua_endmodule(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N7cocos2d12PhysicsWorldE");
  local_78[0] = local_60;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_0129c08f,(tuple *)local_78);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"cc.PhysicsWorld",0xf);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"PhysicsWorld");
  local_40 = local_78;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_0129c08f,(tuple *)&local_40);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"cc.PhysicsWorld",0xf);
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

