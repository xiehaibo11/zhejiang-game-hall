
/* v8::internal::ExpressionParsingScope<v8::internal::ParserTypes<v8::internal::Parser>
   >::ValidateAndRewriteReference(v8::internal::Expression*, int, int) */

Expression * __thiscall
v8::internal::ExpressionParsingScope<v8::internal::ParserTypes<v8::internal::Parser>>::
ValidateAndRewriteReference
          (ExpressionParsingScope<v8::internal::ParserTypes<v8::internal::Parser>> *this,
          Expression *param_1,int param_2,int param_3)

{
  uint uVar1;
  Expression *pEVar2;
  long lVar3;
  int iVar4;
  ParserBase<v8::internal::Parser> *pPVar5;
  
  pPVar5 = *(ParserBase<v8::internal::Parser> **)this;
  uVar1 = *(uint *)(param_1 + 4);
  if ((param_1 == (Expression *)0x0) || ((uVar1 & 0x43f) != 0x35)) {
LAB_0116e7bc:
    if ((uVar1 & 0x3f) != 0x2c) {
      pEVar2 = (Expression *)
               ParserBase<v8::internal::Parser>::RewriteInvalidReferenceExpression
                         (pPVar5,param_1,param_2,param_3,0xfe);
      return pEVar2;
    }
    if (*(uint *)(this + 0x38) <= *(uint *)(this + 0x3c)) {
      PendingCompilationErrorHandler::ReportMessageAt
                (*(PendingCompilationErrorHandler **)(pPVar5 + 0xb0),*(undefined4 *)(this + 0x38),
                 *(undefined4 *)(this + 0x3c),*(undefined4 *)(this + 0x30),0);
      lVar3 = *(long *)(pPVar5 + 0x158);
      if (*(char *)(lVar3 + 0x30) == '\0') {
        *(undefined4 *)(pPVar5 + 0x160) = 0xffffffff;
        *(undefined1 *)(lVar3 + 0x30) = 1;
        *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar3 + 0x18);
        pPVar5[0x1a0] = (ParserBase<v8::internal::Parser>)0x6d;
        pPVar5[0x1f0] = (ParserBase<v8::internal::Parser>)0x6d;
        pPVar5[0x240] = (ParserBase<v8::internal::Parser>)0x6d;
      }
    }
  }
  else {
    if ((*(byte *)(*(long *)pPVar5 + 0x81) & 1) != 0) {
      pEVar2 = param_1 + 8;
      if ((uVar1 >> 8 & 1) != 0) {
        pEVar2 = (Expression *)(*(long *)pEVar2 + 8);
      }
      if ((*(long *)(*(long *)(*(long *)(pPVar5 + 0x60) + 0x38) + 0x118) == *(long *)pEVar2) ||
         (*(long *)(*(long *)(*(long *)(pPVar5 + 0x60) + 0x38) + 0x70) == *(long *)pEVar2))
      goto LAB_0116e7bc;
    }
    iVar4 = (int)*(undefined8 *)(this + 0x28) - (int)*(long *)(this + 0x20);
    if (iVar4 != 0) {
      lVar3 = *(long *)(**(long **)(this + 0x18) +
                       (*(long *)(this + 0x20) + (long)(iVar4 + -1)) * 0x10);
      uVar1 = *(uint *)(lVar3 + 4);
      *(uint *)(lVar3 + 4) = uVar1 | 0x80;
      if ((uVar1 >> 8 & 1) != 0) {
        Variable::SetMaybeAssigned(*(Variable **)(lVar3 + 8));
      }
    }
  }
  return param_1;
}

