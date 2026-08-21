
/* spine::SkeletonCache::onAnimationStateEvent(spine::TrackEntry*, spine::EventType, spine::Event*)
    */

void spine::SkeletonCache::onAnimationStateEvent(long param_1,TrackEntry *param_2,int param_3)

{
  size_t sVar1;
  char *__s1;
  byte bVar2;
  long lVar3;
  int iVar4;
  Animation *this;
  long lVar5;
  size_t sVar6;
  ulong uVar7;
  char *__s2;
  char *pcVar8;
  char *pcVar9;
  ulong uVar10;
  ulong local_60;
  size_t local_58;
  char *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  SkeletonAnimation::onAnimationStateEvent();
  if (((param_2 == (TrackEntry *)0x0) || (param_3 != 3)) ||
     (this = (Animation *)TrackEntry::getAnimation(param_2), this == (Animation *)0x0))
  goto LAB_00d185d4;
  lVar5 = Animation::getName(this);
  pcVar8 = *(char **)(lVar5 + 0x10);
  local_60 = 0;
  local_58 = 0;
  local_50 = (char *)0x0;
  sVar6 = strlen(pcVar8);
  if (0xffffffffffffffef < sVar6) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (sVar6 < 0x17) {
    pcVar9 = (char *)((ulong)&local_60 | 1);
    local_60 = CONCAT71(local_60._1_7_,(char)((int)sVar6 << 1));
    if (sVar6 != 0) goto LAB_00d184f8;
  }
  else {
    uVar10 = sVar6 + 0x10 & 0xfffffffffffffff0;
    pcVar9 = operator_new(uVar10);
    local_60 = uVar10 | 1;
    local_58 = sVar6;
    local_50 = pcVar9;
LAB_00d184f8:
    memcpy(pcVar9,pcVar8,sVar6);
  }
  pcVar8 = local_50;
  uVar10 = local_60;
  pcVar9[sVar6] = '\0';
  bVar2 = *(byte *)(param_1 + 0x1e0);
  uVar7 = local_60 >> 1 & 0x7f;
  sVar6 = uVar7;
  if ((local_60 & 1) != 0) {
    sVar6 = local_58;
  }
  sVar1 = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    sVar1 = *(size_t *)(param_1 + 0x1e8);
  }
  if (sVar6 == sVar1) {
    __s2 = *(char **)(param_1 + 0x1f0);
    pcVar9 = (char *)((ulong)&local_60 | 1);
    __s1 = pcVar9;
    if ((local_60 & 1) != 0) {
      __s1 = local_50;
    }
    if ((bVar2 & 1) == 0) {
      __s2 = (char *)(param_1 + 0x1e1);
    }
    if ((local_60 & 1) == 0) {
      if (sVar6 != 0) {
        lVar5 = -uVar7;
        do {
          if (*pcVar9 != *__s2) goto LAB_00d185c4;
          pcVar9 = pcVar9 + 1;
          lVar5 = lVar5 + 1;
          __s2 = __s2 + 1;
        } while (lVar5 != 0);
      }
LAB_00d1859c:
      lVar5 = std::__ndk1::
              __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,spine::SkeletonCache::AnimationData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,spine::SkeletonCache::AnimationData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,spine::SkeletonCache::AnimationData*>>>
              ::
              find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                        ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,spine::SkeletonCache::AnimationData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,spine::SkeletonCache::AnimationData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,spine::SkeletonCache::AnimationData*>>>
                          *)(param_1 + 0x1f8),(basic_string *)(param_1 + 0x1e0));
      if ((param_1 + 0x200 != lVar5) && (*(long *)(lVar5 + 0x38) != 0)) {
        *(undefined1 *)(*(long *)(lVar5 + 0x38) + 0x18) = 1;
      }
      goto LAB_00d185c4;
    }
    if ((sVar6 == 0) || (iVar4 = memcmp(__s1,__s2,sVar6), iVar4 == 0)) goto LAB_00d1859c;
  }
  else {
LAB_00d185c4:
    pcVar8 = local_50;
    if ((uVar10 & 1) == 0) goto LAB_00d185d4;
  }
  operator_delete(pcVar8);
LAB_00d185d4:
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

