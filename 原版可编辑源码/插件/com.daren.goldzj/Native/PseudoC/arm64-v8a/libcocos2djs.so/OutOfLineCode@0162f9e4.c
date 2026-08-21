
/* v8::internal::compiler::OutOfLineCode::OutOfLineCode(v8::internal::compiler::CodeGenerator*) */

void __thiscall
v8::internal::compiler::OutOfLineCode::OutOfLineCode(OutOfLineCode *this,CodeGenerator *param_1)

{
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined ***)this = &PTR__OutOfLineCode_01cca610;
  *(undefined8 *)(this + 0x18) = **(undefined8 **)(param_1 + 0x18);
  *(CodeGenerator **)(this + 0x20) = param_1 + 0xd0;
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x3d8);
  *(OutOfLineCode **)(param_1 + 0x3d8) = this;
  return;
}

