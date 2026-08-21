
/* cocos2d::experimental::ui::WebView::WebView() */

void __thiscall cocos2d::experimental::ui::WebView::WebView(WebView *this)

{
  WebViewImpl *this_00;
  
  cocos2d::ui::Widget::Widget((Widget *)this);
  *(undefined8 *)(this + 0x510) = 0;
  *(undefined8 *)(this + 0x540) = 0;
  *(undefined8 *)(this + 0x570) = 0;
  *(undefined ***)this = &PTR__WebView_016e5240;
  *(undefined ***)(this + 0x318) = &PTR__WebView_016e58e8;
  *(undefined8 *)(this + 0x5a0) = 0;
  this_00 = operator_new(0x18);
                    /* try { // try from 00de3c54 to 00ee3c6f has its CatchHandler @ 00de4afc */
  WebViewImpl::WebViewImpl(this_00,this);
  *(WebViewImpl **)(this + 0x5b0) = this_00;
  return;
}

