
/* v8::internal::ExpressionParsingScope<v8::internal::ParserTypes<v8::internal::Parser>
   >::ValidatePattern(v8::internal::Expression*, int, int) */

void __thiscall
v8::internal::ExpressionParsingScope<v8::internal::ParserTypes<v8::internal::Parser>>::
ValidatePattern(ExpressionParsingScope<v8::internal::ParserTypes<v8::internal::Parser>> *this,
               Expression *param_1,int param_2,int param_3)

{
  uint uVar1;
  Expression EVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  if (*(uint *)(this + 0x40) <= *(uint *)(this + 0x44)) {
    lVar5 = *(long *)this;
    PendingCompilationErrorHandler::ReportMessageAt
              (*(PendingCompilationErrorHandler **)(lVar5 + 0xb0),*(undefined4 *)(this + 0x40),
               *(undefined4 *)(this + 0x44),*(undefined4 *)(this + 0x34),0);
    lVar3 = *(long *)(lVar5 + 0x158);
    if (*(char *)(lVar3 + 0x30) == '\0') {
      *(undefined4 *)(lVar5 + 0x160) = 0xffffffff;
      *(undefined1 *)(lVar3 + 0x30) = 1;
      *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar3 + 0x18);
      *(undefined1 *)(lVar5 + 0x1a0) = 0x6d;
      *(undefined1 *)(lVar5 + 0x1f0) = 0x6d;
      *(undefined1 *)(lVar5 + 0x240) = 0x6d;
      EVar2 = param_1[4];
      goto joined_r0x011678c4;
    }
  }
  EVar2 = param_1[4];
joined_r0x011678c4:
  if (((byte)EVar2 >> 6 & 1) != 0) {
    lVar5 = *(long *)this;
    PendingCompilationErrorHandler::ReportMessageAt
              (*(PendingCompilationErrorHandler **)(lVar5 + 0xb0),param_2,param_3,0xfd,0);
    lVar3 = *(long *)(lVar5 + 0x158);
    if (*(char *)(lVar3 + 0x30) == '\0') {
      *(undefined4 *)(lVar5 + 0x160) = 0xffffffff;
      *(undefined1 *)(lVar3 + 0x30) = 1;
      *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar3 + 0x18);
      *(undefined1 *)(lVar5 + 0x1a0) = 0x6d;
      *(undefined1 *)(lVar5 + 0x1f0) = 0x6d;
      *(undefined1 *)(lVar5 + 0x240) = 0x6d;
    }
  }
  lVar3 = *(long *)(this + 0x20);
  if (lVar3 != *(long *)(this + 0x28)) {
    lVar5 = *(long *)(this + 0x28) * 0x10 + lVar3 * -0x10;
    plVar4 = (long *)(**(long **)(this + 0x18) + lVar3 * 0x10);
    do {
      lVar3 = *plVar4;
      uVar1 = *(uint *)(lVar3 + 4);
      *(uint *)(lVar3 + 4) = uVar1 | 0x80;
      if ((uVar1 >> 8 & 1) != 0) {
        Variable::SetMaybeAssigned(*(Variable **)(lVar3 + 8));
      }
      lVar5 = lVar5 + -0x10;
      plVar4 = plVar4 + 2;
    } while (lVar5 != 0);
  }
  return;
}

