
/* v8::internal::RuntimeCallStats::CorrectCurrentCounterId(v8::internal::RuntimeCallCounterId,
   v8::internal::RuntimeCallStats::CounterMode) */

void __thiscall
v8::internal::RuntimeCallStats::CorrectCurrentCounterId
          (RuntimeCallStats *this,int param_2,int param_3)

{
  if ((param_3 == 1) && (*(int *)(this + 0x14) == 1)) {
    param_2 = param_2 + 1;
  }
  if (*(long **)this != (long *)0x0) {
    **(long **)this = (long)(this + (long)param_2 * 0x18 + 0x20);
    *(RuntimeCallStats **)(this + 8) = this + (long)param_2 * 0x18 + 0x20;
  }
  return;
}

