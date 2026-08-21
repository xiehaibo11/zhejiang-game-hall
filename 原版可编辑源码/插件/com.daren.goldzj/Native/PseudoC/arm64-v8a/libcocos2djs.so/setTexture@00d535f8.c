
/* dragonBones::ArmatureCache::SegmentData::setTexture(cocos2d::middleware::Texture2D*) */

void __thiscall
dragonBones::ArmatureCache::SegmentData::setTexture(SegmentData *this,Texture2D *param_1)

{
  if (param_1 != (Texture2D *)0x0) {
    cocos2d::Ref::retain((Ref *)param_1);
  }
  if (*(Ref **)(this + 0x18) != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)(this + 0x18));
  }
  *(Texture2D **)(this + 0x18) = param_1;
  return;
}

