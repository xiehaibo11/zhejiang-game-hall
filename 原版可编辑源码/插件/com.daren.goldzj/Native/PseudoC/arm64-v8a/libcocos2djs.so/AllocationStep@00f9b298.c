
/* v8::internal::AllocationObserver::AllocationStep(int, unsigned long, unsigned long) */

void v8::internal::AllocationObserver::AllocationStep(int param_1,ulong param_2,ulong param_3)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(ulong)(uint)param_1;
  lVar2 = plVar1[2] - (long)(int)param_2;
  plVar1[2] = lVar2;
  if (lVar2 < 1) {
    (**(code **)(*plVar1 + 0x10))(plVar1,(int)plVar1[1] - (int)lVar2);
    lVar2 = (**(code **)(*plVar1 + 0x18))(plVar1);
    plVar1[1] = lVar2;
    plVar1[2] = lVar2;
  }
  return;
}

