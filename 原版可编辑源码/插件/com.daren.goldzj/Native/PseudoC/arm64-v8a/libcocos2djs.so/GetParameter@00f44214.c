
/* v8::internal::BuiltinExitFrame::GetParameter(int) const */

undefined8 __thiscall
v8::internal::BuiltinExitFrame::GetParameter(BuiltinExitFrame *this,int param_1)

{
  return *(undefined8 *)(*(long *)(this + 0x20) + (long)(param_1 << 3) + 0x30);
}

