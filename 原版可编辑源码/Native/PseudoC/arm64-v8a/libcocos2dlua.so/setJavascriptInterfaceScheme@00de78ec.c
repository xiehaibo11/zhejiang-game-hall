
/* cocos2d::experimental::ui::WebViewImpl::setJavascriptInterfaceScheme(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
cocos2d::experimental::ui::WebViewImpl::setJavascriptInterfaceScheme
          (WebViewImpl *this,basic_string *param_1)

{
  undefined4 uVar1;
  long lVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_68 [16];
  void *local_58;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50 [16];
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_50,"setJavascriptInterfaceScheme");
  uVar1 = *(undefined4 *)(this + 8);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(local_68,param_1);
  JniHelper::
  callStaticVoidMethod<int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
            (&DAT_01788a38,local_50,uVar1,local_68);
  if (((byte)local_68[0] & 1) != 0) {
                    /* try { // try from 00de7958 to 00ee7967 has its CatchHandler @ 00de8cd4 */
    operator_delete(local_58);
  }
  if (((byte)local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
                    /* try { // try from 00de796c to 00ee797b has its CatchHandler @ 00de8de0 */
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

