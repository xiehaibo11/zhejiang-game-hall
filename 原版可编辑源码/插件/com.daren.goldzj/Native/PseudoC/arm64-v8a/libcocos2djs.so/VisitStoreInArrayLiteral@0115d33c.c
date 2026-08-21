
/* v8::internal::AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>::VisitStoreInArrayLiteral(v8::internal::StoreInArrayLiteral*)
    */

void __thiscall
v8::internal::AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>::VisitStoreInArrayLiteral
          (AstTraversalVisitor<v8::internal::SourceRangeAstVisitor> *this,
          StoreInArrayLiteral *param_1)

{
  ulong uVar1;
  int iVar2;
  AstNode *pAVar3;
  
  uVar1 = SourceRangeAstVisitor::VisitNode((SourceRangeAstVisitor *)this,(AstNode *)param_1);
  if ((uVar1 & 1) == 0) {
    return;
  }
  *(int *)(this + 0x18) = *(int *)(this + 0x18) + 1;
  if (this[8] == (AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>)0x0) {
    pAVar3 = *(AstNode **)(param_1 + 8);
    uVar1 = GetCurrentStackPosition();
    if (*(ulong *)this <= uVar1) {
      VisitNoStackOverflowCheck(this,pAVar3);
      iVar2 = *(int *)(this + 0x18);
      *(int *)(this + 0x18) = iVar2 + -1;
      if (this[8] != (AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>)0x0) {
        return;
      }
      *(int *)(this + 0x18) = iVar2;
      pAVar3 = *(AstNode **)(param_1 + 0x10);
      uVar1 = GetCurrentStackPosition();
      if (uVar1 < *(ulong *)this) {
        iVar2 = *(int *)(this + 0x18);
        this[8] = (AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>)0x1;
        goto LAB_0115d390;
      }
      VisitNoStackOverflowCheck(this,pAVar3);
      iVar2 = *(int *)(this + 0x18);
      *(int *)(this + 0x18) = iVar2 + -1;
      if (this[8] != (AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>)0x0) {
        return;
      }
      *(int *)(this + 0x18) = iVar2;
      pAVar3 = *(AstNode **)(param_1 + 0x18);
      uVar1 = GetCurrentStackPosition();
      if (*(ulong *)this <= uVar1) {
        VisitNoStackOverflowCheck(this,pAVar3);
        goto LAB_0115d38c;
      }
    }
    this[8] = (AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>)0x1;
  }
LAB_0115d38c:
  iVar2 = *(int *)(this + 0x18);
LAB_0115d390:
  *(int *)(this + 0x18) = iVar2 + -1;
  return;
}

