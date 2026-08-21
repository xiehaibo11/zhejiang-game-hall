
/* v8::internal::AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>::VisitAssignment(v8::internal::Assignment*)
    */

void __thiscall
v8::internal::AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>::VisitAssignment
          (AstTraversalVisitor<v8::internal::SourceRangeAstVisitor> *this,Assignment *param_1)

{
  int iVar1;
  ulong uVar2;
  AstNode *pAVar3;
  
  uVar2 = SourceRangeAstVisitor::VisitNode((SourceRangeAstVisitor *)this,(AstNode *)param_1);
  if ((uVar2 & 1) == 0) {
    return;
  }
  *(int *)(this + 0x18) = *(int *)(this + 0x18) + 1;
  if (this[8] == (AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>)0x0) {
    pAVar3 = *(AstNode **)(param_1 + 8);
    uVar2 = GetCurrentStackPosition();
    if (*(ulong *)this <= uVar2) {
      VisitNoStackOverflowCheck(this,pAVar3);
      iVar1 = *(int *)(this + 0x18);
      *(int *)(this + 0x18) = iVar1 + -1;
      if (this[8] != (AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>)0x0) {
        return;
      }
      *(int *)(this + 0x18) = iVar1;
      pAVar3 = *(AstNode **)(param_1 + 0x10);
      uVar2 = GetCurrentStackPosition();
      if (*(ulong *)this <= uVar2) {
        VisitNoStackOverflowCheck(this,pAVar3);
        goto LAB_0115cc1c;
      }
    }
    this[8] = (AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>)0x1;
  }
LAB_0115cc1c:
  *(int *)(this + 0x18) = *(int *)(this + 0x18) + -1;
  return;
}

