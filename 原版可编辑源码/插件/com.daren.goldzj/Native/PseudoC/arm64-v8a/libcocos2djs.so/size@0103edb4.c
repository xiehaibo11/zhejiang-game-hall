
/* v8::internal::interpreter::JumpTableTargetOffsets::size() const */

int __thiscall v8::internal::interpreter::JumpTableTargetOffsets::size(JumpTableTargetOffsets *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  
  iVar5 = *(int *)(this + 8);
  iVar9 = *(int *)(this + 0x10);
  puVar8 = *(undefined8 **)this;
  iVar1 = *(int *)(this + 0xc) + iVar5;
  if (0 < *(int *)(this + 0xc)) {
    do {
      uVar4 = (**(code **)(*(long *)*puVar8 + 0x30))((long *)*puVar8,iVar5);
      if ((uVar4 & 1) != 0) break;
      iVar5 = iVar5 + 1;
      iVar9 = iVar9 + 1;
    } while (iVar5 < iVar1);
  }
  if (iVar5 < iVar1) {
    (**(code **)(*(long *)*puVar8 + 0x38))((long *)*puVar8,iVar5);
  }
  iVar2 = *(int *)(this + 0xc);
  iVar3 = *(int *)(this + 0x10);
  if (iVar9 == iVar2 + iVar3) {
    iVar6 = 0;
  }
  else {
    iVar6 = 0;
    do {
      iVar7 = iVar5 + 1;
      iVar6 = iVar6 + 1;
      iVar10 = iVar9 + 1;
      if (iVar7 < iVar1) {
        iVar9 = (iVar1 + iVar9) - iVar5;
        do {
          uVar4 = (**(code **)(*(long *)*puVar8 + 0x30))((long *)*puVar8,iVar7);
          if ((uVar4 & 1) != 0) goto LAB_0103eeac;
          iVar7 = iVar7 + 1;
          iVar10 = iVar10 + 1;
          iVar5 = iVar1;
        } while (iVar1 != iVar7);
      }
      else {
LAB_0103eeac:
        iVar9 = iVar10;
        iVar5 = iVar7;
        if (iVar7 < iVar1) {
          (**(code **)(*(long *)*puVar8 + 0x38))((long *)*puVar8,iVar7);
        }
      }
    } while (iVar9 != iVar2 + iVar3);
  }
  return iVar6;
}

