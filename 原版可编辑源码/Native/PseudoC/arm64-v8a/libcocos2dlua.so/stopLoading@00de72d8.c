
/* cocos2d::experimental::ui::WebViewImpl::stopLoading() */

void __thiscall cocos2d::experimental::ui::WebViewImpl::stopLoading(WebViewImpl *this)

{
  long lVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_40 [16];
  void *local_30;
  long local_28;
  
                    /* try { // try from 00de72e0 to 00ee72ef has its CatchHandler @ 00de8ca8 */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00de72f4 to 00ee7303 has its CatchHandler @ 00de8cb8 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_40,"stopLoading");
  JniHelper::callStaticVoidMethod<int>
            ((basic_string *)&DAT_01788a38,(basic_string *)local_40,*(int *)(this + 8));
  if (((byte)local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

