
/* v8::internal::interpreter::JumpTableTargetOffsets::iterator::TEMPNAMEPLACEHOLDERVALUE() */

iterator * __thiscall
v8::internal::interpreter::JumpTableTargetOffsets::iterator::operator++(iterator *this)

{
  ulong uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(this + 0x18);
  iVar3 = *(int *)(this + 0x14) + 1;
  *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
  *(int *)(this + 0x14) = iVar3;
  if (iVar3 < iVar4) {
    do {
      uVar1 = (**(code **)(*(long *)**(undefined8 **)this + 0x30))();
      if ((uVar1 & 1) != 0) {
        if (*(int *)(this + 0x18) <= *(int *)(this + 0x14)) {
          return this;
        }
        goto LAB_0103ef8c;
      }
      iVar4 = *(int *)(this + 0x18);
      iVar3 = *(int *)(this + 0x14) + 1;
      *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
      *(int *)(this + 0x14) = iVar3;
    } while (iVar3 < iVar4);
  }
  if (iVar3 < iVar4) {
LAB_0103ef8c:
    uVar2 = (**(code **)(*(long *)**(undefined8 **)this + 0x38))();
    *(undefined8 *)(this + 8) = uVar2;
  }
  return this;
}

