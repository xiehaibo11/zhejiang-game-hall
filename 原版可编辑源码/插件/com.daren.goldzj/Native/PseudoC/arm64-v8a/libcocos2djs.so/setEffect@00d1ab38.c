
/* spine::SkeletonCacheAnimation::setEffect(cocos2d::renderer::EffectVariant*) */

void __thiscall
spine::SkeletonCacheAnimation::setEffect(SkeletonCacheAnimation *this,EffectVariant *param_1)

{
  Ref *this_00;
  
  this_00 = *(Ref **)(this + 0x40);
  if (this_00 != (Ref *)param_1) {
    if (this_00 != (Ref *)0x0) {
      cocos2d::Ref::release(this_00);
    }
    *(EffectVariant **)(this + 0x40) = param_1;
    if (param_1 != (EffectVariant *)0x0) {
      cocos2d::Ref::retain((Ref *)param_1);
      return;
    }
  }
  return;
}

