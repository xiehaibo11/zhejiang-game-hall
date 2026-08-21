
/* cocos2d::ui::Scale9Sprite::initWithSpriteFrameName(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, cocos2d::Rect const&) */

uint __thiscall
cocos2d::ui::Scale9Sprite::initWithSpriteFrameName
          (Scale9Sprite *this,basic_string *param_1,Rect *param_2)

{
  uint uVar1;
  Texture2D *pTVar2;
  
  uVar1 = Sprite::initWithSpriteFrameName((Sprite *)this,param_1);
  pTVar2 = (Texture2D *)(**(code **)(*(long *)this + 0x550))(this);
  setupSlice9(this,pTVar2,param_2);
  return uVar1 & 1;
}

