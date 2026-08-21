
/* spine::SkeletonRenderer::setVertexEffectDelegate(spine::VertexEffectDelegate*) */

void __thiscall
spine::SkeletonRenderer::setVertexEffectDelegate
          (SkeletonRenderer *this,VertexEffectDelegate *param_1)

{
  Ref *this_00;
  
  this_00 = *(Ref **)(this + 0x38);
  if (this_00 != (Ref *)param_1) {
    if (this_00 != (Ref *)0x0) {
      cocos2d::Ref::release(this_00);
    }
    *(VertexEffectDelegate **)(this + 0x38) = param_1;
    if (param_1 != (VertexEffectDelegate *)0x0) {
      cocos2d::Ref::retain((Ref *)param_1);
      return;
    }
  }
  return;
}

