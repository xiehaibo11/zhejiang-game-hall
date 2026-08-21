
/* lua_register_cocos2dx_physics3d_Physics3DHingeConstraint(lua_State*) */

undefined8 lua_register_cocos2dx_physics3d_Physics3DHingeConstraint(lua_State *param_1)

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
  tolua_usertype(param_1,"cc.Physics3DHingeConstraint");
  tolua_cclass(param_1,"Physics3DHingeConstraint","cc.Physics3DHingeConstraint",
               "cc.Physics3DConstraint",0);
  tolua_beginmodule(param_1,"Physics3DHingeConstraint");
  tolua_function(param_1,"new",lua_cocos2dx_physics3d_Physics3DHingeConstraint_constructor);
  tolua_function(param_1,"getHingeAngle",
                 lua_cocos2dx_physics3d_Physics3DHingeConstraint_getHingeAngle);
  tolua_function(param_1,"getMotorTargetVelosity",
                 lua_cocos2dx_physics3d_Physics3DHingeConstraint_getMotorTargetVelosity);
  tolua_function(param_1,"getFrameOffsetA",
                 lua_cocos2dx_physics3d_Physics3DHingeConstraint_getFrameOffsetA);
  tolua_function(param_1,"getFrameOffsetB",
                 lua_cocos2dx_physics3d_Physics3DHingeConstraint_getFrameOffsetB);
  tolua_function(param_1,"setMaxMotorImpulse",
                 lua_cocos2dx_physics3d_Physics3DHingeConstraint_setMaxMotorImpulse);
  tolua_function(param_1,"enableAngularMotor",
                 lua_cocos2dx_physics3d_Physics3DHingeConstraint_enableAngularMotor);
  tolua_function(param_1,"getUpperLimit",
                 lua_cocos2dx_physics3d_Physics3DHingeConstraint_getUpperLimit);
  tolua_function(param_1,"getMaxMotorImpulse",
                 lua_cocos2dx_physics3d_Physics3DHingeConstraint_getMaxMotorImpulse);
  tolua_function(param_1,"getLowerLimit",
                 lua_cocos2dx_physics3d_Physics3DHingeConstraint_getLowerLimit);
  tolua_function(param_1,"setUseFrameOffset",
                 lua_cocos2dx_physics3d_Physics3DHingeConstraint_setUseFrameOffset);
  tolua_function(param_1,"getEnableAngularMotor",
                 lua_cocos2dx_physics3d_Physics3DHingeConstraint_getEnableAngularMotor);
  tolua_function(param_1,"enableMotor",lua_cocos2dx_physics3d_Physics3DHingeConstraint_enableMotor);
  tolua_function(param_1,&DAT_012ec537,lua_cocos2dx_physics3d_Physics3DHingeConstraint_getBFrame);
  tolua_function(param_1,"setFrames",lua_cocos2dx_physics3d_Physics3DHingeConstraint_setFrames);
  tolua_function(param_1,"getUseFrameOffset",
                 lua_cocos2dx_physics3d_Physics3DHingeConstraint_getUseFrameOffset);
  tolua_function(param_1,"setAngularOnly",
                 lua_cocos2dx_physics3d_Physics3DHingeConstraint_setAngularOnly);
  tolua_function(param_1,"setLimit",lua_cocos2dx_physics3d_Physics3DHingeConstraint_setLimit);
  tolua_function(param_1,"getAngularOnly",
                 lua_cocos2dx_physics3d_Physics3DHingeConstraint_getAngularOnly);
  tolua_function(param_1,0x12ec73e,lua_cocos2dx_physics3d_Physics3DHingeConstraint_setAxis);
  tolua_function(param_1,"getAFrame",lua_cocos2dx_physics3d_Physics3DHingeConstraint_getAFrame);
  tolua_function(param_1,"create",lua_cocos2dx_physics3d_Physics3DHingeConstraint_create);
  tolua_endmodule(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N7cocos2d24Physics3DHingeConstraintE");
  local_78[0] = local_60;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_012eecb7,(tuple *)local_78);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"cc.Physics3DHingeConstraint",0x1b);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"Physics3DHingeConstraint");
  local_40 = local_78;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_012eecb7,(tuple *)&local_40);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"cc.Physics3DHingeConstraint",0x1b);
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

