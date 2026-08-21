
/* lua_register_dragonbones_Armature(lua_State*) */

undefined8 lua_register_dragonbones_Armature(lua_State *param_1)

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
  tolua_usertype(param_1,"db.Armature");
  tolua_cclass(param_1,"Armature","db.Armature",&DAT_012d22fa,0);
                    /* try { // try from 00955298 to 00a552d3 has its CatchHandler @ 0095534c */
  tolua_beginmodule(param_1,"Armature");
  tolua_function(param_1,"getBone",lua_dragonbones_Armature_getBone);
  tolua_function(param_1,"getSlot",lua_dragonbones_Armature_getSlot);
                    /* try { // try from 009552d4 to 00a55367 has its CatchHandler @ 009551c4 */
  tolua_function(param_1,"getDisplay",lua_dragonbones_Armature_getDisplay);
  tolua_function(param_1,"getCacheFrameRate",lua_dragonbones_Armature_getCacheFrameRate);
  tolua_function(param_1,"getAnimatable",lua_dragonbones_Armature_getAnimatable);
  tolua_function(param_1,"getName",lua_dragonbones_Armature_getName);
  tolua_function(param_1,"dispose",lua_dragonbones_Armature_dispose);
                    /* catch() { ... } // from try @ 00955298 with catch @ 0095534c */
  tolua_function(param_1,"invalidUpdate",lua_dragonbones_Armature_invalidUpdate);
                    /* try { // try from 00955368 to 00a5541f has its CatchHandler @ 00955368
                       catch() { ... } // from try @ 00955368 with catch @ 00955368
                       catch() { ... } // from try @ 0095545c with catch @ 00955368 */
  tolua_function(param_1,"getFlipY",lua_dragonbones_Armature_getFlipY);
  tolua_function(param_1,"getFlipX",lua_dragonbones_Armature_getFlipX);
  tolua_function(param_1,&DAT_012d24d1,lua_dragonbones_Armature_intersectsSegment);
  tolua_function(param_1,"setCacheFrameRate",lua_dragonbones_Armature_setCacheFrameRate);
  tolua_function(param_1,"setFlipY",lua_dragonbones_Armature_setFlipY);
  tolua_function(param_1,"setFlipX",lua_dragonbones_Armature_setFlipX);
  tolua_function(param_1,"getArmatureData",lua_dragonbones_Armature_getArmatureData);
  tolua_function(param_1,&DAT_012d2686,lua_dragonbones_Armature_getClassTypeIndex);
                    /* try { // try from 00955420 to 00a5545b has its CatchHandler @ 009554d4 */
  tolua_function(param_1,"getReplacedTexture",lua_dragonbones_Armature_getReplacedTexture);
  tolua_function(param_1,"getAnimation",lua_dragonbones_Armature_getAnimation);
                    /* try { // try from 0095545c to 00a554ef has its CatchHandler @ 00955368 */
  tolua_function(param_1,"getParent",lua_dragonbones_Armature_getParent);
  tolua_function(param_1,"getEventDispatcher",lua_dragonbones_Armature_getEventDispatcher);
  tolua_function(param_1,"containsPoint",lua_dragonbones_Armature_containsPoint);
  tolua_function(param_1,"getProxy",lua_dragonbones_Armature_getProxy);
  tolua_function(param_1,"getTypeIndex",lua_dragonbones_Armature_getTypeIndex);
  tolua_endmodule(param_1);
                    /* catch() { ... } // from try @ 00955420 with catch @ 009554d4 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N11dragonBones8ArmatureE");
  local_78[0] = local_60;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_012d4529,(tuple *)local_78);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"db.Armature",0xb);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"Armature");
  local_40 = local_78;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_012d4529,(tuple *)&local_40);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"db.Armature",0xb);
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

