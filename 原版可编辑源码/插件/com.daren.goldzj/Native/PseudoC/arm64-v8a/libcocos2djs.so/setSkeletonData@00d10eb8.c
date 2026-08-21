
/* spine::SkeletonRenderer::setSkeletonData(spine::SkeletonData*, bool) */

void __thiscall
spine::SkeletonRenderer::setSkeletonData(SkeletonRenderer *this,SkeletonData *param_1,bool param_2)

{
  Skeleton *this_00;
  
  this_00 = SpineObject::operator_new
                      (0x148,
                       "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine-creator-support/SkeletonRenderer.cpp"
                       ,0x7d);
  Skeleton::Skeleton(this_00,param_1);
  *(Skeleton **)(this + 0x30) = this_00;
  this[0x18] = (SkeletonRenderer)param_2;
  return;
}

