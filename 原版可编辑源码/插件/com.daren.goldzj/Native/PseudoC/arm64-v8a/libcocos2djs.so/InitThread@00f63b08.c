
/* v8::internal::ThreadManager::InitThread(v8::internal::ExecutionAccess const&) */

void v8::internal::ThreadManager::InitThread(ExecutionAccess *param_1)

{
  Isolate::InitializeThreadLocal(*(Isolate **)(param_1 + 0x48));
  StackGuard::InitThread((ExecutionAccess *)(*(long *)(param_1 + 0x48) + 0x48));
  Debug::ThreadInit(*(Debug **)(*(long *)(param_1 + 0x48) + 0xb6c8));
  return;
}

