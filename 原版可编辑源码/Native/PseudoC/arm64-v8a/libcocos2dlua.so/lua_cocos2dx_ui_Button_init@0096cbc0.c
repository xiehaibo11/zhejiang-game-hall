
/* WARNING: Type propagation algorithm not settling */
/* lua_cocos2dx_ui_Button_init(lua_State*) */

undefined4 lua_cocos2dx_ui_Button_init(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long *plVar7;
  ulong uVar8;
  undefined4 uVar9;
  int local_94;
  ulong local_90;
  undefined8 local_88;
  void *local_80;
  ulong local_78;
  undefined8 uStack_70;
  void *local_68;
  ulong local_60;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
                    /* catch() { ... } // from try @ 0096c954 with catch @ 0096cbdc */
  local_48 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 0096c8d4 with catch @ 0096cbe0 */
                    /* catch() { ... } // from try @ 0096c8b8 with catch @ 0096cbe4 */
  plVar7 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
                    /* catch() { ... } // from try @ 0096ca10 with catch @ 0096cc08 */
                    /* catch() { ... } // from try @ 0096c9f4 with catch @ 0096cc0c */
                    /* catch() { ... } // from try @ 0096c930 with catch @ 0096cc10 */
                    /* catch() { ... } // from try @ 0096c894 with catch @ 0096cc14 */
  switch(iVar2) {
  case 2:
    local_58 = 0;
    local_50 = (void *)0x0;
    local_60 = 0;
                    /* catch() { ... } // from try @ 0096c9d0 with catch @ 0096cc34 */
                    /* catch() { ... } // from try @ 0096c90c with catch @ 0096cc38 */
                    /* catch() { ... } // from try @ 0096c870 with catch @ 0096cc3c */
    uVar8 = luaval_to_std_string(param_1,2,(basic_string *)&local_60,"ccui.Button:init");
    if ((uVar8 & 1) == 0) {
      tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_ui_Button_init\'",0);
      uVar9 = 0;
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_78,"");
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_90,"");
      uVar3 = (**(code **)(*plVar7 + 0x688))(plVar7,&local_60,&local_78,&local_90,0);
      if ((local_90 & 1) != 0) {
        operator_delete(local_80);
      }
      if ((local_78 & 1) != 0) {
        operator_delete(local_68);
      }
      tolua_pushboolean(param_1,uVar3 & 1);
      uVar9 = 1;
    }
    if ((local_60 & 1) == 0) goto LAB_0096cfac;
    goto LAB_0096cfa4;
  case 3:
    local_58 = 0;
    local_50 = (void *)0x0;
    local_68 = (void *)0x0;
    local_60 = 0;
                    /* try { // try from 0096ce3c to 00a6ce6f has its CatchHandler @ 0096ced8 */
    local_78 = 0;
    uStack_70 = 0;
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_60,"ccui.Button:init");
                    /* try { // try from 0096ce70 to 00a6ceeb has its CatchHandler @ 0096cdc8 */
    uVar4 = luaval_to_std_string(param_1,3,(basic_string *)&local_78,"ccui.Button:init");
    if ((uVar3 & uVar4 & 1) == 0) {
      tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_ui_Button_init\'",0);
      uVar9 = 0;
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_90,"");
      uVar3 = (**(code **)(*plVar7 + 0x688))(plVar7,&local_60,&local_78,&local_90,0);
      if ((local_90 & 1) != 0) {
        operator_delete(local_80);
      }
      tolua_pushboolean(param_1,uVar3 & 1);
      uVar9 = 1;
    }
    goto joined_r0x0096ced4;
  case 4:
    local_58 = 0;
    local_50 = (void *)0x0;
    local_68 = (void *)0x0;
    local_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
                    /* try { // try from 0096ccd4 to 00a6cd67 has its CatchHandler @ 0096ccd4
                       catch() { ... } // from try @ 0096ccd4 with catch @ 0096ccd4
                       catch() { ... } // from try @ 0096cd70 with catch @ 0096ccd4 */
    local_88 = 0;
    local_80 = (void *)0x0;
    local_90 = 0;
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_60,"ccui.Button:init");
    uVar4 = luaval_to_std_string(param_1,3,(basic_string *)&local_78,"ccui.Button:init");
    uVar5 = luaval_to_std_string(param_1,4,(basic_string *)&local_90,"ccui.Button:init");
    if ((uVar3 & uVar4 & uVar5 & 1) == 0) {
      tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_ui_Button_init\'",0);
      goto LAB_0096cf78;
    }
    uVar3 = (**(code **)(*plVar7 + 0x688))(plVar7,&local_60,&local_78,&local_90,0);
    tolua_pushboolean(param_1,uVar3 & 1);
LAB_0096ce24:
    uVar9 = 1;
    break;
  case 5:
                    /* try { // try from 0096cd68 to 00a6cd6f has its CatchHandler @ 0096cdac */
    local_58 = 0;
    local_50 = (void *)0x0;
    local_68 = (void *)0x0;
    local_60 = 0;
                    /* try { // try from 0096cd70 to 00a6cdc7 has its CatchHandler @ 0096ccd4 */
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    local_80 = (void *)0x0;
    local_90 = 0;
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_60,"ccui.Button:init");
                    /* catch() { ... } // from try @ 0096cd68 with catch @ 0096cdac */
    uVar4 = luaval_to_std_string(param_1,3,(basic_string *)&local_78,"ccui.Button:init");
                    /* try { // try from 0096cdc8 to 00a6ce3b has its CatchHandler @ 0096cdc8
                       catch() { ... } // from try @ 0096cdc8 with catch @ 0096cdc8
                       catch() { ... } // from try @ 0096ce70 with catch @ 0096cdc8 */
    uVar5 = luaval_to_std_string(param_1,4,(basic_string *)&local_90,"ccui.Button:init");
    uVar6 = luaval_to_int32(param_1,5,&local_94,"ccui.Button:init");
    if ((uVar3 & uVar4 & uVar5 & uVar6 & 1) != 0) {
      uVar3 = (**(code **)(*plVar7 + 0x688))(plVar7,&local_60,&local_78,&local_90,local_94);
      tolua_pushboolean(param_1,uVar3 & 1);
      goto LAB_0096ce24;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_ui_Button_init\'",0);
LAB_0096cf78:
    uVar9 = 0;
    break;
  default:
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.Button:init",iVar2 + -1,1);
    uVar9 = 0;
    goto LAB_0096cfac;
  }
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
joined_r0x0096ced4:
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if ((local_60 & 1) != 0) {
LAB_0096cfa4:
    operator_delete(local_50);
  }
LAB_0096cfac:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar9;
}

