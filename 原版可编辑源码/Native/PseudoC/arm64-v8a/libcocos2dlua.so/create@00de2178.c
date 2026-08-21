
/* cocos2d::ui::Scale9Sprite::create(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, cocos2d::Rect const&) */

Sprite * cocos2d::ui::Scale9Sprite::create(basic_string *param_1,Rect *param_2)

{
  Sprite *this;
  ulong uVar1;
  Texture2D *pTVar2;
  
  this = operator_new(0x550,(nothrow_t *)&std::nothrow);
  if (this != (Sprite *)0x0) {
    Sprite::Sprite(this);
    this[0x52d] = (Sprite)0x0;
    *(undefined8 *)(this + 0x538) = 0;
    *(undefined8 *)(this + 0x530) = 0;
    *(undefined ***)this = &PTR__Scale9Sprite_016e4b08;
    *(undefined ***)(this + 0x2f8) = &PTR__Scale9Sprite_016e51e8;
    *(undefined8 *)(this + 0x540) = 0x100000000;
    uVar1 = Rect::equals((Rect *)param_2,(Rect *)Rect::ZERO);
    if ((uVar1 & 1) == 0) {
      uVar1 = Sprite::initWithFile(this,param_1,param_2);
    }
    else {
      uVar1 = Sprite::initWithFile(this,param_1);
    }
    pTVar2 = (Texture2D *)(**(code **)(*(long *)this + 0x550))(this);
    setupSlice9((Scale9Sprite *)this,pTVar2,Rect::ZERO);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (Sprite *)0x0;
    }
    else {
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

