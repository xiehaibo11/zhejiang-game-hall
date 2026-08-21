
/* v8::internal::AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer>::VisitStoreInArrayLiteral(v8::internal::StoreInArrayLiteral*)
    */

void v8::internal::AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer>::
     VisitStoreInArrayLiteral(StoreInArrayLiteral *param_1)

{
  ulong uVar1;
  long in_x1;
  int iVar2;
  AstNode *pAVar3;
  
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  if (param_1[8] == (StoreInArrayLiteral)0x0) {
    pAVar3 = *(AstNode **)(in_x1 + 8);
    uVar1 = GetCurrentStackPosition();
    if (*(ulong *)param_1 <= uVar1) {
      VisitNoStackOverflowCheck
                ((AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer> *)param_1,pAVar3)
      ;
      iVar2 = *(int *)(param_1 + 0x18);
      *(int *)(param_1 + 0x18) = iVar2 + -1;
      if (param_1[8] != (StoreInArrayLiteral)0x0) {
        return;
      }
      *(int *)(param_1 + 0x18) = iVar2;
      pAVar3 = *(AstNode **)(in_x1 + 0x10);
      uVar1 = GetCurrentStackPosition();
      if (uVar1 < *(ulong *)param_1) {
        iVar2 = *(int *)(param_1 + 0x18);
        param_1[8] = (StoreInArrayLiteral)0x1;
        goto LAB_01493090;
      }
      VisitNoStackOverflowCheck
                ((AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer> *)param_1,pAVar3)
      ;
      iVar2 = *(int *)(param_1 + 0x18);
      *(int *)(param_1 + 0x18) = iVar2 + -1;
      if (param_1[8] != (StoreInArrayLiteral)0x0) {
        return;
      }
      *(int *)(param_1 + 0x18) = iVar2;
      pAVar3 = *(AstNode **)(in_x1 + 0x18);
      uVar1 = GetCurrentStackPosition();
      if (*(ulong *)param_1 <= uVar1) {
        VisitNoStackOverflowCheck
                  ((AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer> *)param_1,
                   pAVar3);
        goto LAB_0149308c;
      }
    }
    param_1[8] = (StoreInArrayLiteral)0x1;
  }
LAB_0149308c:
  iVar2 = *(int *)(param_1 + 0x18);
LAB_01493090:
  *(int *)(param_1 + 0x18) = iVar2 + -1;
  return;
}

