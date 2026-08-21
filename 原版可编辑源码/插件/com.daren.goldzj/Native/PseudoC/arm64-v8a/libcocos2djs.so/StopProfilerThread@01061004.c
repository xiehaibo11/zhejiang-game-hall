
/* v8::internal::Logger::StopProfilerThread() */

void __thiscall v8::internal::Logger::StopProfilerThread(Logger *this)

{
  long *plVar1;
  
  if (*(Profiler **)(this + 0x18) != (Profiler *)0x0) {
    Profiler::Disengage(*(Profiler **)(this + 0x18));
    plVar1 = *(long **)(this + 0x18);
    *(undefined8 *)(this + 0x18) = 0;
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0106103c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 8))();
      return;
    }
  }
  return;
}

