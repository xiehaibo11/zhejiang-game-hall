
/* spine::SkeletonCache::updateToFrame(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, int) */

void __thiscall
spine::SkeletonCache::updateToFrame(SkeletonCache *this,basic_string *param_1,int param_2)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  size_t __n;
  size_t sVar1;
  ulong uVar2;
  basic_string *pbVar3;
  SkeletonCache SVar4;
  basic_string bVar5;
  int iVar6;
  SkeletonCache *pSVar7;
  long lVar8;
  SkeletonCache *pSVar9;
  AnimationData *pAVar10;
  float fVar11;
  float fVar12;
  
  pSVar7 = (SkeletonCache *)
           std::__ndk1::
           __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,spine::SkeletonCache::AnimationData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,spine::SkeletonCache::AnimationData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,spine::SkeletonCache::AnimationData*>>>
           ::
           find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                     ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,spine::SkeletonCache::AnimationData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,spine::SkeletonCache::AnimationData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,spine::SkeletonCache::AnimationData*>>>
                       *)(this + 0x1f8),param_1);
  if (this + 0x200 == pSVar7) {
    return;
  }
  pAVar10 = *(AnimationData **)(pSVar7 + 0x38);
  if (pAVar10 == (AnimationData *)0x0) {
    return;
  }
  if (pAVar10[0x18] != (AnimationData)0x0) {
    return;
  }
  if (MaxCacheTime < *(float *)(pAVar10 + 0x1c)) {
    return;
  }
  if ((param_2 != -1) &&
     ((ulong)(long)(param_2 + 1) <=
      (ulong)(*(long *)(pAVar10 + 0x28) - *(long *)(pAVar10 + 0x20) >> 3))) {
    return;
  }
  SVar4 = this[0x1e0];
  bVar5 = *param_1;
  __n = (ulong)((byte)SVar4 >> 1);
  if (((byte)SVar4 & 1) != 0) {
    __n = *(size_t *)(this + 0x1e8);
  }
  sVar1 = (ulong)((byte)bVar5 >> 1);
  if (((byte)bVar5 & 1) != 0) {
    sVar1 = *(size_t *)(param_1 + 8);
  }
  this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0x1e0);
  if (__n == sVar1) {
    pSVar9 = *(SkeletonCache **)(this + 0x1f0);
    pSVar7 = *(SkeletonCache **)(param_1 + 0x10);
    if (((byte)SVar4 & 1) == 0) {
      pSVar9 = this + 0x1e1;
    }
    if (((byte)bVar5 & 1) == 0) {
      pSVar7 = (SkeletonCache *)(param_1 + 1);
    }
    if (((byte)SVar4 & 1) == 0) {
      if (__n != 0) {
        pSVar9 = this + 0x1e1;
        lVar8 = -(ulong)((byte)SVar4 >> 1);
        do {
          if (*pSVar9 != *pSVar7) goto LAB_00d17308;
          pSVar9 = pSVar9 + 1;
          lVar8 = lVar8 + 1;
          pSVar7 = pSVar7 + 1;
        } while (lVar8 != 0);
      }
      goto LAB_00d17340;
    }
    if ((__n == 0) || (iVar6 = memcmp(pSVar9,pSVar7,__n), iVar6 == 0)) goto LAB_00d17340;
  }
LAB_00d17308:
  updateToFrame(this,(basic_string *)this_00,-1);
  if (this_00 !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1) {
    uVar2 = *(ulong *)(param_1 + 8);
    pbVar3 = *(basic_string **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      pbVar3 = param_1 + 1;
      uVar2 = (ulong)((byte)*param_1 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(this_00,(char *)pbVar3,uVar2);
  }
LAB_00d17340:
  if (*(long *)(pAVar10 + 0x28) == *(long *)(pAVar10 + 0x20)) {
    SkeletonAnimation::setAnimation((SkeletonAnimation *)this,0,param_1,false);
  }
  fVar11 = FrameTime;
  while( true ) {
    (**(code **)(*(long *)this + 0x10))(fVar11,this);
    renderAnimationFrame(this,pAVar10);
    fVar11 = FrameTime;
    fVar12 = FrameTime + *(float *)(pAVar10 + 0x1c);
    *(float *)(pAVar10 + 0x1c) = fVar12;
    if (pAVar10[0x18] != (AnimationData)0x0) {
      return;
    }
    if (MaxCacheTime < fVar12) break;
    if ((param_2 != -1) &&
       ((ulong)(long)(param_2 + 1) <=
        (ulong)(*(long *)(pAVar10 + 0x28) - *(long *)(pAVar10 + 0x20) >> 3))) {
      return;
    }
  }
  return;
}

