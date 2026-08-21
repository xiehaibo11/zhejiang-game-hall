
/* dragonBones::IKConstraintData::~IKConstraintData() */

void __thiscall dragonBones::IKConstraintData::~IKConstraintData(IKConstraintData *this)

{
  IKConstraintData *pIVar1;
  
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined ***)this = &PTR__IKConstraintData_016d83a0;
  if (((byte)this[0x18] & 1) == 0) {
    pIVar1 = this + 0x19;
                    /* try { // try from 00da3f94 to 00ea3f9b has its CatchHandler @ 00da3f9c */
  }
  else {
    pIVar1 = *(IKConstraintData **)(this + 0x28);
  }
                    /* catch() { ... } // from try @ 00da3e38 with catch @ 00da3f9c
                       catch() { ... } // from try @ 00da3f94 with catch @ 00da3f9c
                       try { // try from 00da3f9c to 00ea3ff3 has its CatchHandler @ 00da3d5c */
  *pIVar1 = (IKConstraintData)0x0;
                    /* catch() { ... } // from try @ 00da3f48 with catch @ 00da3fa0 */
                    /* catch() { ... } // from try @ 00da3e90 with catch @ 00da3fa4 */
  if (((byte)this[0x18] & 1) != 0) {
    *(undefined8 *)(this + 0x20) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined2 *)(this + 0x48) = 0;
    *(undefined4 *)(this + 0x4c) = 0x3f800000;
    *(undefined ***)this = &PTR__ConstraintData_016d8358;
                    /* catch() { ... } // from try @ 00da3f14 with catch @ 00da3fd4 */
    operator_delete(*(void **)(this + 0x28));
  }
                    /* catch() { ... } // from try @ 00da3ed4 with catch @ 00da3fd8 */
  operator_delete(this);
  return;
}

