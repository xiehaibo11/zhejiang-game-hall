
/* cocos2d::network::SIOClientImpl::addClient(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   cocos2d::network::SIOClient*) */

void __thiscall
cocos2d::network::SIOClientImpl::addClient
          (SIOClientImpl *this,basic_string *param_1,SIOClient *param_2)

{
  Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::network::SIOClient*>
  ::insert((Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::network::SIOClient*>
            *)(this + 0x178),param_1,param_2);
  return;
}

