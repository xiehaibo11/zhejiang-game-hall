
/* v8::internal::TryFinallyStatementSourceRanges::GetRange(v8::internal::SourceRangeKind) */

ulong __thiscall
v8::internal::TryFinallyStatementSourceRanges::GetRange
          (TryFinallyStatementSourceRanges *this,int param_2)

{
  uint uVar1;
  
  if (param_2 == 2) {
    if (this[0x10] != (TryFinallyStatementSourceRanges)0x0) {
      uVar1 = *(uint *)(this + 0xc);
      if (*(int *)(this + 8) == -1) {
        uVar1 = 0xffffffff;
      }
      return (ulong)uVar1 | 0xffffffff00000000;
    }
    return 0xffffffffffffffff;
  }
  if (param_2 == 4) {
    return *(ulong *)(this + 8);
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

