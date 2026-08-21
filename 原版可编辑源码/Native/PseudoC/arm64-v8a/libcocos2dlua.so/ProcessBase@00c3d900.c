
/* cocostudio::ProcessBase::ProcessBase() */

void __thiscall cocostudio::ProcessBase::ProcessBase(ProcessBase *this)

{
  cocos2d::Ref::Ref((Ref *)this);
  *(undefined4 *)(this + 0x24) = 0x3f800000;
  *(undefined2 *)(this + 0x28) = 0x101;
  this[0x2a] = (ProcessBase)0x0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x38) = 0x3c88888900000000;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR__ProcessBase_016c8ac0;
  *(undefined8 *)(this + 0x30) = 0x100000000;
  this[0x50] = (ProcessBase)0x0;
  return;
}

