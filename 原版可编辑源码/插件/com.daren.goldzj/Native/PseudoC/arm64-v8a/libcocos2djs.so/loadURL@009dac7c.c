
/* cocos2d::WebView::loadURL(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall cocos2d::WebView::loadURL(WebView *this,basic_string *param_1)

{
                    /* try { // try from 009dac7c to 00adac83 has its CatchHandler @ 009dad98 */
  WebViewImpl::loadURL(*(WebViewImpl **)(this + 0xd0),param_1);
  return;
}

