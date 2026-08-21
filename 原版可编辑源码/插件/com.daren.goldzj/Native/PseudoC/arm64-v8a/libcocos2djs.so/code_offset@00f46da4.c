
/* v8::internal::FrameSummary::code_offset() const */

undefined4 __thiscall v8::internal::FrameSummary::code_offset(FrameSummary *this)

{
  int iVar1;
  FrameSummary *pFVar2;
  
  iVar1 = *(int *)(this + 8);
  if (iVar1 == 2) {
    pFVar2 = this + 0x20;
  }
  else {
    if ((iVar1 != 1) && (iVar1 != 0)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    pFVar2 = this + 0x28;
  }
  return *(undefined4 *)pFVar2;
}

