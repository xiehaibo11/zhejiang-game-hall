
/* v8::internal::RuntimeCallStats::Dump(v8::tracing::TracedValue*) */

void __thiscall v8::internal::RuntimeCallStats::Dump(RuntimeCallStats *this,TracedValue *param_1)

{
  RuntimeCallStats *this_00;
  long lVar1;
  
  this_00 = this + 0x20;
  lVar1 = 0x4af;
  do {
    if (0 < *(long *)(this_00 + 8)) {
      RuntimeCallCounter::Dump((RuntimeCallCounter *)this_00,param_1);
    }
    lVar1 = lVar1 + -1;
    this_00 = this_00 + 0x18;
  } while (lVar1 != 0);
  this[0x10] = (RuntimeCallStats)0x0;
  return;
}

