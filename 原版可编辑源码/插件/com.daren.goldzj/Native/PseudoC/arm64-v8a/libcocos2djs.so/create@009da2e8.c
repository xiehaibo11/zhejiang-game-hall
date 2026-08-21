
/* cocos2d::WebView::create() */

WebView * cocos2d::WebView::create(void)

{
  WebView *this;
  
                    /* try { // try from 009da2e8 to 00ada34f has its CatchHandler @ 009da1c8 */
  this = operator_new(0xe0,(nothrow_t *)&std::nothrow);
  if (this != (WebView *)0x0) {
    WebView(this);
    Ref::autorelease((Ref *)this);
  }
  return this;
}

