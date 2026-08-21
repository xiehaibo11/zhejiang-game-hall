
/* lua_cocos2dx_ui_EditBox_loadTextures(lua_State*) */

undefined4 lua_cocos2dx_ui_EditBox_loadTextures(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  EditBox *pEVar7;
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
  pEVar7 = (EditBox *)tolua_tousertype(param_1,1,0);
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
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_60,"ccui.EditBox:loadTextures");
    uVar4 = luaval_to_std_string(param_1,3,(basic_string *)&local_78,"ccui.EditBox:loadTextures");
    uVar5 = luaval_to_std_string(param_1,4,(basic_string *)&local_90,"ccui.EditBox:loadTextures");
    uVar6 = luaval_to_int32(param_1,5,&local_94,"ccui.EditBox:loadTextures");
    if ((uVar3 & uVar4 & uVar5 & uVar6 & 1) != 0) {
      cocos2d::ui::EditBox::loadTextures(pEVar7,&local_60,&local_78,&local_90,local_94);
      lua_settop(param_1,1);
      goto LAB_00994704;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_ui_EditBox_loadTextures\'",0);
LAB_009947d0:
    uVar8 = 0;
    if ((local_90 & 1) == 0) goto joined_r0x009947e8;
LAB_009947dc:
    operator_delete(local_80);
  }
  else if (iVar2 == 4) {
    local_58 = 0;
    local_50 = (void *)0x0;
    local_68 = (void *)0x0;
    local_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    local_80 = (void *)0x0;
    local_90 = 0;
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_60,"ccui.EditBox:loadTextures");
    uVar4 = luaval_to_std_string(param_1,3,(basic_string *)&local_78,"ccui.EditBox:loadTextures");
    uVar5 = luaval_to_std_string(param_1,4,(basic_string *)&local_90,"ccui.EditBox:loadTextures");
    if ((uVar3 & uVar4 & uVar5 & 1) == 0) {
      tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_ui_EditBox_loadTextures\'",0
                 );
      goto LAB_009947d0;
    }
    cocos2d::ui::EditBox::loadTextures(pEVar7,&local_60,&local_78,&local_90,0);
    lua_settop(param_1,1);
LAB_00994704:
    uVar8 = 1;
    if ((local_90 & 1) != 0) goto LAB_009947dc;
  }
  else {
    if (iVar2 != 3) {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "ccui.EditBox:loadTextures",iVar2 + -1,2);
      uVar8 = 0;
      goto LAB_00994754;
    }
    local_58 = 0;
    local_50 = (void *)0x0;
    local_68 = (void *)0x0;
    local_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_60,"ccui.EditBox:loadTextures");
    uVar4 = luaval_to_std_string(param_1,3,(basic_string *)&local_78,"ccui.EditBox:loadTextures");
    if ((uVar3 & uVar4 & 1) == 0) {
      tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_ui_EditBox_loadTextures\'",0
                 );
      uVar8 = 0;
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_90,"");
      cocos2d::ui::EditBox::loadTextures(pEVar7,&local_60,&local_78,&local_90,0);
      if ((local_90 & 1) != 0) {
        operator_delete(local_80);
      }
      uVar8 = 1;
      lua_settop(param_1,1);
    }
  }
joined_r0x009947e8:
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
LAB_00994754:
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 00994774 to 00a948bb has its CatchHandler @ 00994774
                       catch() { ... } // from try @ 00994774 with catch @ 00994774
                       catch() { ... } // from try @ 0099493c with catch @ 00994774 */
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

