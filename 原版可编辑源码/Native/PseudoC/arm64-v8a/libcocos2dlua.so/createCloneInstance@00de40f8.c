
/* cocos2d::experimental::ui::WebView::createCloneInstance() */

WebView * cocos2d::experimental::ui::WebView::createCloneInstance(void)

{
  WebView *this;
  ulong uVar1;
  
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

