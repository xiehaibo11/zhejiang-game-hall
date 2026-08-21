
/* cocos2d::UserDefault::deleteValueForKey(char const*) */

void __thiscall cocos2d::UserDefault::deleteValueForKey(UserDefault *this,char *param_1)

{
  long lVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_50,"deleteValueForKey");
  JniHelper::callStaticVoidMethod<char_const*>
            ((basic_string *)&DAT_0178fd50,(basic_string *)local_50,param_1);
  if (((byte)local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  (**(code **)(*(long *)this + 0x60))(this);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

