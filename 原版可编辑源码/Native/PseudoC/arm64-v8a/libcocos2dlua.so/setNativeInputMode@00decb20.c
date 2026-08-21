
/* cocos2d::ui::EditBoxImplAndroid::setNativeInputMode(cocos2d::ui::EditBox::InputMode) */

void __thiscall
cocos2d::ui::EditBoxImplAndroid::setNativeInputMode(EditBoxImplAndroid *this,int param_2)

{
  long lVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50 [16];
  void *local_40;
  long local_38;
  
                    /* catch() { ... } // from try @ 00decac4 with catch @ 00decb30 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 00decb98 with catch @ 00decb4c */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_50,"setInputMode");
  JniHelper::callStaticVoidMethod<int,int>
            ((basic_string *)&DAT_01788ac8,(basic_string *)local_50,*(int *)(this + 0xb8),param_2);
  if (((byte)local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 00decb90 to 00eecb97 has its CatchHandler @ 00decbfc */
                    /* try { // try from 00decb98 to 00eecc17 has its CatchHandler @ 00decb4c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

