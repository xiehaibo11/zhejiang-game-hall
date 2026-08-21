
/* v8::internal::Profiler::Profiler(v8::internal::Isolate*) */

void __thiscall v8::internal::Profiler::Profiler(Profiler *this,Isolate *param_1)

{
  long lVar1;
  Profiler *pPVar2;
  char *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_48 = "v8:Profiler";
  local_40 = 0;
  base::Thread::Thread((Thread *)this,(Options *)&local_48);
  pPVar2 = this + 0x38;
  *(undefined ***)this = &PTR__Profiler_01cb2280;
  *(Isolate **)(this + 0x30) = param_1;
  do {
    *(undefined4 *)pPVar2 = 5;
    *(undefined8 *)(pPVar2 + 0x1008) = 0;
    *(undefined8 *)(pPVar2 + 0x10) = 0;
    *(undefined8 *)(pPVar2 + 8) = 0;
    *(ushort *)(pPVar2 + 0x1010) = *(ushort *)(pPVar2 + 0x1010) & 0xfc00 | 0x200;
    *(undefined8 *)(pPVar2 + 0x1020) = 0;
    *(undefined8 *)(pPVar2 + 0x1018) = 0;
    pPVar2 = pPVar2 + 0x1028;
  } while (pPVar2 != this + 0x81438);
  *(undefined4 *)(this + 0x81438) = 0;
  this[0x81440] = (Profiler)0x0;
  base::Semaphore::Semaphore((Semaphore *)(this + 0x81444),0);
  *(undefined4 *)(this + 0x8143c) = 0;
  *(undefined4 *)(this + 0x81454) = 0;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

