
/* v8::internal::ConstantPool::ConstantPool(v8::internal::Assembler*) */

void __thiscall v8::internal::ConstantPool::ConstantPool(ConstantPool *this,Assembler *param_1)

{
  *(Assembler **)this = param_1;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 8) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x18) = 0;
  *(ConstantPool **)(this + 0x10) = this + 0x18;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  return;
}

