
/* v8::internal::interpreter::JumpTableTargetOffsets::iterator::UpdateAndAdvanceToValid() */

void __thiscall
v8::internal::interpreter::JumpTableTargetOffsets::iterator::UpdateAndAdvanceToValid(iterator *this)

{
  ulong uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(this + 0x14);
  iVar4 = *(int *)(this + 0x18);
  if (iVar3 < iVar4) {
    do {
      uVar1 = (**(code **)(*(long *)**(undefined8 **)this + 0x30))();
      if ((uVar1 & 1) != 0) {
        if (*(int *)(this + 0x18) <= *(int *)(this + 0x14)) {
          return;
        }
        goto LAB_0103f0bc;
      }
      iVar4 = *(int *)(this + 0x18);
      iVar3 = *(int *)(this + 0x14) + 1;
      *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
      *(int *)(this + 0x14) = iVar3;
    } while (iVar3 < iVar4);
  }
  if (iVar3 < iVar4) {
LAB_0103f0bc:
    uVar2 = (**(code **)(*(long *)**(undefined8 **)this + 0x38))();
    *(undefined8 *)(this + 8) = uVar2;
  }
  return;
}

