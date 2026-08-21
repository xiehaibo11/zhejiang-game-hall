
/* v8::internal::compiler::Linkage::ParameterHasSecondaryLocation(int) const */

bool __thiscall
v8::internal::compiler::Linkage::ParameterHasSecondaryLocation(Linkage *this,int param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  int *piVar4;
  ulong uVar5;
  ulong *puVar6;
  
  piVar4 = *(int **)this;
  if (*piVar4 == 4) {
    if (param_1 == -1) {
      puVar6 = (ulong *)(piVar4 + 2);
    }
    else {
      puVar6 = (ulong *)((*(long **)(piVar4 + 4))[2] + (**(long **)(piVar4 + 4) + (long)param_1) * 8
                        );
    }
    if ((int)*puVar6 != 0xe) {
      return false;
    }
    bVar3 = (*puVar6 & 0xff00000000) == 0x700000000;
  }
  else {
    if (*piVar4 != 1) {
      return false;
    }
    if (param_1 == -1) {
      puVar6 = (ulong *)(piVar4 + 2);
    }
    else {
      puVar6 = (ulong *)((*(long **)(piVar4 + 4))[2] + (**(long **)(piVar4 + 4) + (long)param_1) * 8
                        );
    }
    uVar5 = *puVar6;
    iVar1 = (int)uVar5 >> 1;
    uVar2 = (uint)(uVar5 >> 0x20);
    if (((uVar5 & 1) == 0) && (iVar1 == 1)) {
      return (uVar2 & 0xff) == 7;
    }
    bVar3 = false;
    if (((uVar5 & 1) == 0) && (iVar1 == 0x1b)) {
      bVar3 = (uVar2 & 0xff) == 7;
    }
  }
  return bVar3;
}

