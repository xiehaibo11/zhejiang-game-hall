
/* cocostudio::ArmatureDataManager::removeAnimationData(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
cocostudio::ArmatureDataManager::removeAnimationData
          (ArmatureDataManager *this,basic_string *param_1)

{
  cocos2d::
  Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::AnimationData*>
  ::erase((Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::AnimationData*>
           *)(this + 0x50),param_1);
  return;
}

