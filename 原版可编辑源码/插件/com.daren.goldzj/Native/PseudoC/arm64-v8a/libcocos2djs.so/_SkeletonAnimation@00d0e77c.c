
/* spine::SkeletonAnimation::~SkeletonAnimation() */

void __thiscall spine::SkeletonAnimation::~SkeletonAnimation(SkeletonAnimation *this)

{
  SkeletonAnimation *pSVar1;
  code *pcVar2;
  
  *(undefined ***)this = &PTR__SkeletonAnimation_01c8fb00;
  *(undefined ***)(this + 0x10) = &PTR__SkeletonAnimation_01c8fb70;
  destroy(this);
  pSVar1 = *(SkeletonAnimation **)(this + 0x1d0);
  if (this + 0x1b0 == pSVar1) {
    pcVar2 = *(code **)(*(long *)pSVar1 + 0x20);
LAB_00d0e7d0:
    (*pcVar2)();
  }
  else if (pSVar1 != (SkeletonAnimation *)0x0) {
    pcVar2 = *(code **)(*(long *)pSVar1 + 0x28);
    goto LAB_00d0e7d0;
  }
  pSVar1 = *(SkeletonAnimation **)(this + 0x1a0);
  if (this + 0x180 == pSVar1) {
    pcVar2 = *(code **)(*(long *)pSVar1 + 0x20);
LAB_00d0e7fc:
    (*pcVar2)();
  }
  else if (pSVar1 != (SkeletonAnimation *)0x0) {
    pcVar2 = *(code **)(*(long *)pSVar1 + 0x28);
    goto LAB_00d0e7fc;
  }
  pSVar1 = *(SkeletonAnimation **)(this + 0x170);
  if (this + 0x150 == pSVar1) {
    pcVar2 = *(code **)(*(long *)pSVar1 + 0x20);
LAB_00d0e828:
    (*pcVar2)();
  }
  else if (pSVar1 != (SkeletonAnimation *)0x0) {
    pcVar2 = *(code **)(*(long *)pSVar1 + 0x28);
    goto LAB_00d0e828;
  }
  pSVar1 = *(SkeletonAnimation **)(this + 0x140);
  if (this + 0x120 == pSVar1) {
    pcVar2 = *(code **)(*(long *)pSVar1 + 0x20);
LAB_00d0e854:
    (*pcVar2)();
  }
  else if (pSVar1 != (SkeletonAnimation *)0x0) {
    pcVar2 = *(code **)(*(long *)pSVar1 + 0x28);
    goto LAB_00d0e854;
  }
  pSVar1 = *(SkeletonAnimation **)(this + 0x110);
  if (this + 0xf0 == pSVar1) {
    pcVar2 = *(code **)(*(long *)pSVar1 + 0x20);
LAB_00d0e880:
    (*pcVar2)();
  }
  else if (pSVar1 != (SkeletonAnimation *)0x0) {
    pcVar2 = *(code **)(*(long *)pSVar1 + 0x28);
    goto LAB_00d0e880;
  }
  pSVar1 = *(SkeletonAnimation **)(this + 0xe0);
  if (this + 0xc0 == pSVar1) {
    pcVar2 = *(code **)(*(long *)pSVar1 + 0x20);
  }
  else {
    if (pSVar1 == (SkeletonAnimation *)0x0) goto LAB_00d0e8b0;
    pcVar2 = *(code **)(*(long *)pSVar1 + 0x28);
  }
  (*pcVar2)();
LAB_00d0e8b0:
  SkeletonRenderer::~SkeletonRenderer((SkeletonRenderer *)this);
  return;
}

