
/* v8::internal::BackingStore::get_v8_api_array_buffer_allocator() */

void __thiscall v8::internal::BackingStore::get_v8_api_array_buffer_allocator(BackingStore *this)

{
  if (((byte)this[0x28] >> 1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","!is_wasm_memory_");
  }
  if (*(long *)(this + 0x18) != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","(array_buffer_allocator) != nullptr");
}

