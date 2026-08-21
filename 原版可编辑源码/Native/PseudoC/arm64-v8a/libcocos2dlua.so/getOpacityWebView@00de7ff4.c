
/* cocos2d::experimental::ui::WebViewImpl::getOpacityWebView() const */

undefined1  [16] __thiscall
cocos2d::experimental::ui::WebViewImpl::getOpacityWebView(WebViewImpl *this)

{
  long lVar1;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_50,"getOpacityWebView");
  auVar2._0_4_ = JniHelper::callStaticFloatMethod<int>
                           ((basic_string *)&DAT_01788a38,(basic_string *)local_50,
                            *(int *)(this + 8));
  auVar2._4_4_ = extraout_var;
  uVar3 = extraout_var_00;
  if (((byte)local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    auVar2._8_8_ = uVar3;
    return auVar2;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00de8078 to 00ee80e3 has its CatchHandler @ 00de8c54 */
  __stack_chk_fail();
}

