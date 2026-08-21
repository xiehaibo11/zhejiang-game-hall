
/* dragonBones::ArmatureCache::updateToFrame(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, int) */

void __thiscall
dragonBones::ArmatureCache::updateToFrame(ArmatureCache *this,basic_string *param_1,int param_2)

{
  size_t __n;
  size_t sVar1;
  basic_string *pbVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar3;
  basic_string bVar4;
  int iVar5;
  ArmatureCache *pAVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  ArmatureCache *pAVar10;
  AnimationData *pAVar11;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  Animation *this_01;
  
  pAVar6 = (ArmatureCache *)
           std::__ndk1::
           __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ArmatureCache::AnimationData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ArmatureCache::AnimationData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ArmatureCache::AnimationData*>>>
           ::
           find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                     ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ArmatureCache::AnimationData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ArmatureCache::AnimationData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ArmatureCache::AnimationData*>>>
                       *)(this + 0x78),param_1);
  if (this + 0x80 == pAVar6) {
    return;
  }
  pAVar11 = *(AnimationData **)(pAVar6 + 0x38);
  if (pAVar11 == (AnimationData *)0x0) {
    return;
  }
  if (pAVar11[0x18] != (AnimationData)0x0) {
    return;
  }
  if (MaxCacheTime < *(float *)(pAVar11 + 0x1c)) {
    return;
  }
  if ((param_2 != -1) &&
     ((ulong)(long)(param_2 + 1) <=
      (ulong)(*(long *)(pAVar11 + 0x28) - *(long *)(pAVar11 + 0x20) >> 3))) {
    return;
  }
  this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0x60);
  bVar3 = *this_00;
  bVar4 = *param_1;
  __n = (ulong)((byte)bVar3 >> 1);
  if (((byte)bVar3 & 1) != 0) {
    __n = *(size_t *)(this + 0x68);
  }
  sVar1 = (ulong)((byte)bVar4 >> 1);
  if (((byte)bVar4 & 1) != 0) {
    sVar1 = *(size_t *)(param_1 + 8);
  }
  if (__n == sVar1) {
    pAVar10 = *(ArmatureCache **)(this + 0x70);
    pAVar6 = *(ArmatureCache **)(param_1 + 0x10);
    if (((byte)bVar3 & 1) == 0) {
      pAVar10 = this + 0x61;
    }
    if (((byte)bVar4 & 1) == 0) {
      pAVar6 = (ArmatureCache *)(param_1 + 1);
    }
    if (((byte)bVar3 & 1) == 0) {
      if (__n != 0) {
        pAVar10 = this + 0x61;
        lVar9 = -(ulong)((byte)bVar3 >> 1);
        do {
          if (*pAVar10 != *pAVar6) goto LAB_00d542f8;
          pAVar10 = pAVar10 + 1;
          lVar9 = lVar9 + 1;
          pAVar6 = pAVar6 + 1;
        } while (lVar9 != 0);
      }
      goto LAB_00d54330;
    }
    if ((__n == 0) || (iVar5 = memcmp(pAVar10,pAVar6,__n), iVar5 == 0)) goto LAB_00d54330;
  }
LAB_00d542f8:
  updateToFrame(this,(basic_string *)this_00,-1);
  if (this_00 !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1) {
    uVar8 = *(ulong *)(param_1 + 8);
    pbVar2 = *(basic_string **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      pbVar2 = param_1 + 1;
      uVar8 = (ulong)((byte)*param_1 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(this_00,(char *)pbVar2,uVar8);
  }
LAB_00d54330:
  plVar7 = (long *)(**(code **)(**(long **)(this + 0x38) + 0x60))();
  this_01 = (Animation *)plVar7[0x15];
  if (*(long *)(pAVar11 + 0x28) == *(long *)(pAVar11 + 0x20)) {
    Animation::play(this_01,param_1,1);
  }
  (**(code **)(*plVar7 + 0x20))(FrameTime,plVar7);
  renderAnimationFrame(this,pAVar11);
  *(float *)(pAVar11 + 0x1c) = FrameTime + *(float *)(pAVar11 + 0x1c);
  uVar8 = Animation::isCompleted(this_01);
  if ((uVar8 & 1) == 0) {
    do {
      if (pAVar11[0x18] != (AnimationData)0x0) {
        return;
      }
      if (MaxCacheTime < *(float *)(pAVar11 + 0x1c)) {
        return;
      }
      if ((param_2 != -1) &&
         ((ulong)(long)(param_2 + 1) <=
          (ulong)(*(long *)(pAVar11 + 0x28) - *(long *)(pAVar11 + 0x20) >> 3))) {
        return;
      }
      (**(code **)(*plVar7 + 0x20))(FrameTime,plVar7);
      renderAnimationFrame(this,pAVar11);
      *(float *)(pAVar11 + 0x1c) = FrameTime + *(float *)(pAVar11 + 0x1c);
      uVar8 = Animation::isCompleted(this_01);
    } while ((uVar8 & 1) == 0);
  }
  pAVar11[0x18] = (AnimationData)0x1;
  return;
}

