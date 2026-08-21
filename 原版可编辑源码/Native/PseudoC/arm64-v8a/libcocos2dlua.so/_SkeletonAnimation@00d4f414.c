
/* spine::SkeletonAnimation::~SkeletonAnimation() */

void __thiscall spine::SkeletonAnimation::~SkeletonAnimation(SkeletonAnimation *this)

{
  SkeletonAnimation *pSVar1;
  code *pcVar2;
  
  *(undefined ***)this = &PTR__SkeletonAnimation_016d5190;
  *(undefined ***)(this + 0x2f8) = &PTR__SkeletonAnimation_016d5710;
  if (this[0x3b0] != (SkeletonAnimation)0x0) {
    spAnimationStateData_dispose(**(undefined8 **)(this + 0x3a8));
  }
  spAnimationState_dispose(*(undefined8 *)(this + 0x3a8));
  pSVar1 = *(SkeletonAnimation **)(this + 0x4d0);
  if (this + 0x4b0 == pSVar1) {
    pcVar2 = *(code **)(*(long *)pSVar1 + 0x20);
LAB_00d4f480:
    (*pcVar2)();
  }
  else if (pSVar1 != (SkeletonAnimation *)0x0) {
    pcVar2 = *(code **)(*(long *)pSVar1 + 0x28);
    goto LAB_00d4f480;
  }
  pSVar1 = *(SkeletonAnimation **)(this + 0x4a0);
  if (this + 0x480 == pSVar1) {
    pcVar2 = *(code **)(*(long *)pSVar1 + 0x20);
LAB_00d4f4ac:
    (*pcVar2)();
  }
  else if (pSVar1 != (SkeletonAnimation *)0x0) {
    pcVar2 = *(code **)(*(long *)pSVar1 + 0x28);
    goto LAB_00d4f4ac;
  }
  pSVar1 = *(SkeletonAnimation **)(this + 0x470);
                    /* catch() { ... } // from try @ 00d4f4f8 with catch @ 00d4f4b8 */
  if (this + 0x450 == pSVar1) {
    pcVar2 = *(code **)(*(long *)pSVar1 + 0x20);
LAB_00d4f4d8:
    (*pcVar2)();
  }
  else if (pSVar1 != (SkeletonAnimation *)0x0) {
    pcVar2 = *(code **)(*(long *)pSVar1 + 0x28);
    goto LAB_00d4f4d8;
  }
  pSVar1 = *(SkeletonAnimation **)(this + 0x440);
  if (this + 0x420 == pSVar1) {
    pcVar2 = *(code **)(*(long *)pSVar1 + 0x20);
LAB_00d4f504:
    (*pcVar2)();
  }
  else if (pSVar1 != (SkeletonAnimation *)0x0) {
                    /* try { // try from 00d4f4f0 to 00e4f4f7 has its CatchHandler @ 00d4f614 */
    pcVar2 = *(code **)(*(long *)pSVar1 + 0x28);
                    /* try { // try from 00d4f4f8 to 00e4f62f has its CatchHandler @ 00d4f4b8 */
    goto LAB_00d4f504;
  }
  pSVar1 = *(SkeletonAnimation **)(this + 0x410);
  if (this + 0x3f0 == pSVar1) {
    pcVar2 = *(code **)(*(long *)pSVar1 + 0x20);
LAB_00d4f530:
    (*pcVar2)();
  }
  else if (pSVar1 != (SkeletonAnimation *)0x0) {
    pcVar2 = *(code **)(*(long *)pSVar1 + 0x28);
    goto LAB_00d4f530;
  }
  pSVar1 = *(SkeletonAnimation **)(this + 0x3e0);
  if (this + 0x3c0 == pSVar1) {
    pcVar2 = *(code **)(*(long *)pSVar1 + 0x20);
  }
  else {
    if (pSVar1 == (SkeletonAnimation *)0x0) goto LAB_00d4f560;
    pcVar2 = *(code **)(*(long *)pSVar1 + 0x28);
  }
  (*pcVar2)();
LAB_00d4f560:
  SkeletonRenderer::~SkeletonRenderer((SkeletonRenderer *)this);
  return;
}

