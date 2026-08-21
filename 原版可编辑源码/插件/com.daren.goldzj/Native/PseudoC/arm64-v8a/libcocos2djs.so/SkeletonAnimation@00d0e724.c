
/* spine::SkeletonAnimation::SkeletonAnimation() */

void __thiscall spine::SkeletonAnimation::SkeletonAnimation(SkeletonAnimation *this)

{
  SkeletonRenderer::SkeletonRenderer((SkeletonRenderer *)this);
  *(undefined8 *)(this + 0xb0) = 0;
  this[0xb8] = (SkeletonAnimation)0x0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined8 *)(this + 0x1a0) = 0;
  *(undefined ***)this = &PTR__SkeletonAnimation_01c8fb00;
  *(undefined ***)(this + 0x10) = &PTR__SkeletonAnimation_01c8fb70;
  *(undefined8 *)(this + 0x1d0) = 0;
  return;
}

