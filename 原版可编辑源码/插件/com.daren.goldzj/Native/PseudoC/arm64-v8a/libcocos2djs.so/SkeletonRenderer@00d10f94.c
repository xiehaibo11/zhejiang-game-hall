
/* spine::SkeletonRenderer::SkeletonRenderer(spine::Skeleton*, bool, bool, bool) */

void __thiscall
spine::SkeletonRenderer::SkeletonRenderer
          (SkeletonRenderer *this,Skeleton *param_1,bool param_2,bool param_3,bool param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  SkeletonClipping *this_00;
  
  cocos2d::Ref::Ref((Ref *)this);
  *(undefined8 *)(this + 0x40) = 0x3f800000;
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
  *(Skeleton **)(this + 0x30) = param_1;
  this[0x19] = (SkeletonRenderer)param_2;
  this[0x18] = (SkeletonRenderer)param_3;
  *(undefined8 *)(this + 0x54) = uVar2;
  *(undefined8 *)(this + 0x4c) = uVar1;
  this[0x1a] = (SkeletonRenderer)param_4;
  this_00 = SpineObject::operator_new
                      (0x1d0,
                       "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine-creator-support/SkeletonRenderer.cpp"
                       ,0x60);
  SkeletonClipping::SkeletonClipping(this_00);
  *(SkeletonClipping **)(this + 0x60) = this_00;
  Skeleton::setToSetupPose(*(Skeleton **)(this + 0x30));
  Skeleton::updateWorldTransform(*(Skeleton **)(this + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00d11088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x30))(this);
  return;
}

