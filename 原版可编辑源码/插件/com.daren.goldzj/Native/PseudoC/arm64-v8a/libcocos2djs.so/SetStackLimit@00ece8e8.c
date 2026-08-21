
/* v8::Isolate::SetStackLimit(unsigned long) */

void __thiscall v8::Isolate::SetStackLimit(Isolate *this,ulong param_1)

{
  if (param_1 != 0) {
    internal::StackGuard::SetStackLimit((StackGuard *)(this + 0x48),param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","stack_limit");
}

