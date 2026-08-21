
void FUN_008b141c(lua_State *param_1)

{
  char *pcVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  __String *this;
  undefined8 uVar6;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_80 [16];
  void *local_70;
  byte local_68 [16];
  char *local_58;
  ulong local_50 [2];
  char *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar6 = 0;
  if (param_1 != (lua_State *)0x0) {
    tolua_tousertype(param_1,1,0);
    iVar3 = lua_gettop(param_1);
    if (iVar3 + -1 == 1) {
      local_50[1] = 0;
      local_40 = (char *)0x0;
      local_50[0] = 0;
      uVar4 = luaval_to_std_string
                        (param_1,2,(basic_string *)local_50,"cc.FileUtils:getStringFromFile");
      pcVar1 = (char *)((ulong)local_50 | 1);
      if ((local_50[0] & 1) != 0) {
        pcVar1 = local_40;
      }
      if ((uVar4 & 1) != 0) {
        plVar5 = (long *)cocos2d::FileUtils::getInstance();
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>(local_80,pcVar1);
        (**(code **)(*plVar5 + 0x50))(local_68,plVar5,local_80);
        if (((byte)local_80[0] & 1) != 0) {
          operator_delete(local_70);
        }
        pcVar1 = (char *)((ulong)local_68 | 1);
        if ((local_68[0] & 1) != 0) {
          pcVar1 = local_58;
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>(local_80,pcVar1);
        this = (__String *)cocos2d::__String::createWithContentsOfFile((basic_string *)local_80);
        if (((byte)local_80[0] & 1) != 0) {
          operator_delete(local_70);
        }
        if (this != (__String *)0x0) {
          uVar6 = cocos2d::__String::getCString(this);
          tolua_pushstring(param_1,uVar6);
        }
        if ((local_68[0] & 1) != 0) {
          operator_delete(local_58);
        }
        if ((local_50[0] & 1) != 0) {
          operator_delete(local_40);
        }
        uVar6 = 1;
        goto LAB_008b1588;
      }
      if ((local_50[0] & 1) != 0) {
        operator_delete(local_40);
      }
    }
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n",
               "cc.FileUtils:getStringFromFile",iVar3 + -1,1);
    uVar6 = 0;
  }
LAB_008b1588:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

