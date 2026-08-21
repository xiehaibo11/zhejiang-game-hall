
/* cocostudio::Bone::changeDisplayByName(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, bool) */

void __thiscall cocostudio::Bone::changeDisplayByName(Bone *this,basic_string *param_1,bool param_2)

{
  DisplayManager::changeDisplayWithName(*(DisplayManager **)(this + 0x310),param_1,param_2);
  return;
}

