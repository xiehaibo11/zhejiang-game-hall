
/* v8::internal::RuntimeCallStats::Enter(v8::internal::RuntimeCallTimer*,
   v8::internal::RuntimeCallCounterId) */

void __thiscall
v8::internal::RuntimeCallStats::Enter(RuntimeCallStats *this,long *param_1,int param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)this;
  *param_1 = (long)(this + (long)param_3 * 0x18 + 0x20);
  param_1[1] = lVar3;
  if (TracingFlags::runtime_stats != 4) {
    lVar2 = (*(code *)RuntimeCallTimer::Now)();
    if (lVar3 != 0) {
      lVar1 = *(long *)(lVar3 + 0x10);
      *(undefined8 *)(lVar3 + 0x10) = 0;
      *(long *)(lVar3 + 0x18) = (lVar2 - lVar1) + *(long *)(lVar3 + 0x18);
    }
    param_1[2] = lVar2;
  }
  *(long **)this = param_1;
  *(RuntimeCallStats **)(this + 8) = this + (long)param_3 * 0x18 + 0x20;
  return;
}

