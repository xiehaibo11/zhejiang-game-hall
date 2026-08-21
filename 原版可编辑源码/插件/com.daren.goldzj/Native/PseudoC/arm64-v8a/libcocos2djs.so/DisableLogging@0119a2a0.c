
/* v8::internal::CpuProfiler::DisableLogging() */

void __thiscall v8::internal::CpuProfiler::DisableLogging(CpuProfiler *this)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(this + 0x40);
  if (plVar2 != (long *)0x0) {
    *(undefined8 *)(this + 0x40) = 0;
    Logger::RemoveCodeEventListener(*(Logger **)(*plVar2 + 0x9558),(CodeEventListener *)plVar2[1]);
    lVar1 = *(long *)(*plVar2 + 0xb800) + -1;
    *(long *)(*plVar2 + 0xb800) = lVar1;
    if (lVar1 == 0) {
      *(undefined1 *)(*plVar2 + 0xb7fc) = 0;
    }
    operator_delete(plVar2);
    return;
  }
  return;
}

