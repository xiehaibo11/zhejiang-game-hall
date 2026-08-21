
/* lua_register_cocos2dx_3d_Sprite3D(lua_State*) */

undefined8 lua_register_cocos2dx_3d_Sprite3D(lua_State *param_1)

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
  tolua_usertype(param_1,"cc.Sprite3D");
  tolua_cclass(param_1,"Sprite3D","cc.Sprite3D","cc.Node",0);
  tolua_beginmodule(param_1,"Sprite3D");
  tolua_function(param_1,"setCullFaceEnabled",lua_cocos2dx_3d_Sprite3D_setCullFaceEnabled);
  tolua_function(param_1,"setTexture",lua_cocos2dx_3d_Sprite3D_setTexture);
  tolua_function(param_1,"getLightMask",lua_cocos2dx_3d_Sprite3D_getLightMask);
  tolua_function(param_1,"getMaterial",lua_cocos2dx_3d_Sprite3D_getMaterial);
  tolua_function(param_1,"setCullFace",lua_cocos2dx_3d_Sprite3D_setCullFace);
  tolua_function(param_1,"getMeshes",lua_cocos2dx_3d_Sprite3D_getMeshes);
  tolua_function(param_1,"removeAllAttachNode",lua_cocos2dx_3d_Sprite3D_removeAllAttachNode);
  tolua_function(param_1,"setMaterial",lua_cocos2dx_3d_Sprite3D_setMaterial);
  tolua_function(param_1,"getMesh",lua_cocos2dx_3d_Sprite3D_getMesh);
                    /* try { // try from 00907058 to 00a070a3 has its CatchHandler @ 00907058
                       catch() { ... } // from try @ 00907058 with catch @ 00907058
                       catch() { ... } // from try @ 009070a8 with catch @ 00907058 */
  tolua_function(param_1,"getMeshCount",lua_cocos2dx_3d_Sprite3D_getMeshCount);
  tolua_function(param_1,"getMeshByIndex",lua_cocos2dx_3d_Sprite3D_getMeshByIndex);
  tolua_function(param_1,"isForceDepthWrite",lua_cocos2dx_3d_Sprite3D_isForceDepthWrite);
                    /* try { // try from 009070a4 to 00a070a7 has its CatchHandler @ 00907104 */
                    /* try { // try from 009070a8 to 00a07117 has its CatchHandler @ 00907058 */
  tolua_function(param_1,"getBlendFunc",lua_cocos2dx_3d_Sprite3D_getBlendFunc);
  tolua_function(param_1,"setLightMask",lua_cocos2dx_3d_Sprite3D_setLightMask);
  tolua_function(param_1,"getAttachNode",lua_cocos2dx_3d_Sprite3D_getAttachNode);
  tolua_function(param_1,"setBlendFunc",lua_cocos2dx_3d_Sprite3D_setBlendFunc);
                    /* catch() { ... } // from try @ 009070a4 with catch @ 00907104 */
  tolua_function(param_1,"setForce2DQueue",lua_cocos2dx_3d_Sprite3D_setForce2DQueue);
                    /* try { // try from 00907118 to 00a071e7 has its CatchHandler @ 00907118
                       catch() { ... } // from try @ 00907118 with catch @ 00907118
                       catch() { ... } // from try @ 00907268 with catch @ 00907118 */
  tolua_function(param_1,"genMaterial",lua_cocos2dx_3d_Sprite3D_genMaterial);
  tolua_function(param_1,"removeAttachNode",lua_cocos2dx_3d_Sprite3D_removeAttachNode);
  tolua_function(param_1,"getSkeleton",lua_cocos2dx_3d_Sprite3D_getSkeleton);
  tolua_function(param_1,"setForceDepthWrite",lua_cocos2dx_3d_Sprite3D_setForceDepthWrite);
  tolua_function(param_1,"getMeshByName",lua_cocos2dx_3d_Sprite3D_getMeshByName);
  tolua_function(param_1,"create",lua_cocos2dx_3d_Sprite3D_create);
  tolua_endmodule(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N7cocos2d8Sprite3DE");
  local_78[0] = local_60;
                    /* try { // try from 009071e8 to 00a0721b has its CatchHandler @ 009072e8 */
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_012b41e3,(tuple *)local_78);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"cc.Sprite3D",0xb);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"Sprite3D");
                    /* try { // try from 0090721c to 00a0722f has its CatchHandler @ 009072b4 */
  local_40 = local_78;
                    /* try { // try from 00907234 to 00a07267 has its CatchHandler @ 009072b8 */
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_012b41e3,(tuple *)&local_40);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"cc.Sprite3D",0xb);
  if (((ulong)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (((byte)local_60[0] & 1) != 0) {
                    /* try { // try from 00907268 to 00a07303 has its CatchHandler @ 00907118 */
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

