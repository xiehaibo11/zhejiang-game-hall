
/* cocostudio::ArmatureDataManager::removeArmatureData(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
cocostudio::ArmatureDataManager::removeArmatureData(ArmatureDataManager *this,basic_string *param_1)

{
  cocos2d::
  Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::ArmatureData*>
  ::erase((Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::ArmatureData*>
           *)(this + 0x28),param_1);
  return;
}

