
/* v8::internal::SourceRangeAstVisitor::VisitFunctionLiteral(v8::internal::FunctionLiteral*) */

void __thiscall
v8::internal::SourceRangeAstVisitor::VisitFunctionLiteral
          (SourceRangeAstVisitor *this,FunctionLiteral *param_1)

{
  bool bVar1;
  ulong uVar2;
  SourceRangeAstVisitor SVar3;
  SourceRangeAstVisitor SVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  AstNode *pAVar8;
  long *plVar9;
  long *plVar10;
  
  VisitNode(this,(AstNode *)param_1);
  lVar7 = *(long *)(param_1 + 0x28);
  iVar5 = *(int *)(this + 0x18) + 1;
  *(int *)(this + 0x18) = iVar5;
  plVar9 = *(long **)(lVar7 + 0x60);
  plVar10 = (long *)(lVar7 + 0x58);
  if (plVar10 == plVar9) {
    SVar3 = this[8];
  }
  else {
    SVar3 = this[8];
    bVar1 = SVar3 == (SourceRangeAstVisitor)0x0;
    SVar4 = SVar3;
    do {
      if (bVar1) {
        pAVar8 = (AstNode *)*plVar10;
        uVar2 = GetCurrentStackPosition();
        if (uVar2 < *(ulong *)this) {
          SVar3 = (SourceRangeAstVisitor)0x1;
          this[8] = (SourceRangeAstVisitor)0x1;
          break;
        }
        AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>::VisitNoStackOverflowCheck
                  ((AstTraversalVisitor<v8::internal::SourceRangeAstVisitor> *)this,pAVar8);
        SVar3 = this[8];
        SVar4 = SVar3;
      }
      if (SVar4 != (SourceRangeAstVisitor)0x0) break;
      SVar4 = (SourceRangeAstVisitor)0x0;
      plVar10 = (long *)(*plVar10 + 0x10);
      bVar1 = true;
    } while (plVar10 != plVar9);
    iVar5 = *(int *)(this + 0x18);
  }
  iVar6 = iVar5 + -1;
  *(int *)(this + 0x18) = iVar6;
  if ((SVar3 == (SourceRangeAstVisitor)0x0) && (-1 < *(char *)(*(long *)(param_1 + 0x28) + 0x83))) {
    *(int *)(this + 0x18) = iVar5;
    if (0 < *(int *)(param_1 + 0x3c)) {
      lVar7 = 0;
      while( true ) {
        pAVar8 = *(AstNode **)(*(long *)(param_1 + 0x30) + lVar7 * 8);
        uVar2 = GetCurrentStackPosition();
        if (uVar2 < *(ulong *)this) break;
        AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>::VisitNoStackOverflowCheck
                  ((AstTraversalVisitor<v8::internal::SourceRangeAstVisitor> *)this,pAVar8);
        if ((this[8] != (SourceRangeAstVisitor)0x0) ||
           (lVar7 = lVar7 + 1, *(int *)(param_1 + 0x3c) <= lVar7)) goto LAB_014a5c44;
      }
      this[8] = (SourceRangeAstVisitor)0x1;
LAB_014a5c44:
      iVar6 = *(int *)(this + 0x18) + -1;
    }
    *(int *)(this + 0x18) = iVar6;
  }
  if (*(int *)(param_1 + 0x3c) == 0) {
    return;
  }
  MaybeRemoveContinuationRange
            (this,*(Statement **)
                   (*(long *)(param_1 + 0x30) + (long)(*(int *)(param_1 + 0x3c) + -1) * 8));
  return;
}

