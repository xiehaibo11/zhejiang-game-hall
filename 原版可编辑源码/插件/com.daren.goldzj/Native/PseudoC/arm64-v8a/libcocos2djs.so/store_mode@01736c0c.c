
/* v8::internal::compiler::KeyedAccessMode::store_mode() const */

undefined4 __thiscall v8::internal::compiler::KeyedAccessMode::store_mode(KeyedAccessMode *this)

{
  if (*(int *)this - 1U < 2) {
    return *(undefined4 *)(this + 4);
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","IsStore()");
}

