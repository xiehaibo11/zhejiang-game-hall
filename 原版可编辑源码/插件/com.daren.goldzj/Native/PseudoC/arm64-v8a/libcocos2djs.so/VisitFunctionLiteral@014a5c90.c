
/* v8::internal::AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>::VisitFunctionLiteral(v8::internal::FunctionLiteral*)
    */

void __thiscall
v8::internal::AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>::VisitFunctionLiteral
          (AstTraversalVisitor<v8::internal::SourceRangeAstVisitor> *this,FunctionLiteral *param_1)

{
  bool bVar1;
  ulong uVar2;
  AstTraversalVisitor<v8::internal::SourceRangeAstVisitor> AVar3;
  AstTraversalVisitor<v8::internal::SourceRangeAstVisitor> AVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  AstNode *pAVar8;
  long *plVar9;
  long *plVar10;
  
  SourceRangeAstVisitor::VisitNode((SourceRangeAstVisitor *)this,(AstNode *)param_1);
  lVar7 = *(long *)(param_1 + 0x28);
  iVar5 = *(int *)(this + 0x18) + 1;
  *(int *)(this + 0x18) = iVar5;
  plVar9 = *(long **)(lVar7 + 0x60);
  plVar10 = (long *)(lVar7 + 0x58);
  if (plVar10 == plVar9) {
    AVar3 = this[8];
  }
  else {
    AVar3 = this[8];
    bVar1 = AVar3 == (AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>)0x0;
    AVar4 = AVar3;
    do {
      if (bVar1) {
        pAVar8 = (AstNode *)*plVar10;
        uVar2 = GetCurrentStackPosition();
        if (uVar2 < *(ulong *)this) {
          AVar3 = (AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>)0x1;
          this[8] = (AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>)0x1;
          break;
        }
        VisitNoStackOverflowCheck(this,pAVar8);
        AVar3 = this[8];
        AVar4 = AVar3;
      }
      if (AVar4 != (AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>)0x0) break;
      AVar4 = (AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>)0x0;
      plVar10 = (long *)(*plVar10 + 0x10);
      bVar1 = true;
    } while (plVar10 != plVar9);
    iVar5 = *(int *)(this + 0x18);
  }
  iVar6 = iVar5 + -1;
  *(int *)(this + 0x18) = iVar6;
  if ((AVar3 == (AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>)0x0) &&
     (-1 < *(char *)(*(long *)(param_1 + 0x28) + 0x83))) {
    *(int *)(this + 0x18) = iVar5;
    if (0 < *(int *)(param_1 + 0x3c)) {
      lVar7 = 0;
      while( true ) {
        pAVar8 = *(AstNode **)(*(long *)(param_1 + 0x30) + lVar7 * 8);
        uVar2 = GetCurrentStackPosition();
        if (uVar2 < *(ulong *)this) break;
        VisitNoStackOverflowCheck(this,pAVar8);
        if ((this[8] != (AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>)0x0) ||
           (lVar7 = lVar7 + 1, *(int *)(param_1 + 0x3c) <= lVar7)) goto LAB_014a5dbc;
      }
      this[8] = (AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>)0x1;
LAB_014a5dbc:
      iVar6 = *(int *)(this + 0x18) + -1;
    }
    *(int *)(this + 0x18) = iVar6;
  }
  return;
}

