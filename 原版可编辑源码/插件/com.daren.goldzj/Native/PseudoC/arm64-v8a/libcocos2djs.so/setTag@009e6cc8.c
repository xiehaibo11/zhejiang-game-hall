
/* cocos2d::network::SIOClient::setTag(char const*) */

void __thiscall cocos2d::network::SIOClient::setTag(SIOClient *this,char *param_1)

{
  size_t sVar1;
  
  sVar1 = strlen(param_1);
                    /* try { // try from 009e6ce4 to 00ae6d77 has its CatchHandler @ 009e6e8c */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (this + 0x28),param_1,sVar1);
  return;
}

