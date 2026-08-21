
/* cocos2d::LabelBMFont::create() */

LabelBMFont * cocos2d::LabelBMFont::create(void)

{
  LabelBMFont *this;
  
  this = operator_new(0x330,(nothrow_t *)&std::nothrow);
  if (this != (LabelBMFont *)0x0) {
    LabelBMFont(this);
    Ref::autorelease((Ref *)this);
  }
  return this;
}

