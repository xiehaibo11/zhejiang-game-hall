
/* dragonBones::CCFactory::buildArmatureDisplay(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) const */

undefined8
dragonBones::CCFactory::buildArmatureDisplay
          (basic_string *param_1,basic_string *param_2,basic_string *param_3,basic_string *param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*(long *)param_1 + 0xa0))();
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0xb8);
  }
  return uVar2;
}

