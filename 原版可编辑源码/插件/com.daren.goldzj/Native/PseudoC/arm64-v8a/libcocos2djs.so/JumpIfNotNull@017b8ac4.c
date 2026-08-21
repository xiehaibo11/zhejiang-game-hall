
/* v8::internal::interpreter::BytecodeArrayBuilder::JumpIfNotNull(v8::internal::interpreter::BytecodeLabel*)
    */

BytecodeArrayBuilder * __thiscall
v8::internal::interpreter::BytecodeArrayBuilder::JumpIfNotNull
          (BytecodeArrayBuilder *this,BytecodeLabel *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  BytecodeRegisterOptimizer *this_00;
  BytecodeNode local_58 [4];
  undefined8 local_54;
  undefined8 local_4c;
  undefined8 local_44;
  undefined1 local_3c;
  ulong local_38;
  
  this_00 = *(BytecodeRegisterOptimizer **)(this + 0x1a0);
  if (this_00 != (BytecodeRegisterOptimizer *)0x0) {
    BytecodeRegisterOptimizer::Flush(this_00);
    BytecodeRegisterOptimizer::Materialize(this_00,*(RegisterInfo **)(this_00 + 0x10));
  }
  if ((this[0x1a8] == (BytecodeArrayBuilder)0x0) ||
     ((this[0x1a8] != (BytecodeArrayBuilder)0x2 &&
      (FLAG_ignition_filter_expression_positions != '\0')))) {
    uVar3 = 0;
    uVar1 = 0;
    uVar2 = 0xffffffff00000000;
  }
  else {
    uVar1 = *(ulong *)(this + 0x1a8);
    this[0x1a8] = (BytecodeArrayBuilder)0x0;
    *(undefined4 *)(this + 0x1ac) = 0xffffffff;
    uVar2 = uVar1 & 0xffffffff00000000;
    uVar3 = uVar1 & 0xffffff00;
    uVar1 = uVar1 & 0xff;
  }
  local_38 = uVar2 | uVar3 | uVar1;
  local_4c = 0;
  local_58[0] = (BytecodeNode)0x9c;
  local_3c = 1;
  local_44 = 0x100000000;
  local_54 = 0;
  if (this[0x1b0] != (BytecodeArrayBuilder)0x0) {
    if ((int)uVar1 == 0) {
      local_38 = *(ulong *)(this + 0x1b0);
    }
    else if (((int)uVar1 == 1) && (this[0x1b0] == (BytecodeArrayBuilder)0x2)) {
      local_38 = uVar2 | uVar3 | 2;
    }
    this[0x1b0] = (BytecodeArrayBuilder)0x0;
    *(undefined4 *)(this + 0x1b4) = 0xffffffff;
  }
  BytecodeArrayWriter::WriteJump((BytecodeArrayWriter *)(this + 0x110),local_58,param_1);
  return this;
}

