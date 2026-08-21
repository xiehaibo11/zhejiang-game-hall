
/* dragonBones::BoundingBoxDisplayData::_onClear() */

void __thiscall dragonBones::BoundingBoxDisplayData::_onClear(BoundingBoxDisplayData *this)

{
  BoundingBoxDisplayData *pBVar1;
  BoundingBoxDisplayData *pBVar2;
  undefined8 uVar3;
  
                    /* try { // try from 00da53f4 to 00ea53fb has its CatchHandler @ 00da56d4 */
                    /* try { // try from 00da53fc to 00ea5557 has its CatchHandler @ 00da53a0 */
  pBVar1 = this + 0x18;
  if (((byte)*pBVar1 & 1) == 0) {
    pBVar2 = this + 0x19;
  }
  else {
    pBVar2 = *(BoundingBoxDisplayData **)(this + 0x28);
  }
  *pBVar2 = (BoundingBoxDisplayData)0x0;
  if (((byte)*pBVar1 & 1) == 0) {
    *pBVar1 = (BoundingBoxDisplayData)0x0;
  }
  else {
    *(undefined8 *)(this + 0x20) = 0;
  }
  pBVar1 = this + 0x30;
  if (((byte)*pBVar1 & 1) == 0) {
    pBVar2 = this + 0x31;
  }
  else {
    pBVar2 = *(BoundingBoxDisplayData **)(this + 0x40);
  }
  *pBVar2 = (BoundingBoxDisplayData)0x0;
  if (((byte)*pBVar1 & 1) == 0) {
    *pBVar1 = (BoundingBoxDisplayData)0x0;
  }
  else {
    *(undefined8 *)(this + 0x38) = 0;
  }
  uVar3 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = uVar3;
  *(undefined8 *)(this + 0x60) = 0;
  if (*(BaseObject **)(this + 0x68) != (BaseObject *)0x0) {
    BaseObject::returnToPool(*(BaseObject **)(this + 0x68));
  }
  *(undefined4 *)(this + 0x10) = 3;
  *(undefined8 *)(this + 0x68) = 0;
  return;
}

