
/* v8::internal::AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer>::VisitNaryOperation(v8::internal::NaryOperation*)
    */

void __thiscall
v8::internal::AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer>::VisitNaryOperation
          (AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer> *this,
          NaryOperation *param_1)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  AstNode *pAVar4;
  long lVar5;
  
  *(int *)(this + 0x18) = *(int *)(this + 0x18) + 1;
  if (this[8] == (AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer>)0x0) {
    pAVar4 = *(AstNode **)(param_1 + 8);
    uVar1 = GetCurrentStackPosition();
    if (*(ulong *)this <= uVar1) {
      VisitNoStackOverflowCheck(this,pAVar4);
      iVar3 = *(int *)(this + 0x18) + -1;
      *(int *)(this + 0x18) = iVar3;
      if (this[8] != (AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer>)0x0) {
        return;
      }
      if (*(long *)(param_1 + 0x18) == *(long *)(param_1 + 0x10)) {
        return;
      }
      lVar5 = 0;
      uVar1 = 0;
      while( true ) {
        *(int *)(this + 0x18) = iVar3 + 1;
        pAVar4 = *(AstNode **)(*(long *)(param_1 + 0x10) + lVar5);
        uVar2 = GetCurrentStackPosition();
        if (uVar2 < *(ulong *)this) break;
        VisitNoStackOverflowCheck(this,pAVar4);
        iVar3 = *(int *)(this + 0x18) + -1;
        *(int *)(this + 0x18) = iVar3;
        if (this[8] != (AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer>)0x0) {
          return;
        }
        uVar1 = uVar1 + 1;
        lVar5 = lVar5 + 0x10;
        if ((ulong)(*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10) >> 4) <= uVar1) {
          return;
        }
      }
      iVar3 = *(int *)(this + 0x18);
      this[8] = (AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer>)0x1;
      goto LAB_01492d9c;
    }
    this[8] = (AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer>)0x1;
  }
  iVar3 = *(int *)(this + 0x18);
LAB_01492d9c:
  *(int *)(this + 0x18) = iVar3 + -1;
  return;
}

