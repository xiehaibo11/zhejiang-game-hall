
/* v8::internal::ArrowHeadParsingScope<v8::internal::ParserTypes<v8::internal::PreParser>
   >::ValidateExpression() */

void __thiscall
v8::internal::ArrowHeadParsingScope<v8::internal::ParserTypes<v8::internal::PreParser>>::
ValidateExpression(ArrowHeadParsingScope<v8::internal::ParserTypes<v8::internal::PreParser>> *this)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  lVar1 = *(long *)this;
  *(undefined8 *)(lVar1 + 0xe8) = 0xffffffff;
  *(undefined4 *)(lVar1 + 0xf0) = 0;
  if (*(uint *)(this + 0x38) <= *(uint *)(this + 0x3c)) {
    lVar1 = *(long *)this;
    PendingCompilationErrorHandler::ReportMessageAt
              (*(PendingCompilationErrorHandler **)(lVar1 + 0x80),*(undefined4 *)(this + 0x38),
               *(undefined4 *)(this + 0x3c),*(undefined4 *)(this + 0x30),0);
    lVar1 = *(long *)(lVar1 + 200);
    lVar2 = *(long *)(lVar1 + 0x18);
    if (*(char *)(lVar2 + 0x30) == '\0') {
      *(undefined4 *)(lVar1 + 0x20) = 0xffffffff;
      *(undefined1 *)(lVar2 + 0x30) = 1;
      *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(lVar2 + 0x18);
      *(undefined1 *)(lVar1 + 0x60) = 0x6d;
      *(undefined1 *)(lVar1 + 0xb0) = 0x6d;
      *(undefined1 *)(lVar1 + 0x100) = 0x6d;
    }
  }
  puVar3 = *(undefined8 **)(this + 8);
  if (*(byte *)(puVar3 + 2) < 3) {
    if (4 < *(byte *)(puVar3 + 2) - 1) {
      lVar1 = *(long *)(this + 0x20);
      if (lVar1 != *(long *)(this + 0x28)) {
        lVar2 = *(long *)(this + 0x28) * 0x10 + lVar1 * -0x10;
        puVar4 = (undefined8 *)(**(long **)(this + 0x18) + lVar1 * 0x10);
        do {
          Scope::AddUnresolved(*(Scope **)*puVar3,(VariableProxy *)*puVar4);
          lVar2 = lVar2 + -0x10;
          puVar4 = puVar4 + 2;
        } while (lVar2 != 0);
      }
    }
    puVar3[5] = *(undefined8 *)(this + 0x28);
    *(undefined8 *)(this + 0x20) = *(undefined8 *)(this + 0x28);
  }
  return;
}

