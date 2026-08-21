
/* v8::internal::AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer>::VisitBinaryOperation(v8::internal::BinaryOperation*)
    */

void v8::internal::AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer>::
     VisitBinaryOperation(BinaryOperation *param_1)

{
  int iVar1;
  ulong uVar2;
  long in_x1;
  AstNode *pAVar3;
  
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  if (param_1[8] == (BinaryOperation)0x0) {
    pAVar3 = *(AstNode **)(in_x1 + 8);
    uVar2 = GetCurrentStackPosition();
    if (*(ulong *)param_1 <= uVar2) {
      VisitNoStackOverflowCheck
                ((AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer> *)param_1,pAVar3)
      ;
      iVar1 = *(int *)(param_1 + 0x18);
      *(int *)(param_1 + 0x18) = iVar1 + -1;
      if (param_1[8] != (BinaryOperation)0x0) {
        return;
      }
      *(int *)(param_1 + 0x18) = iVar1;
      pAVar3 = *(AstNode **)(in_x1 + 0x10);
      uVar2 = GetCurrentStackPosition();
      if (*(ulong *)param_1 <= uVar2) {
        VisitNoStackOverflowCheck
                  ((AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer> *)param_1,
                   pAVar3);
        goto LAB_01492ce8;
      }
    }
    param_1[8] = (BinaryOperation)0x1;
  }
LAB_01492ce8:
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
  return;
}

