
/* v8::internal::BuiltinExitFrame::receiver() const */

undefined8 __thiscall v8::internal::BuiltinExitFrame::receiver(BuiltinExitFrame *this)

{
  return *(undefined8 *)
          (*(long *)(this + 0x20) +
          (long)(int)((*(uint *)(*(long *)(this + 0x20) + 0x20) & 0x3ffffffe) * 4 + 8));
}

