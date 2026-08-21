
/* v8::internal::Trace::DeferredAction::Mentions(int) */

bool __thiscall v8::internal::Trace::DeferredAction::Mentions(DeferredAction *this,int param_1)

{
  if (*(int *)this != 6) {
    return *(int *)(this + 4) == param_1;
  }
  if (param_1 < (int)*(undefined8 *)(this + 0x10)) {
    return false;
  }
  return param_1 <= (int)((ulong)*(undefined8 *)(this + 0x10) >> 0x20);
}

