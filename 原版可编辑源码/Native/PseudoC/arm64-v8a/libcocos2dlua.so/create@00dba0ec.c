
/* cocos2d::ui::PageViewIndicator::create() */

PageViewIndicator * cocos2d::ui::PageViewIndicator::create(void)

{
  PageViewIndicator *this;
  ulong uVar1;
  
  this = operator_new(0x370,(nothrow_t *)&std::nothrow);
  if (this != (PageViewIndicator *)0x0) {
    PageViewIndicator(this);
    uVar1 = (**(code **)(*(long *)this + 0x500))(this);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (PageViewIndicator *)0x0;
    }
    else {
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

