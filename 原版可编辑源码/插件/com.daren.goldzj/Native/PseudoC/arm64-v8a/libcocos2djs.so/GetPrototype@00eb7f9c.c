
/* v8::Object::GetPrototype() */

void __thiscall v8::Object::GetPrototype(Object *this)

{
  long lVar1;
  long local_50 [2];
  Object *local_40;
  undefined4 local_38;
  undefined1 local_34;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_50[1] = 0;
  local_38 = 0;
  local_34 = 0;
  local_50[0] = (ulong)*(uint *)(this + 4) << 0x20;
  local_30 = 0;
  local_40 = this;
  if (this == (Object *)0x0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","!handle_.is_null()");
  }
  internal::PrototypeIterator::Advance((PrototypeIterator *)local_50);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_40);
}

