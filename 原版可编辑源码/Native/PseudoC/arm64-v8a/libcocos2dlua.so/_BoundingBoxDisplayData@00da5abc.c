
/* dragonBones::BoundingBoxDisplayData::~BoundingBoxDisplayData() */

void __thiscall
dragonBones::BoundingBoxDisplayData::~BoundingBoxDisplayData(BoundingBoxDisplayData *this)

{
  BoundingBoxDisplayData BVar1;
  BoundingBoxDisplayData *pBVar2;
  BoundingBoxDisplayData *pBVar3;
  BoundingBoxDisplayData *pBVar4;
  undefined8 uVar5;
  
  *(undefined ***)this = &PTR__BoundingBoxDisplayData_016d8508;
  pBVar3 = this + 0x18;
  if (((byte)*pBVar3 & 1) == 0) {
    pBVar4 = this + 0x19;
  }
  else {
    pBVar4 = *(BoundingBoxDisplayData **)(this + 0x28);
  }
  *pBVar4 = (BoundingBoxDisplayData)0x0;
  if (((byte)*pBVar3 & 1) == 0) {
    *pBVar3 = (BoundingBoxDisplayData)0x0;
  }
  else {
    *(undefined8 *)(this + 0x20) = 0;
  }
  pBVar4 = this + 0x30;
  if (((byte)*pBVar4 & 1) == 0) {
    pBVar2 = this + 0x31;
  }
  else {
    pBVar2 = *(BoundingBoxDisplayData **)(this + 0x40);
  }
  *pBVar2 = (BoundingBoxDisplayData)0x0;
  BVar1 = *pBVar4;
  if (((byte)BVar1 & 1) == 0) {
    BVar1 = (BoundingBoxDisplayData)0x0;
    *pBVar4 = (BoundingBoxDisplayData)0x0;
  }
  else {
    *(undefined8 *)(this + 0x38) = 0;
  }
  uVar5 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = uVar5;
  *(undefined8 *)(this + 0x60) = 0;
  if (*(BaseObject **)(this + 0x68) != (BaseObject *)0x0) {
    BaseObject::returnToPool(*(BaseObject **)(this + 0x68));
    BVar1 = *pBVar4;
  }
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x10) = 3;
  *(undefined ***)this = &PTR__DisplayData_016d83e8;
  if (((byte)BVar1 & 1) != 0) {
    operator_delete(*(void **)(this + 0x40));
  }
  if (((byte)*pBVar3 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x28));
  return;
}

