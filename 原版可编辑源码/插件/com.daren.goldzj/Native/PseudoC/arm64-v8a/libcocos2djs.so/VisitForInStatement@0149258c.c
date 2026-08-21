
/* v8::internal::AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer>::VisitForInStatement(v8::internal::ForInStatement*)
    */

void v8::internal::AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer>::
     VisitForInStatement(ForInStatement *param_1)

{
  ulong uVar1;
  long in_x1;
  AstNode *pAVar2;
  
  if (param_1[8] == (ForInStatement)0x0) {
    pAVar2 = *(AstNode **)(in_x1 + 0x20);
    uVar1 = GetCurrentStackPosition();
    if (*(ulong *)param_1 <= uVar1) {
      VisitNoStackOverflowCheck
                ((AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer> *)param_1,pAVar2)
      ;
      if (param_1[8] != (ForInStatement)0x0) {
        return;
      }
      pAVar2 = *(AstNode **)(in_x1 + 0x28);
      uVar1 = GetCurrentStackPosition();
      if (*(ulong *)param_1 <= uVar1) {
        VisitNoStackOverflowCheck
                  ((AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer> *)param_1,
                   pAVar2);
        if (param_1[8] != (ForInStatement)0x0) {
          return;
        }
        pAVar2 = *(AstNode **)(in_x1 + 0x18);
        uVar1 = GetCurrentStackPosition();
        if (*(ulong *)param_1 <= uVar1) {
          VisitNoStackOverflowCheck
                    ((AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer> *)param_1,
                     pAVar2);
          return;
        }
      }
    }
    param_1[8] = (ForInStatement)0x1;
  }
  return;
}

