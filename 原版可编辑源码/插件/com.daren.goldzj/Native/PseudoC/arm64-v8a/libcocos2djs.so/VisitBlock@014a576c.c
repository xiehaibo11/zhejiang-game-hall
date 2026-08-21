
/* v8::internal::SourceRangeAstVisitor::VisitBlock(v8::internal::Block*) */

void __thiscall
v8::internal::SourceRangeAstVisitor::VisitBlock(SourceRangeAstVisitor *this,Block *param_1)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  
  AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>::VisitBlock
            ((AstTraversalVisitor<v8::internal::SourceRangeAstVisitor> *)this,param_1);
  plVar3 = (long *)(*(long *)(this + 0x20) + 8);
  plVar4 = (long *)*plVar3;
  plVar1 = plVar3;
  if (plVar4 != (long *)0x0) {
    do {
      if ((Block *)plVar4[4] >= param_1) {
        plVar1 = plVar4;
      }
      plVar4 = (long *)plVar4[(Block *)plVar4[4] < param_1];
    } while (plVar4 != (long *)0x0);
    if (((plVar1 != plVar3) && ((Block *)plVar1[4] <= param_1)) &&
       (plVar1 = (long *)plVar1[5], plVar1 != (long *)0x0)) {
      uVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,2);
      if ((uVar2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.",
                 "enclosingSourceRanges->HasRange(SourceRangeKind::kContinuation)");
      }
      if (*(int *)(param_1 + 0x14) != 0) {
        MaybeRemoveContinuationRange
                  (this,*(Statement **)
                         (*(long *)(param_1 + 8) + (long)(*(int *)(param_1 + 0x14) + -1) * 8));
        return;
      }
    }
  }
  return;
}

