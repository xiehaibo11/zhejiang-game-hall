
/* v8::internal::BackingStore::CopyWasmMemory(v8::internal::Isolate*, unsigned long) */

void v8::internal::BackingStore::CopyWasmMemory(Isolate *param_1,ulong param_2)

{
  ulong uVar1;
  ulong in_x2;
  undefined8 *in_x8;
  BackingStore *local_28;
  
  uVar1 = wasm::max_mem_pages();
  if ((in_x2 <= (uVar1 & 0xffffffff)) &&
     (TryAllocateWasmMemory((BackingStore *)&local_28,param_2), local_28 != (BackingStore *)0x0)) {
    if ((((byte)local_28[0x28] ^ (byte)param_1[0x28]) >> 4 & 1) == 0) {
      if (*(long *)(param_1 + 8) != 0) {
        memcpy(*(void **)local_28,*(void **)param_1,*(size_t *)(param_1 + 8));
      }
      *in_x8 = local_28;
      return;
    }
    *in_x8 = 0;
    ~BackingStore(local_28);
    operator_delete(local_28);
    return;
  }
  *in_x8 = 0;
  return;
}

