
/* dragonBones::IKConstraintData::_onClear() */

void __thiscall dragonBones::IKConstraintData::_onClear(IKConstraintData *this)

{
  IKConstraintData *pIVar1;
  IKConstraintData *pIVar2;
  
  pIVar1 = this + 0x18;
  *(undefined4 *)(this + 0x10) = 0;
  if (((byte)*pIVar1 & 1) == 0) {
    pIVar2 = this + 0x19;
  }
  else {
    pIVar2 = *(IKConstraintData **)(this + 0x28);
  }
  *pIVar2 = (IKConstraintData)0x0;
  if (((byte)*pIVar1 & 1) == 0) {
    *pIVar1 = (IKConstraintData)0x0;
  }
  else {
    *(undefined8 *)(this + 0x20) = 0;
  }
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined2 *)(this + 0x48) = 0;
                    /* try { // try from 00da3e90 to 00ea3e93 has its CatchHandler @ 00da3fa4 */
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x4c) = 0x3f800000;
  return;
}

