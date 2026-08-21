
/* cocos2d::ui::EditBoxImplAndroid::setNativeFontColor(cocos2d::Color4B const&) */

void __thiscall
cocos2d::ui::EditBoxImplAndroid::setNativeFontColor(EditBoxImplAndroid *this,Color4B *param_1)

{
  long lVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50 [16];
  void *local_40;
  long local_38;
  
                    /* catch() { ... } // from try @ 00dec520 with catch @ 00dec9c8
                       catch() { ... } // from try @ 00dec8b8 with catch @ 00dec9c8 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_50,"setFontColor");
                    /* catch() { ... } // from try @ 00dec6b4 with catch @ 00deca08 */
                    /* catch() { ... } // from try @ 00dec664 with catch @ 00deca0c */
                    /* catch() { ... } // from try @ 00dec614 with catch @ 00deca10 */
  JniHelper::callStaticVoidMethod<int,int,int,int,int>
            ((basic_string *)&DAT_01788ac8,(basic_string *)local_50,*(int *)(this + 0xb8),
             (uint)(byte)*param_1,(uint)(byte)param_1[1],(uint)(byte)param_1[2],
             (uint)(byte)param_1[3]);
  if (((byte)local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

