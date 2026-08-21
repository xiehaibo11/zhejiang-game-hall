
/* cocostudio::TriggerObj::TriggerObj() */

void __thiscall cocostudio::TriggerObj::TriggerObj(TriggerObj *this)

{
  cocos2d::Ref::Ref((Ref *)this);
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x58) = 0xffffffff;
  this[0x5c] = (TriggerObj)0x1;
  *(undefined ***)this = &PTR__TriggerObj_016caa30;
  *(undefined8 *)(this + 0x60) = 0;
  return;
}

