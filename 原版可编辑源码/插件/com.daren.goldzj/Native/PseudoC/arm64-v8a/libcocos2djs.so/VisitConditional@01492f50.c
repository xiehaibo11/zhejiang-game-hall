
/* v8::internal::AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer>::VisitConditional(v8::internal::Conditional*)
    */

void v8::internal::AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer>::
     VisitConditional(Conditional *param_1)

{
  ulong uVar1;
  long in_x1;
  int iVar2;
  AstNode *pAVar3;
  
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  if (param_1[8] == (Conditional)0x0) {
    pAVar3 = *(AstNode **)(in_x1 + 8);
    uVar1 = GetCurrentStackPosition();
    if (*(ulong *)param_1 <= uVar1) {
      VisitNoStackOverflowCheck
                ((AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer> *)param_1,pAVar3)
      ;
      iVar2 = *(int *)(param_1 + 0x18);
      *(int *)(param_1 + 0x18) = iVar2 + -1;
      if (param_1[8] != (Conditional)0x0) {
        return;
      }
      *(int *)(param_1 + 0x18) = iVar2;
      pAVar3 = *(AstNode **)(in_x1 + 0x10);
      uVar1 = GetCurrentStackPosition();
      if (uVar1 < *(ulong *)param_1) {
        iVar2 = *(int *)(param_1 + 0x18);
        param_1[8] = (Conditional)0x1;
        goto LAB_01492f9c;
      }
      VisitNoStackOverflowCheck
                ((AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer> *)param_1,pAVar3)
      ;
      iVar2 = *(int *)(param_1 + 0x18);
      *(int *)(param_1 + 0x18) = iVar2 + -1;
      if (param_1[8] != (Conditional)0x0) {
        return;
      }
      *(int *)(param_1 + 0x18) = iVar2;
      pAVar3 = *(AstNode **)(in_x1 + 0x18);
      uVar1 = GetCurrentStackPosition();
      if (*(ulong *)param_1 <= uVar1) {
        VisitNoStackOverflowCheck
                  ((AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer> *)param_1,
                   pAVar3);
        goto LAB_01492f98;
      }
    }
    param_1[8] = (Conditional)0x1;
  }
LAB_01492f98:
  iVar2 = *(int *)(param_1 + 0x18);
LAB_01492f9c:
  *(int *)(param_1 + 0x18) = iVar2 + -1;
  return;
}

