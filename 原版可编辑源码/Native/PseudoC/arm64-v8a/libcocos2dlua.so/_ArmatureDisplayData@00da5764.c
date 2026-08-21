
/* dragonBones::ArmatureDisplayData::~ArmatureDisplayData() */

void __thiscall dragonBones::ArmatureDisplayData::~ArmatureDisplayData(ArmatureDisplayData *this)

{
  undefined8 *puVar1;
  ArmatureDisplayData *pAVar2;
  ArmatureDisplayData *pAVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ArmatureDisplayData *pAVar6;
  undefined8 uVar7;
  
  *(undefined ***)this = &PTR__ArmatureDisplayData_016d8478;
  pAVar6 = this + 0x18;
  if (((byte)*pAVar6 & 1) == 0) {
    pAVar2 = this + 0x19;
  }
  else {
    pAVar2 = *(ArmatureDisplayData **)(this + 0x28);
  }
  *pAVar2 = (ArmatureDisplayData)0x0;
  if (((byte)*pAVar6 & 1) == 0) {
    *pAVar6 = (ArmatureDisplayData)0x0;
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
  uVar7 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = uVar7;
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
  if (puVar5 != (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x78) = puVar5;
    operator_delete(puVar5);
  }
  *(undefined ***)this = &PTR__DisplayData_016d83e8;
  if (((byte)this[0x30] & 1) != 0) {
    operator_delete(*(void **)(this + 0x40));
  }
  if (((byte)*pAVar6 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x28));
  return;
}

