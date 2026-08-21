
/* v8::internal::trap_handler::MetadataLock::~MetadataLock() */

void __thiscall v8::internal::trap_handler::MetadataLock::~MetadataLock(MetadataLock *this)

{
  if (g_thread_in_wasm_code == 0) {
    spinlock_ = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

