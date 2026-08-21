
/* v8::internal::AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>::VisitForStatement(v8::internal::ForStatement*)
    */

void __thiscall
v8::internal::AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>::VisitForStatement
          (AstTraversalVisitor<v8::internal::SourceRangeAstVisitor> *this,ForStatement *param_1)

{
  ulong uVar1;
  AstNode *pAVar2;
  
  uVar1 = SourceRangeAstVisitor::VisitNode((SourceRangeAstVisitor *)this,(AstNode *)param_1);
  if ((uVar1 & 1) == 0) {
    return;
  }
  pAVar2 = *(AstNode **)(param_1 + 0x20);
  if (pAVar2 != (AstNode *)0x0) {
    if (this[8] != (AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>)0x0) {
      return;
    }
    uVar1 = GetCurrentStackPosition();
    if (uVar1 < *(ulong *)this) goto LAB_0115ca88;
    VisitNoStackOverflowCheck(this,pAVar2);
    if (this[8] != (AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>)0x0) {
      return;
    }
  }
  pAVar2 = *(AstNode **)(param_1 + 0x28);
  if (pAVar2 != (AstNode *)0x0) {
    if (this[8] != (AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>)0x0) {
      return;
    }
    uVar1 = GetCurrentStackPosition();
    if (uVar1 < *(ulong *)this) goto LAB_0115ca88;
    VisitNoStackOverflowCheck(this,pAVar2);
    if (this[8] != (AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>)0x0) {
      return;
    }
  }
  pAVar2 = *(AstNode **)(param_1 + 0x30);
  if (pAVar2 != (AstNode *)0x0) {
    if (this[8] != (AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>)0x0) {
      return;
    }
    uVar1 = GetCurrentStackPosition();
    if (uVar1 < *(ulong *)this) goto LAB_0115ca88;
    VisitNoStackOverflowCheck(this,pAVar2);
  }
  if (this[8] != (AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>)0x0) {
    return;
  }
  pAVar2 = *(AstNode **)(param_1 + 0x18);
  uVar1 = GetCurrentStackPosition();
  if (*(ulong *)this <= uVar1) {
    VisitNoStackOverflowCheck(this,pAVar2);
    return;
  }
LAB_0115ca88:
  this[8] = (AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>)0x1;
  return;
}

