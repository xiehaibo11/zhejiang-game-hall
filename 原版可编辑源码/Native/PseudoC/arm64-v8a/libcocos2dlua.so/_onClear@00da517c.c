
/* dragonBones::ArmatureDisplayData::_onClear() */

void __thiscall dragonBones::ArmatureDisplayData::_onClear(ArmatureDisplayData *this)

{
  undefined8 *puVar1;
  ArmatureDisplayData *pAVar2;
  ArmatureDisplayData *pAVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  pAVar2 = this + 0x18;
  if (((byte)*pAVar2 & 1) == 0) {
    pAVar3 = this + 0x19;
  }
  else {
    pAVar3 = *(ArmatureDisplayData **)(this + 0x28);
  }
  *pAVar3 = (ArmatureDisplayData)0x0;
  if (((byte)*pAVar2 & 1) == 0) {
    *pAVar2 = (ArmatureDisplayData)0x0;
  }
  else {
    *(undefined8 *)(this + 0x20) = 0;
  }
  pAVar2 = this + 0x30;
  if (((byte)*pAVar2 & 1) == 0) {
    pAVar3 = this + 0x31;
  }
  else {
    pAVar3 = *(ArmatureDisplayData **)(this + 0x40);
  }
  *pAVar3 = (ArmatureDisplayData)0x0;
  if (((byte)*pAVar2 & 1) == 0) {
    *pAVar2 = (ArmatureDisplayData)0x0;
  }
  else {
    *(undefined8 *)(this + 0x38) = 0;
  }
  puVar5 = *(undefined8 **)(this + 0x70);
  puVar1 = *(undefined8 **)(this + 0x78);
  uVar6 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = uVar6;
  *(undefined8 *)(this + 0x60) = 0;
  if (puVar5 != puVar1) {
    do {
      puVar4 = puVar5 + 1;
      BaseObject::returnToPool((BaseObject *)*puVar5);
      puVar5 = puVar4;
    } while (puVar1 != puVar4);
    puVar5 = *(undefined8 **)(this + 0x70);
  }
  this[0x68] = (ArmatureDisplayData)0x0;
  *(undefined8 **)(this + 0x78) = puVar5;
  *(undefined4 *)(this + 0x10) = 1;
  *(undefined8 *)(this + 0x88) = 0;
  return;
}

