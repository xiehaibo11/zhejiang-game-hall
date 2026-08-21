
/* v8::internal::ThreadState::Unlink() */

void __thiscall v8::internal::ThreadState::Unlink(ThreadState *this)

{
  *(undefined8 *)(*(long *)(this + 0x10) + 0x18) = *(undefined8 *)(this + 0x18);
  *(undefined8 *)(*(long *)(this + 0x18) + 0x10) = *(undefined8 *)(this + 0x10);
  return;
}

