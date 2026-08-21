
/* v8::internal::RegExpAlternative::CaptureRegisters() */

undefined8 __thiscall v8::internal::RegExpAlternative::CaptureRegisters(RegExpAlternative *this)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  
  plVar7 = *(long **)(this + 8);
  if (*(int *)((long)plVar7 + 0xc) < 1) {
    iVar5 = -1;
    iVar4 = -2;
  }
  else {
    lVar8 = 0;
    iVar4 = -2;
    iVar6 = -1;
    do {
      uVar2 = (**(code **)(**(long **)(*plVar7 + lVar8 * 8) + 0x48))();
      iVar1 = (int)uVar2;
      iVar5 = iVar6;
      iVar3 = iVar4;
      if ((iVar1 != -1) && (iVar3 = (int)((ulong)uVar2 >> 0x20), iVar5 = iVar1, iVar6 != -1)) {
        if (iVar1 <= iVar6) {
          iVar6 = iVar1;
        }
        iVar5 = iVar6;
        if (iVar3 <= iVar4) {
          iVar3 = iVar4;
        }
      }
      iVar4 = iVar3;
      lVar8 = lVar8 + 1;
      iVar6 = iVar5;
    } while (lVar8 < *(int *)((long)plVar7 + 0xc));
  }
  return CONCAT44(iVar4,iVar5);
}

