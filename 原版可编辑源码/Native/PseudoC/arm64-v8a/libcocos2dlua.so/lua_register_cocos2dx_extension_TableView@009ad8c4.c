
/* lua_register_cocos2dx_extension_TableView(lua_State*) */

undefined8 lua_register_cocos2dx_extension_TableView(lua_State *param_1)

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
                    /* catch() { ... } // from try @ 009ad894 with catch @ 009ad8e4 */
                    /* catch() { ... } // from try @ 009ad708 with catch @ 009ad8e8 */
  tolua_usertype(param_1,"cc.TableView");
                    /* catch() { ... } // from try @ 009ad77c with catch @ 009ad904 */
                    /* catch() { ... } // from try @ 009ad74c with catch @ 009ad908 */
  tolua_cclass(param_1,"TableView","cc.TableView","cc.ScrollView",0);
  tolua_beginmodule(param_1,"TableView");
                    /* try { // try from 009ad92c to 00aad9bf has its CatchHandler @ 009ad92c
                       catch() { ... } // from try @ 009ad92c with catch @ 009ad92c
                       catch() { ... } // from try @ 009ad9cc with catch @ 009ad92c */
  tolua_function(param_1,"new",lua_cocos2dx_extension_TableView_constructor);
  tolua_function(param_1,"updateCellAtIndex",lua_cocos2dx_extension_TableView_updateCellAtIndex);
  tolua_function(param_1,&DAT_012e7476,lua_cocos2dx_extension_TableView_setVerticalFillOrder);
  tolua_function(param_1,"scrollViewDidZoom",lua_cocos2dx_extension_TableView_scrollViewDidZoom);
  tolua_function(param_1,"_updateContentSize",lua_cocos2dx_extension_TableView__updateContentSize);
  tolua_function(param_1,&DAT_012e7580,lua_cocos2dx_extension_TableView_getVerticalFillOrder);
                    /* try { // try from 009ad9c0 to 00aad9cb has its CatchHandler @ 009ada24 */
                    /* try { // try from 009ad9cc to 00aada3f has its CatchHandler @ 009ad92c */
  tolua_function(param_1,0x12e75a2,lua_cocos2dx_extension_TableView_removeCellAtIndex);
  tolua_function(param_1,&DAT_012e7614,lua_cocos2dx_extension_TableView_initWithViewSize);
  tolua_function(param_1,"scrollViewDidScroll",lua_cocos2dx_extension_TableView_scrollViewDidScroll)
  ;
  tolua_function(param_1,"reloadData",lua_cocos2dx_extension_TableView_reloadData);
                    /* catch() { ... } // from try @ 009ad9c0 with catch @ 009ada24 */
  tolua_function(param_1,"insertCellAtIndex",lua_cocos2dx_extension_TableView_insertCellAtIndex);
                    /* try { // try from 009ada40 to 00aadaf3 has its CatchHandler @ 009ada40
                       catch() { ... } // from try @ 009ada40 with catch @ 009ada40
                       catch() { ... } // from try @ 009adafc with catch @ 009ada40
                       catch() { ... } // from try @ 009adb48 with catch @ 009ada40
                       catch() { ... } // from try @ 009adb74 with catch @ 009ada40
                       catch() { ... } // from try @ 009adbd4 with catch @ 009ada40
                       catch() { ... } // from try @ 009adc50 with catch @ 009ada40 */
  tolua_function(param_1,"cellAtIndex",lua_cocos2dx_extension_TableView_cellAtIndex);
  tolua_function(param_1,0x12e77ea,lua_cocos2dx_extension_TableView_dequeueCell);
  tolua_endmodule(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N7cocos2d9extension9TableViewE");
  local_78[0] = local_60;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_012e96f0,(tuple *)local_78);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"cc.TableView",0xc);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"TableView");
  local_40 = local_78;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_012e96f0,(tuple *)&local_40);
                    /* try { // try from 009adaf4 to 00aadafb has its CatchHandler @ 009adcd0 */
                    /* try { // try from 009adafc to 00aadb37 has its CatchHandler @ 009ada40 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"cc.TableView",0xc);
  if (((ulong)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 009adb38 to 00aadb47 has its CatchHandler @ 009adcf0 */
                    /* try { // try from 009adb48 to 00aadb67 has its CatchHandler @ 009ada40 */
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

