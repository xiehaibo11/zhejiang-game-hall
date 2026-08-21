
/* lua_register_cocos2dx_navmesh_NavMeshAgent(lua_State*) */

undefined8 lua_register_cocos2dx_navmesh_NavMeshAgent(lua_State *param_1)

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
  tolua_usertype(param_1,"cc.NavMeshAgent");
  tolua_cclass(param_1,"NavMeshAgent","cc.NavMeshAgent","cc.Component",0);
  tolua_beginmodule(param_1,"NavMeshAgent");
  tolua_function(param_1,"new",lua_cocos2dx_navmesh_NavMeshAgent_constructor);
  tolua_function(param_1,"setMaxSpeed",lua_cocos2dx_navmesh_NavMeshAgent_setMaxSpeed);
  tolua_function(param_1,"syncToNode",lua_cocos2dx_navmesh_NavMeshAgent_syncToNode);
  tolua_function(param_1,"completeOffMeshLink",lua_cocos2dx_navmesh_NavMeshAgent_completeOffMeshLink
                );
  tolua_function(param_1,"getSeparationWeight",lua_cocos2dx_navmesh_NavMeshAgent_getSeparationWeight
                );
  tolua_function(param_1,"setAutoTraverseOffMeshLink",
                 lua_cocos2dx_navmesh_NavMeshAgent_setAutoTraverseOffMeshLink);
  tolua_function(param_1,"getCurrentVelocity",lua_cocos2dx_navmesh_NavMeshAgent_getCurrentVelocity);
  tolua_function(param_1,"syncToAgent",lua_cocos2dx_navmesh_NavMeshAgent_syncToAgent);
  tolua_function(param_1,"isOnOffMeshLink",lua_cocos2dx_navmesh_NavMeshAgent_isOnOffMeshLink);
  tolua_function(param_1,"setSeparationWeight",lua_cocos2dx_navmesh_NavMeshAgent_setSeparationWeight
                );
  tolua_function(param_1,"pause",lua_cocos2dx_navmesh_NavMeshAgent_pause);
  tolua_function(param_1,"getUserData",lua_cocos2dx_navmesh_NavMeshAgent_getUserData);
  tolua_function(param_1,"setAutoOrientation",lua_cocos2dx_navmesh_NavMeshAgent_setAutoOrientation);
  tolua_function(param_1,"getHeight",lua_cocos2dx_navmesh_NavMeshAgent_getHeight);
  tolua_function(param_1,"getMaxSpeed",lua_cocos2dx_navmesh_NavMeshAgent_getMaxSpeed);
  tolua_function(param_1,"getCurrentOffMeshLinkData",
                 lua_cocos2dx_navmesh_NavMeshAgent_getCurrentOffMeshLinkData);
  tolua_function(param_1,"getRadius",lua_cocos2dx_navmesh_NavMeshAgent_getRadius);
  tolua_function(param_1,"setSyncFlag",lua_cocos2dx_navmesh_NavMeshAgent_setSyncFlag);
  tolua_function(param_1,"getSyncFlag",lua_cocos2dx_navmesh_NavMeshAgent_getSyncFlag);
  tolua_function(param_1,"resume",lua_cocos2dx_navmesh_NavMeshAgent_resume);
  tolua_function(param_1,"stop",lua_cocos2dx_navmesh_NavMeshAgent_stop);
  tolua_function(param_1,"setMaxAcceleration",lua_cocos2dx_navmesh_NavMeshAgent_setMaxAcceleration);
  tolua_function(param_1,"setOrientationRefAxes",
                 lua_cocos2dx_navmesh_NavMeshAgent_setOrientationRefAxes);
  tolua_function(param_1,"getMaxAcceleration",lua_cocos2dx_navmesh_NavMeshAgent_getMaxAcceleration);
  tolua_function(param_1,"setHeight",lua_cocos2dx_navmesh_NavMeshAgent_setHeight);
  tolua_function(param_1,"setUserData",lua_cocos2dx_navmesh_NavMeshAgent_setUserData);
  tolua_function(param_1,"getObstacleAvoidanceType",
                 lua_cocos2dx_navmesh_NavMeshAgent_getObstacleAvoidanceType);
  tolua_function(param_1,"getVelocity",lua_cocos2dx_navmesh_NavMeshAgent_getVelocity);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009c919c with catch @ 009c912c
                       catch(type#1 @ 00000000) { ... } // from try @ 009c91cc with catch @ 009c912c
                       catch(type#1 @ 00000000) { ... } // from try @ 009c91fc with catch @ 009c912c
                       catch(type#1 @ 00000000) { ... } // from try @ 009c9224 with catch @ 009c912c
                       catch(type#1 @ 00000000) { ... } // from try @ 009c9250 with catch @ 009c912c
                        */
  tolua_function(param_1,"setRadius",lua_cocos2dx_navmesh_NavMeshAgent_setRadius);
  tolua_function(param_1,"setObstacleAvoidanceType",
                 lua_cocos2dx_navmesh_NavMeshAgent_setObstacleAvoidanceType);
  tolua_function(param_1,"getNavMeshAgentComponentName",
                 lua_cocos2dx_navmesh_NavMeshAgent_getNavMeshAgentComponentName);
  tolua_function(param_1,"create",lua_cocos2dx_navmesh_NavMeshAgent_create);
  tolua_endmodule(param_1);
                    /* try { // try from 009c9194 to 00ac919b has its CatchHandler @ 009c9290 */
                    /* try { // try from 009c919c to 00ac91bf has its CatchHandler @ 009c912c */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N7cocos2d12NavMeshAgentE");
                    /* try { // try from 009c91c0 to 00ac91cb has its CatchHandler @ 009c9290 */
  local_78[0] = local_60;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_012efb8d,(tuple *)local_78);
                    /* try { // try from 009c91cc to 00ac91f3 has its CatchHandler @ 009c912c */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"cc.NavMeshAgent",0xf);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"NavMeshAgent");
                    /* try { // try from 009c91f4 to 00ac91fb has its CatchHandler @ 009c928c */
                    /* try { // try from 009c91fc to 00ac921b has its CatchHandler @ 009c912c */
  local_40 = local_78;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_012efb8d,(tuple *)&local_40);
                    /* try { // try from 009c921c to 00ac9223 has its CatchHandler @ 009c928c */
                    /* try { // try from 009c9224 to 00ac9243 has its CatchHandler @ 009c912c */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"cc.NavMeshAgent",0xf);
  if (((ulong)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (((byte)local_60[0] & 1) != 0) {
                    /* try { // try from 009c9244 to 00ac924f has its CatchHandler @ 009c928c */
    operator_delete(local_50);
  }
                    /* try { // try from 009c9250 to 00ac9293 has its CatchHandler @ 009c912c */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

