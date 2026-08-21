
/* v8::internal::Builtins::OrdinaryToPrimitive(v8::internal::OrdinaryToPrimitiveHint) */

void __thiscall v8::internal::Builtins::OrdinaryToPrimitive(Builtins *this,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    iVar1 = 0x5c;
  }
  else {
    if (param_2 != 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    iVar1 = 0x5d;
  }
  Heap::builtin_address((Heap *)(*(long *)this + 0x8850),iVar1);
  return;
}

