
/* cocos2d::ui::Scale9Sprite::initWithFile(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, cocos2d::Rect const&) */

uint __thiscall
cocos2d::ui::Scale9Sprite::initWithFile(Scale9Sprite *this,basic_string *param_1,Rect *param_2)

{
  long lVar1;
  uint uVar2;
  Texture2D *pTVar3;
  Rect aRStack_48 [16];
  long local_38;
  
                    /* try { // try from 00de2a60 to 00ee2b2f has its CatchHandler @ 00de27e8 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  Rect::Rect(aRStack_48,*(float *)(this + 0x530),*(float *)(this + 0x538),
             (*(float *)(this + 0x438) - *(float *)(this + 0x530)) - *(float *)(this + 0x534),
             (*(float *)(this + 0x43c) - *(float *)(this + 0x538)) - *(float *)(this + 0x53c));
  uVar2 = Sprite::initWithFile((Sprite *)this,param_1,param_2);
  pTVar3 = (Texture2D *)(**(code **)(*(long *)this + 0x550))(this);
                    /* catch() { ... } // from try @ 00de2928 with catch @ 00de2acc */
                    /* catch() { ... } // from try @ 00de2904 with catch @ 00de2ad0 */
  setupSlice9(this,pTVar3,aRStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 00de28f4 with catch @ 00de2b00 */
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 00de2930 with catch @ 00de2b04 */
  __stack_chk_fail();
}

