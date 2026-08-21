
/* v8::internal::BackingStore::get_shared_wasm_memory_data() */

void __thiscall v8::internal::BackingStore::get_shared_wasm_memory_data(BackingStore *this)

{
  if ((~(byte)this[0x28] & 3) != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","is_wasm_memory_ && is_shared_");
  }
  if (*(long *)(this + 0x18) != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","shared_wasm_memory_data");
}

