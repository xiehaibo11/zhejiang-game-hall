
/* cocos2d::ui::EditBoxImplAndroid::setNativeReturnType(cocos2d::ui::EditBox::KeyboardReturnType) */

void __thiscall
cocos2d::ui::EditBoxImplAndroid::setNativeReturnType(EditBoxImplAndroid *this,int param_2)

{
  long lVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50 [16];
  void *local_40;
  long local_38;
  
                    /* try { // try from 00decd1c to 00eecd23 has its CatchHandler @ 00decd68 */
  lVar1 = tpidr_el0;
                    /* try { // try from 00decd24 to 00eecd83 has its CatchHandler @ 00decce4 */
  local_38 = *(long *)(lVar1 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_50,"setReturnType");
  JniHelper::callStaticVoidMethod<int,int>
            ((basic_string *)&DAT_01788ac8,(basic_string *)local_50,*(int *)(this + 0xb8),param_2);
  if (((byte)local_50[0] & 1) != 0) {
                    /* catch() { ... } // from try @ 00decd1c with catch @ 00decd68 */
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 00decdf0 with catch @ 00decd84
                       catch() { ... } // from try @ 00ded0f8 with catch @ 00decd84 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

