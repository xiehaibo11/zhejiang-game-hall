
/* lua_register_cocos2dx_3d_Mesh(lua_State*) */

undefined8 lua_register_cocos2dx_3d_Mesh(lua_State *param_1)

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
  tolua_usertype(param_1,&DAT_012b2748);
  tolua_cclass(param_1,&DAT_012b274b,&DAT_012b2748,&DAT_012769c7,0);
  tolua_beginmodule(param_1,&DAT_012b274b);
  tolua_function(param_1,"new",lua_cocos2dx_3d_Mesh_constructor);
  tolua_function(param_1,"getMaterial",lua_cocos2dx_3d_Mesh_getMaterial);
  tolua_function(param_1,"getVertexSizeInBytes",lua_cocos2dx_3d_Mesh_getVertexSizeInBytes);
  tolua_function(param_1,"setMaterial",lua_cocos2dx_3d_Mesh_setMaterial);
  tolua_function(param_1,"getName",lua_cocos2dx_3d_Mesh_getName);
                    /* try { // try from 009040a0 to 00a040d3 has its CatchHandler @ 009041a0 */
  tolua_function(param_1,"getMeshVertexAttribute",lua_cocos2dx_3d_Mesh_getMeshVertexAttribute);
  tolua_function(param_1,"calculateAABB",lua_cocos2dx_3d_Mesh_calculateAABB);
                    /* try { // try from 009040d4 to 00a040e7 has its CatchHandler @ 0090416c */
  tolua_function(param_1,"draw",lua_cocos2dx_3d_Mesh_draw);
                    /* try { // try from 009040ec to 00a0411f has its CatchHandler @ 00904170 */
  tolua_function(param_1,"getBlendFunc",lua_cocos2dx_3d_Mesh_getBlendFunc);
  tolua_function(param_1,"setName",lua_cocos2dx_3d_Mesh_setName);
                    /* try { // try from 00904120 to 00a041bb has its CatchHandler @ 00903fa0 */
  tolua_function(param_1,"setMeshIndexData",lua_cocos2dx_3d_Mesh_setMeshIndexData);
  tolua_function(param_1,"getMeshVertexAttribCount",lua_cocos2dx_3d_Mesh_getMeshVertexAttribCount);
  tolua_function(param_1,"setBlendFunc",lua_cocos2dx_3d_Mesh_setBlendFunc);
                    /* catch() { ... } // from try @ 009040d4 with catch @ 0090416c */
                    /* catch() { ... } // from try @ 009040ec with catch @ 00904170 */
  tolua_function(param_1,"setForce2DQueue",lua_cocos2dx_3d_Mesh_setForce2DQueue);
  tolua_function(param_1,"setSkin",lua_cocos2dx_3d_Mesh_setSkin);
                    /* catch() { ... } // from try @ 009040a0 with catch @ 009041a0 */
  tolua_function(param_1,"isVisible",lua_cocos2dx_3d_Mesh_isVisible);
  tolua_function(param_1,"setGLProgramState",lua_cocos2dx_3d_Mesh_setGLProgramState);
                    /* try { // try from 009041bc to 00a0420b has its CatchHandler @ 009041bc
                       catch(type#1 @ 00000000) { ... } // from try @ 009041bc with catch @ 009041bc
                       catch(type#1 @ 00000000) { ... } // from try @ 00904240 with catch @ 009041bc
                       catch(type#1 @ 00000000) { ... } // from try @ 00904298 with catch @ 009041bc
                       catch(type#1 @ 00000000) { ... } // from try @ 00904304 with catch @ 009041bc
                        */
  tolua_function(param_1,"setVisible",lua_cocos2dx_3d_Mesh_setVisible);
  tolua_endmodule(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N7cocos2d4MeshE");
                    /* try { // try from 0090420c to 00a04223 has its CatchHandler @ 009042ec */
  local_78[0] = local_60;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_012b41e3,(tuple *)local_78);
                    /* try { // try from 00904228 to 00a0423f has its CatchHandler @ 009042e8 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"cc.Mesh",7);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"Mesh");
                    /* try { // try from 00904240 to 00a0426b has its CatchHandler @ 009041bc */
  local_40 = local_78;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_012b41e3,(tuple *)&local_40);
                    /* try { // try from 0090426c to 00a0427f has its CatchHandler @ 009042ec */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"cc.Mesh",7);
  if (((ulong)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (((byte)local_60[0] & 1) != 0) {
                    /* try { // try from 00904294 to 00a04297 has its CatchHandler @ 00904334 */
    operator_delete(local_50);
  }
                    /* try { // try from 00904298 to 00a042ff has its CatchHandler @ 009041bc */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

