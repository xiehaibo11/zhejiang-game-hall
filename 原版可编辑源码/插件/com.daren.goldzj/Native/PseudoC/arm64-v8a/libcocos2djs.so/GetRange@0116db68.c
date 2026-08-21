
/* v8::internal::IfStatementSourceRanges::GetRange(v8::internal::SourceRangeKind) */

ulong __thiscall
v8::internal::IfStatementSourceRanges::GetRange(IfStatementSourceRanges *this,int param_2)

{
  IfStatementSourceRanges *pIVar1;
  uint uVar2;
  
  if (param_2 == 2) {
    if (this[0x18] != (IfStatementSourceRanges)0x0) {
      pIVar1 = this + 8;
      if (*(int *)(this + 0x10) != -1) {
        pIVar1 = this + 0x10;
      }
      uVar2 = *(uint *)(pIVar1 + 4);
      if (*(int *)pIVar1 == -1) {
        uVar2 = 0xffffffff;
      }
      return (ulong)uVar2 | 0xffffffff00000000;
    }
    return 0xffffffffffffffff;
  }
  if (param_2 != 6) {
    if (param_2 == 3) {
      return *(ulong *)(this + 0x10);
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  return *(ulong *)(this + 8);
}

