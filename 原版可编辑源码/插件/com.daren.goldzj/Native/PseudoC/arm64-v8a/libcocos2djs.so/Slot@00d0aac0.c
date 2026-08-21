
/* spine::Slot::Slot(spine::SlotData&, spine::Bone&) */

void __thiscall spine::Slot::Slot(Slot *this,SlotData *param_1,Bone *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 auVar4 [16];
  
  *(Bone **)(this + 0x10) = param_2;
  *(undefined ***)this = &PTR__Slot_01c8f6e8;
  *(SlotData **)(this + 8) = param_1;
  uVar2 = Bone::getSkeleton(param_2);
  auVar4 = NEON_fmov(0x3f800000,4);
  *(long *)(this + 0x30) = auVar4._8_8_;
  *(long *)(this + 0x28) = auVar4._0_8_;
  *(undefined8 *)(this + 0x18) = uVar2;
  *(undefined ***)(this + 0x20) = &PTR__SpineObject_01c8eb68;
  uVar3 = MathUtil::clamp(1.0,0.0,1.0);
  *(undefined4 *)(this + 0x28) = uVar3;
  uVar3 = MathUtil::clamp(*(float *)(this + 0x2c),0.0,1.0);
  *(undefined4 *)(this + 0x2c) = uVar3;
  uVar3 = MathUtil::clamp(*(float *)(this + 0x30),0.0,1.0);
  *(undefined4 *)(this + 0x30) = uVar3;
  uVar3 = MathUtil::clamp(*(float *)(this + 0x34),0.0,1.0);
  *(undefined4 *)(this + 0x34) = uVar3;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined ***)(this + 0x38) = &PTR__SpineObject_01c8eb68;
  uVar3 = MathUtil::clamp(0.0,0.0,1.0);
  *(undefined4 *)(this + 0x40) = uVar3;
  uVar3 = MathUtil::clamp(*(float *)(this + 0x44),0.0,1.0);
  *(undefined4 *)(this + 0x44) = uVar3;
  uVar3 = MathUtil::clamp(*(float *)(this + 0x48),0.0,1.0);
  *(undefined4 *)(this + 0x48) = uVar3;
  uVar3 = MathUtil::clamp(*(float *)(this + 0x4c),0.0,1.0);
  *(undefined4 *)(this + 0x4c) = uVar3;
  bVar1 = SlotData::hasDarkColor(param_1);
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  this[0x50] = (Slot)(bVar1 & 1);
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined ***)(this + 0x68) = &PTR__Vector_01c8d048;
  *(undefined8 *)(this + 0x70) = 0;
  setToSetupPose(this);
  return;
}

