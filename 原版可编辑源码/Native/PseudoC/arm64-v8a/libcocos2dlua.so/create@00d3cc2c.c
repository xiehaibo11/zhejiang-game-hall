
/* cocos2d::Sprite3D::create() */

Sprite3D * cocos2d::Sprite3D::create(void)

{
  Sprite3D *this;
  ulong uVar1;
  
  this = operator_new(0x460,(nothrow_t *)&std::nothrow);
  if (this != (Sprite3D *)0x0) {
    Sprite3D(this);
    uVar1 = (**(code **)(*(long *)this + 0x500))(this);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (Sprite3D *)0x0;
    }
    else {
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

