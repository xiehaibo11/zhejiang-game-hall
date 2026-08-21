
/* v8::internal::AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer>::VisitInitializeClassMembersStatement(v8::internal::InitializeClassMembersStatement*)
    */

void __thiscall
v8::internal::AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer>::
VisitInitializeClassMembersStatement
          (AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer> *this,
          InitializeClassMembersStatement *param_1)

{
  AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer> AVar1;
  ulong uVar2;
  AstNode *pAVar3;
  long *plVar4;
  long lVar5;
  ulong *puVar6;
  
  plVar4 = *(long **)(param_1 + 8);
  if (0 < *(int *)((long)plVar4 + 0xc)) {
    lVar5 = 0;
    while( true ) {
      puVar6 = *(ulong **)(*plVar4 + lVar5 * 8);
      pAVar3 = (AstNode *)(*puVar6 & 0xfffffffffffffffc);
      AVar1 = this[8];
      if ((*(uint *)(pAVar3 + 4) & 0x3f) != 0x29) break;
LAB_01492a8c:
      if (AVar1 != (AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer>)0x0) {
        return;
      }
      pAVar3 = (AstNode *)puVar6[1];
      uVar2 = GetCurrentStackPosition();
      if (uVar2 < *(ulong *)this) goto LAB_01492acc;
      VisitNoStackOverflowCheck(this,pAVar3);
      if (this[8] != (AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer>)0x0) {
        return;
      }
      lVar5 = lVar5 + 1;
      if (*(int *)((long)plVar4 + 0xc) <= lVar5) {
        return;
      }
    }
    if (AVar1 == (AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer>)0x0) {
      uVar2 = GetCurrentStackPosition();
      if (*(ulong *)this <= uVar2) {
        VisitNoStackOverflowCheck(this,pAVar3);
        AVar1 = this[8];
        goto LAB_01492a8c;
      }
LAB_01492acc:
      this[8] = (AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer>)0x1;
    }
  }
  return;
}

