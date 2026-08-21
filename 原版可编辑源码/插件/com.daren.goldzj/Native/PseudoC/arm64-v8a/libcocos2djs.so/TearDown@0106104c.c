
/* v8::internal::Logger::TearDown() */

undefined8 __thiscall v8::internal::Logger::TearDown(Logger *this)

{
  long *plVar1;
  undefined8 uVar2;
  
  if (this[0x6c] != (Logger)0x0) {
    this[0x6c] = (Logger)0x0;
    if (*(Profiler **)(this + 0x18) != (Profiler *)0x0) {
      Profiler::Disengage(*(Profiler **)(this + 0x18));
      plVar1 = *(long **)(this + 0x18);
      *(undefined8 *)(this + 0x18) = 0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
    }
    plVar1 = *(long **)(this + 0x10);
    *(undefined8 *)(this + 0x10) = 0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (*(CodeEventListener **)(this + 0x30) != (CodeEventListener *)0x0) {
      CodeEventDispatcher::RemoveListener
                (*(CodeEventDispatcher **)(*(long *)(this + 8) + 0xb6d8),
                 *(CodeEventListener **)(this + 0x30));
      plVar1 = *(long **)(this + 0x30);
      *(undefined8 *)(this + 0x30) = 0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
    }
    if (*(CodeEventListener **)(this + 0x38) != (CodeEventListener *)0x0) {
      CodeEventDispatcher::RemoveListener
                (*(CodeEventDispatcher **)(*(long *)(this + 8) + 0xb6d8),
                 *(CodeEventListener **)(this + 0x38));
      plVar1 = *(long **)(this + 0x38);
      *(undefined8 *)(this + 0x38) = 0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
    }
    if (*(CodeEventListener **)(this + 0x40) != (CodeEventListener *)0x0) {
      CodeEventDispatcher::RemoveListener
                (*(CodeEventDispatcher **)(*(long *)(this + 8) + 0xb6d8),
                 *(CodeEventListener **)(this + 0x40));
      plVar1 = *(long **)(this + 0x40);
      *(undefined8 *)(this + 0x40) = 0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
    }
    if (*(CodeEventListener **)(this + 0x48) != (CodeEventListener *)0x0) {
      CodeEventDispatcher::RemoveListener
                (*(CodeEventDispatcher **)(*(long *)(this + 8) + 0xb6d8),
                 *(CodeEventListener **)(this + 0x48));
      plVar1 = *(long **)(this + 0x48);
      *(undefined8 *)(this + 0x48) = 0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
    }
    uVar2 = Log::Close(*(Log **)(this + 0x28));
    return uVar2;
  }
  return 0;
}

