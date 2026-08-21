
/* cocos2d::experimental::ui::WebView::create() */

WebView * cocos2d::experimental::ui::WebView::create(void)

{
  WebView *this;
  ulong uVar1;
  
                    /* try { // try from 00de3ea4 to 00ee3eb3 has its CatchHandler @ 00de4abc */
  this = operator_new(0x5c0,(nothrow_t *)&std::nothrow);
  if (this != (WebView *)0x0) {
    WebView(this);
    uVar1 = (**(code **)(*(long *)this + 0x500))(this);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (WebView *)0x0;
    }
    else {
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

