
/* dragonBones::IKConstraintData::~IKConstraintData() */

void __thiscall dragonBones::IKConstraintData::~IKConstraintData(IKConstraintData *this)

{
  IKConstraintData IVar1;
  IKConstraintData *pIVar2;
  
  *(undefined4 *)(this + 0x10) = 0;
                    /* try { // try from 00da3ed4 to 00ea3edb has its CatchHandler @ 00da3fd8 */
  *(undefined ***)this = &PTR__IKConstraintData_016d83a0;
  if (((byte)this[0x18] & 1) == 0) {
    pIVar2 = this + 0x19;
  }
  else {
    pIVar2 = *(IKConstraintData **)(this + 0x28);
  }
  *pIVar2 = (IKConstraintData)0x0;
  IVar1 = this[0x18];
  if (((byte)IVar1 & 1) == 0) {
    this[0x18] = (IKConstraintData)0x0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined2 *)(this + 0x48) = 0;
                    /* try { // try from 00da3f14 to 00ea3f1b has its CatchHandler @ 00da3fd4 */
    *(undefined4 *)(this + 0x4c) = 0x3f800000;
    *(undefined ***)this = &PTR__ConstraintData_016d8358;
    return;
  }
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined2 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x4c) = 0x3f800000;
                    /* try { // try from 00da3f48 to 00ea3f4f has its CatchHandler @ 00da3fa0 */
  *(undefined ***)this = &PTR__ConstraintData_016d8358;
                    /* try { // try from 00da3f50 to 00ea3f93 has its CatchHandler @ 00da3d5c */
  if (((byte)IVar1 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x28));
  return;
}

