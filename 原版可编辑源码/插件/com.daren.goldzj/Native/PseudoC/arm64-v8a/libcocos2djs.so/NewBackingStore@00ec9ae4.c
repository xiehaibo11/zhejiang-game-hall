
/* v8::ArrayBuffer::NewBackingStore(void*, unsigned long, void (*)(void*, unsigned long, void*),
   void*) */

void v8::ArrayBuffer::NewBackingStore
               (void *param_1,ulong param_2,_func_void_void_ptr_ulong_void_ptr *param_3,
               void *param_4)

{
  undefined8 *in_x8;
  undefined8 local_8;
  
  if (param_2 >> 0x35 == 0) {
    internal::BackingStore::WrapAllocation((BackingStore *)&local_8);
    *in_x8 = local_8;
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","byte_length <= i::JSArrayBuffer::kMaxByteLength");
}

