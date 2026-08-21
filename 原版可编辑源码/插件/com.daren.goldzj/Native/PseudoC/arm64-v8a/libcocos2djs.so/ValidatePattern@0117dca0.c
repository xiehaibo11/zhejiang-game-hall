
/* v8::internal::ExpressionParsingScope<v8::internal::ParserTypes<v8::internal::PreParser>
   >::ValidatePattern(v8::internal::PreParserExpression, int, int) */

void __thiscall
v8::internal::ExpressionParsingScope<v8::internal::ParserTypes<v8::internal::PreParser>>::
ValidatePattern(ExpressionParsingScope<v8::internal::ParserTypes<v8::internal::PreParser>> *this,
               uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  if (*(uint *)(this + 0x40) <= *(uint *)(this + 0x44)) {
    lVar4 = *(long *)this;
    PendingCompilationErrorHandler::ReportMessageAt
              (*(PendingCompilationErrorHandler **)(lVar4 + 0x80),*(undefined4 *)(this + 0x40),
               *(undefined4 *)(this + 0x44),*(undefined4 *)(this + 0x34),0);
    lVar4 = *(long *)(lVar4 + 200);
    lVar2 = *(long *)(lVar4 + 0x18);
    if (*(char *)(lVar2 + 0x30) == '\0') {
      *(undefined4 *)(lVar4 + 0x20) = 0xffffffff;
      *(undefined1 *)(lVar2 + 0x30) = 1;
      *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(lVar2 + 0x18);
      *(undefined1 *)(lVar4 + 0x60) = 0x6d;
      *(undefined1 *)(lVar4 + 0xb0) = 0x6d;
      *(undefined1 *)(lVar4 + 0x100) = 0x6d;
    }
  }
  if ((param_2 >> 3 & 1) != 0) {
    lVar4 = *(long *)this;
    PendingCompilationErrorHandler::ReportMessageAt
              (*(PendingCompilationErrorHandler **)(lVar4 + 0x80),param_3,param_4,0xfd,0);
    lVar4 = *(long *)(lVar4 + 200);
    lVar2 = *(long *)(lVar4 + 0x18);
    if (*(char *)(lVar2 + 0x30) == '\0') {
      *(undefined4 *)(lVar4 + 0x20) = 0xffffffff;
      *(undefined1 *)(lVar2 + 0x30) = 1;
      *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(lVar2 + 0x18);
      *(undefined1 *)(lVar4 + 0x60) = 0x6d;
      *(undefined1 *)(lVar4 + 0xb0) = 0x6d;
      *(undefined1 *)(lVar4 + 0x100) = 0x6d;
    }
  }
  lVar4 = *(long *)(this + 0x20);
  if (lVar4 != *(long *)(this + 0x28)) {
    lVar2 = *(long *)(this + 0x28) * 0x10 + lVar4 * -0x10;
    plVar3 = (long *)(**(long **)(this + 0x18) + lVar4 * 0x10);
    do {
      lVar4 = *plVar3;
      uVar1 = *(uint *)(lVar4 + 4);
      *(uint *)(lVar4 + 4) = uVar1 | 0x80;
      if ((uVar1 >> 8 & 1) != 0) {
        Variable::SetMaybeAssigned(*(Variable **)(lVar4 + 8));
      }
      lVar2 = lVar2 + -0x10;
      plVar3 = plVar3 + 2;
    } while (lVar2 != 0);
  }
  return;
}

