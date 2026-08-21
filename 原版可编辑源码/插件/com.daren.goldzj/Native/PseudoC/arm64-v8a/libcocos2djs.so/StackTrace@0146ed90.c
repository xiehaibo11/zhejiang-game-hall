
/* v8::base::debug::StackTrace::StackTrace(void const* const*, unsigned long) */

void __thiscall
v8::base::debug::StackTrace::StackTrace(StackTrace *this,void **param_1,ulong param_2)

{
  if (0x3d < param_2) {
    param_2 = 0x3e;
  }
  if (param_2 != 0) {
    memcpy(this,param_1,param_2 << 3);
  }
  *(ulong *)(this + 0x1f0) = param_2;
  return;
}

