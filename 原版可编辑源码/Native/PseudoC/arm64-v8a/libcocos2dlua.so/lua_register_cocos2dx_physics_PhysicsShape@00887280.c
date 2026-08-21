
/* lua_register_cocos2dx_physics_PhysicsShape(lua_State*) */

undefined8 lua_register_cocos2dx_physics_PhysicsShape(lua_State *param_1)

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
  tolua_usertype(param_1,"cc.PhysicsShape");
  tolua_cclass(param_1,"PhysicsShape","cc.PhysicsShape",&DAT_012769c7,0);
  tolua_beginmodule(param_1,"PhysicsShape");
  tolua_function(param_1,"getFriction",lua_cocos2dx_physics_PhysicsShape_getFriction);
  tolua_function(param_1,"setGroup",lua_cocos2dx_physics_PhysicsShape_setGroup);
  tolua_function(param_1,"setDensity",lua_cocos2dx_physics_PhysicsShape_setDensity);
  tolua_function(param_1,"getMass",lua_cocos2dx_physics_PhysicsShape_getMass);
  tolua_function(param_1,"getMaterial",lua_cocos2dx_physics_PhysicsShape_getMaterial);
  tolua_function(param_1,"setSensor",lua_cocos2dx_physics_PhysicsShape_setSensor);
  tolua_function(param_1,"getCollisionBitmask",lua_cocos2dx_physics_PhysicsShape_getCollisionBitmask
                );
  tolua_function(param_1,"getArea",lua_cocos2dx_physics_PhysicsShape_getArea);
  tolua_function(param_1,"setCategoryBitmask",lua_cocos2dx_physics_PhysicsShape_setCategoryBitmask);
  tolua_function(param_1,"getGroup",lua_cocos2dx_physics_PhysicsShape_getGroup);
  tolua_function(param_1,"setMoment",lua_cocos2dx_physics_PhysicsShape_setMoment);
  tolua_function(param_1,"containsPoint",lua_cocos2dx_physics_PhysicsShape_containsPoint);
  tolua_function(param_1,"getCategoryBitmask",lua_cocos2dx_physics_PhysicsShape_getCategoryBitmask);
  tolua_function(param_1,"isSensor",lua_cocos2dx_physics_PhysicsShape_isSensor);
  tolua_function(param_1,"getType",lua_cocos2dx_physics_PhysicsShape_getType);
  tolua_function(param_1,"getContactTestBitmask",
                 lua_cocos2dx_physics_PhysicsShape_getContactTestBitmask);
  tolua_function(param_1,"getCenter",lua_cocos2dx_physics_PhysicsShape_getCenter);
  tolua_function(param_1,"getDensity",lua_cocos2dx_physics_PhysicsShape_getDensity);
  tolua_function(param_1,"setMass",lua_cocos2dx_physics_PhysicsShape_setMass);
  tolua_function(param_1,"getTag",lua_cocos2dx_physics_PhysicsShape_getTag);
  tolua_function(param_1,"calculateDefaultMoment",
                 lua_cocos2dx_physics_PhysicsShape_calculateDefaultMoment);
  tolua_function(param_1,"setCollisionBitmask",lua_cocos2dx_physics_PhysicsShape_setCollisionBitmask
                );
  tolua_function(param_1,"getMoment",lua_cocos2dx_physics_PhysicsShape_getMoment);
  tolua_function(param_1,"getOffset",lua_cocos2dx_physics_PhysicsShape_getOffset);
  tolua_function(param_1,"getRestitution",lua_cocos2dx_physics_PhysicsShape_getRestitution);
  tolua_function(param_1,"setFriction",lua_cocos2dx_physics_PhysicsShape_setFriction);
  tolua_function(param_1,"setMaterial",lua_cocos2dx_physics_PhysicsShape_setMaterial);
  tolua_function(param_1,"setTag",lua_cocos2dx_physics_PhysicsShape_setTag);
  tolua_function(param_1,"setContactTestBitmask",
                 lua_cocos2dx_physics_PhysicsShape_setContactTestBitmask);
  tolua_function(param_1,"setRestitution",lua_cocos2dx_physics_PhysicsShape_setRestitution);
  tolua_function(param_1,"getBody",lua_cocos2dx_physics_PhysicsShape_getBody);
  tolua_endmodule(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N7cocos2d12PhysicsShapeE");
  local_78[0] = local_60;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_0129c08f,(tuple *)local_78);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"cc.PhysicsShape",0xf);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"PhysicsShape");
  local_40 = local_78;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_0129c08f,(tuple *)&local_40);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"cc.PhysicsShape",0xf);
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

