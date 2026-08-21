
/* cocos2d::experimental::ui::VideoPlayer::draw(cocos2d::Renderer*, cocos2d::Mat4 const&, unsigned
   int) */

void __thiscall
cocos2d::experimental::ui::VideoPlayer::draw
          (VideoPlayer *this,Renderer *param_1,Mat4 *param_2,uint param_3)

{
  long lVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_60 [16];
  void *local_50;
  float local_48;
  float fStack_44;
  float local_40;
  float fStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  Node::draw((Renderer *)this,(Mat4 *)param_1,(uint)param_2);
  if ((param_3 & 1) != 0) {
                    /* try { // try from 00ddf750 to 00edf7c7 has its CatchHandler @ 00ddfb40 */
    cocos2d::ui::Helper::convertBoundingBoxToScreen((Node *)this);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_60,"setVideoRect");
    JniHelper::callStaticVoidMethod<int,int,int,int,int>
              ((basic_string *)&DAT_017889d8,(basic_string *)local_60,*(int *)(this + 0x51c),
               (int)local_48,(int)fStack_44,(int)local_40,(int)fStack_3c);
    if (((byte)local_60[0] & 1) != 0) {
      operator_delete(local_50);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

