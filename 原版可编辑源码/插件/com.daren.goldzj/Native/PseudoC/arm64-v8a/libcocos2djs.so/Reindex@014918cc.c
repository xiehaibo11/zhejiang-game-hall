
/* v8::internal::AstFunctionLiteralIdReindexer::Reindex(v8::internal::Expression*) */

void __thiscall
v8::internal::AstFunctionLiteralIdReindexer::Reindex
          (AstFunctionLiteralIdReindexer *this,Expression *param_1)

{
  ulong uVar1;
  
  if (this[8] == (AstFunctionLiteralIdReindexer)0x0) {
    uVar1 = GetCurrentStackPosition();
    if (*(ulong *)this <= uVar1) {
      AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer>::VisitNoStackOverflowCheck
                ((AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer> *)this,
                 (AstNode *)param_1);
      return;
    }
    this[8] = (AstFunctionLiteralIdReindexer)0x1;
  }
  return;
}

