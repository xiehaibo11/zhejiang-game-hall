
/* v8::internal::interpreter::BytecodeGenerator::ControlScopeForTryCatch::~ControlScopeForTryCatch()
    */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::ControlScopeForTryCatch::~ControlScopeForTryCatch
          (ControlScopeForTryCatch *this)

{
  *(undefined ***)this = &PTR__ControlScope_01cc7020;
  *(undefined8 *)(*(long *)(this + 8) + 0x2f0) = *(undefined8 *)(this + 0x10);
  operator_delete(this);
  return;
}

