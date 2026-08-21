
/* v8::internal::AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>::VisitTryCatchStatement(v8::internal::TryCatchStatement*)
    */

void __thiscall
v8::internal::AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>::VisitTryCatchStatement
          (AstTraversalVisitor<v8::internal::SourceRangeAstVisitor> *this,TryCatchStatement *param_1
          )

{
  ulong uVar1;
  AstNode *pAVar2;
  
  SourceRangeAstVisitor::VisitNode((SourceRangeAstVisitor *)this,(AstNode *)param_1);
  if (this[8] == (AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>)0x0) {
    pAVar2 = *(AstNode **)(param_1 + 8);
    uVar1 = GetCurrentStackPosition();
    if (*(ulong *)this <= uVar1) {
      VisitNoStackOverflowCheck(this,pAVar2);
      if (this[8] != (AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>)0x0) {
        return;
      }
      pAVar2 = *(AstNode **)(param_1 + 0x18);
      uVar1 = GetCurrentStackPosition();
      if (*(ulong *)this <= uVar1) {
        VisitNoStackOverflowCheck(this,pAVar2);
        return;
      }
    }
    this[8] = (AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>)0x1;
  }
  return;
}

