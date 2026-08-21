
void FUN_008b162c(lua_State *param_1)

{
  char *pcVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_78 [16];
  void *local_68;
  Data aDStack_60 [16];
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
                        (param_1,2,(basic_string *)local_50,"cc.FileUtils:getDataFromFile");
      pcVar1 = (char *)((ulong)local_50 | 1);
      if ((local_50[0] & 1) != 0) {
        pcVar1 = local_40;
      }
      if ((uVar4 & 1) != 0) {
        plVar5 = (long *)cocos2d::FileUtils::getInstance();
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>(local_78,pcVar1);
        (**(code **)(*plVar5 + 0x28))(aDStack_60,plVar5,local_78);
        if (((byte)local_78[0] & 1) != 0) {
          operator_delete(local_68);
        }
        uVar4 = cocos2d::Data::isNull(aDStack_60);
        if ((uVar4 & 1) == 0) {
          uVar6 = cocos2d::Data::getBytes(aDStack_60);
          uVar7 = cocos2d::Data::getSize(aDStack_60);
          lua_pushlstring(param_1,uVar6,uVar7);
        }
        cocos2d::Data::~Data(aDStack_60);
        if ((local_50[0] & 1) != 0) {
          operator_delete(local_40);
        }
        uVar6 = 1;
        goto LAB_008b176c;
      }
      if ((local_50[0] & 1) != 0) {
        operator_delete(local_40);
      }
    }
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n",
               "cc.FileUtils:getDataFromFile",iVar3 + -1,1);
    uVar6 = 0;
  }
LAB_008b176c:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

