
/* cocos2d::WebView::loadFile(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall cocos2d::WebView::loadFile(WebView *this,basic_string *param_1)

{
                    /* try { // try from 009dae10 to 00adaf0f has its CatchHandler @ 009dae10
                       catch() { ... } // from try @ 009dae10 with catch @ 009dae10
                       catch() { ... } // from try @ 009dafbc with catch @ 009dae10 */
  WebViewImpl::loadFile(*(WebViewImpl **)(this + 0xd0),param_1);
  return;
}

