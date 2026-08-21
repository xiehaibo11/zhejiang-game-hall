
/* spine::SkeletonCacheAnimation::~SkeletonCacheAnimation() */

void __thiscall spine::SkeletonCacheAnimation::~SkeletonCacheAnimation(SkeletonCacheAnimation *this)

{
  ulong uVar1;
  undefined8 *puVar2;
  SkeletonCacheAnimation *pSVar3;
  long lVar4;
  undefined8 uVar5;
  code *pcVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  *(undefined ***)this = &PTR__SkeletonCacheAnimation_01c8fe60;
  *(undefined ***)(this + 0x10) = &PTR__SkeletonCacheAnimation_01c8fe98;
  destroy(this);
  puVar9 = *(undefined8 **)(this + 0x130);
  puVar2 = *(undefined8 **)(this + 0x138);
  lVar4 = (long)puVar2 - (long)puVar9;
  if (lVar4 != 0) {
    uVar1 = *(ulong *)(this + 0x148);
    plVar7 = (long *)((long)puVar9 + (uVar1 >> 6 & 0x3fffffffffffff8));
    lVar8 = *plVar7 + (uVar1 & 0x1ff) * 8;
    while (*(long *)((long)puVar9 + (*(long *)(this + 0x150) + uVar1 >> 6 & 0x3fffffffffffff8)) +
           (*(long *)(this + 0x150) + uVar1 & 0x1ff) * 8 != lVar8) {
      lVar8 = lVar8 + 8;
      if (lVar8 - *plVar7 == 0x1000) {
        plVar7 = plVar7 + 1;
        lVar8 = *plVar7;
      }
    }
  }
  *(undefined8 *)(this + 0x150) = 0;
  while (uVar1 = lVar4 >> 3, 2 < uVar1) {
    operator_delete((void *)*puVar9);
    puVar2 = *(undefined8 **)(this + 0x138);
    puVar9 = (undefined8 *)(*(long *)(this + 0x130) + 8);
    *(undefined8 **)(this + 0x130) = puVar9;
    lVar4 = (long)puVar2 - (long)puVar9;
  }
  if (uVar1 == 1) {
    uVar5 = 0x100;
LAB_00d192a8:
    *(undefined8 *)(this + 0x148) = uVar5;
  }
  else if (uVar1 == 2) {
    uVar5 = 0x200;
    goto LAB_00d192a8;
  }
  if (puVar9 != puVar2) {
    do {
      puVar10 = puVar9 + 1;
      operator_delete((void *)*puVar9);
      puVar9 = puVar10;
    } while (puVar2 != puVar10);
    lVar4 = *(long *)(this + 0x138);
    if (lVar4 != *(long *)(this + 0x130)) {
      *(ulong *)(this + 0x138) =
           lVar4 + (~((lVar4 + -8) - *(long *)(this + 0x130)) & 0xfffffffffffffff8U);
    }
  }
  if (*(void **)(this + 0x128) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x128));
  }
  if (((byte)this[0x108] & 1) != 0) {
    operator_delete(*(void **)(this + 0x118));
  }
  pSVar3 = *(SkeletonCacheAnimation **)(this + 0xd0);
  if (this + 0xb0 == pSVar3) {
    pcVar6 = *(code **)(*(long *)pSVar3 + 0x20);
LAB_00d1932c:
    (*pcVar6)();
  }
  else if (pSVar3 != (SkeletonCacheAnimation *)0x0) {
    pcVar6 = *(code **)(*(long *)pSVar3 + 0x28);
    goto LAB_00d1932c;
  }
  pSVar3 = *(SkeletonCacheAnimation **)(this + 0xa0);
  if (this + 0x80 == pSVar3) {
    pcVar6 = *(code **)(*(long *)pSVar3 + 0x20);
LAB_00d19358:
    (*pcVar6)();
  }
  else if (pSVar3 != (SkeletonCacheAnimation *)0x0) {
    pcVar6 = *(code **)(*(long *)pSVar3 + 0x28);
    goto LAB_00d19358;
  }
  pSVar3 = *(SkeletonCacheAnimation **)(this + 0x70);
  if (this + 0x50 == pSVar3) {
    pcVar6 = *(code **)(*(long *)pSVar3 + 0x20);
  }
  else {
    if (pSVar3 == (SkeletonCacheAnimation *)0x0) goto LAB_00d19388;
    pcVar6 = *(code **)(*(long *)pSVar3 + 0x28);
  }
  (*pcVar6)();
LAB_00d19388:
  cocos2d::Ref::~Ref((Ref *)this);
  return;
}

