
/* lua_register_cocos2dx_3d_Terrain(lua_State*) */

undefined8 lua_register_cocos2dx_3d_Terrain(lua_State *param_1)

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
  tolua_usertype(param_1,"cc.Terrain");
  tolua_cclass(param_1,"Terrain","cc.Terrain","cc.Node",0);
  tolua_beginmodule(param_1,"Terrain");
  tolua_function(param_1,"new",lua_cocos2dx_3d_Terrain_constructor);
  tolua_function(param_1,"initHeightMap",lua_cocos2dx_3d_Terrain_initHeightMap);
  tolua_function(param_1,"setMaxDetailMapAmount",lua_cocos2dx_3d_Terrain_setMaxDetailMapAmount);
  tolua_function(param_1,"setDrawWire",lua_cocos2dx_3d_Terrain_setDrawWire);
  tolua_function(param_1,"getHeightData",lua_cocos2dx_3d_Terrain_getHeightData);
  tolua_function(param_1,"setDetailMap",lua_cocos2dx_3d_Terrain_setDetailMap);
  tolua_function(param_1,"resetHeightMap",lua_cocos2dx_3d_Terrain_resetHeightMap);
  tolua_function(param_1,"setLightDir",lua_cocos2dx_3d_Terrain_setLightDir);
  tolua_function(param_1,"setAlphaMap",lua_cocos2dx_3d_Terrain_setAlphaMap);
  tolua_function(param_1,"setSkirtHeightRatio",lua_cocos2dx_3d_Terrain_setSkirtHeightRatio);
  tolua_function(param_1,"convertToTerrainSpace",lua_cocos2dx_3d_Terrain_convertToTerrainSpace);
                    /* try { // try from 0090957c to 00a095c7 has its CatchHandler @ 0090957c
                       catch() { ... } // from try @ 0090957c with catch @ 0090957c
                       catch() { ... } // from try @ 009095cc with catch @ 0090957c */
  tolua_function(param_1,"initTextures",lua_cocos2dx_3d_Terrain_initTextures);
  tolua_function(param_1,"initProperties",lua_cocos2dx_3d_Terrain_initProperties);
  tolua_function(param_1,"initWithTerrainData",lua_cocos2dx_3d_Terrain_initWithTerrainData);
                    /* try { // try from 009095c8 to 00a095cb has its CatchHandler @ 00909620 */
                    /* try { // try from 009095cc to 00a09633 has its CatchHandler @ 0090957c */
  tolua_function(param_1,"setLODDistance",lua_cocos2dx_3d_Terrain_setLODDistance);
  tolua_function(param_1,"getTerrainSize",lua_cocos2dx_3d_Terrain_getTerrainSize);
  tolua_function(param_1,"getNormal",lua_cocos2dx_3d_Terrain_getNormal);
  tolua_function(param_1,"reload",lua_cocos2dx_3d_Terrain_reload);
                    /* catch() { ... } // from try @ 009095c8 with catch @ 00909620 */
                    /* try { // try from 00909634 to 00a09703 has its CatchHandler @ 00909634
                       catch() { ... } // from try @ 00909634 with catch @ 00909634
                       catch() { ... } // from try @ 00909784 with catch @ 00909634 */
  tolua_function(param_1,"getImageHeight",lua_cocos2dx_3d_Terrain_getImageHeight);
  tolua_function(param_1,"setLightMap",lua_cocos2dx_3d_Terrain_setLightMap);
  tolua_function(param_1,"setIsEnableFrustumCull",lua_cocos2dx_3d_Terrain_setIsEnableFrustumCull);
  tolua_function(param_1,"getMinHeight",lua_cocos2dx_3d_Terrain_getMinHeight);
  tolua_function(param_1,"getMaxHeight",lua_cocos2dx_3d_Terrain_getMaxHeight);
  tolua_endmodule(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N7cocos2d7TerrainE");
  local_78[0] = local_60;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_012b41e3,(tuple *)local_78);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"cc.Terrain",10);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"Terrain");
                    /* try { // try from 00909704 to 00a09737 has its CatchHandler @ 00909804 */
  local_40 = local_78;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_012b41e3,(tuple *)&local_40);
                    /* try { // try from 00909738 to 00a0974b has its CatchHandler @ 009097d0 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"cc.Terrain",10);
  if (((ulong)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
                    /* try { // try from 00909750 to 00a09783 has its CatchHandler @ 009097d4 */
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00909784 to 00a0981f has its CatchHandler @ 00909634 */
  __stack_chk_fail();
}

