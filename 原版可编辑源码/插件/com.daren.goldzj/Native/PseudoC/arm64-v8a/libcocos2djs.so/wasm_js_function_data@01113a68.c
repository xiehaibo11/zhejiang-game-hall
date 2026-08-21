
/* v8::internal::SharedFunctionInfo::wasm_js_function_data() const */

ulong __thiscall v8::internal::SharedFunctionInfo::wasm_js_function_data(SharedFunctionInfo *this)

{
  return *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 3);
}

