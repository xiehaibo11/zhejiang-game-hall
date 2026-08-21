
void FUN_008add14(long param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  __Dictionary *this;
  long lVar5;
  undefined1 uVar6;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar4 = 0;
  if (param_1 != 0) {
    plVar3 = (long *)tolua_tousertype(param_1,1,0);
    iVar2 = lua_gettop(param_1);
    if (iVar2 + -1 == 0) {
      this = (__Dictionary *)(**(code **)(*plVar3 + 0x2f0))(plVar3);
      uVar4 = 0;
      if (this != (__Dictionary *)0x0) {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>(local_50,"accelerometerEnabled");
        lVar5 = cocos2d::__Dictionary::objectForKey(this,(basic_string *)local_50);
        if (((byte)local_50[0] & 1) != 0) {
          operator_delete(local_40);
        }
        if (lVar5 == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = *(undefined1 *)(lVar5 + 0x30);
        }
        tolua_pushboolean(param_1,uVar6);
        uVar4 = 1;
      }
    }
    else {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n",
                 "cc.Layer:isAccelerometerEnabled",iVar2 + -1,0);
      uVar4 = 0;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

