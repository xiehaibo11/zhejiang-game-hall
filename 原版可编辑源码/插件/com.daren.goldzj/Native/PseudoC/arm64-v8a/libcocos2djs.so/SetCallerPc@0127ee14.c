
/* v8::internal::FrameDescription::SetCallerPc(unsigned int, long) */

void __thiscall
v8::internal::FrameDescription::SetCallerPc(FrameDescription *this,uint param_1,long param_2)

{
  *(long *)(this + (ulong)param_1 + 0x240) = param_2;
  return;
}

