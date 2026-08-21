
/* v8::internal::compiler::FunctionalList<v8::internal::compiler::BranchElimination::BranchCondition>::ResetToCommonAncestor(v8::internal::compiler::FunctionalList<v8::internal::compiler::BranchElimination::BranchCondition>)
    */

void __thiscall
v8::internal::compiler::FunctionalList<v8::internal::compiler::BranchElimination::BranchCondition>::
ResetToCommonAncestor
          (FunctionalList<v8::internal::compiler::BranchElimination::BranchCondition> *this,
          long param_2)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *(long *)this;
  if (param_2 == 0) goto LAB_0166aba8;
LAB_0166ab80:
  uVar2 = *(ulong *)(param_2 + 0x20);
  if (lVar1 == 0) goto LAB_0166abb0;
  while (*(ulong *)(lVar1 + 0x20) < uVar2) {
    while( true ) {
      if ((param_2 == 0) || (*(long *)(param_2 + 0x20) == 0)) goto LAB_0166ac3c;
      param_2 = *(long *)(param_2 + 0x18);
      if (param_2 != 0) goto LAB_0166ab80;
LAB_0166aba8:
      uVar2 = 0;
      if (lVar1 != 0) break;
LAB_0166abb0:
      if (uVar2 == 0) goto LAB_0166abc8;
    }
  }
LAB_0166abc8:
  do {
    if (param_2 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(ulong *)(param_2 + 0x20);
    }
    if ((lVar1 == 0) || (*(ulong *)(lVar1 + 0x20) <= uVar2)) break;
    if ((lVar1 == 0) || (*(long *)(lVar1 + 0x20) == 0)) goto LAB_0166ac3c;
    lVar1 = *(long *)(lVar1 + 0x18);
    *(long *)this = lVar1;
  } while( true );
LAB_0166ac2c:
  if (lVar1 == param_2) {
    return;
  }
  if ((lVar1 == 0) || (*(long *)(lVar1 + 0x20) == 0)) {
LAB_0166ac3c:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","Size() > 0");
  }
  lVar1 = *(long *)(lVar1 + 0x18);
  *(long *)this = lVar1;
  if ((param_2 == 0) || (*(long *)(param_2 + 0x20) == 0)) goto LAB_0166ac3c;
  param_2 = *(long *)(param_2 + 0x18);
  goto LAB_0166ac2c;
}

