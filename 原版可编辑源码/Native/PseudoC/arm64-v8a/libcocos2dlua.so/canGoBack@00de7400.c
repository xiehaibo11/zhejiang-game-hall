
/* cocos2d::experimental::ui::WebViewImpl::canGoBack() */

bool __thiscall cocos2d::experimental::ui::WebViewImpl::canGoBack(WebViewImpl *this)

{
  long lVar1;
  bool bVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_40,"canGoBack");
  bVar2 = JniHelper::callStaticBooleanMethod<int>
                    ((basic_string *)&DAT_01788a38,(basic_string *)local_40,*(int *)(this + 8));
  if (((byte)local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

