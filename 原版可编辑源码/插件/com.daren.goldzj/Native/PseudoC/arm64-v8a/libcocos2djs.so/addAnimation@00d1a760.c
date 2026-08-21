
/* spine::SkeletonCacheAnimation::addAnimation(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, bool, float) */

void __thiscall
spine::SkeletonCacheAnimation::addAnimation
          (SkeletonCacheAnimation *this,basic_string *param_1,bool param_2,float param_3)

{
  ulong uVar1;
  basic_string *pbVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  this_00 = operator_new(0x20);
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
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
  this_00[0x18] =
       (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)param_2;
  *(float *)(this_00 + 0x1c) = param_3;
  lVar3 = *(long *)(this + 0x130);
  lVar4 = *(long *)(this + 0x150);
  uVar1 = 0;
  if (*(long *)(this + 0x138) - lVar3 != 0) {
    uVar1 = (*(long *)(this + 0x138) - lVar3) * 0x40 - 1;
  }
  uVar5 = lVar4 + *(long *)(this + 0x148);
  if (uVar1 == uVar5) {
    std::__ndk1::
    deque<spine::SkeletonCacheAnimation::AniQueueData*,std::__ndk1::allocator<spine::SkeletonCacheAnimation::AniQueueData*>>
    ::__add_back_capacity
              ((deque<spine::SkeletonCacheAnimation::AniQueueData*,std::__ndk1::allocator<spine::SkeletonCacheAnimation::AniQueueData*>>
                *)(this + 0x128));
    lVar4 = *(long *)(this + 0x150);
    lVar3 = *(long *)(this + 0x130);
    uVar5 = *(long *)(this + 0x148) + lVar4;
  }
  *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
   (*(long *)(lVar3 + (uVar5 >> 6 & 0x3fffffffffffff8)) + (uVar5 & 0x1ff) * 8) = this_00;
  *(long *)(this + 0x150) = lVar4 + 1;
  return;
}

