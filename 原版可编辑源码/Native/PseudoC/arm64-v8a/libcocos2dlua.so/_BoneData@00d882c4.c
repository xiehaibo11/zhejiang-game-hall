
/* dragonBones::BoneData::~BoneData() */

void __thiscall dragonBones::BoneData::~BoneData(BoneData *this)

{
  BaseObject *this_00;
  BoneData *pBVar1;
  undefined8 uVar2;
  
                    /* catch() { ... } // from try @ 00d88124 with catch @ 00d882c4 */
                    /* catch() { ... } // from try @ 00d88108 with catch @ 00d882c8 */
                    /* catch() { ... } // from try @ 00d880e0 with catch @ 00d882cc */
                    /* catch() { ... } // from try @ 00d881bc with catch @ 00d882d0
                       catch() { ... } // from try @ 00d881fc with catch @ 00d882d0 */
  *(undefined ***)this = &PTR__BoneData_016d6b80;
  this_00 = *(BaseObject **)(this + 0x48);
  if (this_00 != (BaseObject *)0x0) {
    BaseObject::returnToPool(this_00);
  }
                    /* try { // try from 00d882f4 to 00e88357 has its CatchHandler @ 00d882f4
                       catch() { ... } // from try @ 00d882f4 with catch @ 00d882f4
                       catch() { ... } // from try @ 00d8870c with catch @ 00d882f4
                       catch() { ... } // from try @ 00d888fc with catch @ 00d882f4 */
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0xd) = 0;
  if (((byte)this[0x18] & 1) == 0) {
    pBVar1 = this + 0x19;
  }
  else {
    pBVar1 = *(BoneData **)(this + 0x28);
  }
  *pBVar1 = (BoneData)0x0;
  if (((byte)this[0x18] & 1) != 0) {
    uVar2 = NEON_fmov(0x3f800000,4);
    *(undefined8 *)(this + 0x20) = 0;
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x40) = uVar2;
    *(undefined8 *)(this + 0x48) = 0;
    *(undefined8 *)(this + 0x50) = 0;
    operator_delete(*(void **)(this + 0x28));
  }
  operator_delete(this);
  return;
}

