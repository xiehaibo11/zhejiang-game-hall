
/* spine::SkeletonCache::resetAnimationData(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall spine::SkeletonCache::resetAnimationData(SkeletonCache *this,basic_string *param_1)

{
  SkeletonCache *pSVar1;
  size_t sVar2;
  size_t __n;
  basic_string *__s2;
  basic_string bVar3;
  int iVar4;
  basic_string *pbVar5;
  SkeletonCache *pSVar6;
  undefined8 *puVar7;
  long lVar8;
  SkeletonCache *pSVar9;
  basic_string *pbVar10;
  FrameData *this_00;
  ulong uVar11;
  SkeletonCache *pSVar12;
  basic_string *pbVar13;
  
  pSVar12 = *(SkeletonCache **)(this + 0x1f8);
  pSVar1 = this + 0x200;
  if (pSVar1 == pSVar12) {
    return;
  }
  __n = *(size_t *)(param_1 + 8);
  __s2 = *(basic_string **)(param_1 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    __s2 = param_1 + 1;
    __n = (ulong)((byte)*param_1 >> 1);
  }
LAB_00d18724:
  do {
    pbVar13 = *(basic_string **)(pSVar12 + 0x38);
    bVar3 = *pbVar13;
    sVar2 = (ulong)((byte)bVar3 >> 1);
    if (((byte)bVar3 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar13 + 8);
    }
    if (sVar2 == __n) {
      pbVar10 = *(basic_string **)(pbVar13 + 0x10);
      if (((byte)bVar3 & 1) == 0) {
        pbVar10 = pbVar13 + 1;
      }
      if (((byte)bVar3 & 1) == 0) {
        if (__n == 0) {
LAB_00d187fc:
          puVar7 = *(undefined8 **)(pbVar13 + 0x20);
          lVar8 = *(long *)(pbVar13 + 0x28);
          if (lVar8 - (long)puVar7 != 0) {
            uVar11 = 0;
            this_00 = (FrameData *)*puVar7;
            while( true ) {
              if (this_00 != (FrameData *)0x0) {
                FrameData::~FrameData(this_00);
                operator_delete(this_00);
              }
              uVar11 = uVar11 + 1;
              if ((ulong)(lVar8 - (long)puVar7 >> 3) <= uVar11) break;
              this_00 = *(FrameData **)(*(long *)(pbVar13 + 0x20) + uVar11 * 8);
            }
            puVar7 = *(undefined8 **)(pbVar13 + 0x20);
          }
          *(undefined8 **)(pbVar13 + 0x28) = puVar7;
          pbVar13[0x18] = (basic_string)0x0;
          *(undefined4 *)(pbVar13 + 0x1c) = 0;
          return;
        }
        lVar8 = -(ulong)((byte)bVar3 >> 1);
        pbVar10 = __s2;
        pbVar5 = pbVar13;
        while (pbVar5 = pbVar5 + 1, *pbVar5 == *pbVar10) {
          lVar8 = lVar8 + 1;
          pbVar10 = pbVar10 + 1;
          if (lVar8 == 0) goto LAB_00d187fc;
        }
      }
      else if ((__n == 0) || (iVar4 = memcmp(pbVar10,__s2,__n), iVar4 == 0)) goto LAB_00d187fc;
    }
    pSVar6 = *(SkeletonCache **)(pSVar12 + 8);
    if (*(SkeletonCache **)(pSVar12 + 8) == (SkeletonCache *)0x0) {
      pSVar6 = pSVar12 + 0x10;
      pSVar9 = *(SkeletonCache **)pSVar6;
      if (*(SkeletonCache **)pSVar9 == pSVar12) {
        pSVar12 = pSVar9;
        if (pSVar1 == pSVar9) {
          return;
        }
        goto LAB_00d18724;
      }
      do {
        lVar8 = *(long *)pSVar6;
        pSVar6 = (SkeletonCache *)(lVar8 + 0x10);
        pSVar12 = *(SkeletonCache **)pSVar6;
      } while (*(long *)pSVar12 != lVar8);
    }
    else {
      do {
        pSVar12 = pSVar6;
        pSVar6 = *(SkeletonCache **)pSVar12;
      } while (*(SkeletonCache **)pSVar12 != (SkeletonCache *)0x0);
    }
    if (pSVar1 == pSVar12) {
      return;
    }
  } while( true );
}

