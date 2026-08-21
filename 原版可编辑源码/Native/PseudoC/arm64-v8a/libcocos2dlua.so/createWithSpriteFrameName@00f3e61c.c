
/* cocos2d::Sprite::createWithSpriteFrameName(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

Sprite * cocos2d::Sprite::createWithSpriteFrameName(basic_string *param_1)

{
  SpriteFrameCache *this;
  long lVar1;
  Sprite *this_00;
  ulong uVar2;
  
  this = (SpriteFrameCache *)SpriteFrameCache::getInstance();
  lVar1 = SpriteFrameCache::getSpriteFrameByName(this,param_1);
  this_00 = operator_new(0x530,(nothrow_t *)&std::nothrow);
  if (this_00 != (Sprite *)0x0) {
    Sprite(this_00);
    if ((lVar1 == 0) ||
       (uVar2 = (**(code **)(*(long *)this_00 + 0x610))(this_00,lVar1), (uVar2 & 1) == 0)) {
      (**(code **)(*(long *)this_00 + 8))(this_00);
      this_00 = (Sprite *)0x0;
    }
    else {
      Ref::autorelease((Ref *)this_00);
    }
  }
  return this_00;
}

