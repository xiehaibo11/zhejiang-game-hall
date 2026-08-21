
/* spine::SkeletonRenderer::SkeletonRenderer(spine::SkeletonData*, bool) */

void __thiscall
spine::SkeletonRenderer::SkeletonRenderer(SkeletonRenderer *this,SkeletonData *param_1,bool param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  Skeleton *this_00;
  
  cocos2d::Ref::Ref((Ref *)this);
  *(undefined8 *)(this + 0x40) = 0x3f800000;
  this[0x18] = (SkeletonRenderer)0x0;
  this[0x1a] = (SkeletonRenderer)0x0;
  this[0x48] = (SkeletonRenderer)0x0;
  *(undefined ***)this = &PTR__SkeletonRenderer_01c8fbf8;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined ***)(this + 0x10) = &PTR__SkeletonRenderer_01c8fc58;
  uVar2 = cocos2d::Color4F::WHITE._8_8_;
  uVar1 = cocos2d::Color4F::WHITE._0_8_;
  *(undefined8 *)(this + 0x88) = 0xffffffffffffffff;
  this[0x5c] = (SkeletonRenderer)0x0;
  *(undefined8 *)(this + 0x60) = 0;
  this[0x68] = (SkeletonRenderer)0x0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  this[0x71] = (SkeletonRenderer)0x0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  this[0x19] = (SkeletonRenderer)0x1;
  *(undefined8 *)(this + 0x54) = uVar2;
  *(undefined8 *)(this + 0x4c) = uVar1;
  this_00 = SpineObject::operator_new
                      (0x148,
                       "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine-creator-support/SkeletonRenderer.cpp"
                       ,0x7d);
  Skeleton::Skeleton(this_00,param_1);
  *(Skeleton **)(this + 0x30) = this_00;
  this[0x18] = (SkeletonRenderer)param_2;
                    /* WARNING: Could not recover jumptable at 0x00d11188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x48))(this);
  return;
}

