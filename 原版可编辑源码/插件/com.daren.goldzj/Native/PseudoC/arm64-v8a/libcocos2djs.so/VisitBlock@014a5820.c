
/* v8::internal::AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>::VisitBlock(v8::internal::Block*)
    */

void __thiscall
v8::internal::AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>::VisitBlock
          (AstTraversalVisitor<v8::internal::SourceRangeAstVisitor> *this,Block *param_1)

{
  bool bVar1;
  ulong uVar2;
  AstTraversalVisitor<v8::internal::SourceRangeAstVisitor> AVar3;
  AstTraversalVisitor<v8::internal::SourceRangeAstVisitor> AVar4;
  int iVar5;
  AstNode *pAVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  
  SourceRangeAstVisitor::VisitNode((SourceRangeAstVisitor *)this,(AstNode *)param_1);
  if (*(long *)(param_1 + 0x18) != 0) {
    iVar5 = *(int *)(this + 0x18) + 1;
    *(int *)(this + 0x18) = iVar5;
    plVar7 = *(long **)(*(long *)(param_1 + 0x18) + 0x60);
    plVar9 = (long *)(*(long *)(param_1 + 0x18) + 0x58);
    if (plVar9 == plVar7) {
      AVar3 = this[8];
    }
    else {
      AVar3 = this[8];
      bVar1 = AVar3 == (AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>)0x0;
      AVar4 = AVar3;
      do {
        if (bVar1) {
          pAVar6 = (AstNode *)*plVar9;
          uVar2 = GetCurrentStackPosition();
          if (uVar2 < *(ulong *)this) {
            AVar3 = (AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>)0x1;
            this[8] = (AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>)0x1;
            break;
          }
          VisitNoStackOverflowCheck(this,pAVar6);
          AVar3 = this[8];
          AVar4 = AVar3;
        }
        if (AVar4 != (AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>)0x0) break;
        AVar4 = (AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>)0x0;
        plVar9 = (long *)(*plVar9 + 0x10);
        bVar1 = true;
      } while (plVar9 != plVar7);
      iVar5 = *(int *)(this + 0x18);
    }
    *(int *)(this + 0x18) = iVar5 + -1;
    if (AVar3 != (AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>)0x0) {
      return;
    }
  }
  if (0 < *(int *)(param_1 + 0x14)) {
    AVar3 = this[8];
    lVar8 = 0;
    bVar1 = AVar3 == (AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>)0x0;
    do {
      if (bVar1) {
        pAVar6 = *(AstNode **)(*(long *)(param_1 + 8) + lVar8 * 8);
        uVar2 = GetCurrentStackPosition();
        if (uVar2 < *(ulong *)this) {
          this[8] = (AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>)0x1;
          return;
        }
        VisitNoStackOverflowCheck(this,pAVar6);
        AVar3 = this[8];
      }
      if (AVar3 != (AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>)0x0) {
        return;
      }
      lVar8 = lVar8 + 1;
      AVar3 = (AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>)0x0;
      bVar1 = true;
    } while (lVar8 < *(int *)(param_1 + 0x14));
  }
  return;
}

