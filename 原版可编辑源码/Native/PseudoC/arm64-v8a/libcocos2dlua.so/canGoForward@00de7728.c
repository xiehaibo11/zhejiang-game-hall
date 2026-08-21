
/* cocos2d::experimental::ui::WebViewImpl::canGoForward() */

bool __thiscall cocos2d::experimental::ui::WebViewImpl::canGoForward(WebViewImpl *this)

{
  long lVar1;
  bool bVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_40 [16];
  void *local_30;
  long local_28;
  
                    /* try { // try from 00de7734 to 00ee773b has its CatchHandler @ 00de8bc4 */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_40,"canGoForward");
                    /* try { // try from 00de7764 to 00ee7773 has its CatchHandler @ 00de8cc4 */
  bVar2 = JniHelper::callStaticBooleanMethod<int>
                    ((basic_string *)&DAT_01788a38,(basic_string *)local_40,*(int *)(this + 8));
  if (((byte)local_40[0] & 1) != 0) {
                    /* try { // try from 00de7778 to 00ee7787 has its CatchHandler @ 00de8cc8 */
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

