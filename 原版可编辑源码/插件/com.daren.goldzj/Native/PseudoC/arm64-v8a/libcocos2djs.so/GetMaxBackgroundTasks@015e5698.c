
/* v8::internal::wasm::GetMaxBackgroundTasks() */

int v8::internal::wasm::GetMaxBackgroundTasks(void)

{
  int iVar1;
  long *plVar2;
  
  if (FLAG_wasm_num_compilation_tasks < 2) {
    iVar1 = 0;
  }
  else {
    plVar2 = (long *)V8::GetCurrentPlatform();
    iVar1 = (**(code **)(*plVar2 + 0x28))();
    if (FLAG_wasm_num_compilation_tasks <= iVar1) {
      iVar1 = FLAG_wasm_num_compilation_tasks;
    }
  }
  return iVar1;
}

