
/* v8::internal::ParseInfo::ParallelTasks::Enqueue(v8::internal::ParseInfo*,
   v8::internal::AstRawString const*, v8::internal::FunctionLiteral*) */

void __thiscall
v8::internal::ParseInfo::ParallelTasks::Enqueue
          (ParallelTasks *this,ParseInfo *param_1,AstRawString *param_2,FunctionLiteral *param_3)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  
  auVar2 = CompilerDispatcher::Enqueue(*(CompilerDispatcher **)this,param_1,param_2,param_3);
  if ((auVar2._0_8_ & 0xff) != 0) {
    puVar1 = operator_new(0x18);
    puVar1[1] = param_3;
    puVar1[2] = auVar2._8_8_;
    *puVar1 = *(undefined8 *)(this + 8);
    *(undefined8 **)(this + 8) = puVar1;
  }
  return;
}

