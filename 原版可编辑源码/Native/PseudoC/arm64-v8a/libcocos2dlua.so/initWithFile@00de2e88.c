
/* cocos2d::ui::Scale9Sprite::initWithFile(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, cocos2d::Rect const&,
   cocos2d::Rect const&) */

uint __thiscall
cocos2d::ui::Scale9Sprite::initWithFile
          (Scale9Sprite *this,basic_string *param_1,Rect *param_2,Rect *param_3)

{
  uint uVar1;
  ulong uVar2;
  Texture2D *pTVar3;
  
  uVar2 = Rect::equals((Rect *)param_2,(Rect *)Rect::ZERO);
  if ((uVar2 & 1) == 0) {
    uVar1 = Sprite::initWithFile((Sprite *)this,param_1,param_2);
  }
  else {
                    /* try { // try from 00de2ec0 to 00ee2edb has its CatchHandler @ 00de2fd4 */
    uVar1 = Sprite::initWithFile((Sprite *)this,param_1);
  }
                    /* try { // try from 00de2ee0 to 00ee2eef has its CatchHandler @ 00de2fd0 */
  pTVar3 = (Texture2D *)(**(code **)(*(long *)this + 0x550))(this);
                    /* try { // try from 00de2ef0 to 00ee2fef has its CatchHandler @ 00de2e64 */
  setupSlice9(this,pTVar3,param_3);
  return uVar1 & 1;
}

