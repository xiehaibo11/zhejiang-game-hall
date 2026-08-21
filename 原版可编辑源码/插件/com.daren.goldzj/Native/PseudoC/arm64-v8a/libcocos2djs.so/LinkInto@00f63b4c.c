
/* v8::internal::ThreadState::LinkInto(v8::internal::ThreadState::List) */

void __thiscall v8::internal::ThreadState::LinkInto(ThreadState *this,int param_2)

{
  long lVar1;
  
  lVar1 = 0x38;
  if (param_2 != 0) {
    lVar1 = 0x40;
  }
  lVar1 = *(long *)(*(long *)(this + 0x20) + lVar1);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(lVar1 + 0x10);
  *(long *)(this + 0x18) = lVar1;
  *(ThreadState **)(lVar1 + 0x10) = this;
  *(ThreadState **)(*(long *)(this + 0x10) + 0x18) = this;
  return;
}

