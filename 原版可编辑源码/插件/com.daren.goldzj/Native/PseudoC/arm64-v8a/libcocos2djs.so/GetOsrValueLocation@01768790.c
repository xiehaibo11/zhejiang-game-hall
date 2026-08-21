
/* v8::internal::compiler::Linkage::GetOsrValueLocation(int) const */

ulong __thiscall v8::internal::compiler::Linkage::GetOsrValueLocation(Linkage *this,int param_1)

{
  long lVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = *(int **)this;
  if (*piVar2 != 1) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","incoming_->IsJSFunctionCall()");
  }
  if (param_1 != -1) {
    iVar3 = (int)*(long *)(piVar2 + 6);
    if (param_1 < iVar3) {
      return *(ulong *)((*(long **)(piVar2 + 4))[2] + (**(long **)(piVar2 + 4) + (long)param_1) * 8)
      ;
    }
    return (ulong)((param_1 - iVar3) * 2 + 8) | 0x70800000001;
  }
  lVar1 = (*(long *)(piVar2 + 6) << 0x20) + 0x300000000;
  if (lVar1 != 0) {
    return *(ulong *)((*(long **)(piVar2 + 4))[2] + (**(long **)(piVar2 + 4) + (lVar1 >> 0x20)) * 8
                     + -8);
  }
  return *(ulong *)(piVar2 + 2);
}

