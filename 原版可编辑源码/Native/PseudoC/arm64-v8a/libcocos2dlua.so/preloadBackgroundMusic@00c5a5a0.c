
/* cocostudio::ComAudio::preloadBackgroundMusic(char const*) */

void __thiscall cocostudio::ComAudio::preloadBackgroundMusic(ComAudio *this,char *param_1)

{
  undefined8 *puVar1;
  size_t sVar2;
  
  puVar1 = (undefined8 *)CocosDenshion::SimpleAudioEngine::getInstance();
  (**(code **)*puVar1)(puVar1,param_1);
  sVar2 = strlen(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (this + 0x58),param_1,sVar2);
  this[0x70] = (ComAudio)0x0;
  return;
}

