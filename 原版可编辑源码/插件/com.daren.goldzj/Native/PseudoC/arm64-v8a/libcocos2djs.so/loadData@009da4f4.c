
/* cocos2d::WebView::loadData(cocos2d::Data const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall
cocos2d::WebView::loadData
          (WebView *this,Data *param_1,basic_string *param_2,basic_string *param_3,
          basic_string *param_4)

{
  WebViewImpl::loadData(*(WebViewImpl **)(this + 0xd0),param_1,param_2,param_3,param_4);
  return;
}

