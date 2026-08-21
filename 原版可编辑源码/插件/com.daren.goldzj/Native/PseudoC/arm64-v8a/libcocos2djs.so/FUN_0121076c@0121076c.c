
void FUN_0121076c(long param_1)

{
  undefined8 uVar1;
  undefined **local_28;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0xc770);
  local_28 = &PTR_FUN_01cbc440;
  v8::internal::ThreadManager::IterateArchivedThreads
            (*(ThreadManager **)(*(long *)(param_1 + 0x28) + 0x95f0),(ThreadVisitor *)&local_28);
  v8::internal::wasm::WasmEngine::ReportLiveCodeForGC(uVar1,*(undefined8 *)(param_1 + 0x28),0,0);
  return;
}

