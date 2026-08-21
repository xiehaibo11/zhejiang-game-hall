
/* lua_register_cocos2dx_cocosbuilder_CCBReader(lua_State*) */

undefined8 lua_register_cocos2dx_cocosbuilder_CCBReader(lua_State *param_1)

{
  long lVar1;
  long lVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *local_78 [2];
  void *local_68;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_60 [16];
  void *local_50;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **local_40;
  long local_38;
  
                    /* catch() { ... } // from try @ 0092049c with catch @ 00920534 */
  lVar1 = tpidr_el0;
                    /* catch() { ... } // from try @ 009204b4 with catch @ 00920538 */
  local_38 = *(long *)(lVar1 + 0x28);
  tolua_usertype(param_1,"cc.CCBReader");
                    /* catch() { ... } // from try @ 00920468 with catch @ 00920568 */
  tolua_cclass(param_1,"CCBReader","cc.CCBReader",&DAT_012769c7,0);
  tolua_beginmodule(param_1,"CCBReader");
  tolua_function(param_1,"new",lua_cocos2dx_cocosbuilder_CCBReader_constructor);
  tolua_function(param_1,"addOwnerOutletName",lua_cocos2dx_cocosbuilder_CCBReader_addOwnerOutletName
                );
  tolua_function(param_1,"getOwnerCallbackNames",
                 lua_cocos2dx_cocosbuilder_CCBReader_getOwnerCallbackNames);
  tolua_function(param_1,"addDocumentCallbackControlEvents",
                 lua_cocos2dx_cocosbuilder_CCBReader_addDocumentCallbackControlEvents);
  tolua_function(param_1,"setCCBRootPath",lua_cocos2dx_cocosbuilder_CCBReader_setCCBRootPath);
  tolua_function(param_1,"addOwnerOutletNode",lua_cocos2dx_cocosbuilder_CCBReader_addOwnerOutletNode
                );
  tolua_function(param_1,"getOwnerCallbackNodes",
                 lua_cocos2dx_cocosbuilder_CCBReader_getOwnerCallbackNodes);
  tolua_function(param_1,"readSoundKeyframesForSeq",
                 lua_cocos2dx_cocosbuilder_CCBReader_readSoundKeyframesForSeq);
  tolua_function(param_1,"getCCBRootPath",lua_cocos2dx_cocosbuilder_CCBReader_getCCBRootPath);
                    /* try { // try from 00920664 to 00a206af has its CatchHandler @ 00920664
                       catch() { ... } // from try @ 00920664 with catch @ 00920664
                       catch() { ... } // from try @ 009206b4 with catch @ 00920664 */
  tolua_function(param_1,"getOwnerCallbackControlEvents",
                 lua_cocos2dx_cocosbuilder_CCBReader_getOwnerCallbackControlEvents);
  tolua_function(param_1,"getOwnerOutletNodes",
                 lua_cocos2dx_cocosbuilder_CCBReader_getOwnerOutletNodes);
  tolua_function(param_1,"readUTF8",lua_cocos2dx_cocosbuilder_CCBReader_readUTF8);
                    /* try { // try from 009206b0 to 00a206b3 has its CatchHandler @ 00920708 */
                    /* try { // try from 009206b4 to 00a2071b has its CatchHandler @ 00920664 */
  tolua_function(param_1,"addOwnerCallbackControlEvents",
                 lua_cocos2dx_cocosbuilder_CCBReader_addOwnerCallbackControlEvents);
  tolua_function(param_1,"getOwnerOutletNames",
                 lua_cocos2dx_cocosbuilder_CCBReader_getOwnerOutletNames);
  tolua_function(param_1,"setActionManager",lua_cocos2dx_cocosbuilder_CCBReader_setAnimationManager)
  ;
  tolua_function(param_1,"readCallbackKeyframesForSeq",
                 lua_cocos2dx_cocosbuilder_CCBReader_readCallbackKeyframesForSeq);
                    /* catch() { ... } // from try @ 009206b0 with catch @ 00920708 */
  tolua_function(param_1,"getAnimationManagersForNodes",
                 lua_cocos2dx_cocosbuilder_CCBReader_getAnimationManagersForNodes);
                    /* try { // try from 0092071c to 00a207d3 has its CatchHandler @ 0092071c
                       catch() { ... } // from try @ 0092071c with catch @ 0092071c
                       catch() { ... } // from try @ 00920854 with catch @ 0092071c */
  tolua_function(param_1,"getNodesWithAnimationManagers",
                 lua_cocos2dx_cocosbuilder_CCBReader_getNodesWithAnimationManagers);
  tolua_function(param_1,"getActionManager",lua_cocos2dx_cocosbuilder_CCBReader_getAnimationManager)
  ;
  tolua_function(param_1,"setResolutionScale",lua_cocos2dx_cocosbuilder_CCBReader_setResolutionScale
                );
  tolua_endmodule(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N12cocosbuilder9CCBReaderE");
  local_78[0] = local_60;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_012c782d,(tuple *)local_78);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"cc.CCBReader",0xc);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"CCBReader");
                    /* try { // try from 009207d4 to 00a20807 has its CatchHandler @ 009208d4 */
  local_40 = local_78;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_012c782d,(tuple *)&local_40);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"cc.CCBReader",0xc);
                    /* try { // try from 00920808 to 00a2081b has its CatchHandler @ 009208a0 */
  if (((ulong)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (((byte)local_60[0] & 1) != 0) {
                    /* try { // try from 00920820 to 00a20853 has its CatchHandler @ 009208a4 */
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

