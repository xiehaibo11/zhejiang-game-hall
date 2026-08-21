
/* cocos2d::LuaEngine::executeNotificationEvent(cocos2d::__NotificationCenter*, char const*) */

undefined4 __thiscall
cocos2d::LuaEngine::executeNotificationEvent
          (LuaEngine *this,__NotificationCenter *param_1,char *param_2)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_50,param_2);
  iVar2 = __NotificationCenter::getObserverHandlerByName(param_1,(basic_string *)local_50);
  if (((byte)local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    (**(code **)(**(long **)(this + 8) + 0x80))(*(long **)(this + 8),param_2);
    uVar3 = (**(code **)(**(long **)(this + 8) + 200))(*(long **)(this + 8),iVar2,1);
    (**(code **)(**(long **)(this + 8) + 0x58))(*(long **)(this + 8));
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

