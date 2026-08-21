
/* cocostudio::BaseData::BaseData() */

void __thiscall cocostudio::BaseData::BaseData(BaseData *this)

{
  undefined8 uVar1;
  
  cocos2d::Ref::Ref((Ref *)this);
  uVar1 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)(this + 0x2c) = 0;
  *(undefined8 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  this[0x44] = (BaseData)0x0;
  *(undefined8 *)(this + 0x38) = uVar1;
  *(undefined ***)this = &PTR__BaseData_016c8ca8;
  *(undefined8 *)(this + 0x50) = 0xff000000ff;
  *(undefined8 *)(this + 0x48) = 0xff000000ff;
  return;
}

