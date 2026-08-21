
/* v8::internal::compiler::KeyedAccessMode::load_mode() const */

undefined4 __thiscall v8::internal::compiler::KeyedAccessMode::load_mode(KeyedAccessMode *this)

{
  if ((*(int *)this != 0) && (*(int *)this != 3)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsLoad()");
  }
  return *(undefined4 *)(this + 4);
}

