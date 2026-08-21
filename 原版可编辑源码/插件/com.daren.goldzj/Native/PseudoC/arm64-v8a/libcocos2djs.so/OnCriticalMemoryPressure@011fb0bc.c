
/* v8::internal::OnCriticalMemoryPressure(unsigned long) */

undefined8 v8::internal::OnCriticalMemoryPressure(ulong param_1)

{
  long *plVar1;
  ulong uVar2;
  
  plVar1 = (long *)V8::GetCurrentPlatform();
  uVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,param_1);
  if ((uVar2 & 1) == 0) {
    plVar1 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar1 + 0x18))();
  }
  return 1;
}

