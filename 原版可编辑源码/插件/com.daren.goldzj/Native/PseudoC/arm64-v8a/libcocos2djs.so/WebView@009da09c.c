
/* cocos2d::WebView::WebView() */

void __thiscall cocos2d::WebView::WebView(WebView *this)

{
  WebViewImpl *this_00;
  
  Ref::Ref((Ref *)this);
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined ***)this = &PTR__WebView_01c6bd48;
  *(undefined8 *)(this + 0xc0) = 0;
  this_00 = operator_new(0x18);
  WebViewImpl::WebViewImpl(this_00,this);
  *(WebViewImpl **)(this + 0xd0) = this_00;
  return;
}

