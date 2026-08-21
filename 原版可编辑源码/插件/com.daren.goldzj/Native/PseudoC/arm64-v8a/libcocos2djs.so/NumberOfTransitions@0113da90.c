
/* v8::internal::TransitionsAccessor::NumberOfTransitions() */

int __thiscall v8::internal::TransitionsAccessor::NumberOfTransitions(TransitionsAccessor *this)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0x20);
  if (2 < uVar1) {
    if (uVar1 != 4) {
      if (uVar1 == 3) {
        return 1;
      }
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    if (3 < *(int *)(*(long *)(this + 0x18) + 3)) {
      return *(int *)(*(long *)(this + 0x18) + 0xb) >> 1;
    }
  }
  return 0;
}

