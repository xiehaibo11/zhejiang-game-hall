
/* v8::internal::AstFunctionLiteralIdReindexer::VisitClassLiteral(v8::internal::ClassLiteral*) */

void __thiscall
v8::internal::AstFunctionLiteralIdReindexer::VisitClassLiteral
          (AstFunctionLiteralIdReindexer *this,ClassLiteral *param_1)

{
  AstFunctionLiteralIdReindexer AVar1;
  ulong uVar2;
  AstNode *pAVar3;
  long *plVar4;
  long lVar5;
  ulong *puVar6;
  
  pAVar3 = *(AstNode **)(param_1 + 0x18);
  if ((pAVar3 == (AstNode *)0x0) || (this[8] != (AstFunctionLiteralIdReindexer)0x0)) {
    AVar1 = this[8];
  }
  else {
    uVar2 = GetCurrentStackPosition();
    if (uVar2 < *(ulong *)this) {
      this[8] = (AstFunctionLiteralIdReindexer)0x1;
      AVar1 = this[8];
    }
    else {
      AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer>::VisitNoStackOverflowCheck
                ((AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer> *)this,pAVar3);
      AVar1 = this[8];
    }
  }
  if (AVar1 == (AstFunctionLiteralIdReindexer)0x0) {
    pAVar3 = *(AstNode **)(param_1 + 0x20);
    uVar2 = GetCurrentStackPosition();
    if (uVar2 < *(ulong *)this) {
      this[8] = (AstFunctionLiteralIdReindexer)0x1;
      pAVar3 = *(AstNode **)(param_1 + 0x38);
    }
    else {
      AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer>::VisitNoStackOverflowCheck
                ((AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer> *)this,pAVar3);
      pAVar3 = *(AstNode **)(param_1 + 0x38);
    }
  }
  else {
    pAVar3 = *(AstNode **)(param_1 + 0x38);
  }
  if ((pAVar3 == (AstNode *)0x0) || (this[8] != (AstFunctionLiteralIdReindexer)0x0)) {
    pAVar3 = *(AstNode **)(param_1 + 0x40);
  }
  else {
    uVar2 = GetCurrentStackPosition();
    if (uVar2 < *(ulong *)this) {
      this[8] = (AstFunctionLiteralIdReindexer)0x1;
      pAVar3 = *(AstNode **)(param_1 + 0x40);
    }
    else {
      AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer>::VisitNoStackOverflowCheck
                ((AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer> *)this,pAVar3);
      pAVar3 = *(AstNode **)(param_1 + 0x40);
    }
  }
  if ((pAVar3 != (AstNode *)0x0) && (this[8] == (AstFunctionLiteralIdReindexer)0x0)) {
    uVar2 = GetCurrentStackPosition();
    if (uVar2 < *(ulong *)this) {
      this[8] = (AstFunctionLiteralIdReindexer)0x1;
    }
    else {
      AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer>::VisitNoStackOverflowCheck
                ((AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer> *)this,pAVar3);
    }
  }
  plVar4 = *(long **)(param_1 + 0x30);
  if (0 < *(int *)((long)plVar4 + 0xc)) {
    lVar5 = 0;
    do {
      pAVar3 = *(AstNode **)(*(long *)(*plVar4 + lVar5 * 8) + 8);
      if (((*(uint *)(pAVar3 + 4) & 0x3f) == 0x26) &&
         (this[8] == (AstFunctionLiteralIdReindexer)0x0)) {
        uVar2 = GetCurrentStackPosition();
        if (uVar2 < *(ulong *)this) {
          this[8] = (AstFunctionLiteralIdReindexer)0x1;
        }
        else {
          AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer>::
          VisitNoStackOverflowCheck
                    ((AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer> *)this,pAVar3
                    );
        }
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)plVar4 + 0xc));
  }
  plVar4 = *(long **)(param_1 + 0x28);
  if (0 < *(int *)((long)plVar4 + 0xc)) {
    lVar5 = 0;
    do {
      puVar6 = *(ulong **)(*plVar4 + lVar5 * 8);
      if (((*puVar6 & 3) == 0) || ((*(uint *)(puVar6[1] + 4) & 0x3f) == 0x26)) {
        pAVar3 = (AstNode *)(*puVar6 & 0xfffffffffffffffc);
        if ((*(uint *)(pAVar3 + 4) & 0x3f) == 0x29) {
          AVar1 = this[8];
joined_r0x01491e24:
          if (AVar1 == (AstFunctionLiteralIdReindexer)0x0) {
            pAVar3 = (AstNode *)puVar6[1];
            uVar2 = GetCurrentStackPosition();
            if (uVar2 < *(ulong *)this) goto LAB_01491d80;
            AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer>::
            VisitNoStackOverflowCheck
                      ((AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer> *)this,
                       pAVar3);
          }
        }
        else if (this[8] == (AstFunctionLiteralIdReindexer)0x0) {
          uVar2 = GetCurrentStackPosition();
          if (*(ulong *)this <= uVar2) {
            AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer>::
            VisitNoStackOverflowCheck
                      ((AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer> *)this,
                       pAVar3);
            AVar1 = this[8];
            goto joined_r0x01491e24;
          }
LAB_01491d80:
          this[8] = (AstFunctionLiteralIdReindexer)0x1;
        }
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)plVar4 + 0xc));
  }
  return;
}

