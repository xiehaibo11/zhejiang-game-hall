
/* v8::internal::BackingStore::AllocateWasmMemory(v8::internal::Isolate*, unsigned long, unsigned
   long, v8::internal::SharedFlag) */

void __thiscall
v8::internal::BackingStore::AllocateWasmMemory
          (long *param_1_00,BackingStore *this,ulong param_1,ulong param_2,undefined4 param_5)

{
  ulong uVar1;
  long local_48;
  long local_28;
  
  uVar1 = wasm::max_mem_pages();
  if ((uVar1 & 0xffffffff) < param_1) {
    *param_1_00 = 0;
  }
  else {
    TryAllocateWasmMemory((BackingStore *)&local_28,this,param_1,param_2,param_5);
    if ((param_1 < param_2) && (local_28 == 0)) {
      TryAllocateWasmMemory((BackingStore *)&local_48,this,param_1,param_1,param_5);
      local_28 = local_48;
    }
    *param_1_00 = local_28;
  }
  return;
}

