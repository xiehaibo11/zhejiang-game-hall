
/* spine::Slot::setToSetupPose() */

void __thiscall spine::Slot::setToSetupPose(Slot *this)

{
  int iVar1;
  long lVar2;
  String *pSVar3;
  Skeleton *pSVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  lVar2 = SlotData::getColor(*(SlotData **)(this + 8));
  uVar6 = *(undefined8 *)(lVar2 + 8);
  *(undefined8 *)(this + 0x30) = *(undefined8 *)(lVar2 + 0x10);
  *(undefined8 *)(this + 0x28) = uVar6;
  uVar5 = MathUtil::clamp((float)uVar6,0.0,1.0);
  *(undefined4 *)(this + 0x28) = uVar5;
  uVar5 = MathUtil::clamp(*(float *)(this + 0x2c),0.0,1.0);
  *(undefined4 *)(this + 0x2c) = uVar5;
  uVar5 = MathUtil::clamp(*(float *)(this + 0x30),0.0,1.0);
  *(undefined4 *)(this + 0x30) = uVar5;
  uVar5 = MathUtil::clamp(*(float *)(this + 0x34),0.0,1.0);
  *(undefined4 *)(this + 0x34) = uVar5;
  pSVar3 = (String *)SlotData::getAttachmentName(*(SlotData **)(this + 8));
  if (*(long *)(pSVar3 + 8) == 0) {
    if (*(long *)(this + 0x58) == 0) {
      return;
    }
    pSVar4 = *(Skeleton **)(this + 0x18);
    *(undefined8 *)(this + 0x58) = 0;
  }
  else {
    pSVar4 = *(Skeleton **)(this + 0x18);
    *(undefined8 *)(this + 0x58) = 0;
    iVar1 = SlotData::getIndex(*(SlotData **)(this + 8));
    lVar2 = Skeleton::getAttachment(pSVar4,iVar1,pSVar3);
    if (*(long *)(this + 0x58) == lVar2) {
      return;
    }
    pSVar4 = *(Skeleton **)(this + 0x18);
    *(long *)(this + 0x58) = lVar2;
  }
  uVar5 = Skeleton::getTime(pSVar4);
  *(undefined4 *)(this + 0x60) = uVar5;
  *(undefined8 *)(this + 0x70) = 0;
  return;
}

