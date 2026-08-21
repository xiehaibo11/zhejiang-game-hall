
/* lua_register_cocos2dx_extension_PUParticleSystem3D(lua_State*) */

undefined8 lua_register_cocos2dx_extension_PUParticleSystem3D(lua_State *param_1)

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
  tolua_usertype(param_1,"cc.PUParticleSystem3D");
  tolua_cclass(param_1,"PUParticleSystem3D","cc.PUParticleSystem3D","cc.ParticleSystem3D",0);
  tolua_beginmodule(param_1,"PUParticleSystem3D");
  tolua_function(param_1,"new",lua_cocos2dx_extension_PUParticleSystem3D_constructor);
  tolua_function(param_1,"initWithFilePath",
                 lua_cocos2dx_extension_PUParticleSystem3D_initWithFilePath);
  tolua_function(param_1,"getParticleSystemScaleVelocity",
                 lua_cocos2dx_extension_PUParticleSystem3D_getParticleSystemScaleVelocity);
  tolua_function(param_1,"setEmittedSystemQuota",
                 lua_cocos2dx_extension_PUParticleSystem3D_setEmittedSystemQuota);
  tolua_function(param_1,"getDefaultDepth",lua_cocos2dx_extension_PUParticleSystem3D_getDefaultDepth
                );
  tolua_function(param_1,"getEmittedSystemQuota",
                 lua_cocos2dx_extension_PUParticleSystem3D_getEmittedSystemQuota);
  tolua_function(param_1,&DAT_012e891e,
                 lua_cocos2dx_extension_PUParticleSystem3D_initWithFilePathAndMaterialPath);
  tolua_function(param_1,"clearAllParticles",
                 lua_cocos2dx_extension_PUParticleSystem3D_clearAllParticles);
  tolua_function(param_1,"getMaterialName",lua_cocos2dx_extension_PUParticleSystem3D_getMaterialName
                );
  tolua_function(param_1,"calulateRotationOffset",
                 lua_cocos2dx_extension_PUParticleSystem3D_calulateRotationOffset);
  tolua_function(param_1,"getMaxVelocity",lua_cocos2dx_extension_PUParticleSystem3D_getMaxVelocity);
  tolua_function(param_1,"forceUpdate",lua_cocos2dx_extension_PUParticleSystem3D_forceUpdate);
  tolua_function(param_1,"getTimeElapsedSinceStart",
                 lua_cocos2dx_extension_PUParticleSystem3D_getTimeElapsedSinceStart);
  tolua_function(param_1,"removeAllBehaviourTemplate",
                 lua_cocos2dx_extension_PUParticleSystem3D_removeAllBehaviourTemplate);
  tolua_function(param_1,"getEmittedEmitterQuota",
                 lua_cocos2dx_extension_PUParticleSystem3D_getEmittedEmitterQuota);
  tolua_function(param_1,"forceEmission",lua_cocos2dx_extension_PUParticleSystem3D_forceEmission);
  tolua_function(param_1,"addListener",lua_cocos2dx_extension_PUParticleSystem3D_addListener);
  tolua_function(param_1,"isMarkedForEmission",
                 lua_cocos2dx_extension_PUParticleSystem3D_isMarkedForEmission);
  tolua_function(param_1,"getDefaultWidth",lua_cocos2dx_extension_PUParticleSystem3D_getDefaultWidth
                );
  tolua_function(param_1,"setEmittedEmitterQuota",
                 lua_cocos2dx_extension_PUParticleSystem3D_setEmittedEmitterQuota);
  tolua_function(param_1,"setMarkedForEmission",
                 lua_cocos2dx_extension_PUParticleSystem3D_setMarkedForEmission);
  tolua_function(param_1,"clone",lua_cocos2dx_extension_PUParticleSystem3D_clone);
  tolua_function(param_1,"addEmitter",lua_cocos2dx_extension_PUParticleSystem3D_addEmitter);
  tolua_function(param_1,"addBehaviourTemplate",
                 lua_cocos2dx_extension_PUParticleSystem3D_addBehaviourTemplate);
  tolua_function(param_1,"setDefaultWidth",lua_cocos2dx_extension_PUParticleSystem3D_setDefaultWidth
                );
  tolua_function(param_1,"copyAttributesTo",
                 lua_cocos2dx_extension_PUParticleSystem3D_copyAttributesTo);
  tolua_function(param_1,"setMaterialName",lua_cocos2dx_extension_PUParticleSystem3D_setMaterialName
                );
  tolua_function(param_1,"getParentParticleSystem",
                 lua_cocos2dx_extension_PUParticleSystem3D_getParentParticleSystem);
  tolua_function(param_1,"removeListener",lua_cocos2dx_extension_PUParticleSystem3D_removeListener);
  tolua_function(param_1,"setMaxVelocity",lua_cocos2dx_extension_PUParticleSystem3D_setMaxVelocity);
  tolua_function(param_1,"getDefaultHeight",
                 lua_cocos2dx_extension_PUParticleSystem3D_getDefaultHeight);
  tolua_function(param_1,"getDerivedPosition",
                 lua_cocos2dx_extension_PUParticleSystem3D_getDerivedPosition);
  tolua_function(param_1,"rotationOffset",lua_cocos2dx_extension_PUParticleSystem3D_rotationOffset);
  tolua_function(param_1,"removeAllEmitter",
                 lua_cocos2dx_extension_PUParticleSystem3D_removeAllEmitter);
  tolua_function(param_1,"setParticleSystemScaleVelocity",
                 lua_cocos2dx_extension_PUParticleSystem3D_setParticleSystemScaleVelocity);
  tolua_function(param_1,"getDerivedScale",lua_cocos2dx_extension_PUParticleSystem3D_getDerivedScale
                );
  tolua_function(param_1,"setDefaultHeight",
                 lua_cocos2dx_extension_PUParticleSystem3D_setDefaultHeight);
  tolua_function(param_1,"removeAllListener",
                 lua_cocos2dx_extension_PUParticleSystem3D_removeAllListener);
  tolua_function(param_1,"initSystem",lua_cocos2dx_extension_PUParticleSystem3D_initSystem);
                    /* try { // try from 009b56b4 to 00ab5713 has its CatchHandler @ 009b56b4
                       catch() { ... } // from try @ 009b56b4 with catch @ 009b56b4
                       catch() { ... } // from try @ 009b5748 with catch @ 009b56b4
                       catch() { ... } // from try @ 009b579c with catch @ 009b56b4 */
  tolua_function(param_1,&LAB_012e94fc,lua_cocos2dx_extension_PUParticleSystem3D_makeParticleLocal);
  tolua_function(param_1,"removerAllObserver",
                 lua_cocos2dx_extension_PUParticleSystem3D_removerAllObserver);
  tolua_function(param_1,"setDefaultDepth",lua_cocos2dx_extension_PUParticleSystem3D_setDefaultDepth
                );
  tolua_function(param_1,"addObserver",lua_cocos2dx_extension_PUParticleSystem3D_addObserver);
                    /* try { // try from 009b5714 to 00ab5723 has its CatchHandler @ 009b57dc */
  tolua_function(param_1,"create",lua_cocos2dx_extension_PUParticleSystem3D_create);
  tolua_endmodule(param_1);
                    /* try { // try from 009b5728 to 00ab5747 has its CatchHandler @ 009b57e0 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N7cocos2d18PUParticleSystem3DE");
                    /* try { // try from 009b5748 to 00ab5787 has its CatchHandler @ 009b56b4 */
  local_78[0] = local_60;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_012e96f0,(tuple *)local_78);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"cc.PUParticleSystem3D",0x15);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"PUParticleSystem3D");
                    /* try { // try from 009b5788 to 00ab579b has its CatchHandler @ 009b57d8 */
                    /* try { // try from 009b579c to 00ab57fb has its CatchHandler @ 009b56b4 */
  local_40 = local_78;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_012e96f0,(tuple *)&local_40);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"cc.PUParticleSystem3D",0x15);
  if (((ulong)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (((byte)local_60[0] & 1) != 0) {
                    /* catch() { ... } // from try @ 009b5788 with catch @ 009b57d8 */
                    /* catch() { ... } // from try @ 009b5714 with catch @ 009b57dc */
    operator_delete(local_50);
  }
                    /* catch() { ... } // from try @ 009b5728 with catch @ 009b57e0 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

