
/* v8::internal::SourceRangeAstVisitor::MaybeRemoveContinuationRange(v8::internal::Statement*) */

void __thiscall
v8::internal::SourceRangeAstVisitor::MaybeRemoveContinuationRange
          (SourceRangeAstVisitor *this,Statement *param_1)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  if (((*(uint *)(param_1 + 4) & 0x3f) == 9) &&
     (uVar1 = *(ulong *)(param_1 + 8), (*(uint *)(uVar1 + 4) & 0x3f) == 0x33)) {
    plVar2 = (long *)(*(long *)(this + 0x20) + 8);
    plVar3 = (long *)*plVar2;
    plVar4 = plVar2;
    if (plVar3 == (long *)0x0) {
      return;
    }
    do {
      if ((ulong)plVar3[4] >= uVar1) {
        plVar4 = plVar3;
      }
      plVar3 = (long *)plVar3[(ulong)plVar3[4] < uVar1];
    } while (plVar3 != (long *)0x0);
    if (plVar4 == plVar2) {
      return;
    }
    if (uVar1 < (ulong)plVar4[4]) {
      return;
    }
  }
  else {
    plVar2 = (long *)(*(long *)(this + 0x20) + 8);
    plVar3 = (long *)*plVar2;
    plVar4 = plVar2;
    if (plVar3 == (long *)0x0) {
      return;
    }
    do {
      if ((Statement *)plVar3[4] >= param_1) {
        plVar4 = plVar3;
      }
      plVar3 = (long *)plVar3[(Statement *)plVar3[4] < param_1];
    } while (plVar3 != (long *)0x0);
    if (plVar4 == plVar2) {
      return;
    }
    if (param_1 < (Statement *)plVar4[4]) {
      return;
    }
  }
  plVar4 = (long *)plVar4[5];
  if ((plVar4 != (long *)0x0) && (uVar1 = (**(code **)(*plVar4 + 0x18))(plVar4,2), (uVar1 & 1) != 0)
     ) {
                    /* WARNING: Could not recover jumptable at 0x014a61b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x20))(plVar4);
    return;
  }
  return;
}

