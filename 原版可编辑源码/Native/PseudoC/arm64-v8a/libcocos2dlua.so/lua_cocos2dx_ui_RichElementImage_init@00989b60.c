
/* lua_cocos2dx_ui_RichElementImage_init(lua_State*) */

undefined4 lua_cocos2dx_ui_RichElementImage_init(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  RichElementImage *pRVar9;
  undefined4 uVar10;
  int local_a0;
  undefined1 local_9c [4];
  ushort local_98 [4];
  ulong local_90;
  undefined8 uStack_88;
  void *local_80;
  ulong local_78;
  undefined8 local_70;
  void *local_68;
  int local_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  pRVar9 = (RichElementImage *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 7) {
    cocos2d::Color3B::Color3B((Color3B *)local_98);
    local_70 = 0;
    local_68 = (void *)0x0;
    local_80 = (void *)0x0;
    local_78 = 0;
    local_90 = 0;
    uStack_88 = 0;
    uVar3 = luaval_to_int32(param_1,2,&local_5c,"ccui.RichElementImage:init");
    uVar4 = luaval_to_color3b(param_1,3,(Color3B *)local_98,"ccui.RichElementImage:init");
    uVar5 = luaval_to_uint16(param_1,4,(ushort *)local_9c,"ccui.RichElementImage:init");
    uVar6 = luaval_to_std_string(param_1,5,(basic_string *)&local_78,"ccui.RichElementImage:init");
    uVar7 = luaval_to_std_string(param_1,6,(basic_string *)&local_90,"ccui.RichElementImage:init");
    uVar8 = luaval_to_int32(param_1,7,&local_a0,"ccui.RichElementImage:init");
    if ((uVar3 & uVar4 & uVar5 & uVar6 & uVar7 & uVar8 & 1) != 0) {
      uVar3 = cocos2d::ui::RichElementImage::init
                        (pRVar9,local_5c,local_98,local_9c[0],&local_78,&local_90,local_a0);
      tolua_pushboolean(param_1,uVar3 & 1);
      goto LAB_00989e8c;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_ui_RichElementImage_init\'",0)
    ;
LAB_00989f14:
    uVar10 = 0;
joined_r0x00989f1c:
    if ((local_90 & 1) != 0) {
      operator_delete(local_80);
    }
  }
  else {
    if (iVar2 == 6) {
      cocos2d::Color3B::Color3B((Color3B *)&local_a0);
      local_70 = 0;
      local_68 = (void *)0x0;
      local_80 = (void *)0x0;
      local_78 = 0;
      local_90 = 0;
      uStack_88 = 0;
      uVar3 = luaval_to_int32(param_1,2,&local_5c,"ccui.RichElementImage:init");
      uVar4 = luaval_to_color3b(param_1,3,(Color3B *)&local_a0,"ccui.RichElementImage:init");
      uVar5 = luaval_to_uint16(param_1,4,local_98,"ccui.RichElementImage:init");
      uVar6 = luaval_to_std_string(param_1,5,(basic_string *)&local_78,"ccui.RichElementImage:init")
      ;
      uVar7 = luaval_to_std_string(param_1,6,(basic_string *)&local_90,"ccui.RichElementImage:init")
      ;
      if ((uVar3 & uVar4 & uVar5 & uVar6 & uVar7 & 1) == 0) {
        tolua_error(param_1,
                    "invalid arguments in function \'lua_cocos2dx_ui_RichElementImage_init\'",0);
        goto LAB_00989f14;
      }
      uVar3 = cocos2d::ui::RichElementImage::init
                        (pRVar9,local_5c,&local_a0,local_98[0]._0_1_,&local_78,&local_90,0);
      tolua_pushboolean(param_1,uVar3 & 1);
LAB_00989e8c:
      uVar10 = 1;
      goto joined_r0x00989f1c;
    }
    if (iVar2 != 5) {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "ccui.RichElementImage:init",iVar2 + -1,4);
      uVar10 = 0;
      goto LAB_00989f38;
    }
    cocos2d::Color3B::Color3B((Color3B *)&local_a0);
    local_70 = 0;
    local_68 = (void *)0x0;
    local_78 = 0;
    uVar3 = luaval_to_int32(param_1,2,&local_5c,"ccui.RichElementImage:init");
    uVar4 = luaval_to_color3b(param_1,3,(Color3B *)&local_a0,"ccui.RichElementImage:init");
    uVar5 = luaval_to_uint16(param_1,4,local_98,"ccui.RichElementImage:init");
    uVar6 = luaval_to_std_string(param_1,5,(basic_string *)&local_78,"ccui.RichElementImage:init");
    if ((uVar3 & uVar4 & uVar5 & uVar6 & 1) == 0) {
      tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_ui_RichElementImage_init\'",
                  0);
      uVar10 = 0;
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_90,"");
      uVar3 = cocos2d::ui::RichElementImage::init
                        (pRVar9,local_5c,&local_a0,local_98[0],&local_78,&local_90,0);
      if ((local_90 & 1) != 0) {
        operator_delete(local_80);
      }
      tolua_pushboolean(param_1,uVar3 & 1);
      uVar10 = 1;
    }
  }
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
LAB_00989f38:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

