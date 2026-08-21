
/* cocos2d::UserDefault::setDataForKey(char const*, cocos2d::Data const&) */

void __thiscall cocos2d::UserDefault::setDataForKey(UserDefault *this,char *param_1,Data *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_58 [16];
  void *local_48;
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00fb9ed0(param_1);
  local_40 = (char *)0x0;
  uVar2 = Data::getBytes(param_2);
  uVar3 = Data::getSize(param_2);
  base64Encode(uVar2,uVar3,&local_40);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_58,"setStringForKey");
  JniHelper::callStaticVoidMethod<char_const*,char_const*>
            ((basic_string *)&DAT_0178fd50,(basic_string *)local_58,param_1,local_40);
  if (((byte)local_58[0] & 1) != 0) {
    operator_delete(local_48);
  }
  if (local_40 != (char *)0x0) {
    free(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

