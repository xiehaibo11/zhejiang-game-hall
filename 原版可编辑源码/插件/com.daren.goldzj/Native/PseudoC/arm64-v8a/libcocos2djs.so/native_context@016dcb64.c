
/* v8::internal::compiler::JSCallReducer::native_context() const */

undefined1  [16] __thiscall
v8::internal::compiler::JSCallReducer::native_context(JSCallReducer *this)

{
  if (*(char *)(*(long *)(this + 0x18) + 0x18) == '\x01') {
    return *(undefined1 (*) [16])(*(long *)(this + 0x18) + 0x20);
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","storage_.is_populated_");
}

