
/* spine::SkeletonRenderer::setAttachUtil(spine::RealTimeAttachUtil*) */

void __thiscall
spine::SkeletonRenderer::setAttachUtil(SkeletonRenderer *this,RealTimeAttachUtil *param_1)

{
  Ref *this_00;
  
  this_00 = *(Ref **)(this + 0xa8);
  if (this_00 != (Ref *)param_1) {
    if (this_00 != (Ref *)0x0) {
      cocos2d::Ref::release(this_00);
    }
    *(RealTimeAttachUtil **)(this + 0xa8) = param_1;
    if (param_1 != (RealTimeAttachUtil *)0x0) {
      cocos2d::Ref::retain((Ref *)param_1);
      return;
    }
  }
  return;
}

