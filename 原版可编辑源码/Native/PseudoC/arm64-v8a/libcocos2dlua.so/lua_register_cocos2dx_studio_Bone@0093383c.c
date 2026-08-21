
/* lua_register_cocos2dx_studio_Bone(lua_State*) */

undefined8 lua_register_cocos2dx_studio_Bone(lua_State *param_1)

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
                    /* try { // try from 00933868 to 00a3389b has its CatchHandler @ 00933968 */
  tolua_usertype(param_1,"ccs.Bone");
  tolua_cclass(param_1,"Bone","ccs.Bone","cc.Node",0);
                    /* try { // try from 0093389c to 00a338af has its CatchHandler @ 00933934 */
  tolua_beginmodule(param_1,"Bone");
                    /* try { // try from 009338b4 to 00a338e7 has its CatchHandler @ 00933938 */
  tolua_function(param_1,"new",lua_cocos2dx_studio_Bone_constructor);
  tolua_function(param_1,"isTransformDirty",lua_cocos2dx_studio_Bone_isTransformDirty);
  tolua_function(param_1,"setBlendFunc",lua_cocos2dx_studio_Bone_setBlendFunc);
                    /* try { // try from 009338e8 to 00a33983 has its CatchHandler @ 00933798 */
  tolua_function(param_1,"isIgnoreMovementBoneData",
                 lua_cocos2dx_studio_Bone_isIgnoreMovementBoneData);
  tolua_function(param_1,"updateZOrder",lua_cocos2dx_studio_Bone_updateZOrder);
  tolua_function(param_1,"getDisplayRenderNode",lua_cocos2dx_studio_Bone_getDisplayRenderNode);
                    /* catch() { ... } // from try @ 0093389c with catch @ 00933934 */
                    /* catch() { ... } // from try @ 009338b4 with catch @ 00933938 */
  tolua_function(param_1,"isBlendDirty",lua_cocos2dx_studio_Bone_isBlendDirty);
  tolua_function(param_1,"addChildBone",lua_cocos2dx_studio_Bone_addChildBone);
                    /* catch() { ... } // from try @ 00933868 with catch @ 00933968 */
  tolua_function(param_1,"getWorldInfo",lua_cocos2dx_studio_Bone_getWorldInfo);
                    /* try { // try from 00933984 to 00a339d7 has its CatchHandler @ 00933984
                       catch() { ... } // from try @ 00933984 with catch @ 00933984
                       catch() { ... } // from try @ 00933a80 with catch @ 00933984
                       catch() { ... } // from try @ 00933ac8 with catch @ 00933984 */
  tolua_function(param_1,"getTween",lua_cocos2dx_studio_Bone_getTween);
  tolua_function(param_1,"getParentBone",lua_cocos2dx_studio_Bone_getParentBone);
  tolua_function(param_1,"updateColor",lua_cocos2dx_studio_Bone_updateColor);
  tolua_function(param_1,"setTransformDirty",lua_cocos2dx_studio_Bone_setTransformDirty);
                    /* try { // try from 009339d8 to 00a33a43 has its CatchHandler @ 00933b10 */
  tolua_function(param_1,"getDisplayRenderNodeType",
                 lua_cocos2dx_studio_Bone_getDisplayRenderNodeType);
  tolua_function(param_1,"removeDisplay",lua_cocos2dx_studio_Bone_removeDisplay);
  tolua_function(param_1,"setBoneData",lua_cocos2dx_studio_Bone_setBoneData);
  tolua_function(param_1,"init",lua_cocos2dx_studio_Bone_init);
  tolua_function(param_1,"setParentBone",lua_cocos2dx_studio_Bone_setParentBone);
  tolua_function(param_1,"addDisplay",lua_cocos2dx_studio_Bone_addDisplay);
                    /* try { // try from 00933a68 to 00a33a7f has its CatchHandler @ 00933b0c */
  tolua_function(param_1,"getBlendFunc",lua_cocos2dx_studio_Bone_getBlendFunc);
                    /* try { // try from 00933a80 to 00a33ab3 has its CatchHandler @ 00933984 */
  tolua_function(param_1,"removeFromParent",lua_cocos2dx_studio_Bone_removeFromParent);
  tolua_function(param_1,&DAT_012cb532,lua_cocos2dx_studio_Bone_getColliderDetector);
                    /* try { // try from 00933ab4 to 00a33ac7 has its CatchHandler @ 00933b10 */
  tolua_function(param_1,"getChildArmature",lua_cocos2dx_studio_Bone_getChildArmature);
                    /* try { // try from 00933ac8 to 00a33b2b has its CatchHandler @ 00933984 */
  tolua_function(param_1,&DAT_012cb569,lua_cocos2dx_studio_Bone_getTweenData);
  tolua_function(param_1,&DAT_012cb57f,lua_cocos2dx_studio_Bone_changeDisplayWithIndex);
                    /* catch() { ... } // from try @ 00933a68 with catch @ 00933b0c */
  tolua_function(param_1,"changeDisplayWithName",lua_cocos2dx_studio_Bone_changeDisplayWithName);
                    /* catch() { ... } // from try @ 009339d8 with catch @ 00933b10
                       catch() { ... } // from try @ 00933ab4 with catch @ 00933b10 */
  tolua_function(param_1,"setArmature",lua_cocos2dx_studio_Bone_setArmature);
                    /* try { // try from 00933b2c to 00a33b6b has its CatchHandler @ 00933b2c
                       catch() { ... } // from try @ 00933b2c with catch @ 00933b2c
                       catch() { ... } // from try @ 00933c24 with catch @ 00933b2c
                       catch() { ... } // from try @ 00933ca8 with catch @ 00933b2c */
  tolua_function(param_1,"setBlendDirty",lua_cocos2dx_studio_Bone_setBlendDirty);
  tolua_function(param_1,"removeChildBone",lua_cocos2dx_studio_Bone_removeChildBone);
                    /* try { // try from 00933b6c to 00a33bd7 has its CatchHandler @ 00933cc0 */
  tolua_function(param_1,"setChildArmature",lua_cocos2dx_studio_Bone_setChildArmature);
  tolua_function(param_1,"getNodeToArmatureTransform",
                 lua_cocos2dx_studio_Bone_getNodeToArmatureTransform);
  tolua_function(param_1,"getDisplayManager",lua_cocos2dx_studio_Bone_getDisplayManager);
  tolua_function(param_1,0x12cb81a,lua_cocos2dx_studio_Bone_getArmature);
  tolua_function(param_1,"getBoneData",lua_cocos2dx_studio_Bone_getBoneData);
  tolua_function(param_1,"create",lua_cocos2dx_studio_Bone_create);
  tolua_endmodule(param_1);
                    /* try { // try from 00933bfc to 00a33c23 has its CatchHandler @ 00933cbc */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N10cocostudio4BoneE");
  local_78[0] = local_60;
                    /* try { // try from 00933c24 to 00a33c4b has its CatchHandler @ 00933b2c */
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_012d0caa,(tuple *)local_78);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"ccs.Bone",8);
                    /* try { // try from 00933c4c to 00a33c5f has its CatchHandler @ 00933cc0 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"Bone");
  local_40 = local_78;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_012d0caa,(tuple *)&local_40);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"ccs.Bone",8);
  if (((ulong)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
                    /* try { // try from 00933ca0 to 00a33ca7 has its CatchHandler @ 00933cbc */
  if (((byte)local_60[0] & 1) != 0) {
                    /* try { // try from 00933ca8 to 00a33cdb has its CatchHandler @ 00933b2c */
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 00933bfc with catch @ 00933cbc
                       catch() { ... } // from try @ 00933ca0 with catch @ 00933cbc */
                    /* catch() { ... } // from try @ 00933b6c with catch @ 00933cc0
                       catch() { ... } // from try @ 00933c4c with catch @ 00933cc0 */
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

