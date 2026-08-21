
/* cocos2d::network::WebSocket::init(cocos2d::network::WebSocket::Delegate const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > > const*,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

void __thiscall
cocos2d::network::WebSocket::init
          (WebSocket *this,Delegate *param_1,basic_string *param_2,vector *param_3,
          basic_string *param_4)

{
  WebSocketImpl::init(*(WebSocketImpl **)(this + 0x10),param_1,param_2,param_3,param_4);
  return;
}

