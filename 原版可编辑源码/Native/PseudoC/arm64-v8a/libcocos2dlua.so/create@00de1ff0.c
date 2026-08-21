
/* cocos2d::ui::Scale9Sprite::create() */

Sprite * cocos2d::ui::Scale9Sprite::create(void)

{
  Sprite *this;
  ulong uVar1;
  
  this = operator_new(0x550,(nothrow_t *)&std::nothrow);
  if (this != (Sprite *)0x0) {
    Sprite::Sprite(this);
    this[0x52d] = (Sprite)0x0;
    *(undefined8 *)(this + 0x538) = 0;
    *(undefined8 *)(this + 0x530) = 0;
    *(undefined ***)this = &PTR__Scale9Sprite_016e4b08;
    *(undefined ***)(this + 0x2f8) = &PTR__Scale9Sprite_016e51e8;
    *(undefined8 *)(this + 0x540) = 0x100000000;
    uVar1 = init((Scale9Sprite *)this);
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

