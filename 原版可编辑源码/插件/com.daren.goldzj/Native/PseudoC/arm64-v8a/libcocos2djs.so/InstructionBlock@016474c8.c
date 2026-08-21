
/* v8::internal::compiler::InstructionBlock::InstructionBlock(v8::internal::Zone*,
   v8::internal::compiler::RpoNumber, v8::internal::compiler::RpoNumber,
   v8::internal::compiler::RpoNumber, bool, bool) */

void __thiscall
v8::internal::compiler::InstructionBlock::InstructionBlock
          (InstructionBlock *this,undefined8 param_1,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,byte param_6,byte param_7)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = param_1;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = param_1;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = param_1;
  *(undefined4 *)(this + 0x68) = param_4;
  *(undefined4 *)(this + 0x6c) = param_5;
  this[0x7e] = (InstructionBlock)0x0;
  *(undefined4 *)(this + 0x60) = 0xffffffff;
  *(undefined4 *)(this + 100) = param_3;
  *(undefined4 *)(this + 0x74) = 0xffffffff;
  this[0x78] = (InstructionBlock)(param_6 & 1);
  this[0x79] = (InstructionBlock)(param_7 & 1);
  *(undefined4 *)(this + 0x7a) = 0;
  return;
}

