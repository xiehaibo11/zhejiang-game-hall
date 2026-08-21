
/* cocos2d::ui::Scale9Sprite::initWithFile(cocos2d::Rect const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

uint __thiscall
cocos2d::ui::Scale9Sprite::initWithFile(Scale9Sprite *this,Rect *param_1,basic_string *param_2)

{
  uint uVar1;
  Texture2D *pTVar2;
  
  uVar1 = Sprite::initWithFile((Sprite *)this,param_2);
  pTVar2 = (Texture2D *)(**(code **)(*(long *)this + 0x550))(this);
  setupSlice9(this,pTVar2,param_1);
  return uVar1 & 1;
}

