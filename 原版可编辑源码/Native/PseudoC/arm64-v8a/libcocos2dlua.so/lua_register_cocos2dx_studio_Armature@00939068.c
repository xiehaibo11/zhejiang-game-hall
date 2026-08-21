
/* lua_register_cocos2dx_studio_Armature(lua_State*) */

undefined8 lua_register_cocos2dx_studio_Armature(lua_State *param_1)

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
                    /* try { // try from 00939090 to 00a390c3 has its CatchHandler @ 00939258 */
  tolua_usertype(param_1,"ccs.Armature");
  tolua_cclass(param_1,"Armature","ccs.Armature","cc.Node",0);
  tolua_beginmodule(param_1,"Armature");
                    /* try { // try from 009390d4 to 00a390f3 has its CatchHandler @ 0093924c */
  tolua_function(param_1,"new",lua_cocos2dx_studio_Armature_constructor);
  tolua_function(param_1,"getBone",lua_cocos2dx_studio_Armature_getBone);
                    /* try { // try from 00939100 to 00a3914f has its CatchHandler @ 0093925c */
  tolua_function(param_1,"changeBoneParent",lua_cocos2dx_studio_Armature_changeBoneParent);
  tolua_function(param_1,"setAnimation",lua_cocos2dx_studio_Armature_setAnimation);
  tolua_function(param_1,"getBoneAtPoint",lua_cocos2dx_studio_Armature_getBoneAtPoint);
  tolua_function(param_1,"getArmatureTransformDirty",
                 lua_cocos2dx_studio_Armature_getArmatureTransformDirty);
                    /* try { // try from 0093916c to 00a39187 has its CatchHandler @ 00939248 */
  tolua_function(param_1,&DAT_012cc674,lua_cocos2dx_studio_Armature_setVersion);
                    /* try { // try from 00939188 to 00a391bf has its CatchHandler @ 00938fdc */
  tolua_function(param_1,"updateOffsetPoint",lua_cocos2dx_studio_Armature_updateOffsetPoint);
  tolua_function(param_1,"getParentBone",lua_cocos2dx_studio_Armature_getParentBone);
  tolua_function(param_1,"removeBone",lua_cocos2dx_studio_Armature_removeBone);
                    /* try { // try from 009391c0 to 00a391d3 has its CatchHandler @ 00939254 */
  tolua_function(param_1,0x12cc76e,lua_cocos2dx_studio_Armature_getBatchNode);
                    /* try { // try from 009391d8 to 00a391eb has its CatchHandler @ 00939258 */
  tolua_function(param_1,"init",lua_cocos2dx_studio_Armature_init);
                    /* try { // try from 009391f0 to 00a39203 has its CatchHandler @ 0093925c */
  tolua_function(param_1,"setParentBone",lua_cocos2dx_studio_Armature_setParentBone);
                    /* try { // try from 00939204 to 00a39277 has its CatchHandler @ 00938fdc */
  tolua_function(param_1,"setBatchNode",lua_cocos2dx_studio_Armature_setBatchNode);
  tolua_function(param_1,"getBlendFunc",lua_cocos2dx_studio_Armature_getBlendFunc);
                    /* catch() { ... } // from try @ 0093916c with catch @ 00939248 */
  tolua_function(param_1,"setArmatureData",lua_cocos2dx_studio_Armature_setArmatureData);
                    /* catch() { ... } // from try @ 009390d4 with catch @ 0093924c */
                    /* catch() { ... } // from try @ 00939060 with catch @ 00939250 */
                    /* catch() { ... } // from try @ 0093903c with catch @ 00939254
                       catch() { ... } // from try @ 009391c0 with catch @ 00939254 */
                    /* catch() { ... } // from try @ 00939090 with catch @ 00939258
                       catch() { ... } // from try @ 009391d8 with catch @ 00939258 */
                    /* catch() { ... } // from try @ 00939100 with catch @ 0093925c
                       catch() { ... } // from try @ 009391f0 with catch @ 0093925c */
  tolua_function(param_1,"addBone",lua_cocos2dx_studio_Armature_addBone);
                    /* try { // try from 00939278 to 00a39323 has its CatchHandler @ 00939278
                       catch() { ... } // from try @ 00939278 with catch @ 00939278
                       catch() { ... } // from try @ 00939408 with catch @ 00939278
                       catch() { ... } // from try @ 00939524 with catch @ 00939278
                       catch() { ... } // from try @ 0093968c with catch @ 00939278
                       catch() { ... } // from try @ 00939890 with catch @ 00939278
                       catch() { ... } // from try @ 00939968 with catch @ 00939278
                       catch() { ... } // from try @ 00939b10 with catch @ 00939278
                       catch() { ... } // from try @ 00939c3c with catch @ 00939278 */
  tolua_function(param_1,"getArmatureData",lua_cocos2dx_studio_Armature_getArmatureData);
  tolua_function(param_1,"getVersion",lua_cocos2dx_studio_Armature_getVersion);
  tolua_function(param_1,"getAnimation",lua_cocos2dx_studio_Armature_getAnimation);
  tolua_function(param_1,"getOffsetPoints",lua_cocos2dx_studio_Armature_getOffsetPoints);
  tolua_function(param_1,"setBlendFunc",lua_cocos2dx_studio_Armature_setBlendFunc);
  tolua_function(param_1,"getBoneDic",lua_cocos2dx_studio_Armature_getBoneDic);
  tolua_function(param_1,"create",lua_cocos2dx_studio_Armature_create);
  tolua_endmodule(param_1);
                    /* try { // try from 00939324 to 00a3933b has its CatchHandler @ 00939cf8 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N10cocostudio8ArmatureE");
  local_78[0] = local_60;
                    /* try { // try from 00939348 to 00a3935f has its CatchHandler @ 00939cc8 */
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_012d0caa,(tuple *)local_78);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"ccs.Armature",0xc);
                    /* try { // try from 00939364 to 00a3937b has its CatchHandler @ 00939c8c */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"Armature");
                    /* try { // try from 00939380 to 00a3939f has its CatchHandler @ 00939c88 */
  local_40 = local_78;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_012d0caa,(tuple *)&local_40);
                    /* try { // try from 009393a4 to 00a393bb has its CatchHandler @ 00939c50 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"ccs.Armature",0xc);
  if (((ulong)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
                    /* try { // try from 009393c0 to 00a393d7 has its CatchHandler @ 00939c40 */
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 009393e8 to 00a39407 has its CatchHandler @ 00939c3c */
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

