
/* v8::internal::SourceRangeAstVisitor::VisitSwitchStatement(v8::internal::SwitchStatement*) */

void __thiscall
v8::internal::SourceRangeAstVisitor::VisitSwitchStatement
          (SourceRangeAstVisitor *this,SwitchStatement *param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>::VisitSwitchStatement
            ((AstTraversalVisitor<v8::internal::SourceRangeAstVisitor> *)this,param_1);
  if (*(int *)(param_1 + 0x24) != 0) {
    plVar2 = *(long **)(param_1 + 0x18);
    lVar3 = (long)*(int *)(param_1 + 0x24) << 3;
    do {
      iVar1 = *(int *)(*plVar2 + 0x14);
      if (iVar1 != 0) {
        MaybeRemoveContinuationRange
                  (this,*(Statement **)(*(long *)(*plVar2 + 8) + (long)(iVar1 + -1) * 8));
      }
      lVar3 = lVar3 + -8;
      plVar2 = plVar2 + 1;
    } while (lVar3 != 0);
  }
  return;
}

