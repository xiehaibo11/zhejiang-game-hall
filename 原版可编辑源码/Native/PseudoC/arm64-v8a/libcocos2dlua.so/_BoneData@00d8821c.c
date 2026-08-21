
/* dragonBones::BoneData::~BoneData() */

void __thiscall dragonBones::BoneData::~BoneData(BoneData *this)

{
  BoneData BVar1;
  BoneData *pBVar2;
  BoneData *pBVar3;
  undefined8 uVar4;
  
  *(undefined ***)this = &PTR__BoneData_016d6b80;
  pBVar3 = this + 0x48;
  if (*(BaseObject **)pBVar3 != (BaseObject *)0x0) {
    BaseObject::returnToPool(*(BaseObject **)pBVar3);
  }
                    /* try { // try from 00d88254 to 00e882eb has its CatchHandler @ 00d88020 */
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0xd) = 0;
  if (((byte)this[0x18] & 1) == 0) {
    pBVar2 = this + 0x19;
  }
  else {
    pBVar2 = *(BoneData **)(this + 0x28);
  }
  *pBVar2 = (BoneData)0x0;
  BVar1 = this[0x18];
  if (((byte)BVar1 & 1) == 0) {
    uVar4 = NEON_fmov(0x3f800000,4);
    this[0x18] = (BoneData)0x0;
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x40) = uVar4;
    *(undefined8 *)pBVar3 = 0;
    *(undefined8 *)(this + 0x50) = 0;
  }
  else {
    uVar4 = NEON_fmov(0x3f800000,4);
    *(undefined8 *)(this + 0x20) = 0;
                    /* catch() { ... } // from try @ 00d8817c with catch @ 00d88298 */
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x38) = 0;
                    /* catch() { ... } // from try @ 00d880d0 with catch @ 00d8829c */
    *(undefined8 *)(this + 0x40) = uVar4;
                    /* catch() { ... } // from try @ 00d880a8 with catch @ 00d882a0 */
    *(undefined8 *)pBVar3 = 0;
    *(undefined8 *)(this + 0x50) = 0;
    if (((byte)BVar1 & 1) != 0) {
                    /* catch() { ... } // from try @ 00d881dc with catch @ 00d882b4 */
                    /* catch() { ... } // from try @ 00d8819c with catch @ 00d882b8 */
                    /* catch() { ... } // from try @ 00d8815c with catch @ 00d882bc */
                    /* catch() { ... } // from try @ 00d88140 with catch @ 00d882c0 */
      operator_delete(*(void **)(this + 0x28));
      return;
    }
  }
  return;
}

