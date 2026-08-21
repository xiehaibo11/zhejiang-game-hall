
/* v8::internal::DebugScope::~DebugScope() */

void __thiscall v8::internal::DebugScope::~DebugScope(DebugScope *this)

{
  *(undefined8 *)(*(long *)this + 0x40) = *(undefined8 *)(this + 8);
  *(undefined4 *)(*(long *)this + 0x48) = *(undefined4 *)(this + 0x10);
  Debug::UpdateState(*(Debug **)this);
  *(undefined ***)(this + 0x18) = &PTR__InterruptsScope_01c984b0;
  if (*(int *)(this + 0x38) == 2) {
    return;
  }
  StackGuard::PopInterruptsScope(*(StackGuard **)(this + 0x20));
  return;
}

