
/* cocostudio::ArmatureDataManager::removeTextureData(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
cocostudio::ArmatureDataManager::removeTextureData(ArmatureDataManager *this,basic_string *param_1)

{
  cocos2d::
  Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::TextureData*>
  ::erase((Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::TextureData*>
           *)(this + 0x78),param_1);
  return;
}

