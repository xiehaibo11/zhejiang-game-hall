
/* cocos2d::UserDefault::setIntegerForKey(char const*, int) */

void __thiscall cocos2d::UserDefault::setIntegerForKey(UserDefault *this,char *param_1,int param_2)

{
  long lVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00fb9ed0(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_50,"setIntegerForKey");
  JniHelper::callStaticVoidMethod<char_const*,int>
            ((basic_string *)&DAT_0178fd50,(basic_string *)local_50,param_1,param_2);
  if (((byte)local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

