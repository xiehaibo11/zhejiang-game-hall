
/* v8::internal::RuntimeCallTimer::Snapshot() */

void __thiscall v8::internal::RuntimeCallTimer::Snapshot(RuntimeCallTimer *this)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long local_38;
  
  lVar1 = (*(code *)Now)();
  local_38 = (lVar1 - *(long *)(this + 0x10)) + *(long *)(this + 0x18);
  *(undefined8 *)(this + 0x10) = 0;
  *(long *)(this + 0x18) = local_38;
  if (this != (RuntimeCallTimer *)0x0) {
    lVar3 = *(long *)this;
    lVar2 = base::TimeDelta::InMicroseconds((TimeDelta *)&local_38);
    *(long *)(lVar3 + 0x10) = *(long *)(lVar3 + 0x10) + lVar2;
    *(undefined8 *)(this + 0x18) = 0;
    for (plVar4 = *(long **)(this + 8); plVar4 != (long *)0x0; plVar4 = (long *)plVar4[1]) {
      local_38 = plVar4[3];
      lVar3 = *plVar4;
      lVar2 = base::TimeDelta::InMicroseconds((TimeDelta *)&local_38);
      *(long *)(lVar3 + 0x10) = *(long *)(lVar3 + 0x10) + lVar2;
      plVar4[3] = 0;
    }
  }
  *(long *)(this + 0x10) = lVar1;
  return;
}

