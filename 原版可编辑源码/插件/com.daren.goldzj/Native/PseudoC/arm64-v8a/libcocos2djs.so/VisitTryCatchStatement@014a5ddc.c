
/* v8::internal::SourceRangeAstVisitor::VisitTryCatchStatement(v8::internal::TryCatchStatement*) */

void __thiscall
v8::internal::SourceRangeAstVisitor::VisitTryCatchStatement
          (SourceRangeAstVisitor *this,TryCatchStatement *param_1)

{
  ulong uVar1;
  Statement *pSVar2;
  long lVar3;
  AstNode *pAVar4;
  
  VisitNode(this,(AstNode *)param_1);
  if (this[8] != (SourceRangeAstVisitor)0x0) goto LAB_014a5e54;
  pAVar4 = *(AstNode **)(param_1 + 8);
  uVar1 = GetCurrentStackPosition();
  if (*(ulong *)this <= uVar1) {
    AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>::VisitNoStackOverflowCheck
              ((AstTraversalVisitor<v8::internal::SourceRangeAstVisitor> *)this,pAVar4);
    if (this[8] != (SourceRangeAstVisitor)0x0) goto LAB_014a5e54;
    pAVar4 = *(AstNode **)(param_1 + 0x18);
    uVar1 = GetCurrentStackPosition();
    if (*(ulong *)this <= uVar1) {
      AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>::VisitNoStackOverflowCheck
                ((AstTraversalVisitor<v8::internal::SourceRangeAstVisitor> *)this,pAVar4);
      goto LAB_014a5e54;
    }
  }
  this[8] = (SourceRangeAstVisitor)0x1;
LAB_014a5e54:
  if (*(int *)(param_1 + 0x20) == 4) {
    lVar3 = (long)*(int *)(*(long *)(param_1 + 8) + 0x14);
    do {
      if (lVar3 < 1) {
        return;
      }
      pSVar2 = *(Statement **)(*(long *)(*(long *)(param_1 + 8) + 8) + lVar3 * 8 + -8);
      if ((*(uint *)(pSVar2 + 4) & 0x3f) != 0xf) {
        return;
      }
      lVar3 = lVar3 + -1;
    } while ((*(uint *)(pSVar2 + 4) & 0xc0) == 0x80);
    if (pSVar2 != (Statement *)0x0) {
      MaybeRemoveContinuationRange(this,pSVar2);
      return;
    }
  }
  return;
}

