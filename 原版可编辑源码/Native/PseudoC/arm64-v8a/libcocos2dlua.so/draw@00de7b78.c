
/* cocos2d::experimental::ui::WebViewImpl::draw(cocos2d::Renderer*, cocos2d::Mat4 const&, unsigned
   int) */

void __thiscall
cocos2d::experimental::ui::WebViewImpl::draw
          (WebViewImpl *this,Renderer *param_1,Mat4 *param_2,uint param_3)

{
  long lVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50 [16];
  void *local_40;
  float local_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  long local_28;
  
                    /* try { // try from 00de7b84 to 00ee7b93 has its CatchHandler @ 00de8c98 */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if ((param_3 & 1) != 0) {
                    /* try { // try from 00de7b98 to 00ee7ba7 has its CatchHandler @ 00de8c94 */
    cocos2d::ui::Helper::convertBoundingBoxToScreen(*(Node **)(this + 0x10));
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_50,"setWebViewRect");
    JniHelper::callStaticVoidMethod<int,int,int,int,int>
              ((basic_string *)&DAT_01788a38,(basic_string *)local_50,*(int *)(this + 8),
               (int)local_38,(int)fStack_34,(int)local_30,(int)fStack_2c);
    if (((byte)local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

