
/* v8::internal::StringCons::GetMaxStringConstantLength() const */

long __thiscall v8::internal::StringCons::GetMaxStringConstantLength(StringCons *this)

{
  int iVar1;
  StringCons *pSVar2;
  long lVar3;
  long lVar4;
  
  pSVar2 = *(StringCons **)(this + 0x10);
  iVar1 = *(int *)pSVar2;
  if (iVar1 == 2) {
    lVar4 = GetMaxStringConstantLength(pSVar2);
  }
  else if (iVar1 == 1) {
    lVar4 = 0x12;
  }
  else {
    if (iVar1 != 0) goto LAB_014e77a0;
    lVar4 = *(long *)(pSVar2 + 0x18);
  }
  pSVar2 = *(StringCons **)(this + 0x18);
  iVar1 = *(int *)pSVar2;
  if (iVar1 == 2) {
    lVar3 = GetMaxStringConstantLength(pSVar2);
  }
  else if (iVar1 == 1) {
    lVar3 = 0x12;
  }
  else {
    if (iVar1 != 0) {
LAB_014e77a0:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    lVar3 = *(long *)(pSVar2 + 0x18);
  }
  return lVar3 + lVar4;
}

