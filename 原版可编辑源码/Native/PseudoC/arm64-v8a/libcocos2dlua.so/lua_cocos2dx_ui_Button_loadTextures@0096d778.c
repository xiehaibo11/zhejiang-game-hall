
/* lua_cocos2dx_ui_Button_loadTextures(lua_State*) */

undefined4 lua_cocos2dx_ui_Button_loadTextures(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  Button *pBVar7;
  undefined4 uVar8;
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
  pBVar7 = (Button *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 5) {
    local_58 = 0;
    local_50 = (void *)0x0;
    local_68 = (void *)0x0;
    local_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    local_80 = (void *)0x0;
    local_90 = 0;
                    /* try { // try from 0096d914 to 00a6d95f has its CatchHandler @ 0096d914
                       catch() { ... } // from try @ 0096d914 with catch @ 0096d914
                       catch() { ... } // from try @ 0096dc14 with catch @ 0096d914
                       catch() { ... } // from try @ 0096dcd8 with catch @ 0096d914 */
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_60,"ccui.Button:loadTextures");
    uVar4 = luaval_to_std_string(param_1,3,(basic_string *)&local_78,"ccui.Button:loadTextures");
                    /* try { // try from 0096d960 to 00a6d977 has its CatchHandler @ 0096dd80 */
    uVar5 = luaval_to_std_string(param_1,4,(basic_string *)&local_90,"ccui.Button:loadTextures");
    uVar6 = luaval_to_int32(param_1,5,&local_94,"ccui.Button:loadTextures");
                    /* try { // try from 0096d984 to 00a6d99b has its CatchHandler @ 0096dd58 */
    if ((uVar3 & uVar4 & uVar5 & uVar6 & 1) != 0) {
      cocos2d::ui::Button::loadTextures(pBVar7,&local_60,&local_78,&local_90,local_94);
                    /* try { // try from 0096d9a8 to 00a6d9bf has its CatchHandler @ 0096dd28 */
      lua_settop(param_1,1);
      goto LAB_0096d9b8;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_ui_Button_loadTextures\'",0);
LAB_0096da84:
    uVar8 = 0;
                    /* try { // try from 0096da88 to 00a6dabb has its CatchHandler @ 0096dcec */
    if ((local_90 & 1) == 0) goto joined_r0x0096da9c;
LAB_0096da90:
    operator_delete(local_80);
  }
  else if (iVar2 == 4) {
                    /* catch() { ... } // from try @ 0096d5bc with catch @ 0096d864
                       catch() { ... } // from try @ 0096d848 with catch @ 0096d864 */
    local_58 = 0;
    local_50 = (void *)0x0;
                    /* catch() { ... } // from try @ 0096d5a0 with catch @ 0096d868 */
    local_68 = (void *)0x0;
    local_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    local_80 = (void *)0x0;
    local_90 = 0;
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_60,"ccui.Button:loadTextures");
                    /* catch() { ... } // from try @ 0096d4c8 with catch @ 0096d898
                       catch() { ... } // from try @ 0096d830 with catch @ 0096d898 */
                    /* catch() { ... } // from try @ 0096d57c with catch @ 0096d89c */
                    /* catch() { ... } // from try @ 0096d4ac with catch @ 0096d8a0 */
    uVar4 = luaval_to_std_string(param_1,3,(basic_string *)&local_78,"ccui.Button:loadTextures");
                    /* catch() { ... } // from try @ 0096d66c with catch @ 0096d8c4
                       catch() { ... } // from try @ 0096d7e4 with catch @ 0096d8c4 */
    uVar5 = luaval_to_std_string(param_1,4,(basic_string *)&local_90,"ccui.Button:loadTextures");
                    /* catch() { ... } // from try @ 0096d638 with catch @ 0096d8c8 */
                    /* catch() { ... } // from try @ 0096d540 with catch @ 0096d8cc */
                    /* catch() { ... } // from try @ 0096d470 with catch @ 0096d8d0 */
    if ((uVar3 & uVar4 & uVar5 & 1) == 0) {
      tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_ui_Button_loadTextures\'",0)
      ;
                    /* try { // try from 0096da6c to 00a6da83 has its CatchHandler @ 0096dcf0 */
      goto LAB_0096da84;
    }
    cocos2d::ui::Button::loadTextures(pBVar7,&local_60,&local_78,&local_90,0);
                    /* catch() { ... } // from try @ 0096d5fc with catch @ 0096d8f0 */
                    /* catch() { ... } // from try @ 0096d504 with catch @ 0096d8f4 */
                    /* catch() { ... } // from try @ 0096d434 with catch @ 0096d8f8 */
    lua_settop(param_1,1);
LAB_0096d9b8:
    uVar8 = 1;
    if ((local_90 & 1) != 0) goto LAB_0096da90;
  }
  else {
    if (iVar2 != 3) {
                    /* try { // try from 0096da00 to 00a6da17 has its CatchHandler @ 0096dd7c */
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "ccui.Button:loadTextures",iVar2 + -1,2);
      uVar8 = 0;
      goto LAB_0096da08;
    }
    local_58 = 0;
    local_50 = (void *)0x0;
    local_68 = (void *)0x0;
    local_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
                    /* try { // try from 0096d7e4 to 00a6d7eb has its CatchHandler @ 0096d8c4 */
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_60,"ccui.Button:loadTextures");
    uVar4 = luaval_to_std_string(param_1,3,(basic_string *)&local_78,"ccui.Button:loadTextures");
    if ((uVar3 & uVar4 & 1) == 0) {
      tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_ui_Button_loadTextures\'",0)
      ;
                    /* try { // try from 0096da48 to 00a6da5f has its CatchHandler @ 0096dd24 */
      uVar8 = 0;
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_90,"");
                    /* try { // try from 0096d830 to 00a6d837 has its CatchHandler @ 0096d898 */
      cocos2d::ui::Button::loadTextures(pBVar7,&local_60,&local_78,&local_90,0);
      if ((local_90 & 1) != 0) {
                    /* try { // try from 0096d848 to 00a6d84f has its CatchHandler @ 0096d864 */
        operator_delete(local_80);
      }
                    /* try { // try from 0096d850 to 00a6d913 has its CatchHandler @ 0096d3e4 */
      uVar8 = 1;
      lua_settop(param_1,1);
    }
  }
joined_r0x0096da9c:
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
LAB_0096da08:
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 0096da24 to 00a6da3b has its CatchHandler @ 0096dd54 */
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

