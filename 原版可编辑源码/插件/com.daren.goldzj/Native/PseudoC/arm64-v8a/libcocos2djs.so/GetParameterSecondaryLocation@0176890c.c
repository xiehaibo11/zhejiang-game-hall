
/* v8::internal::compiler::Linkage::GetParameterSecondaryLocation(int) const */

undefined8 __thiscall
v8::internal::compiler::Linkage::GetParameterSecondaryLocation(Linkage *this,int param_1)

{
  undefined8 uVar1;
  int *piVar2;
  ulong *puVar3;
  
  piVar2 = *(int **)this;
  if (param_1 == -1) {
    puVar3 = (ulong *)(piVar2 + 2);
  }
  else {
    puVar3 = (ulong *)((*(long **)(piVar2 + 4))[2] + (**(long **)(piVar2 + 4) + (long)param_1) * 8);
  }
  if (*piVar2 != 4) {
    if (*piVar2 == 1) {
      uVar1 = 0x70800000007;
      if ((*puVar3 & 0xffffffffff) != 0x700000002) {
        uVar1 = 0x70800000005;
      }
      return uVar1;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  return 0x70800000007;
}

