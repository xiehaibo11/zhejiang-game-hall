
/* cocos2d::renderer::Technique::setStages(std::__ndk1::vector<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > > > const&) */

void __thiscall cocos2d::renderer::Technique::setStages(Technique *this,vector *param_1)

{
  undefined4 uVar1;
  
  uVar1 = Config::getStageIDs(param_1);
  *(undefined4 *)(this + 0x10) = uVar1;
  return;
}

