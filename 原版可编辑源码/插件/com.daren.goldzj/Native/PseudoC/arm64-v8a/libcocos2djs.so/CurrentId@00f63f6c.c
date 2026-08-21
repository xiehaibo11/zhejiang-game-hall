
/* v8::internal::ThreadManager::CurrentId() */

undefined4 v8::internal::ThreadManager::CurrentId(void)

{
  undefined4 uVar1;
  
  uVar1 = ThreadId::GetCurrentThreadId();
  return uVar1;
}

