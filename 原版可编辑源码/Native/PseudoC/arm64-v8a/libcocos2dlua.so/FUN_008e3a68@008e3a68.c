
void FUN_008e3a68(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                  *param_1,long param_2,int *param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = *param_3;
  lVar3 = cocos2d::LuaEngine::getInstance();
  (**(code **)(**(long **)(lVar3 + 8) + 0xb8))(*(long **)(lVar3 + 8),*(undefined4 *)(param_2 + 8));
  lua_pushinteger(*(undefined8 *)(param_2 + 0x10),(long)iVar2);
  iVar2 = lua_pcall(*(undefined8 *)(param_2 + 0x10),1,1,0);
  if (iVar2 == 0) {
    pcVar4 = (char *)lua_tolstring(*(undefined8 *)(param_2 + 0x10),0xffffffff,0);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_50,pcVar4);
    lua_settop(*(undefined8 *)(param_2 + 0x10),0xfffffffe);
    *(undefined8 *)(param_1 + 0x10) = local_40;
    *(undefined8 *)(param_1 + 8) = uStack_48;
    *(undefined8 *)param_1 = local_50;
  }
  else {
    lua_settop(*(undefined8 *)(param_2 + 0x10),0xfffffffe);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(param_1,"");
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

