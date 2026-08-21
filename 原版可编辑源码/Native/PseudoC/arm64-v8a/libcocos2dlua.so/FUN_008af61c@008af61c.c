
void FUN_008af61c(lua_State *param_1)

{
  char *pcVar1;
  int *piVar2;
  long lVar3;
  int iVar4;
  void *pvVar5;
  char *pcVar6;
  char *pcVar7;
  undefined8 uVar8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_80 [16];
  void *local_70;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_68 [16];
  void *local_58;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50 [16];
  void *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  uVar8 = 0;
  if (param_1 == (lua_State *)0x0) goto LAB_008af828;
  iVar4 = lua_gettop();
  if (iVar4 == 4) {
    pcVar7 = (char *)tolua_tostring(param_1,2,0);
    pcVar1 = "";
    pcVar6 = pcVar1;
    if (pcVar7 != (char *)0x0) {
      pcVar6 = pcVar7;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_50,pcVar6);
    pcVar7 = (char *)tolua_tostring(param_1,3,0);
    pcVar6 = pcVar1;
    if (pcVar7 != (char *)0x0) {
      pcVar6 = pcVar7;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_68,pcVar6);
    pcVar6 = (char *)tolua_tostring(param_1,4,0);
    if (pcVar6 != (char *)0x0) {
      pcVar1 = pcVar6;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_80,pcVar1);
    pvVar5 = (void *)cocos2d::MenuItemImage::create
                               ((basic_string *)local_50,(basic_string *)local_68,
                                (basic_string *)local_80);
    piVar2 = (int *)((long)pvVar5 + 0x10);
    if (pvVar5 == (void *)0x0) {
      iVar4 = -1;
      piVar2 = (int *)0x0;
    }
    else {
      iVar4 = *(int *)((long)pvVar5 + 0xc);
    }
    toluafix_pushusertype_ccobject(param_1,iVar4,piVar2,pvVar5,"cc.MenuItemImage");
    if (((byte)local_80[0] & 1) != 0) {
      operator_delete(local_70);
    }
    if (((byte)local_68[0] & 1) != 0) {
      operator_delete(local_58);
    }
joined_r0x008af868:
    if (((byte)local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  else {
    if (iVar4 == 3) {
      pcVar6 = (char *)tolua_tostring(param_1,2,0);
      pcVar1 = "";
      if (pcVar6 != (char *)0x0) {
        pcVar1 = pcVar6;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_50,pcVar1);
      pcVar6 = (char *)tolua_tostring(param_1,3,0);
      pcVar1 = "";
      if (pcVar6 != (char *)0x0) {
        pcVar1 = pcVar6;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_68,pcVar1);
      pvVar5 = (void *)cocos2d::MenuItemImage::create
                                 ((basic_string *)local_50,(basic_string *)local_68);
      piVar2 = (int *)((long)pvVar5 + 0x10);
      if (pvVar5 == (void *)0x0) {
        iVar4 = -1;
        piVar2 = (int *)0x0;
      }
      else {
        iVar4 = *(int *)((long)pvVar5 + 0xc);
      }
      toluafix_pushusertype_ccobject(param_1,iVar4,piVar2,pvVar5,"cc.MenuItemImage");
      if (((byte)local_68[0] & 1) != 0) {
        operator_delete(local_58);
      }
      goto joined_r0x008af868;
    }
    if (iVar4 + -1 != 0) {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n",
                 "cc.MenuItemImage:create",iVar4 + -1,0);
      uVar8 = 0;
      goto LAB_008af828;
    }
    pvVar5 = (void *)cocos2d::MenuItemImage::create();
    piVar2 = (int *)((long)pvVar5 + 0x10);
    if (pvVar5 == (void *)0x0) {
      iVar4 = -1;
      piVar2 = (int *)0x0;
    }
    else {
      iVar4 = *(int *)((long)pvVar5 + 0xc);
    }
    toluafix_pushusertype_ccobject(param_1,iVar4,piVar2,pvVar5,"cc.MenuItemImage");
  }
  uVar8 = 1;
LAB_008af828:
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}

