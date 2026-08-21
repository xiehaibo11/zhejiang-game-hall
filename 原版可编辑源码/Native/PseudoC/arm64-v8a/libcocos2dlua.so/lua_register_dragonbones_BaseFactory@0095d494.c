
/* lua_register_dragonbones_BaseFactory(lua_State*) */

undefined8 lua_register_dragonbones_BaseFactory(lua_State *param_1)

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
  tolua_usertype(param_1,"db.BaseFactory");
  tolua_cclass(param_1,"BaseFactory","db.BaseFactory",&DAT_013c996e,0);
  tolua_beginmodule(param_1,"BaseFactory");
  tolua_function(param_1,"replaceSkin",lua_dragonbones_BaseFactory_replaceSkin);
                    /* try { // try from 0095d51c to 00a5d567 has its CatchHandler @ 0095d51c
                       catch() { ... } // from try @ 0095d51c with catch @ 0095d51c
                       catch() { ... } // from try @ 0095d56c with catch @ 0095d51c */
  tolua_function(param_1,"replaceAnimation",lua_dragonbones_BaseFactory_replaceAnimation);
  tolua_function(param_1,"replaceSlotDisplayList",lua_dragonbones_BaseFactory_replaceSlotDisplayList
                );
  tolua_function(param_1,"getClock",lua_dragonbones_BaseFactory_getClock);
                    /* try { // try from 0095d568 to 00a5d56b has its CatchHandler @ 0095d5a0 */
                    /* try { // try from 0095d56c to 00a5d5b3 has its CatchHandler @ 0095d51c */
  tolua_function(param_1,&LAB_012d38a0,lua_dragonbones_BaseFactory_removeDragonBonesData);
  tolua_function(param_1,"removeTextureAtlasData",lua_dragonbones_BaseFactory_removeTextureAtlasData
                );
  tolua_function(param_1,"parseDragonBonesData",lua_dragonbones_BaseFactory_parseDragonBonesData);
                    /* catch() { ... } // from try @ 0095d568 with catch @ 0095d5a0 */
                    /* try { // try from 0095d5b4 to 00a5d66b has its CatchHandler @ 0095d5b4
                       catch() { ... } // from try @ 0095d5b4 with catch @ 0095d5b4
                       catch() { ... } // from try @ 0095d6ec with catch @ 0095d5b4 */
  tolua_function(param_1,"clear",lua_dragonbones_BaseFactory_clear);
  tolua_function(param_1,"addDragonBonesData",lua_dragonbones_BaseFactory_addDragonBonesData);
  tolua_function(param_1,"buildArmature",lua_dragonbones_BaseFactory_buildArmature);
  tolua_function(param_1,&DAT_012d3b5b,lua_dragonbones_BaseFactory_addTextureAtlasData);
  tolua_function(param_1,"getArmatureData",lua_dragonbones_BaseFactory_getArmatureData);
  tolua_function(param_1,"replaceSlotDisplay",lua_dragonbones_BaseFactory_replaceSlotDisplay);
  tolua_function(param_1,"changeSkin",lua_dragonbones_BaseFactory_changeSkin);
  tolua_function(param_1,"replaceDisplay",lua_dragonbones_BaseFactory_replaceDisplay);
                    /* try { // try from 0095d66c to 00a5d69f has its CatchHandler @ 0095d76c */
  tolua_function(param_1,"getDragonBonesData",lua_dragonbones_BaseFactory_getDragonBonesData);
  tolua_endmodule(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N11dragonBones11BaseFactoryE");
                    /* try { // try from 0095d6a0 to 00a5d6b3 has its CatchHandler @ 0095d738 */
  local_78[0] = local_60;
                    /* try { // try from 0095d6b8 to 00a5d6eb has its CatchHandler @ 0095d73c */
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_012d4529,(tuple *)local_78);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"db.BaseFactory",0xe);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"BaseFactory");
                    /* try { // try from 0095d6ec to 00a5d787 has its CatchHandler @ 0095d5b4 */
  local_40 = local_78;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_012d4529,(tuple *)&local_40);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"db.BaseFactory",0xe);
  if (((ulong)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (((byte)local_60[0] & 1) != 0) {
                    /* catch() { ... } // from try @ 0095d6a0 with catch @ 0095d738 */
    operator_delete(local_50);
  }
                    /* catch() { ... } // from try @ 0095d6b8 with catch @ 0095d73c */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

