
/* v8::internal::compiler::Type::SlowIs(v8::internal::compiler::Type) const */

ulong __thiscall v8::internal::compiler::Type::SlowIs(Type *this,int *param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  int *local_40;
  int *local_38;
  
  local_38 = param_2;
  if (((ulong)param_2 & 1) == 0) {
    piVar7 = *(int **)this;
    if (((ulong)piVar7 & 1) == 0) {
      iVar1 = *piVar7;
      if (iVar1 == 3) {
        uVar4 = piVar7[1];
        if (0 < (int)uVar4) {
          lVar8 = 0;
          while( true ) {
            local_40 = *(int **)(*(long *)(piVar7 + 2) + lVar8);
            if ((local_40 != param_2) &&
               (uVar5 = SlowIs((Type *)&local_40,param_2), (uVar5 & 1) == 0)) {
              return 0;
            }
            if ((ulong)uVar4 * 8 + -8 == lVar8) break;
            piVar7 = *(int **)this;
            lVar8 = lVar8 + 8;
          }
        }
        return 1;
      }
      if (*param_2 == 3) {
        uVar4 = param_2[1];
        if (0 < (int)uVar4) {
          if (piVar7 == (int *)**(undefined8 **)(param_2 + 2)) {
            return 1;
          }
          uVar5 = 1;
          do {
            uVar6 = SlowIs(this);
            if ((uVar6 & 1) != 0) {
              return 1;
            }
            if (((1 < uVar5 - 1) && (((ulong)*(int **)this & 1) == 0)) && (**(int **)this == 4)) {
              return 0;
            }
            if (uVar4 == uVar5) {
              return 0;
            }
            lVar8 = uVar5 * 8;
            uVar5 = uVar5 + 1;
          } while (*(long *)this != *(long *)(*(long *)(param_2 + 2) + lVar8));
          return 1;
        }
      }
      else if (*param_2 == 4) {
        if ((iVar1 == 4) && (*(double *)(param_2 + 2) <= *(double *)(piVar7 + 2))) {
          return (ulong)(*(double *)(piVar7 + 4) <= *(double *)(param_2 + 4));
        }
      }
      else if (iVar1 != 4) {
        uVar5 = SimplyEquals(this,param_2);
        return uVar5;
      }
      return 0;
    }
    uVar4 = BitsetGlb((Type *)&local_38);
    bVar2 = (uVar4 | (uint)piVar7 ^ 1) == uVar4;
  }
  else {
    uVar3 = BitsetLub(this);
    uVar4 = (uint)param_2 ^ 1;
    bVar2 = (uVar3 | uVar4) == uVar4;
  }
  return (ulong)bVar2;
}

