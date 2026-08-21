
/* v8::internal::WasmInstanceObject::GetGlobalStorage(v8::internal::Handle<v8::internal::WasmInstanceObject>,
   v8::internal::wasm::WasmGlobal const&) */

long v8::internal::WasmInstanceObject::GetGlobalStorage(long *param_1,long param_2)

{
  if ((*(char *)(param_2 + 1) != '\0') && (*(char *)(param_2 + 0x1c) != '\0')) {
    return *(long *)(*(long *)(*param_1 + 0x57) + (ulong)*(uint *)(param_2 + 0x18) * 8);
  }
  return *(long *)(*param_1 + 0x4f) + (ulong)*(uint *)(param_2 + 0x18);
}

