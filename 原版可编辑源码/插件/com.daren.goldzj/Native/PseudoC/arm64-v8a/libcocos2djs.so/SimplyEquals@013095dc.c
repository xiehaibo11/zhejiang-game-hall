
/* v8::internal::compiler::Type::SimplyEquals(v8::internal::compiler::Type) const */

bool __thiscall v8::internal::compiler::Type::SimplyEquals(Type *this,uint *param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long local_48;
  long local_28;
  
  piVar6 = *(int **)this;
  if (((ulong)piVar6 & 1) != 0) goto LAB_01309730;
  iVar1 = *piVar6;
  if (iVar1 == 1) {
    if ((((ulong)param_2 & 1) == 0) && (*param_2 == 1)) {
      if (NAN(*(double *)(piVar6 + 2)) || NAN(*(double *)(param_2 + 2))) {
        return false;
      }
      return *(double *)(piVar6 + 2) == *(double *)(param_2 + 2);
    }
  }
  else if (iVar1 == 0) {
    if ((((ulong)param_2 & 1) == 0) && (*param_2 == 0)) {
      lVar3 = HeapObjectRef::object((HeapObjectRef *)(piVar6 + 2));
      lVar4 = HeapObjectRef::object((HeapObjectRef *)(param_2 + 2));
      return lVar3 == lVar4;
    }
  }
  else if ((((ulong)param_2 & 1) == 0) && (iVar1 == 4)) {
    if (1 < *param_2) {
LAB_01309730:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
  }
  else {
    if (iVar1 != 2) goto LAB_01309730;
    if ((((ulong)param_2 & 1) == 0) && (*param_2 == 2)) {
      uVar2 = piVar6[1];
      if (uVar2 == param_2[1]) {
        if ((int)uVar2 < 1) {
          return true;
        }
        lVar3 = 0;
        while( true ) {
          local_48 = *(long *)(*(long *)(piVar6 + 2) + lVar3);
          lVar4 = *(long *)(*(long *)(param_2 + 2) + lVar3);
          local_28 = lVar4;
          if (((local_48 != lVar4) && (uVar5 = SlowIs((Type *)&local_48,lVar4), (uVar5 & 1) == 0))
             || ((lVar4 != local_48 && (uVar5 = SlowIs((Type *)&local_28), (uVar5 & 1) == 0))))
          break;
          lVar3 = lVar3 + 8;
          if ((ulong)uVar2 * 8 - lVar3 == 0) {
            return true;
          }
        }
      }
    }
  }
  return false;
}

