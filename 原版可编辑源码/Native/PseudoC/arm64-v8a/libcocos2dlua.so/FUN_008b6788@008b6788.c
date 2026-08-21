
/* WARNING: Type propagation algorithm not settling */

void FUN_008b6788(lua_State *param_1)

{
  long lVar1;
  void *pvVar2;
  undefined8 *puVar3;
  int iVar4;
  uint uVar5;
  Console *this;
  ulong uVar6;
  ScriptHandlerMgr *this_00;
  undefined8 uVar7;
  code *pcVar8;
  void *pvVar9;
  basic_string local_178 [16];
  void *local_168;
  basic_string local_160 [16];
  void *local_150;
  void *local_140;
  undefined8 uStack_138;
  undefined8 *local_130;
  undefined8 uStack_128;
  undefined4 local_120;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *local_110;
  lua_State *plStack_108;
  ulong local_100;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **local_f0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_e0 [16];
  void *local_d0;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = (Console *)tolua_tousertype(param_1,1,0);
  iVar4 = lua_gettop(param_1);
  if (iVar4 + -1 != 2) {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d",
               "cc.Console:addCommand",iVar4 + -1,2);
    uVar7 = 0;
    goto LAB_008b69e8;
  }
  uStack_138 = 0;
  local_140 = (void *)0x0;
  uStack_128 = 0;
  local_130 = (undefined8 *)0x0;
  local_120 = 0x3f800000;
  uVar6 = luaval_to_ccvaluemap(param_1,2,(unordered_map *)&local_140,"cc.Console:addCommand");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_e0,"name");
  local_110 = local_e0;
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
  ::
  __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
            ((basic_string *)&local_140,(piecewise_construct_t *)local_e0,(tuple *)&DAT_0129f975,
             (tuple *)&local_110);
  cocos2d::Value::asString();
  if (((byte)local_e0[0] & 1) != 0) {
    operator_delete(local_d0);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_e0,"help");
  local_110 = local_e0;
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
  ::
  __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
            ((basic_string *)&local_140,(piecewise_construct_t *)local_e0,(tuple *)&DAT_0129f975,
             (tuple *)&local_110);
  cocos2d::Value::asString();
  if (((byte)local_e0[0] & 1) != 0) {
    operator_delete(local_d0);
  }
  if ((uVar6 & 1) != 0) {
    uVar5 = toluafix_ref_function(param_1,3,0);
    this_00 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
    cocos2d::ScriptHandlerMgr::addCustomHandler(this_00,this,uVar5);
    local_110 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                &PTR_FUN_0169a5f0;
    plStack_108 = param_1;
    local_100 = (ulong)uVar5;
    local_f0 = &local_110;
    cocos2d::Console::Command::Command
              ((Command *)local_e0,local_160,local_178,(function *)&local_110);
    if (&local_110 == local_f0) {
      pcVar8 = *(code **)(*local_f0 + 0x20);
LAB_008b6940:
      (*pcVar8)();
    }
    else if (local_f0 !=
             (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)0x0)
    {
      pcVar8 = *(code **)(*local_f0 + 0x28);
      goto LAB_008b6940;
    }
    cocos2d::Console::addCommand(this,(Command *)local_e0);
    cocos2d::Console::Command::~Command((Command *)local_e0);
  }
  lua_settop(param_1,1);
  if (((byte)local_178[0] & 1) != 0) {
    operator_delete(local_168);
  }
  pvVar2 = local_140;
  puVar3 = local_130;
  if (((byte)local_160[0] & 1) != 0) {
    operator_delete(local_150);
    pvVar2 = local_140;
    puVar3 = local_130;
  }
  while (puVar3 != (void *)0x0) {
    pvVar9 = (void *)*puVar3;
    local_140 = pvVar2;
    cocos2d::Value::~Value((Value *)(puVar3 + 5));
    if ((*(byte *)(puVar3 + 2) & 1) != 0) {
      operator_delete((void *)puVar3[4]);
    }
    operator_delete(puVar3);
    pvVar2 = local_140;
    puVar3 = pvVar9;
  }
  local_140 = (void *)0x0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  uVar7 = 1;
LAB_008b69e8:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  return;
}

