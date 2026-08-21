
/* v8::internal::WasmInstanceObject::SetRawMemory(unsigned char*, unsigned long) */

void __thiscall
v8::internal::WasmInstanceObject::SetRawMemory
          (WasmInstanceObject *this,uchar *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = wasm::max_mem_pages();
  if (param_2 <= (uVar1 & 0xffffffff) * 0x10000) {
    lVar2 = base::bits::RoundUpToPowerOfTwo64(param_2);
    *(uchar **)(*(long *)this + 0xb) = param_1;
    *(ulong *)(*(long *)this + 0x13) = param_2;
    *(long *)(*(long *)this + 0x1b) = lVar2 + -1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","mem_size <= wasm::max_mem_bytes()");
}

