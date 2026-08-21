
/* cocostudio::ComAudio::preloadEffect(char const*) */

void __thiscall cocostudio::ComAudio::preloadEffect(ComAudio *this,char *param_1)

{
  long *plVar1;
  size_t sVar2;
  
  plVar1 = (long *)CocosDenshion::SimpleAudioEngine::getInstance();
  (**(code **)(*plVar1 + 0x98))(plVar1,param_1);
  sVar2 = strlen(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (this + 0x58),param_1,sVar2);
  this[0x70] = (ComAudio)0x0;
  return;
}

