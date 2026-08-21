
/* v8::internal::AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>::VisitCallNew(v8::internal::CallNew*)
    */

void __thiscall
v8::internal::AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>::VisitCallNew
          (AstTraversalVisitor<v8::internal::SourceRangeAstVisitor> *this,CallNew *param_1)

{
  ulong uVar1;
  int iVar2;
  AstNode *pAVar3;
  long lVar4;
  
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
      iVar2 = *(int *)(this + 0x18) + -1;
      *(int *)(this + 0x18) = iVar2;
      if (this[8] != (AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>)0x0) {
        return;
      }
      if (*(int *)(param_1 + 0x1c) < 1) {
        return;
      }
      lVar4 = 0;
      while( true ) {
        pAVar3 = *(AstNode **)(*(long *)(param_1 + 0x10) + lVar4 * 8);
        *(int *)(this + 0x18) = iVar2 + 1;
        uVar1 = GetCurrentStackPosition();
        if (uVar1 < *(ulong *)this) break;
        VisitNoStackOverflowCheck(this,pAVar3);
        iVar2 = *(int *)(this + 0x18) + -1;
        *(int *)(this + 0x18) = iVar2;
        if (this[8] != (AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>)0x0) {
          return;
        }
        lVar4 = lVar4 + 1;
        if (*(int *)(param_1 + 0x1c) <= lVar4) {
          return;
        }
      }
      iVar2 = *(int *)(this + 0x18);
      this[8] = (AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>)0x1;
      goto LAB_0115cee8;
    }
    this[8] = (AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>)0x1;
  }
  iVar2 = *(int *)(this + 0x18);
LAB_0115cee8:
  *(int *)(this + 0x18) = iVar2 + -1;
  return;
}

