
/* cocos2d::experimental::ui::WebViewImpl::goForward() */

void __thiscall cocos2d::experimental::ui::WebViewImpl::goForward(WebViewImpl *this)

{
  long lVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_40,"goForward");
  JniHelper::callStaticVoidMethod<int>
            ((basic_string *)&DAT_01788a38,(basic_string *)local_40,*(int *)(this + 8));
  if (((byte)local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
                    /* try { // try from 00de78ac to 00ee78cf has its CatchHandler @ 00de7154 */
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

