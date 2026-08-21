
/* spine::SkeletonCacheAnimation::setAttachUtil(spine::CacheModeAttachUtil*) */

void __thiscall
spine::SkeletonCacheAnimation::setAttachUtil
          (SkeletonCacheAnimation *this,CacheModeAttachUtil *param_1)

{
  Ref *this_00;
  
  this_00 = *(Ref **)(this + 0x160);
  if (this_00 != (Ref *)param_1) {
    if (this_00 != (Ref *)0x0) {
      cocos2d::Ref::release(this_00);
    }
    *(CacheModeAttachUtil **)(this + 0x160) = param_1;
    if (param_1 != (CacheModeAttachUtil *)0x0) {
      cocos2d::Ref::retain((Ref *)param_1);
      return;
    }
  }
  return;
}

