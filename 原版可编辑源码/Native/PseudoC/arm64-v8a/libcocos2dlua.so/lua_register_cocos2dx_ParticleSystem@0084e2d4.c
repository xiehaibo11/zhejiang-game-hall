
/* lua_register_cocos2dx_ParticleSystem(lua_State*) */

undefined8 lua_register_cocos2dx_ParticleSystem(lua_State *param_1)

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
  tolua_usertype(param_1,"cc.ParticleSystem");
  tolua_cclass(param_1,"ParticleSystem","cc.ParticleSystem","cc.Node",0);
  tolua_beginmodule(param_1,"ParticleSystem");
  tolua_function(param_1,"new",lua_cocos2dx_ParticleSystem_constructor);
  tolua_function(param_1,"getStartSizeVar",lua_cocos2dx_ParticleSystem_getStartSizeVar);
  tolua_function(param_1,"getTexture",lua_cocos2dx_ParticleSystem_getTexture);
  tolua_function(param_1,"isFull",lua_cocos2dx_ParticleSystem_isFull);
  tolua_function(param_1,0x12cc76e,lua_cocos2dx_ParticleSystem_getBatchNode);
  tolua_function(param_1,"getStartColor",lua_cocos2dx_ParticleSystem_getStartColor);
  tolua_function(param_1,"getPositionType",lua_cocos2dx_ParticleSystem_getPositionType);
  tolua_function(param_1,"setPosVar",lua_cocos2dx_ParticleSystem_setPosVar);
  tolua_function(param_1,"getEndSpin",lua_cocos2dx_ParticleSystem_getEndSpin);
  tolua_function(param_1,"setRotatePerSecondVar",lua_cocos2dx_ParticleSystem_setRotatePerSecondVar);
  tolua_function(param_1,"setSourcePositionCompatible",
                 lua_cocos2dx_ParticleSystem_setSourcePositionCompatible);
  tolua_function(param_1,"getStartSpinVar",lua_cocos2dx_ParticleSystem_getStartSpinVar);
  tolua_function(param_1,"getRadialAccelVar",lua_cocos2dx_ParticleSystem_getRadialAccelVar);
  tolua_function(param_1,"getEndSizeVar",lua_cocos2dx_ParticleSystem_getEndSizeVar);
  tolua_function(param_1,"setTangentialAccel",lua_cocos2dx_ParticleSystem_setTangentialAccel);
  tolua_function(param_1,"getRadialAccel",lua_cocos2dx_ParticleSystem_getRadialAccel);
  tolua_function(param_1,"setStartRadius",lua_cocos2dx_ParticleSystem_setStartRadius);
  tolua_function(param_1,"setRotatePerSecond",lua_cocos2dx_ParticleSystem_setRotatePerSecond);
  tolua_function(param_1,"setEndSize",lua_cocos2dx_ParticleSystem_setEndSize);
  tolua_function(param_1,"getGravity",lua_cocos2dx_ParticleSystem_getGravity);
  tolua_function(param_1,"resumeEmissions",lua_cocos2dx_ParticleSystem_resumeEmissions);
  tolua_function(param_1,"getTangentialAccel",lua_cocos2dx_ParticleSystem_getTangentialAccel);
  tolua_function(param_1,"setEndRadius",lua_cocos2dx_ParticleSystem_setEndRadius);
  tolua_function(param_1,"getSpeed",lua_cocos2dx_ParticleSystem_getSpeed);
  tolua_function(param_1,"pauseEmissions",lua_cocos2dx_ParticleSystem_pauseEmissions);
  tolua_function(param_1,"getAngle",lua_cocos2dx_ParticleSystem_getAngle);
  tolua_function(param_1,"setEndColor",lua_cocos2dx_ParticleSystem_setEndColor);
  tolua_function(param_1,"setStartSpin",lua_cocos2dx_ParticleSystem_setStartSpin);
  tolua_function(param_1,"setDuration",lua_cocos2dx_ParticleSystem_setDuration);
  tolua_function(param_1,"initWithTotalParticles",lua_cocos2dx_ParticleSystem_initWithTotalParticles
                );
  tolua_function(param_1,"addParticles",lua_cocos2dx_ParticleSystem_addParticles);
  tolua_function(param_1,"setTexture",lua_cocos2dx_ParticleSystem_setTexture);
  tolua_function(param_1,"getPosVar",lua_cocos2dx_ParticleSystem_getPosVar);
  tolua_function(param_1,"updateWithNoTime",lua_cocos2dx_ParticleSystem_updateWithNoTime);
  tolua_function(param_1,"isBlendAdditive",lua_cocos2dx_ParticleSystem_isBlendAdditive);
  tolua_function(param_1,"getSpeedVar",lua_cocos2dx_ParticleSystem_getSpeedVar);
  tolua_function(param_1,"setPositionType",lua_cocos2dx_ParticleSystem_setPositionType);
  tolua_function(param_1,"stopSystem",lua_cocos2dx_ParticleSystem_stopSystem);
  tolua_function(param_1,"getSourcePosition",lua_cocos2dx_ParticleSystem_getSourcePosition);
  tolua_function(param_1,"setLifeVar",lua_cocos2dx_ParticleSystem_setLifeVar);
  tolua_function(param_1,"setTotalParticles",lua_cocos2dx_ParticleSystem_setTotalParticles);
  tolua_function(param_1,"setEndColorVar",lua_cocos2dx_ParticleSystem_setEndColorVar);
  tolua_function(param_1,"getAtlasIndex",lua_cocos2dx_ParticleSystem_getAtlasIndex);
  tolua_function(param_1,"getStartSize",lua_cocos2dx_ParticleSystem_getStartSize);
  tolua_function(param_1,"setStartSpinVar",lua_cocos2dx_ParticleSystem_setStartSpinVar);
  tolua_function(param_1,"resetSystem",lua_cocos2dx_ParticleSystem_resetSystem);
  tolua_function(param_1,"setAtlasIndex",lua_cocos2dx_ParticleSystem_setAtlasIndex);
  tolua_function(param_1,"setTangentialAccelVar",lua_cocos2dx_ParticleSystem_setTangentialAccelVar);
  tolua_function(param_1,"setEndRadiusVar",lua_cocos2dx_ParticleSystem_setEndRadiusVar);
  tolua_function(param_1,"getEndRadius",lua_cocos2dx_ParticleSystem_getEndRadius);
  tolua_function(param_1,"isActive",lua_cocos2dx_ParticleSystem_isActive);
  tolua_function(param_1,"setRadialAccelVar",lua_cocos2dx_ParticleSystem_setRadialAccelVar);
  tolua_function(param_1,"setStartSize",lua_cocos2dx_ParticleSystem_setStartSize);
  tolua_function(param_1,"setSpeed",lua_cocos2dx_ParticleSystem_setSpeed);
  tolua_function(param_1,"getStartSpin",lua_cocos2dx_ParticleSystem_getStartSpin);
  tolua_function(param_1,"getResourceFile",lua_cocos2dx_ParticleSystem_getResourceFile);
  tolua_function(param_1,"getRotatePerSecond",lua_cocos2dx_ParticleSystem_getRotatePerSecond);
  tolua_function(param_1,"setEmitterMode",lua_cocos2dx_ParticleSystem_setEmitterMode);
  tolua_function(param_1,"getDuration",lua_cocos2dx_ParticleSystem_getDuration);
  tolua_function(param_1,"setSourcePosition",lua_cocos2dx_ParticleSystem_setSourcePosition);
  tolua_function(param_1,"stop",lua_cocos2dx_ParticleSystem_stop);
  tolua_function(param_1,"updateParticleQuads",lua_cocos2dx_ParticleSystem_updateParticleQuads);
  tolua_function(param_1,"getEndSpinVar",lua_cocos2dx_ParticleSystem_getEndSpinVar);
  tolua_function(param_1,"setBlendAdditive",lua_cocos2dx_ParticleSystem_setBlendAdditive);
  tolua_function(param_1,"setLife",lua_cocos2dx_ParticleSystem_setLife);
  tolua_function(param_1,"setAngleVar",lua_cocos2dx_ParticleSystem_setAngleVar);
  tolua_function(param_1,"setRotationIsDir",lua_cocos2dx_ParticleSystem_setRotationIsDir);
  tolua_function(param_1,"start",lua_cocos2dx_ParticleSystem_start);
  tolua_function(param_1,"setEndSizeVar",lua_cocos2dx_ParticleSystem_setEndSizeVar);
  tolua_function(param_1,"setAngle",lua_cocos2dx_ParticleSystem_setAngle);
  tolua_function(param_1,"setBatchNode",lua_cocos2dx_ParticleSystem_setBatchNode);
  tolua_function(param_1,"getTangentialAccelVar",lua_cocos2dx_ParticleSystem_getTangentialAccelVar);
  tolua_function(param_1,"getEmitterMode",lua_cocos2dx_ParticleSystem_getEmitterMode);
  tolua_function(param_1,"setEndSpinVar",lua_cocos2dx_ParticleSystem_setEndSpinVar);
  tolua_function(param_1,"initWithFile",lua_cocos2dx_ParticleSystem_initWithFile);
  tolua_function(param_1,"getAngleVar",lua_cocos2dx_ParticleSystem_getAngleVar);
  tolua_function(param_1,"setStartColor",lua_cocos2dx_ParticleSystem_setStartColor);
  tolua_function(param_1,"getRotatePerSecondVar",lua_cocos2dx_ParticleSystem_getRotatePerSecondVar);
  tolua_function(param_1,"getEndSize",lua_cocos2dx_ParticleSystem_getEndSize);
  tolua_function(param_1,"getLife",lua_cocos2dx_ParticleSystem_getLife);
  tolua_function(param_1,"isPaused",lua_cocos2dx_ParticleSystem_isPaused);
  tolua_function(param_1,"setSpeedVar",lua_cocos2dx_ParticleSystem_setSpeedVar);
  tolua_function(param_1,"setAutoRemoveOnFinish",lua_cocos2dx_ParticleSystem_setAutoRemoveOnFinish);
  tolua_function(param_1,"setGravity",lua_cocos2dx_ParticleSystem_setGravity);
  tolua_function(param_1,"postStep",lua_cocos2dx_ParticleSystem_postStep);
  tolua_function(param_1,"setEmissionRate",lua_cocos2dx_ParticleSystem_setEmissionRate);
  tolua_function(param_1,"getEndColorVar",lua_cocos2dx_ParticleSystem_getEndColorVar);
  tolua_function(param_1,"getRotationIsDir",lua_cocos2dx_ParticleSystem_getRotationIsDir);
  tolua_function(param_1,"getEmissionRate",lua_cocos2dx_ParticleSystem_getEmissionRate);
  tolua_function(param_1,"getEndColor",lua_cocos2dx_ParticleSystem_getEndColor);
  tolua_function(param_1,"getLifeVar",lua_cocos2dx_ParticleSystem_getLifeVar);
  tolua_function(param_1,"setStartSizeVar",lua_cocos2dx_ParticleSystem_setStartSizeVar);
  tolua_function(param_1,"getStartRadius",lua_cocos2dx_ParticleSystem_getStartRadius);
  tolua_function(param_1,"getParticleCount",lua_cocos2dx_ParticleSystem_getParticleCount);
  tolua_function(param_1,"getStartRadiusVar",lua_cocos2dx_ParticleSystem_getStartRadiusVar);
  tolua_function(param_1,"getBlendFunc",lua_cocos2dx_ParticleSystem_getBlendFunc);
  tolua_function(param_1,"setStartColorVar",lua_cocos2dx_ParticleSystem_setStartColorVar);
  tolua_function(param_1,"setEndSpin",lua_cocos2dx_ParticleSystem_setEndSpin);
  tolua_function(param_1,"setRadialAccel",lua_cocos2dx_ParticleSystem_setRadialAccel);
  tolua_function(param_1,"initWithDictionary",lua_cocos2dx_ParticleSystem_initWithDictionary);
  tolua_function(param_1,"isAutoRemoveOnFinish",lua_cocos2dx_ParticleSystem_isAutoRemoveOnFinish);
  tolua_function(param_1,"isSourcePositionCompatible",
                 lua_cocos2dx_ParticleSystem_isSourcePositionCompatible);
  tolua_function(param_1,"getTotalParticles",lua_cocos2dx_ParticleSystem_getTotalParticles);
  tolua_function(param_1,"setStartRadiusVar",lua_cocos2dx_ParticleSystem_setStartRadiusVar);
  tolua_function(param_1,"setBlendFunc",lua_cocos2dx_ParticleSystem_setBlendFunc);
  tolua_function(param_1,"getEndRadiusVar",lua_cocos2dx_ParticleSystem_getEndRadiusVar);
  tolua_function(param_1,"getStartColorVar",lua_cocos2dx_ParticleSystem_getStartColorVar);
  tolua_function(param_1,"create",lua_cocos2dx_ParticleSystem_create);
  tolua_function(param_1,"createWithTotalParticles",
                 lua_cocos2dx_ParticleSystem_createWithTotalParticles);
  tolua_function(param_1,"getAllParticleSystems",lua_cocos2dx_ParticleSystem_getAllParticleSystems);
  tolua_endmodule(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N7cocos2d14ParticleSystemE");
  local_78[0] = local_60;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_01297afe,(tuple *)local_78);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"cc.ParticleSystem",0x11);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"ParticleSystem");
  local_40 = local_78;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_01297afe,(tuple *)&local_40);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"cc.ParticleSystem",0x11);
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

