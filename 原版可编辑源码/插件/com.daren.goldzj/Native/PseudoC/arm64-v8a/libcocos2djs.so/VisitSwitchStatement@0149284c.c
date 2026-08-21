
/* v8::internal::AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer>::VisitSwitchStatement(v8::internal::SwitchStatement*)
    */

void __thiscall
v8::internal::AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer>::VisitSwitchStatement
          (AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer> *this,
          SwitchStatement *param_1)

{
  ulong uVar1;
  AstNode *pAVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  
  if (this[8] == (AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer>)0x0) {
    pAVar2 = *(AstNode **)(param_1 + 0x10);
    uVar1 = GetCurrentStackPosition();
    if (uVar1 < *(ulong *)this) {
LAB_01492884:
      this[8] = (AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer>)0x1;
    }
    else {
      VisitNoStackOverflowCheck(this,pAVar2);
      if ((this[8] == (AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer>)0x0) &&
         (0 < *(int *)(param_1 + 0x24))) {
        lVar3 = 0;
        do {
          puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x18) + lVar3 * 8);
          pAVar2 = (AstNode *)*puVar4;
          if (pAVar2 != (AstNode *)0x0) {
            uVar1 = GetCurrentStackPosition();
            if (uVar1 < *(ulong *)this) goto LAB_01492884;
            VisitNoStackOverflowCheck(this,pAVar2);
            if (this[8] != (AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer>)0x0) {
              return;
            }
          }
          if (0 < *(int *)((long)puVar4 + 0x14)) {
            lVar5 = 0;
            do {
              pAVar2 = *(AstNode **)(puVar4[1] + lVar5 * 8);
              uVar1 = GetCurrentStackPosition();
              if (uVar1 < *(ulong *)this) goto LAB_01492884;
              VisitNoStackOverflowCheck(this,pAVar2);
              if (this[8] != (AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer>)0x0)
              {
                return;
              }
              lVar5 = lVar5 + 1;
            } while (lVar5 < *(int *)((long)puVar4 + 0x14));
          }
          lVar3 = lVar3 + 1;
        } while (lVar3 < *(int *)(param_1 + 0x24));
      }
    }
  }
  return;
}

