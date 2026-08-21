
/* cocos2d::ui::TextBMFont::createInstance() */

TextBMFont * cocos2d::ui::TextBMFont::createInstance(void)

{
  TextBMFont *this;
  ulong uVar1;
  
  this = operator_new(0x530,(nothrow_t *)&std::nothrow);
  if (this != (TextBMFont *)0x0) {
    TextBMFont(this);
    uVar1 = (**(code **)(*(long *)this + 0x500))(this);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (TextBMFont *)0x0;
    }
    else {
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

