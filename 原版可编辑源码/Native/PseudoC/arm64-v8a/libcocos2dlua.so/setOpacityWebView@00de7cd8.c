
/* cocos2d::experimental::ui::WebViewImpl::setOpacityWebView(float) */

void __thiscall
cocos2d::experimental::ui::WebViewImpl::setOpacityWebView(WebViewImpl *this,float param_1)

{
  long lVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
                    /* try { // try from 00de7cf0 to 00ee7cfb has its CatchHandler @ 00de8ac4 */
  local_38 = *(long *)(lVar1 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_50,"setOpacityWebView");
  JniHelper::callStaticVoidMethod<int,float>
            ((basic_string *)&DAT_01788a38,(basic_string *)local_50,*(int *)(this + 8),param_1);
  if (((byte)local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

