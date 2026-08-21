
/* v8::internal::AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer>::VisitCall(v8::internal::Call*)
    */

void __thiscall
v8::internal::AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer>::VisitCall
          (AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer> *this,Call *param_1)

{
  ulong uVar1;
  int iVar2;
  AstNode *pAVar3;
  long lVar4;
  
  *(int *)(this + 0x18) = *(int *)(this + 0x18) + 1;
  if (this[8] == (AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer>)0x0) {
    pAVar3 = *(AstNode **)(param_1 + 8);
    uVar1 = GetCurrentStackPosition();
    if (*(ulong *)this <= uVar1) {
      VisitNoStackOverflowCheck(this,pAVar3);
      iVar2 = *(int *)(this + 0x18) + -1;
      *(int *)(this + 0x18) = iVar2;
      if (this[8] != (AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer>)0x0) {
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
        if (this[8] != (AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer>)0x0) {
          return;
        }
        lVar4 = lVar4 + 1;
        if (*(int *)(param_1 + 0x1c) <= lVar4) {
          return;
        }
      }
      iVar2 = *(int *)(this + 0x18);
      this[8] = (AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer>)0x1;
      goto LAB_01492ea4;
    }
    this[8] = (AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer>)0x1;
  }
  iVar2 = *(int *)(this + 0x18);
LAB_01492ea4:
  *(int *)(this + 0x18) = iVar2 + -1;
  return;
}

