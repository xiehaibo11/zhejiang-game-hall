
/* v8::internal::compiler::KeyedAccessMode::KeyedAccessMode(v8::internal::compiler::AccessMode,
   v8::internal::KeyedAccessLoadMode) */

void __thiscall
v8::internal::compiler::KeyedAccessMode::KeyedAccessMode
          (KeyedAccessMode *this,int param_2,undefined4 param_3)

{
  *(int *)this = param_2;
  *(undefined4 *)(this + 4) = param_3;
  if (param_2 - 1U < 2) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","!IsStore()");
  }
  if ((param_2 != 0) && (param_2 != 3)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsLoad()");
  }
  return;
}

