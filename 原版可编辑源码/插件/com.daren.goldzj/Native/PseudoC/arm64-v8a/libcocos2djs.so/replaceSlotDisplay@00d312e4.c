
/* dragonBones::BaseFactory::replaceSlotDisplay(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, dragonBones::Slot*, int)
   const */

undefined8 __thiscall
dragonBones::BaseFactory::replaceSlotDisplay
          (BaseFactory *this,basic_string *param_1,basic_string *param_2,basic_string *param_3,
          basic_string *param_4,Slot *param_5,int param_6)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*(long *)this + 0x90))(this,param_2,param_1);
  uVar2 = 0;
  if (((lVar1 != 0) && (uVar2 = 0, *(SkinData **)(lVar1 + 0x138) != (SkinData *)0x0)) &&
     (lVar1 = SkinData::getDisplay(*(SkinData **)(lVar1 + 0x138),param_3,param_4), uVar2 = 0,
     lVar1 != 0)) {
    (**(code **)(*(long *)this + 0xa8))(this,param_5,lVar1,param_6);
    uVar2 = 1;
  }
  return uVar2;
}

