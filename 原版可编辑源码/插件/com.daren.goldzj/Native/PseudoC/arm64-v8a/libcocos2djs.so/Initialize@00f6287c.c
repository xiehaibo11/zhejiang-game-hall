
/* v8::internal::StackGuard::ThreadLocal::Initialize(v8::internal::Isolate*,
   v8::internal::ExecutionAccess const&) */

void v8::internal::StackGuard::ThreadLocal::Initialize(Isolate *param_1,ExecutionAccess *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)FLAG_stack_size;
  lVar1 = GetCurrentStackPosition();
  lVar1 = lVar1 + lVar2 * -0x400;
  *(long *)param_1 = lVar1;
  *(long *)(param_1 + 8) = lVar1;
  *(long *)(param_1 + 0x10) = lVar1;
  *(long *)(param_1 + 0x18) = lVar1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}

