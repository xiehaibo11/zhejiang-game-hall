
/* v8::internal::Builtins::NonPrimitiveToPrimitive(v8::internal::ToPrimitiveHint) */

void __thiscall v8::internal::Builtins::NonPrimitiveToPrimitive(Builtins *this,uint param_2)

{
  if (param_2 < 3) {
    Heap::builtin_address((Heap *)(*(long *)this + 0x8850),param_2 + 0x5e);
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

