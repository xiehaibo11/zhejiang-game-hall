
/* v8::internal::AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>::VisitClassLiteral(v8::internal::ClassLiteral*)
    */

void __thiscall
v8::internal::AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>::VisitClassLiteral
          (AstTraversalVisitor<v8::internal::SourceRangeAstVisitor> *this,ClassLiteral *param_1)

{
  bool bVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong *puVar6;
  AstNode *pAVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  
  uVar2 = SourceRangeAstVisitor::VisitNode((SourceRangeAstVisitor *)this,(AstNode *)param_1);
  if ((uVar2 & 1) == 0) {
    return;
  }
  iVar3 = *(int *)(this + 0x18);
  if (*(long *)(param_1 + 0x18) == 0) {
    bVar1 = this[8] == (AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>)0x0;
LAB_0115d01c:
    *(int *)(this + 0x18) = iVar3 + 1;
    if (bVar1) {
      pAVar7 = *(AstNode **)(param_1 + 0x20);
      uVar2 = GetCurrentStackPosition();
      if (uVar2 < *(ulong *)this) goto LAB_0115d03c;
      VisitNoStackOverflowCheck(this,pAVar7);
      iVar3 = *(int *)(this + 0x18);
      iVar4 = iVar3 + -1;
      *(int *)(this + 0x18) = iVar4;
      if (this[8] != (AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>)0x0) {
        return;
      }
      if (*(long *)(param_1 + 0x38) == 0) {
LAB_0115d0c4:
        if (*(long *)(param_1 + 0x40) == 0) {
LAB_0115d108:
          plVar8 = *(long **)(param_1 + 0x30);
          if (0 < *(int *)((long)plVar8 + 0xc)) {
            lVar9 = 0;
            do {
              lVar5 = *(long *)(*plVar8 + lVar9 * 8);
              *(int *)(this + 0x18) = iVar4 + 1;
              pAVar7 = *(AstNode **)(lVar5 + 8);
              uVar2 = GetCurrentStackPosition();
              if (uVar2 < *(ulong *)this) goto LAB_0115d230;
              VisitNoStackOverflowCheck(this,pAVar7);
              iVar4 = *(int *)(this + 0x18) + -1;
              *(int *)(this + 0x18) = iVar4;
              if (this[8] != (AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>)0x0) {
                return;
              }
              lVar9 = lVar9 + 1;
            } while (lVar9 < *(int *)((long)plVar8 + 0xc));
          }
          plVar8 = *(long **)(param_1 + 0x28);
          if (*(int *)((long)plVar8 + 0xc) < 1) {
            return;
          }
          lVar9 = 0;
          do {
            puVar6 = *(ulong **)(*plVar8 + lVar9 * 8);
            if ((*(uint *)((*puVar6 & 0xfffffffffffffffc) + 4) & 0x3f) != 0x29) {
              *(int *)(this + 0x18) = iVar4 + 1;
              uVar10 = *puVar6;
              uVar2 = GetCurrentStackPosition();
              if (uVar2 < *(ulong *)this) goto LAB_0115d230;
              VisitNoStackOverflowCheck(this,(AstNode *)(uVar10 & 0xfffffffffffffffc));
              iVar4 = *(int *)(this + 0x18) + -1;
              *(int *)(this + 0x18) = iVar4;
              if (this[8] != (AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>)0x0) {
                return;
              }
            }
            *(int *)(this + 0x18) = iVar4 + 1;
            pAVar7 = (AstNode *)puVar6[1];
            uVar2 = GetCurrentStackPosition();
            if (uVar2 < *(ulong *)this) goto LAB_0115d230;
            VisitNoStackOverflowCheck(this,pAVar7);
            iVar4 = *(int *)(this + 0x18) + -1;
            *(int *)(this + 0x18) = iVar4;
            if (this[8] != (AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>)0x0) {
              return;
            }
            lVar9 = lVar9 + 1;
            if (*(int *)((long)plVar8 + 0xc) <= lVar9) {
              return;
            }
          } while( true );
        }
        *(int *)(this + 0x18) = iVar4 + 1;
        pAVar7 = *(AstNode **)(param_1 + 0x40);
        uVar2 = GetCurrentStackPosition();
        if (*(ulong *)this <= uVar2) {
          VisitNoStackOverflowCheck(this,pAVar7);
          iVar4 = *(int *)(this + 0x18) + -1;
          *(int *)(this + 0x18) = iVar4;
          if (this[8] != (AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>)0x0) {
            return;
          }
          goto LAB_0115d108;
        }
      }
      else {
        *(int *)(this + 0x18) = iVar3;
        pAVar7 = *(AstNode **)(param_1 + 0x38);
        uVar2 = GetCurrentStackPosition();
        if (*(ulong *)this <= uVar2) {
          VisitNoStackOverflowCheck(this,pAVar7);
          iVar4 = *(int *)(this + 0x18) + -1;
          *(int *)(this + 0x18) = iVar4;
          if (this[8] != (AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>)0x0) {
            return;
          }
          goto LAB_0115d0c4;
        }
      }
LAB_0115d230:
      iVar3 = *(int *)(this + 0x18);
      this[8] = (AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>)0x1;
      goto LAB_0115d048;
    }
  }
  else {
    *(int *)(this + 0x18) = iVar3 + 1;
    if (this[8] == (AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>)0x0) {
      pAVar7 = *(AstNode **)(param_1 + 0x18);
      uVar2 = GetCurrentStackPosition();
      if (*(ulong *)this <= uVar2) {
        VisitNoStackOverflowCheck(this,pAVar7);
        iVar3 = *(int *)(this + 0x18) + -1;
        *(int *)(this + 0x18) = iVar3;
        if (this[8] != (AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>)0x0) {
          return;
        }
        bVar1 = true;
        goto LAB_0115d01c;
      }
LAB_0115d03c:
      this[8] = (AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>)0x1;
    }
  }
  iVar3 = *(int *)(this + 0x18);
LAB_0115d048:
  *(int *)(this + 0x18) = iVar3 + -1;
  return;
}

