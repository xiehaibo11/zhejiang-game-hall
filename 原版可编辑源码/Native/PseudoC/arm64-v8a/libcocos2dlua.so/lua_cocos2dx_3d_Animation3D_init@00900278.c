
/* lua_cocos2dx_3d_Animation3D_init(lua_State*) */

undefined8 lua_cocos2dx_3d_Animation3D_init(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  __tree_node **local_88;
  __tree_node *local_80;
  undefined8 uStack_78;
  __tree_node **local_70;
  __tree_node *local_68;
  undefined8 local_60;
  __tree_node **pp_Stack_58;
  __tree_node *local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  long local_38;
  
                    /* try { // try from 00900288 to 00a002bb has its CatchHandler @ 00900394 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    local_88 = &local_80;
    local_70 = &local_68;
    pp_Stack_58 = &local_50;
    local_80 = (__tree_node *)0x0;
    uStack_78 = 0;
                    /* try { // try from 009002d0 to 00a002eb has its CatchHandler @ 00900390 */
    local_50 = (__tree_node *)0x0;
    uStack_48 = 0;
    local_60 = 0;
    local_68 = (__tree_node *)0x0;
    local_40 = 0;
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_3d_Animation3D_init\'",0);
                    /* try { // try from 009002fc to 00a0030f has its CatchHandler @ 00900394 */
    std::__ndk1::
    __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::Vec3Key,std::__ndk1::allocator<cocos2d::Animation3DData::Vec3Key>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::Vec3Key,std::__ndk1::allocator<cocos2d::Animation3DData::Vec3Key>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::Vec3Key,std::__ndk1::allocator<cocos2d::Animation3DData::Vec3Key>>>>>
    ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::Vec3Key,std::__ndk1::allocator<cocos2d::Animation3DData::Vec3Key>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::Vec3Key,std::__ndk1::allocator<cocos2d::Animation3DData::Vec3Key>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::Vec3Key,std::__ndk1::allocator<cocos2d::Animation3DData::Vec3Key>>>>>
               *)&pp_Stack_58,local_50);
    std::__ndk1::
    __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::QuatKey,std::__ndk1::allocator<cocos2d::Animation3DData::QuatKey>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::QuatKey,std::__ndk1::allocator<cocos2d::Animation3DData::QuatKey>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::QuatKey,std::__ndk1::allocator<cocos2d::Animation3DData::QuatKey>>>>>
    ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::QuatKey,std::__ndk1::allocator<cocos2d::Animation3DData::QuatKey>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::QuatKey,std::__ndk1::allocator<cocos2d::Animation3DData::QuatKey>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::QuatKey,std::__ndk1::allocator<cocos2d::Animation3DData::QuatKey>>>>>
               *)&local_70,local_68);
                    /* try { // try from 00900310 to 00a003eb has its CatchHandler @ 009001b8 */
    std::__ndk1::
    __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::Vec3Key,std::__ndk1::allocator<cocos2d::Animation3DData::Vec3Key>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::Vec3Key,std::__ndk1::allocator<cocos2d::Animation3DData::Vec3Key>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::Vec3Key,std::__ndk1::allocator<cocos2d::Animation3DData::Vec3Key>>>>>
    ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::Vec3Key,std::__ndk1::allocator<cocos2d::Animation3DData::Vec3Key>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::Vec3Key,std::__ndk1::allocator<cocos2d::Animation3DData::Vec3Key>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::Vec3Key,std::__ndk1::allocator<cocos2d::Animation3DData::Vec3Key>>>>>
               *)&local_88,local_80);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Animation3D:init",iVar2 + -1,1);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

