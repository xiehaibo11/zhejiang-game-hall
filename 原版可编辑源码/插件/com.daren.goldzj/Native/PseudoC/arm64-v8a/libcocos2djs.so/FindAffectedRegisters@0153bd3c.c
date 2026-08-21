
/* v8::internal::Trace::FindAffectedRegisters(v8::internal::DynamicBitSet*, v8::internal::Zone*) */

int __thiscall
v8::internal::Trace::FindAffectedRegisters(Trace *this,DynamicBitSet *param_1,Zone *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  
  piVar5 = *(int **)(this + 8);
  if (piVar5 == (int *)0x0) {
    iVar3 = -1;
  }
  else {
    iVar3 = -1;
    do {
      if (*piVar5 == 6) {
        iVar2 = piVar5[5];
        uVar4 = piVar5[4];
        if (piVar5[4] <= iVar2) {
          do {
            DynamicBitSet::Set(param_1,uVar4,param_2);
            bVar1 = (int)uVar4 < iVar2;
            uVar4 = uVar4 + 1;
          } while (bVar1);
        }
        if (iVar2 <= iVar3) {
          iVar2 = iVar3;
        }
      }
      else {
        DynamicBitSet::Set(param_1,piVar5[1],param_2);
        iVar2 = piVar5[1];
        if (piVar5[1] <= iVar3) {
          iVar2 = iVar3;
        }
      }
      iVar3 = iVar2;
      piVar5 = *(int **)(piVar5 + 2);
    } while (piVar5 != (int *)0x0);
  }
  return iVar3;
}

