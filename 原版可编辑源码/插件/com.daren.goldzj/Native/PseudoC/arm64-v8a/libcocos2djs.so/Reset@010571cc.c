
/* v8::internal::RuntimeCallStats::Reset() */

void __thiscall v8::internal::RuntimeCallStats::Reset(RuntimeCallStats *this)

{
  long lVar1;
  long lVar2;
  RuntimeCallStats *this_00;
  long *plVar3;
  long lVar4;
  long local_28;
  
  if (TracingFlags::runtime_stats != 0) {
    lVar2 = *(long *)this;
    while (lVar2 != 0) {
      plVar3 = *(long **)this;
      if (plVar3[2] == 0) {
        lVar2 = plVar3[1];
      }
      else {
        lVar1 = (*(code *)RuntimeCallTimer::Now)();
        lVar2 = plVar3[2];
        plVar3[2] = 0;
        plVar3[3] = (lVar1 - lVar2) + plVar3[3];
        *(long *)(*plVar3 + 8) = *(long *)(*plVar3 + 8) + 1;
        local_28 = plVar3[3];
        lVar4 = *plVar3;
        lVar2 = base::TimeDelta::InMicroseconds((TimeDelta *)&local_28);
        *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + lVar2;
        plVar3[3] = 0;
        lVar2 = plVar3[1];
        if (lVar2 != 0) {
          *(long *)(lVar2 + 0x10) = lVar1;
        }
      }
      *(long *)this = lVar2;
      lVar2 = *(long *)this;
    }
    this_00 = this + 0x20;
    lVar2 = 0x4af;
    do {
      RuntimeCallCounter::Reset((RuntimeCallCounter *)this_00);
      lVar2 = lVar2 + -1;
      this_00 = this_00 + 0x18;
    } while (lVar2 != 0);
    this[0x10] = (RuntimeCallStats)0x1;
  }
  return;
}

