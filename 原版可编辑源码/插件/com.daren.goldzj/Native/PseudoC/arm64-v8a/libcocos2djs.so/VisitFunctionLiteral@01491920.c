
/* v8::internal::AstFunctionLiteralIdReindexer::VisitFunctionLiteral(v8::internal::FunctionLiteral*)
    */

void __thiscall
v8::internal::AstFunctionLiteralIdReindexer::VisitFunctionLiteral
          (AstFunctionLiteralIdReindexer *this,FunctionLiteral *param_1)

{
  bool bVar1;
  ulong uVar2;
  AstFunctionLiteralIdReindexer AVar3;
  AstFunctionLiteralIdReindexer AVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  AstNode *pAVar8;
  long *plVar9;
  long *plVar10;
  
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
    bVar1 = AVar3 == (AstFunctionLiteralIdReindexer)0x0;
    AVar4 = AVar3;
    do {
      if (bVar1) {
        pAVar8 = (AstNode *)*plVar10;
        uVar2 = GetCurrentStackPosition();
        if (uVar2 < *(ulong *)this) {
          AVar3 = (AstFunctionLiteralIdReindexer)0x1;
          this[8] = (AstFunctionLiteralIdReindexer)0x1;
          break;
        }
        AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer>::VisitNoStackOverflowCheck
                  ((AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer> *)this,pAVar8);
        AVar3 = this[8];
        AVar4 = AVar3;
      }
      if (AVar4 != (AstFunctionLiteralIdReindexer)0x0) break;
      AVar4 = (AstFunctionLiteralIdReindexer)0x0;
      plVar10 = (long *)(*plVar10 + 0x10);
      bVar1 = true;
    } while (plVar10 != plVar9);
    iVar5 = *(int *)(this + 0x18);
  }
  iVar6 = iVar5 + -1;
  *(int *)(this + 0x18) = iVar6;
  if ((AVar3 == (AstFunctionLiteralIdReindexer)0x0) &&
     (-1 < *(char *)(*(long *)(param_1 + 0x28) + 0x83))) {
    *(int *)(this + 0x18) = iVar5;
    if (0 < *(int *)(param_1 + 0x3c)) {
      lVar7 = 0;
      while( true ) {
        pAVar8 = *(AstNode **)(*(long *)(param_1 + 0x30) + lVar7 * 8);
        uVar2 = GetCurrentStackPosition();
        if (uVar2 < *(ulong *)this) break;
        AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer>::VisitNoStackOverflowCheck
                  ((AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer> *)this,pAVar8);
        if ((this[8] != (AstFunctionLiteralIdReindexer)0x0) ||
           (lVar7 = lVar7 + 1, *(int *)(param_1 + 0x3c) <= lVar7)) goto LAB_01491a48;
      }
      this[8] = (AstFunctionLiteralIdReindexer)0x1;
LAB_01491a48:
      iVar6 = *(int *)(this + 0x18) + -1;
    }
    *(int *)(this + 0x18) = iVar6;
  }
  *(int *)(param_1 + 0x1c) = *(int *)(this + 0x1c) + *(int *)(param_1 + 0x1c);
  return;
}

