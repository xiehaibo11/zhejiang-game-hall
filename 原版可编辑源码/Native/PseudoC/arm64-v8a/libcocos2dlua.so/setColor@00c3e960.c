
/* cocostudio::BaseData::setColor(cocos2d::Color4B const&) */

void __thiscall cocostudio::BaseData::setColor(BaseData *this,Color4B *param_1)

{
  *(uint *)(this + 0x4c) = (uint)(byte)*param_1;
  *(uint *)(this + 0x50) = (uint)(byte)param_1[1];
  *(uint *)(this + 0x54) = (uint)(byte)param_1[2];
  *(uint *)(this + 0x48) = (uint)(byte)param_1[3];
  return;
}

