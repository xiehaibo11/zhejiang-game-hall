
/* cocostudio::Armature::setAnchorPoint(cocos2d::Vec2 const&) */

void __thiscall cocostudio::Armature::setAnchorPoint(Armature *this,Vec2 *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  
  uVar1 = cocos2d::Vec2::equals((Vec2 *)param_1,this + 0x78);
  if ((uVar1 & 1) == 0) {
    uVar2 = *(undefined8 *)param_1;
    fVar3 = *(float *)(this + 0x80) * (float)uVar2;
    fVar4 = *(float *)(this + 0x84) * (float)((ulong)uVar2 >> 0x20);
    *(undefined8 *)(this + 0x78) = uVar2;
    *(float *)(this + 0x370) = fVar3;
    this[0x150] = (Armature)0x1;
    *(float *)(this + 0x374) = fVar4;
    *(float *)(this + 0x70) = fVar3 - *(float *)(this + 0x368);
    *(float *)(this + 0x74) = fVar4 - *(float *)(this + 0x36c);
    this[0x10c] = (Armature)0x1;
  }
  return;
}

