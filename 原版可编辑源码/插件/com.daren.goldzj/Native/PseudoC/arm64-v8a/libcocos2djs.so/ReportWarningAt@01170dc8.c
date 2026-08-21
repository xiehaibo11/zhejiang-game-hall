
/* v8::internal::PendingCompilationErrorHandler::ReportWarningAt(int, int,
   v8::internal::MessageTemplate, char const*) */

void __thiscall
v8::internal::PendingCompilationErrorHandler::ReportWarningAt
          (PendingCompilationErrorHandler *this,undefined4 param_1,undefined4 param_2,
          undefined4 param_4,undefined8 param_5)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x28);
  *(undefined4 *)(puVar1 + 1) = param_1;
  *(undefined4 *)((long)puVar1 + 0xc) = param_2;
  *(undefined4 *)(puVar1 + 2) = param_4;
  puVar1[3] = 0;
  puVar1[4] = param_5;
  *puVar1 = *(undefined8 *)(this + 0x28);
  *(undefined8 **)(this + 0x28) = puVar1;
  return;
}

