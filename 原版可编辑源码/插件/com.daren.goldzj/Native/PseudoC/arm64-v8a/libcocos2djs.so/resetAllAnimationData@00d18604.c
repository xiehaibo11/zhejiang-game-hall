
/* spine::SkeletonCache::resetAllAnimationData() */

void __thiscall spine::SkeletonCache::resetAllAnimationData(SkeletonCache *this)

{
  bool bVar1;
  undefined8 *puVar2;
  SkeletonCache *pSVar3;
  long lVar4;
  FrameData *this_00;
  SkeletonCache *pSVar5;
  long lVar6;
  ulong uVar7;
  
  pSVar5 = *(SkeletonCache **)(this + 0x1f8);
  while (this + 0x200 != pSVar5) {
    lVar6 = *(long *)(pSVar5 + 0x38);
    puVar2 = *(undefined8 **)(lVar6 + 0x20);
    lVar4 = *(long *)(lVar6 + 0x28) - (long)puVar2;
    if (lVar4 != 0) {
      uVar7 = 0;
      this_00 = (FrameData *)*puVar2;
      while( true ) {
        if (this_00 != (FrameData *)0x0) {
          FrameData::~FrameData(this_00);
          operator_delete(this_00);
        }
        uVar7 = uVar7 + 1;
        if ((ulong)(lVar4 >> 3) <= uVar7) break;
        this_00 = *(FrameData **)(*(long *)(lVar6 + 0x20) + uVar7 * 8);
      }
      puVar2 = *(undefined8 **)(lVar6 + 0x20);
    }
    *(undefined8 **)(lVar6 + 0x28) = puVar2;
    *(undefined1 *)(lVar6 + 0x18) = 0;
    *(undefined4 *)(lVar6 + 0x1c) = 0;
    pSVar3 = *(SkeletonCache **)(pSVar5 + 8);
    if (*(SkeletonCache **)(pSVar5 + 8) == (SkeletonCache *)0x0) {
      pSVar3 = pSVar5 + 0x10;
      bVar1 = *(SkeletonCache **)*(SkeletonCache **)pSVar3 != pSVar5;
      pSVar5 = *(SkeletonCache **)pSVar3;
      if (bVar1) {
        do {
          lVar4 = *(long *)pSVar3;
          pSVar3 = (SkeletonCache *)(lVar4 + 0x10);
          pSVar5 = *(SkeletonCache **)pSVar3;
        } while (*(long *)pSVar5 != lVar4);
      }
    }
    else {
      do {
        pSVar5 = pSVar3;
        pSVar3 = *(SkeletonCache **)pSVar5;
      } while (*(SkeletonCache **)pSVar5 != (SkeletonCache *)0x0);
    }
  }
  return;
}

