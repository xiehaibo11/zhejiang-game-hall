
/* lua_cocos2dx_ui_Slider_loadSlidBallTextures(lua_State*) */

undefined4 lua_cocos2dx_ui_Slider_loadSlidBallTextures(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  Slider *pSVar7;
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
  local_48 = *(long *)(lVar1 + 0x28);
  pSVar7 = (Slider *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  switch(iVar2) {
  case 2:
    local_58 = 0;
    local_50 = (void *)0x0;
    local_60 = 0;
    uVar8 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_60,"ccui.Slider:loadSlidBallTextures");
    if ((uVar8 & 1) != 0) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_78,"");
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_90,"");
      cocos2d::ui::Slider::loadSlidBallTextures(pSVar7,&local_60,&local_78,&local_90,0);
      if ((local_90 & 1) != 0) {
        operator_delete(local_80);
      }
      if ((local_78 & 1) != 0) {
        operator_delete(local_68);
      }
      uVar9 = 1;
      lua_settop(param_1,1);
      goto LAB_0097ee54;
    }
                    /* try { // try from 0097edc4 to 00a7ee13 has its CatchHandler @ 0097edc4
                       catch() { ... } // from try @ 0097edc4 with catch @ 0097edc4
                       catch() { ... } // from try @ 0097ee5c with catch @ 0097edc4
                       catch() { ... } // from try @ 0097eedc with catch @ 0097edc4 */
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_ui_Slider_loadSlidBallTextures\'",0);
    uVar9 = 0;
    if ((local_60 & 1) == 0) goto LAB_0097ee64;
    goto LAB_0097ee5c;
  case 3:
    local_58 = 0;
    local_50 = (void *)0x0;
    local_68 = (void *)0x0;
    local_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    uVar3 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_60,"ccui.Slider:loadSlidBallTextures");
    uVar4 = luaval_to_std_string
                      (param_1,3,(basic_string *)&local_78,"ccui.Slider:loadSlidBallTextures");
    if ((uVar3 & uVar4 & 1) != 0) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_90,"");
                    /* catch() { ... } // from try @ 0097ec5c with catch @ 0097ed6c
                       catch() { ... } // from try @ 0097ecdc with catch @ 0097ed6c */
      cocos2d::ui::Slider::loadSlidBallTextures(pSVar7,&local_60,&local_78,&local_90,0);
      if ((local_90 & 1) != 0) {
        operator_delete(local_80);
      }
      uVar9 = 1;
      lua_settop(param_1,1);
      goto LAB_0097ee44;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_ui_Slider_loadSlidBallTextures\'",0);
    uVar9 = 0;
    if ((local_78 & 1) == 0) goto LAB_0097ee54;
    goto LAB_0097ee4c;
  case 4:
    local_58 = 0;
    local_50 = (void *)0x0;
    local_68 = (void *)0x0;
    local_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    local_80 = (void *)0x0;
    local_90 = 0;
    uVar3 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_60,"ccui.Slider:loadSlidBallTextures");
    uVar4 = luaval_to_std_string
                      (param_1,3,(basic_string *)&local_78,"ccui.Slider:loadSlidBallTextures");
    uVar5 = luaval_to_std_string
                      (param_1,4,(basic_string *)&local_90,"ccui.Slider:loadSlidBallTextures");
                    /* try { // try from 0097ec04 to 00a7ec5b has its CatchHandler @ 0097ec04
                       catch() { ... } // from try @ 0097ec04 with catch @ 0097ec04
                       catch() { ... } // from try @ 0097ecac with catch @ 0097ec04
                       catch() { ... } // from try @ 0097ecf0 with catch @ 0097ec04 */
    if ((uVar3 & uVar4 & uVar5 & 1) != 0) {
      cocos2d::ui::Slider::loadSlidBallTextures(pSVar7,&local_60,&local_78,&local_90,0);
      lua_settop(param_1,1);
      goto LAB_0097ecf4;
    }
                    /* try { // try from 0097ee14 to 00a7ee2b has its CatchHandler @ 0097eef4 */
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_ui_Slider_loadSlidBallTextures\'",0);
LAB_0097ee30:
                    /* try { // try from 0097ee30 to 00a7ee5b has its CatchHandler @ 0097eef0 */
    uVar9 = 0;
    break;
  case 5:
    local_58 = 0;
    local_50 = (void *)0x0;
    local_68 = (void *)0x0;
    local_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    local_80 = (void *)0x0;
    local_90 = 0;
                    /* try { // try from 0097ec5c to 00a7ecab has its CatchHandler @ 0097ed6c */
    uVar3 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_60,"ccui.Slider:loadSlidBallTextures");
    uVar4 = luaval_to_std_string
                      (param_1,3,(basic_string *)&local_78,"ccui.Slider:loadSlidBallTextures");
    uVar5 = luaval_to_std_string
                      (param_1,4,(basic_string *)&local_90,"ccui.Slider:loadSlidBallTextures");
                    /* try { // try from 0097ecac to 00a7ecdb has its CatchHandler @ 0097ec04 */
    uVar6 = luaval_to_int32(param_1,5,&local_94,"ccui.Slider:loadSlidBallTextures");
    if ((uVar3 & uVar4 & uVar5 & uVar6 & 1) == 0) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_ui_Slider_loadSlidBallTextures\'",0)
      ;
      goto LAB_0097ee30;
    }
                    /* try { // try from 0097ecdc to 00a7ecef has its CatchHandler @ 0097ed6c */
    cocos2d::ui::Slider::loadSlidBallTextures(pSVar7,&local_60,&local_78,&local_90,local_94);
                    /* try { // try from 0097ecf0 to 00a7edc3 has its CatchHandler @ 0097ec04 */
    lua_settop(param_1,1);
LAB_0097ecf4:
    uVar9 = 1;
    break;
  default:
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.Slider:loadSlidBallTextures",iVar2 + -1,1);
    uVar9 = 0;
    goto LAB_0097ee64;
  }
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
LAB_0097ee44:
  if ((local_78 & 1) != 0) {
LAB_0097ee4c:
    operator_delete(local_68);
  }
LAB_0097ee54:
  if ((local_60 & 1) != 0) {
LAB_0097ee5c:
                    /* try { // try from 0097ee5c to 00a7ee83 has its CatchHandler @ 0097edc4 */
    operator_delete(local_50);
  }
LAB_0097ee64:
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 0097ee84 to 00a7ee97 has its CatchHandler @ 0097eef4 */
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

