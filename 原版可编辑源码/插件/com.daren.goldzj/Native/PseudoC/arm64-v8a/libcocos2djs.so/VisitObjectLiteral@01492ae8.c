
/* v8::internal::AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer>::VisitObjectLiteral(v8::internal::ObjectLiteral*)
    */

void __thiscall
v8::internal::AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer>::VisitObjectLiteral
          (AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer> *this,
          ObjectLiteral *param_1)

{
  bool bVar1;
  ulong uVar2;
  int iVar3;
  ulong *puVar4;
  AstNode *pAVar5;
  long lVar6;
  ulong uVar7;
  
  if (0 < *(int *)(param_1 + 0x24)) {
    iVar3 = *(int *)(this + 0x18);
    bVar1 = this[8] == (AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer>)0x0;
    lVar6 = 0;
    do {
      puVar4 = *(ulong **)(*(long *)(param_1 + 0x18) + lVar6 * 8);
      *(int *)(this + 0x18) = iVar3 + 1;
      if (!bVar1) {
LAB_01492bc4:
        iVar3 = *(int *)(this + 0x18);
LAB_01492bd8:
        *(int *)(this + 0x18) = iVar3 + -1;
        return;
      }
      uVar7 = *puVar4;
      uVar2 = GetCurrentStackPosition();
      if (uVar2 < *(ulong *)this) {
        this[8] = (AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer>)0x1;
        goto LAB_01492bc4;
      }
      VisitNoStackOverflowCheck(this,(AstNode *)(uVar7 & 0xfffffffffffffffc));
      iVar3 = *(int *)(this + 0x18);
      *(int *)(this + 0x18) = iVar3 + -1;
      if (this[8] != (AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer>)0x0) {
        return;
      }
      *(int *)(this + 0x18) = iVar3;
      pAVar5 = (AstNode *)puVar4[1];
      uVar2 = GetCurrentStackPosition();
      if (uVar2 < *(ulong *)this) {
        iVar3 = *(int *)(this + 0x18);
        this[8] = (AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer>)0x1;
        goto LAB_01492bd8;
      }
      VisitNoStackOverflowCheck(this,pAVar5);
      iVar3 = *(int *)(this + 0x18) + -1;
      *(int *)(this + 0x18) = iVar3;
      if (this[8] != (AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer>)0x0) {
        return;
      }
      lVar6 = lVar6 + 1;
      bVar1 = true;
    } while (lVar6 < *(int *)(param_1 + 0x24));
  }
  return;
}

