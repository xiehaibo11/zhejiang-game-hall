
/* cocos2d::ui::TextAtlas::createCloneInstance() */

TextAtlas * cocos2d::ui::TextAtlas::createCloneInstance(void)

{
  TextAtlas *this;
  ulong uVar1;
  
  this = operator_new(0x550,(nothrow_t *)&std::nothrow);
  if (this != (TextAtlas *)0x0) {
    TextAtlas(this);
    uVar1 = (**(code **)(*(long *)this + 0x500))(this);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (TextAtlas *)0x0;
    }
    else {
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

