
/* cocostudio::TriggerMng::TriggerMng() */

void __thiscall cocostudio::TriggerMng::TriggerMng(TriggerMng *this)

{
  undefined8 *puVar1;
  long lVar2;
  Ref *this_00;
  
  *(undefined ***)this = &PTR__TriggerMng_016ca8a0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x28) = 0x3f800000;
  puVar1 = operator_new(0x28);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  *(undefined4 *)(puVar1 + 4) = 0x3f800000;
  *(undefined8 **)(this + 0x30) = puVar1;
  lVar2 = cocos2d::Director::getInstance();
  this_00 = *(Ref **)(lVar2 + 0xb0);
  *(Ref **)(this + 0x38) = this_00;
  cocos2d::Ref::retain(this_00);
  return;
}

