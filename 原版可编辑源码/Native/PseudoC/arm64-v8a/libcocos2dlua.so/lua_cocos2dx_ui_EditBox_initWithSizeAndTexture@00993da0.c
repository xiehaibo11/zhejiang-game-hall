
/* WARNING: Type propagation algorithm not settling */
/* lua_cocos2dx_ui_EditBox_initWithSizeAndTexture(lua_State*) */

undefined4 lua_cocos2dx_ui_EditBox_initWithSizeAndTexture(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  EditBox *pEVar8;
  undefined4 uVar9;
  int local_ac;
  ulong local_a8;
  undefined8 local_a0;
  void *local_98;
  ulong local_90;
  undefined8 uStack_88;
  void *local_80;
  ulong local_78;
  undefined8 local_70;
  void *local_68;
  Size aSStack_60 [8];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  pEVar8 = (EditBox *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  switch(iVar2) {
  case 3:
    cocos2d::Size::Size(aSStack_60);
    local_70 = 0;
    local_68 = (void *)0x0;
    local_78 = 0;
    uVar3 = luaval_to_size(param_1,2,aSStack_60,"ccui.EditBox:initWithSizeAndTexture");
    uVar4 = luaval_to_std_string
                      (param_1,3,(basic_string *)&local_78,"ccui.EditBox:initWithSizeAndTexture");
    if ((uVar3 & uVar4 & 1) == 0) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_ui_EditBox_initWithSizeAndTexture\'"
                  ,0);
      uVar9 = 0;
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_90,"");
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_a8,"");
      uVar3 = cocos2d::ui::EditBox::initWithSizeAndTexture
                        (pEVar8,aSStack_60,&local_78,&local_90,&local_a8,0);
      if ((local_a8 & 1) != 0) {
        operator_delete(local_98);
      }
      if ((local_90 & 1) != 0) {
                    /* try { // try from 00993eb0 to 00a93fc7 has its CatchHandler @ 00993eb0
                       catch() { ... } // from try @ 00993eb0 with catch @ 00993eb0
                       catch() { ... } // from try @ 00994048 with catch @ 00993eb0 */
        operator_delete(local_80);
      }
      tolua_pushboolean(param_1,uVar3 & 1);
      uVar9 = 1;
    }
    if ((local_78 & 1) == 0) goto LAB_00994220;
    goto LAB_00994218;
  case 4:
    cocos2d::Size::Size(aSStack_60);
    local_70 = 0;
    local_68 = (void *)0x0;
    local_80 = (void *)0x0;
    local_78 = 0;
                    /* catch() { ... } // from try @ 00993ffc with catch @ 00994094 */
    local_90 = 0;
    uStack_88 = 0;
                    /* catch() { ... } // from try @ 00994014 with catch @ 00994098 */
    uVar3 = luaval_to_size(param_1,2,aSStack_60,"ccui.EditBox:initWithSizeAndTexture");
                    /* catch() { ... } // from try @ 00993fc8 with catch @ 009940c8 */
    uVar4 = luaval_to_std_string
                      (param_1,3,(basic_string *)&local_78,"ccui.EditBox:initWithSizeAndTexture");
    uVar5 = luaval_to_std_string
                      (param_1,4,(basic_string *)&local_90,"ccui.EditBox:initWithSizeAndTexture");
    if ((uVar3 & uVar4 & uVar5 & 1) == 0) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_ui_EditBox_initWithSizeAndTexture\'"
                  ,0);
      uVar9 = 0;
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_a8,"");
      uVar3 = cocos2d::ui::EditBox::initWithSizeAndTexture
                        (pEVar8,aSStack_60,&local_78,&local_90,&local_a8,0);
      if ((local_a8 & 1) != 0) {
        operator_delete(local_98);
      }
      tolua_pushboolean(param_1,uVar3 & 1);
      uVar9 = 1;
    }
    goto joined_r0x00994148;
  case 5:
    cocos2d::Size::Size(aSStack_60);
    local_70 = 0;
    local_68 = (void *)0x0;
    local_80 = (void *)0x0;
    local_78 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_a0 = 0;
    local_98 = (void *)0x0;
    local_a8 = 0;
    uVar3 = luaval_to_size(param_1,2,aSStack_60,"ccui.EditBox:initWithSizeAndTexture");
    uVar4 = luaval_to_std_string
                      (param_1,3,(basic_string *)&local_78,"ccui.EditBox:initWithSizeAndTexture");
    uVar5 = luaval_to_std_string
                      (param_1,4,(basic_string *)&local_90,"ccui.EditBox:initWithSizeAndTexture");
    uVar6 = luaval_to_std_string
                      (param_1,5,(basic_string *)&local_a8,"ccui.EditBox:initWithSizeAndTexture");
    if ((uVar3 & uVar4 & uVar5 & uVar6 & 1) == 0) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_ui_EditBox_initWithSizeAndTexture\'"
                  ,0);
      goto LAB_009941ec;
    }
    uVar3 = cocos2d::ui::EditBox::initWithSizeAndTexture
                      (pEVar8,aSStack_60,&local_78,&local_90,&local_a8,0);
    tolua_pushboolean(param_1,uVar3 & 1);
LAB_00994074:
    uVar9 = 1;
    break;
  case 6:
    cocos2d::Size::Size(aSStack_60);
    local_70 = 0;
    local_68 = (void *)0x0;
    local_80 = (void *)0x0;
    local_78 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_a0 = 0;
    local_98 = (void *)0x0;
    local_a8 = 0;
    uVar3 = luaval_to_size(param_1,2,aSStack_60,"ccui.EditBox:initWithSizeAndTexture");
                    /* try { // try from 00993fc8 to 00a93ffb has its CatchHandler @ 009940c8 */
    uVar4 = luaval_to_std_string
                      (param_1,3,(basic_string *)&local_78,"ccui.EditBox:initWithSizeAndTexture");
                    /* try { // try from 00993ffc to 00a9400f has its CatchHandler @ 00994094 */
    uVar5 = luaval_to_std_string
                      (param_1,4,(basic_string *)&local_90,"ccui.EditBox:initWithSizeAndTexture");
                    /* try { // try from 00994014 to 00a94047 has its CatchHandler @ 00994098 */
    uVar6 = luaval_to_std_string
                      (param_1,5,(basic_string *)&local_a8,"ccui.EditBox:initWithSizeAndTexture");
    uVar7 = luaval_to_int32(param_1,6,&local_ac,"ccui.EditBox:initWithSizeAndTexture");
                    /* try { // try from 00994048 to 00a940e3 has its CatchHandler @ 00993eb0 */
    if ((uVar3 & uVar4 & uVar5 & uVar6 & uVar7 & 1) != 0) {
      uVar3 = cocos2d::ui::EditBox::initWithSizeAndTexture
                        (pEVar8,aSStack_60,&local_78,&local_90,&local_a8,local_ac);
      tolua_pushboolean(param_1,uVar3 & 1);
      goto LAB_00994074;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_ui_EditBox_initWithSizeAndTexture\'",0
               );
LAB_009941ec:
    uVar9 = 0;
    break;
  default:
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012e0877,
               iVar2 + -1,2);
    uVar9 = 0;
    goto LAB_00994220;
  }
  if ((local_a8 & 1) != 0) {
    operator_delete(local_98);
  }
joined_r0x00994148:
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if ((local_78 & 1) != 0) {
LAB_00994218:
    operator_delete(local_68);
  }
LAB_00994220:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar9;
}

