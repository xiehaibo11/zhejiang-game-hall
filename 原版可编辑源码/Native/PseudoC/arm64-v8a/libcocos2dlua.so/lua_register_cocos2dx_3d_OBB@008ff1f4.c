
/* lua_register_cocos2dx_3d_OBB(lua_State*) */

undefined8 lua_register_cocos2dx_3d_OBB(lua_State *param_1)

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
                    /* try { // try from 008ff21c to 009ff25f has its CatchHandler @ 008ff21c
                       catch() { ... } // from try @ 008ff21c with catch @ 008ff21c
                       catch() { ... } // from try @ 008ff3b0 with catch @ 008ff21c
                       catch() { ... } // from try @ 008ff45c with catch @ 008ff21c */
  tolua_usertype(param_1,&DAT_012b1872);
  tolua_cclass(param_1,&DAT_012b1875,&DAT_012b1872,&DAT_013c996e,lua_cocos2dx_3d_OBB_finalize);
  tolua_beginmodule(param_1,&DAT_012b1875);
                    /* try { // try from 008ff260 to 009ff277 has its CatchHandler @ 008ff490 */
  tolua_variable(param_1,"_center",lua_cocos2dx_3d_get_OBB_center,lua_cocos2dx_3d_set_OBB_center);
                    /* try { // try from 008ff27c to 009ff29b has its CatchHandler @ 008ff48c */
  tolua_variable(param_1,"_xAxis",lua_cocos2dx_3d_get_OBB_xAxis,lua_cocos2dx_3d_set_OBB_xAxis);
                    /* try { // try from 008ff2a0 to 009ff2b7 has its CatchHandler @ 008ff47c */
  tolua_variable(param_1,"_yAxis",lua_cocos2dx_3d_get_OBB_yAxis,lua_cocos2dx_3d_set_OBB_yAxis);
                    /* try { // try from 008ff2c0 to 009ff2d7 has its CatchHandler @ 008ff478 */
  tolua_variable(param_1,"_zAxis",lua_cocos2dx_3d_get_OBB_zAxis,lua_cocos2dx_3d_set_OBB_zAxis);
                    /* try { // try from 008ff2dc to 009ff2fb has its CatchHandler @ 008ff474 */
  tolua_variable(param_1,"_extents",lua_cocos2dx_3d_get_OBB_extents,lua_cocos2dx_3d_set_OBB_extents)
  ;
                    /* try { // try from 008ff304 to 009ff337 has its CatchHandler @ 008ff470 */
  tolua_function(param_1,"new",lua_cocos2dx_3d_OBB_constructor);
  tolua_function(param_1,"reset",lua_cocos2dx_3d_OBB_reset);
  tolua_function(param_1,"set",lua_cocos2dx_3d_OBB_set);
                    /* try { // try from 008ff344 to 009ff35b has its CatchHandler @ 008ff488 */
  tolua_function(param_1,"transform",lua_cocos2dx_3d_OBB_transform);
                    /* try { // try from 008ff360 to 009ff37f has its CatchHandler @ 008ff484 */
  tolua_function(param_1,"containPoint",lua_cocos2dx_3d_OBB_containPoint);
                    /* try { // try from 008ff384 to 009ff3af has its CatchHandler @ 008ff480 */
  tolua_function(param_1,"intersects",lua_cocos2dx_3d_OBB_intersects);
  tolua_function(param_1,"getCorners",lua_cocos2dx_3d_OBB_getCorners);
  tolua_endmodule(param_1);
                    /* try { // try from 008ff3b0 to 009ff43b has its CatchHandler @ 008ff21c */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N7cocos2d3OBBE");
  local_78[0] = local_60;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_012b1a32,(tuple *)local_78);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"cc.OBB",6);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"OBB");
  local_40 = local_78;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_012b1a32,(tuple *)&local_40);
                    /* try { // try from 008ff43c to 009ff443 has its CatchHandler @ 008ff480 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"cc.OBB",6);
  if (((ulong)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
                    /* try { // try from 008ff454 to 009ff45b has its CatchHandler @ 008ff470 */
  if (((byte)local_60[0] & 1) != 0) {
                    /* try { // try from 008ff45c to 009ff4ab has its CatchHandler @ 008ff21c */
    operator_delete(local_50);
  }
                    /* catch() { ... } // from try @ 008ff304 with catch @ 008ff470
                       catch() { ... } // from try @ 008ff454 with catch @ 008ff470 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 008ff2dc with catch @ 008ff474 */
                    /* catch() { ... } // from try @ 008ff2c0 with catch @ 008ff478 */
                    /* catch() { ... } // from try @ 008ff2a0 with catch @ 008ff47c */
                    /* catch() { ... } // from try @ 008ff384 with catch @ 008ff480
                       catch() { ... } // from try @ 008ff43c with catch @ 008ff480 */
                    /* catch() { ... } // from try @ 008ff360 with catch @ 008ff484 */
                    /* catch() { ... } // from try @ 008ff344 with catch @ 008ff488 */
    return 1;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 008ff27c with catch @ 008ff48c */
  __stack_chk_fail();
}

