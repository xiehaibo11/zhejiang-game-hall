
/* v8::internal::AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer>::VisitForStatement(v8::internal::ForStatement*)
    */

void __thiscall
v8::internal::AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer>::VisitForStatement
          (AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer> *this,
          ForStatement *param_1)

{
  ulong uVar1;
  AstNode *pAVar2;
  
  pAVar2 = *(AstNode **)(param_1 + 0x20);
  if (pAVar2 != (AstNode *)0x0) {
    if (this[8] != (AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer>)0x0) {
      return;
    }
    uVar1 = GetCurrentStackPosition();
    if (uVar1 < *(ulong *)this) goto LAB_0149255c;
    VisitNoStackOverflowCheck(this,pAVar2);
    if (this[8] != (AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer>)0x0) {
      return;
    }
  }
  pAVar2 = *(AstNode **)(param_1 + 0x28);
  if (pAVar2 != (AstNode *)0x0) {
    if (this[8] != (AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer>)0x0) {
      return;
    }
    uVar1 = GetCurrentStackPosition();
    if (uVar1 < *(ulong *)this) goto LAB_0149255c;
    VisitNoStackOverflowCheck(this,pAVar2);
    if (this[8] != (AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer>)0x0) {
      return;
    }
  }
  pAVar2 = *(AstNode **)(param_1 + 0x30);
  if (pAVar2 != (AstNode *)0x0) {
    if (this[8] != (AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer>)0x0) {
      return;
    }
    uVar1 = GetCurrentStackPosition();
    if (uVar1 < *(ulong *)this) goto LAB_0149255c;
    VisitNoStackOverflowCheck(this,pAVar2);
  }
  if (this[8] != (AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer>)0x0) {
    return;
  }
  pAVar2 = *(AstNode **)(param_1 + 0x18);
  uVar1 = GetCurrentStackPosition();
  if (*(ulong *)this <= uVar1) {
    VisitNoStackOverflowCheck(this,pAVar2);
    return;
  }
LAB_0149255c:
  this[8] = (AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer>)0x1;
  return;
}

