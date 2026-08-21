
/* spine::SkeletonRenderer::initialize() */

void __thiscall spine::SkeletonRenderer::initialize(SkeletonRenderer *this)

{
  SkeletonClipping *this_00;
  
  if (*(long *)(this + 0x60) == 0) {
    this_00 = SpineObject::operator_new
                        (0x1d0,
                         "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine-creator-support/SkeletonRenderer.cpp"
                         ,0x60);
    SkeletonClipping::SkeletonClipping(this_00);
    *(SkeletonClipping **)(this + 0x60) = this_00;
  }
  Skeleton::setToSetupPose(*(Skeleton **)(this + 0x30));
  Skeleton::updateWorldTransform(*(Skeleton **)(this + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00d10dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x30))(this);
  return;
}

