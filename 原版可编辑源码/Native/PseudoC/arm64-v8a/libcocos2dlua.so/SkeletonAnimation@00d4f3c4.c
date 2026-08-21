
/* spine::SkeletonAnimation::SkeletonAnimation() */

void __thiscall spine::SkeletonAnimation::SkeletonAnimation(SkeletonAnimation *this)

{
  SkeletonRenderer::SkeletonRenderer((SkeletonRenderer *)this);
  *(undefined8 *)(this + 0x3e0) = 0;
  *(undefined8 *)(this + 0x410) = 0;
  *(undefined8 *)(this + 0x440) = 0;
  *(undefined8 *)(this + 0x470) = 0;
  *(undefined8 *)(this + 0x4a0) = 0;
  *(undefined ***)this = &PTR__SkeletonAnimation_016d5190;
  *(undefined ***)(this + 0x2f8) = &PTR__SkeletonAnimation_016d5710;
                    /* catch() { ... } // from try @ 00d4f278 with catch @ 00d4f404 */
  *(undefined8 *)(this + 0x4d0) = 0;
  return;
}

