
/* cocos2d::ui::Scale9Sprite::initWithSpriteFrameName(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

uint __thiscall
cocos2d::ui::Scale9Sprite::initWithSpriteFrameName(Scale9Sprite *this,basic_string *param_1)

{
  long lVar1;
  uint uVar2;
  Texture2D *pTVar3;
  Rect aRStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
                    /* try { // try from 00de2bc8 to 00ee2c0b has its CatchHandler @ 00de2c48 */
  local_38 = *(long *)(lVar1 + 0x28);
  Rect::Rect(aRStack_48,*(float *)(this + 0x530),*(float *)(this + 0x538),
             (*(float *)(this + 0x438) - *(float *)(this + 0x530)) - *(float *)(this + 0x534),
             (*(float *)(this + 0x43c) - *(float *)(this + 0x538)) - *(float *)(this + 0x53c));
                    /* try { // try from 00de2c0c to 00ee2c63 has its CatchHandler @ 00de2b34 */
  uVar2 = Sprite::initWithSpriteFrameName((Sprite *)this,param_1);
  pTVar3 = (Texture2D *)(**(code **)(*(long *)this + 0x550))(this);
  setupSlice9(this,pTVar3,aRStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 00de2bc8 with catch @ 00de2c48 */
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

