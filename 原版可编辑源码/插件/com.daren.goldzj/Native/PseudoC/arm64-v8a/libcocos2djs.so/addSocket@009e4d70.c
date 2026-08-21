
/* cocos2d::network::SocketIO::addSocket(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   cocos2d::network::SIOClientImpl*) */

void __thiscall
cocos2d::network::SocketIO::addSocket(SocketIO *this,basic_string *param_1,SIOClientImpl *param_2)

{
  Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::network::SIOClientImpl*>
  ::insert((Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::network::SIOClientImpl*>
            *)(this + 8),param_1,param_2);
  return;
}

