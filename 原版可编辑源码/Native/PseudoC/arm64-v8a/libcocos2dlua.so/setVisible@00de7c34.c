
/* cocos2d::experimental::ui::WebViewImpl::setVisible(bool) */

void __thiscall cocos2d::experimental::ui::WebViewImpl::setVisible(WebViewImpl *this,bool param_1)

{
  long lVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00de7c60 to 00ee7ccb has its CatchHandler @ 00de8c4c */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_50,"setVisible");
  JniHelper::callStaticVoidMethod<int,bool>
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

