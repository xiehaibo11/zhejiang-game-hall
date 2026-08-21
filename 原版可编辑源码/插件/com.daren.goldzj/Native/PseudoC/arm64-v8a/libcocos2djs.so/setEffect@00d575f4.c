
/* dragonBones::CCArmatureCacheDisplay::setEffect(cocos2d::renderer::EffectVariant*) */

void __thiscall
dragonBones::CCArmatureCacheDisplay::setEffect(CCArmatureCacheDisplay *this,EffectVariant *param_1)

{
  Ref *this_00;
  
  this_00 = *(Ref **)(this + 200);
  if (this_00 != (Ref *)param_1) {
    if (this_00 != (Ref *)0x0) {
      cocos2d::Ref::release(this_00);
    }
    *(EffectVariant **)(this + 200) = param_1;
    if (param_1 != (EffectVariant *)0x0) {
      cocos2d::Ref::retain((Ref *)param_1);
      return;
    }
  }
  return;
}

