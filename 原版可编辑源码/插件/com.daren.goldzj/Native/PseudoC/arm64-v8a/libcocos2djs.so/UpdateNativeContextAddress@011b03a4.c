
/* v8::internal::ProfileGenerator::UpdateNativeContextAddress(unsigned long, unsigned long) */

void __thiscall
v8::internal::ProfileGenerator::UpdateNativeContextAddress
          (ProfileGenerator *this,ulong param_1,ulong param_2)

{
  long *plVar1;
  long *plVar2;
  ulong *puVar3;
  long lVar4;
  
  lVar4 = *(long *)this;
  base::Semaphore::Wait((Semaphore *)(lVar4 + 0x50));
  plVar2 = *(long **)(lVar4 + 0x40);
  for (plVar1 = *(long **)(lVar4 + 0x38); plVar1 != plVar2; plVar1 = plVar1 + 1) {
    puVar3 = *(ulong **)(*plVar1 + 0x20);
    if ((puVar3 != (ulong *)0x0) && (*puVar3 == param_1)) {
      *puVar3 = param_2;
    }
  }
  base::Semaphore::Signal((Semaphore *)(lVar4 + 0x50));
  return;
}

