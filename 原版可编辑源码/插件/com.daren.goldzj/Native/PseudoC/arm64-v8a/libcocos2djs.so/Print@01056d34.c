
/* v8::internal::RuntimeCallStats::Print(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) */

void __thiscall v8::internal::RuntimeCallStats::Print(RuntimeCallStats *this,basic_ostream *param_1)

{
  long lVar1;
  long lVar2;
  RuntimeCallStats *pRVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined8 local_70;
  undefined8 uStack_68;
  void *local_60;
  void *local_58;
  undefined8 local_50;
  long local_48;
  
  local_50 = 0;
  uStack_68 = 0;
  local_70 = 0;
  local_58 = (void *)0x0;
  local_60 = (void *)0x0;
  if (*(long *)this != 0) {
    plVar4 = *(long **)this;
    lVar1 = (*(code *)RuntimeCallTimer::Now)();
    lVar2 = (lVar1 - plVar4[2]) + plVar4[3];
    plVar4[2] = 0;
    plVar4[3] = lVar2;
    if (plVar4 != (long *)0x0) {
      lVar5 = *plVar4;
      local_48 = lVar2;
      lVar2 = base::TimeDelta::InMicroseconds((TimeDelta *)&local_48);
      *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + lVar2;
      plVar4[3] = 0;
      for (plVar6 = (long *)plVar4[1]; plVar6 != (long *)0x0; plVar6 = (long *)plVar6[1]) {
        local_48 = plVar6[3];
        lVar5 = *plVar6;
        lVar2 = base::TimeDelta::InMicroseconds((TimeDelta *)&local_48);
        *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + lVar2;
        plVar6[3] = 0;
      }
    }
    plVar4[2] = lVar1;
  }
  pRVar3 = this + 0x20;
  lVar2 = 0x4af;
  do {
    RuntimeCallStatEntries::Add((RuntimeCallStatEntries *)&local_70,(RuntimeCallCounter *)pRVar3);
    lVar2 = lVar2 + -1;
    pRVar3 = pRVar3 + 0x18;
  } while (lVar2 != 0);
  RuntimeCallStatEntries::Print((RuntimeCallStatEntries *)&local_70,param_1);
  if (local_60 != (void *)0x0) {
    local_58 = local_60;
    operator_delete(local_60);
  }
  return;
}

