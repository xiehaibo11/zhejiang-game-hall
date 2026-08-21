
/* v8::internal::TransitionsAccessor::HasSimpleTransitionTo(v8::internal::Map) */

bool __thiscall
v8::internal::TransitionsAccessor::HasSimpleTransitionTo(TransitionsAccessor *this,uint param_2)

{
  uint uVar1;
  bool bVar2;
  
  uVar1 = *(uint *)(this + 0x20);
  bVar2 = false;
  if ((2 < uVar1) && (uVar1 != 4)) {
    if (uVar1 != 3) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    bVar2 = (*(uint *)(this + 0x18) & 0xfffffffd) == param_2;
  }
  return bVar2;
}

