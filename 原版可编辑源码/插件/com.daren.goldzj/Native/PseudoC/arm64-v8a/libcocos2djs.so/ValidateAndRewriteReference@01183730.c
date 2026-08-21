
/* v8::internal::ExpressionParsingScope<v8::internal::ParserTypes<v8::internal::PreParser>
   >::ValidateAndRewriteReference(v8::internal::PreParserExpression, int, int) */

uint __thiscall
v8::internal::ExpressionParsingScope<v8::internal::ParserTypes<v8::internal::PreParser>>::
ValidateAndRewriteReference
          (ExpressionParsingScope<v8::internal::ParserTypes<v8::internal::PreParser>> *this,
          uint param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  ParserBase<v8::internal::PreParser> *pPVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  
  pPVar2 = *(ParserBase<v8::internal::PreParser> **)this;
  if ((param_2 & 7) == 3) {
    if (((param_2 & 0xfe0) != 0x20) || ((*(ushort *)(*(long *)pPVar2 + 0x81) & 1) == 0)) {
      iVar4 = (int)*(undefined8 *)(this + 0x28) - (int)*(long *)(this + 0x20);
      if (iVar4 == 0) {
        return param_2;
      }
      lVar3 = *(long *)(**(long **)(this + 0x18) +
                       (*(long *)(this + 0x20) + (long)(iVar4 + -1)) * 0x10);
      uVar1 = *(uint *)(lVar3 + 4);
      *(uint *)(lVar3 + 4) = uVar1 | 0x80;
      if ((uVar1 >> 8 & 1) == 0) {
        return param_2;
      }
      Variable::SetMaybeAssigned(*(Variable **)(lVar3 + 8));
      return param_2;
    }
  }
  else if (((param_2 & 7) == 2) && ((param_2 >> 4 & 0xf) - 1 < 4)) {
    if (*(uint *)(this + 0x3c) < *(uint *)(this + 0x38)) {
      return param_2;
    }
    PendingCompilationErrorHandler::ReportMessageAt
              (*(PendingCompilationErrorHandler **)(pPVar2 + 0x80),*(undefined4 *)(this + 0x38),
               *(undefined4 *)(this + 0x3c),*(undefined4 *)(this + 0x30),0);
    lVar3 = *(long *)(pPVar2 + 200);
    lVar5 = *(long *)(lVar3 + 0x18);
    if (*(char *)(lVar5 + 0x30) != '\0') {
      return param_2;
    }
    *(undefined4 *)(lVar3 + 0x20) = 0xffffffff;
    *(undefined1 *)(lVar5 + 0x30) = 1;
    *(undefined8 *)(lVar5 + 0x10) = *(undefined8 *)(lVar5 + 0x18);
    *(undefined1 *)(lVar3 + 0x60) = 0x6d;
    *(undefined1 *)(lVar3 + 0xb0) = 0x6d;
    *(undefined1 *)(lVar3 + 0x100) = 0x6d;
    return param_2;
  }
  uVar1 = ParserBase<v8::internal::PreParser>::RewriteInvalidReferenceExpression
                    (pPVar2,param_2,param_3,param_4,0xfe);
  return uVar1;
}

