
/* v8::internal::interpreter::BytecodeGenerator::ControlScopeForIteration::~ControlScopeForIteration()
    */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::ControlScopeForIteration::~ControlScopeForIteration
          (ControlScopeForIteration *this)

{
  *(undefined ***)this = &PTR__ControlScopeForIteration_01cc7090;
  *(int *)(*(long *)(this + 8) + 0x334) = *(int *)(*(long *)(this + 8) + 0x334) + -1;
  *(undefined ***)this = &PTR__ControlScope_01cc7020;
  *(undefined8 *)(*(long *)(this + 8) + 0x2f0) = *(undefined8 *)(this + 0x10);
  operator_delete(this);
  return;
}

