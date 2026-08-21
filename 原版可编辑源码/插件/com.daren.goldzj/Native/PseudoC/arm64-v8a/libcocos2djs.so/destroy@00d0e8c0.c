
/* spine::SkeletonAnimation::destroy() */

void __thiscall spine::SkeletonAnimation::destroy(SkeletonAnimation *this)

{
  SkeletonAnimation *pSVar1;
  long *plVar2;
  code *pcVar3;
  
  pSVar1 = *(SkeletonAnimation **)(this + 0xe0);
  *(undefined8 *)(this + 0xe0) = 0;
  if (this + 0xc0 == pSVar1) {
    pcVar3 = *(code **)(*(long *)pSVar1 + 0x20);
LAB_00d0e8fc:
    (*pcVar3)();
  }
  else if (pSVar1 != (SkeletonAnimation *)0x0) {
    pcVar3 = *(code **)(*(long *)pSVar1 + 0x28);
    goto LAB_00d0e8fc;
  }
  pSVar1 = *(SkeletonAnimation **)(this + 0x110);
  *(undefined8 *)(this + 0x110) = 0;
  if (this + 0xf0 == pSVar1) {
    pcVar3 = *(code **)(*(long *)pSVar1 + 0x20);
LAB_00d0e92c:
    (*pcVar3)();
  }
  else if (pSVar1 != (SkeletonAnimation *)0x0) {
    pcVar3 = *(code **)(*(long *)pSVar1 + 0x28);
    goto LAB_00d0e92c;
  }
  pSVar1 = *(SkeletonAnimation **)(this + 0x140);
  *(undefined8 *)(this + 0x140) = 0;
  if (this + 0x120 == pSVar1) {
    pcVar3 = *(code **)(*(long *)pSVar1 + 0x20);
LAB_00d0e95c:
    (*pcVar3)();
  }
  else if (pSVar1 != (SkeletonAnimation *)0x0) {
    pcVar3 = *(code **)(*(long *)pSVar1 + 0x28);
    goto LAB_00d0e95c;
  }
  pSVar1 = *(SkeletonAnimation **)(this + 0x170);
  *(undefined8 *)(this + 0x170) = 0;
  if (this + 0x150 == pSVar1) {
    pcVar3 = *(code **)(*(long *)pSVar1 + 0x20);
LAB_00d0e98c:
    (*pcVar3)();
  }
  else if (pSVar1 != (SkeletonAnimation *)0x0) {
    pcVar3 = *(code **)(*(long *)pSVar1 + 0x28);
    goto LAB_00d0e98c;
  }
  pSVar1 = *(SkeletonAnimation **)(this + 0x1a0);
  *(undefined8 *)(this + 0x1a0) = 0;
  if (this + 0x180 == pSVar1) {
    pcVar3 = *(code **)(*(long *)pSVar1 + 0x20);
LAB_00d0e9bc:
    (*pcVar3)();
  }
  else if (pSVar1 != (SkeletonAnimation *)0x0) {
    pcVar3 = *(code **)(*(long *)pSVar1 + 0x28);
    goto LAB_00d0e9bc;
  }
  pSVar1 = *(SkeletonAnimation **)(this + 0x1d0);
  *(undefined8 *)(this + 0x1d0) = 0;
  if (this + 0x1b0 == pSVar1) {
    pcVar3 = *(code **)(*(long *)pSVar1 + 0x20);
  }
  else {
    if (pSVar1 == (SkeletonAnimation *)0x0) goto LAB_00d0e9f0;
    pcVar3 = *(code **)(*(long *)pSVar1 + 0x28);
  }
  (*pcVar3)();
LAB_00d0e9f0:
  if (*(AnimationState **)(this + 0xb0) != (AnimationState *)0x0) {
    AnimationState::clearTracks(*(AnimationState **)(this + 0xb0));
    if ((this[0xb8] != (SkeletonAnimation)0x0) &&
       (plVar2 = (long *)AnimationState::getData(*(AnimationState **)(this + 0xb0)),
       plVar2 != (long *)0x0)) {
      (**(code **)(*plVar2 + 8))();
    }
    if (*(long **)(this + 0xb0) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0xb0) + 8))();
    }
    *(undefined8 *)(this + 0xb0) = 0;
  }
  SkeletonRenderer::destroy((SkeletonRenderer *)this);
  return;
}

