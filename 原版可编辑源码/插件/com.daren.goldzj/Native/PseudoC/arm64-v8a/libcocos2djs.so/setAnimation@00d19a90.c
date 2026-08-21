
/* spine::SkeletonCacheAnimation::setAnimation(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, bool) */

void __thiscall
spine::SkeletonCacheAnimation::setAnimation
          (SkeletonCacheAnimation *this,basic_string *param_1,bool param_2)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  ulong uVar1;
  basic_string *pbVar2;
  undefined8 uVar3;
  
  this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0x108);
  *(uint *)(this + 0xfc) = ~(uint)param_2 & 1;
  if (this_00 !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1) {
    uVar1 = *(ulong *)(param_1 + 8);
    pbVar2 = *(basic_string **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      pbVar2 = param_1 + 1;
      uVar1 = (ulong)((byte)*param_1 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(this_00,(char *)pbVar2,uVar1);
  }
  uVar3 = SkeletonCache::buildAnimationData
                    (*(SkeletonCache **)(this + 0xe0),(basic_string *)this_00);
  this[0x100] = (SkeletonCacheAnimation)0x0;
  *(undefined4 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0xe8) = uVar3;
  *(undefined8 *)(this + 0xf0) = 0;
  return;
}

