
/* lua_register_cocos2dx_physics3d_Physics3DSliderConstraint(lua_State*) */

undefined8 lua_register_cocos2dx_physics3d_Physics3DSliderConstraint(lua_State *param_1)

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
  tolua_usertype(param_1,"cc.Physics3DSliderConstraint");
  tolua_cclass(param_1,"Physics3DSliderConstraint","cc.Physics3DSliderConstraint",
               "cc.Physics3DConstraint",0);
  tolua_beginmodule(param_1,"Physics3DSliderConstraint");
  tolua_function(param_1,"new",lua_cocos2dx_physics3d_Physics3DSliderConstraint_constructor);
  tolua_function(param_1,"setPoweredAngMotor",
                 lua_cocos2dx_physics3d_Physics3DSliderConstraint_setPoweredAngMotor);
  tolua_function(param_1,"getDampingLimAng",
                 lua_cocos2dx_physics3d_Physics3DSliderConstraint_getDampingLimAng);
  tolua_function(param_1,&DAT_012ec917,
                 lua_cocos2dx_physics3d_Physics3DSliderConstraint_setRestitutionOrthoLin);
  tolua_function(param_1,"setRestitutionDirLin",
                 lua_cocos2dx_physics3d_Physics3DSliderConstraint_setRestitutionDirLin);
  tolua_function(param_1,"getLinearPos",
                 lua_cocos2dx_physics3d_Physics3DSliderConstraint_getLinearPos);
  tolua_function(param_1,"getFrameOffsetA",
                 lua_cocos2dx_physics3d_Physics3DSliderConstraint_getFrameOffsetA);
  tolua_function(param_1,"getFrameOffsetB",
                 lua_cocos2dx_physics3d_Physics3DSliderConstraint_getFrameOffsetB);
  tolua_function(param_1,"setPoweredLinMotor",
                 lua_cocos2dx_physics3d_Physics3DSliderConstraint_setPoweredLinMotor);
  tolua_function(param_1,"getDampingDirAng",
                 lua_cocos2dx_physics3d_Physics3DSliderConstraint_getDampingDirAng);
  tolua_function(param_1,"getRestitutionLimLin",
                 lua_cocos2dx_physics3d_Physics3DSliderConstraint_getRestitutionLimLin);
  tolua_function(param_1,"getSoftnessOrthoAng",
                 lua_cocos2dx_physics3d_Physics3DSliderConstraint_getSoftnessOrthoAng);
  tolua_function(param_1,"setSoftnessOrthoLin",
                 lua_cocos2dx_physics3d_Physics3DSliderConstraint_setSoftnessOrthoLin);
  tolua_function(param_1,"setSoftnessLimLin",
                 lua_cocos2dx_physics3d_Physics3DSliderConstraint_setSoftnessLimLin);
  tolua_function(param_1,"getAngularPos",
                 lua_cocos2dx_physics3d_Physics3DSliderConstraint_getAngularPos);
  tolua_function(param_1,"setRestitutionLimAng",
                 lua_cocos2dx_physics3d_Physics3DSliderConstraint_setRestitutionLimAng);
  tolua_function(param_1,"setUpperLinLimit",
                 lua_cocos2dx_physics3d_Physics3DSliderConstraint_setUpperLinLimit);
  tolua_function(param_1,&DAT_012ece6f,
                 lua_cocos2dx_physics3d_Physics3DSliderConstraint_setDampingDirLin);
  tolua_function(param_1,"getUpperAngLimit",
                 lua_cocos2dx_physics3d_Physics3DSliderConstraint_getUpperAngLimit);
  tolua_function(param_1,&DAT_012ecf2d,
                 lua_cocos2dx_physics3d_Physics3DSliderConstraint_getDampingDirLin);
  tolua_function(param_1,"getSoftnessDirAng",
                 lua_cocos2dx_physics3d_Physics3DSliderConstraint_getSoftnessDirAng);
  tolua_function(param_1,"getPoweredAngMotor",
                 lua_cocos2dx_physics3d_Physics3DSliderConstraint_getPoweredAngMotor);
  tolua_function(param_1,"setLowerAngLimit",
                 lua_cocos2dx_physics3d_Physics3DSliderConstraint_setLowerAngLimit);
  tolua_function(param_1,"setUpperAngLimit",
                 lua_cocos2dx_physics3d_Physics3DSliderConstraint_setUpperAngLimit);
  tolua_function(param_1,"setTargetLinMotorVelocity",
                 lua_cocos2dx_physics3d_Physics3DSliderConstraint_setTargetLinMotorVelocity);
  tolua_function(param_1,"setDampingLimAng",
                 lua_cocos2dx_physics3d_Physics3DSliderConstraint_setDampingLimAng);
  tolua_function(param_1,"getRestitutionLimAng",
                 lua_cocos2dx_physics3d_Physics3DSliderConstraint_getRestitutionLimAng);
  tolua_function(param_1,"getUseFrameOffset",
                 lua_cocos2dx_physics3d_Physics3DSliderConstraint_getUseFrameOffset);
  tolua_function(param_1,"getSoftnessOrthoLin",
                 lua_cocos2dx_physics3d_Physics3DSliderConstraint_getSoftnessOrthoLin);
  tolua_function(param_1,0x12ed29e,
                 lua_cocos2dx_physics3d_Physics3DSliderConstraint_getDampingOrthoAng);
  tolua_function(param_1,"setUseFrameOffset",
                 lua_cocos2dx_physics3d_Physics3DSliderConstraint_setUseFrameOffset);
  tolua_function(param_1,"setLowerLinLimit",
                 lua_cocos2dx_physics3d_Physics3DSliderConstraint_setLowerLinLimit);
  tolua_function(param_1,"getRestitutionDirLin",
                 lua_cocos2dx_physics3d_Physics3DSliderConstraint_getRestitutionDirLin);
  tolua_function(param_1,"getTargetLinMotorVelocity",
                 lua_cocos2dx_physics3d_Physics3DSliderConstraint_getTargetLinMotorVelocity);
  tolua_function(param_1,"getLowerLinLimit",
                 lua_cocos2dx_physics3d_Physics3DSliderConstraint_getLowerLinLimit);
  tolua_function(param_1,"getSoftnessLimLin",
                 lua_cocos2dx_physics3d_Physics3DSliderConstraint_getSoftnessLimLin);
  tolua_function(param_1,"setDampingOrthoAng",
                 lua_cocos2dx_physics3d_Physics3DSliderConstraint_setDampingOrthoAng);
  tolua_function(param_1,"setSoftnessDirAng",
                 lua_cocos2dx_physics3d_Physics3DSliderConstraint_setSoftnessDirAng);
  tolua_function(param_1,&LAB_012ed5dc,
                 lua_cocos2dx_physics3d_Physics3DSliderConstraint_getPoweredLinMotor);
  tolua_function(param_1,"setRestitutionOrthoAng",
                 lua_cocos2dx_physics3d_Physics3DSliderConstraint_setRestitutionOrthoAng);
  tolua_function(param_1,"setDampingDirAng",
                 lua_cocos2dx_physics3d_Physics3DSliderConstraint_setDampingDirAng);
  tolua_function(param_1,"setFrames",lua_cocos2dx_physics3d_Physics3DSliderConstraint_setFrames);
  tolua_function(param_1,"getRestitutionOrthoAng",
                 lua_cocos2dx_physics3d_Physics3DSliderConstraint_getRestitutionOrthoAng);
  tolua_function(param_1,"getMaxAngMotorForce",
                 lua_cocos2dx_physics3d_Physics3DSliderConstraint_getMaxAngMotorForce);
  tolua_function(param_1,"getDampingOrthoLin",
                 lua_cocos2dx_physics3d_Physics3DSliderConstraint_getDampingOrthoLin);
  tolua_function(param_1,"getUpperLinLimit",
                 lua_cocos2dx_physics3d_Physics3DSliderConstraint_getUpperLinLimit);
  tolua_function(param_1,"setMaxLinMotorForce",
                 lua_cocos2dx_physics3d_Physics3DSliderConstraint_setMaxLinMotorForce);
  tolua_function(param_1,"getRestitutionOrthoLin",
                 lua_cocos2dx_physics3d_Physics3DSliderConstraint_getRestitutionOrthoLin);
  tolua_function(param_1,"setTargetAngMotorVelocity",
                 lua_cocos2dx_physics3d_Physics3DSliderConstraint_setTargetAngMotorVelocity);
  tolua_function(param_1,"getSoftnessLimAng",
                 lua_cocos2dx_physics3d_Physics3DSliderConstraint_getSoftnessLimAng);
  tolua_function(param_1,&DAT_012eda18,
                 lua_cocos2dx_physics3d_Physics3DSliderConstraint_setRestitutionDirAng);
  tolua_function(param_1,"getDampingLimLin",
                 lua_cocos2dx_physics3d_Physics3DSliderConstraint_getDampingLimLin);
  tolua_function(param_1,"getLowerAngLimit",
                 lua_cocos2dx_physics3d_Physics3DSliderConstraint_getLowerAngLimit);
  tolua_function(param_1,"getRestitutionDirAng",
                 lua_cocos2dx_physics3d_Physics3DSliderConstraint_getRestitutionDirAng);
  tolua_function(param_1,&DAT_012edb3e,
                 lua_cocos2dx_physics3d_Physics3DSliderConstraint_getTargetAngMotorVelocity);
  tolua_function(param_1,"setRestitutionLimLin",
                 lua_cocos2dx_physics3d_Physics3DSliderConstraint_setRestitutionLimLin);
  tolua_function(param_1,"getMaxLinMotorForce",
                 lua_cocos2dx_physics3d_Physics3DSliderConstraint_getMaxLinMotorForce);
  tolua_function(param_1,"setDampingOrthoLin",
                 lua_cocos2dx_physics3d_Physics3DSliderConstraint_setDampingOrthoLin);
  tolua_function(param_1,"setSoftnessOrthoAng",
                 lua_cocos2dx_physics3d_Physics3DSliderConstraint_setSoftnessOrthoAng);
  tolua_function(param_1,"setDampingLimLin",
                 lua_cocos2dx_physics3d_Physics3DSliderConstraint_setDampingLimLin);
  tolua_function(param_1,"setSoftnessDirLin",
                 lua_cocos2dx_physics3d_Physics3DSliderConstraint_setSoftnessDirLin);
  tolua_function(param_1,"setMaxAngMotorForce",
                 lua_cocos2dx_physics3d_Physics3DSliderConstraint_setMaxAngMotorForce);
  tolua_function(param_1,"getSoftnessDirLin",
                 lua_cocos2dx_physics3d_Physics3DSliderConstraint_getSoftnessDirLin);
  tolua_function(param_1,&DAT_012edf4f,
                 lua_cocos2dx_physics3d_Physics3DSliderConstraint_setSoftnessLimAng);
  tolua_function(param_1,"getUseLinearReferenceFrameA",
                 lua_cocos2dx_physics3d_Physics3DSliderConstraint_getUseLinearReferenceFrameA);
  tolua_function(param_1,"create",lua_cocos2dx_physics3d_Physics3DSliderConstraint_create);
  tolua_endmodule(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N7cocos2d25Physics3DSliderConstraintE");
  local_78[0] = local_60;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_012eecb7,(tuple *)local_78);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"cc.Physics3DSliderConstraint",0x1c);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"Physics3DSliderConstraint");
  local_40 = local_78;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_012eecb7,(tuple *)&local_40);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"cc.Physics3DSliderConstraint",0x1c);
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

