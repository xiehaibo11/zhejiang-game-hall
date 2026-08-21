
/* v8::internal::interpreter::BytecodeArrayBuilder::PopContext(v8::internal::interpreter::Register)
    */

BytecodeArrayBuilder * __thiscall
v8::internal::interpreter::BytecodeArrayBuilder::PopContext(BytecodeArrayBuilder *this,int param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  BytecodeNode local_58 [4];
  int local_54;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  byte local_3c;
  ulong local_38;
  
  if ((this[0x1a8] == (BytecodeArrayBuilder)0x0) ||
     ((this[0x1a8] != (BytecodeArrayBuilder)0x2 &&
      (FLAG_ignition_filter_expression_positions != '\0')))) {
    uVar2 = 0;
    uVar3 = 0;
    uVar1 = 0xffffffff00000000;
  }
  else {
    uVar3 = *(ulong *)(this + 0x1a8);
    this[0x1a8] = (BytecodeArrayBuilder)0x0;
    *(undefined4 *)(this + 0x1ac) = 0xffffffff;
    uVar1 = uVar3 & 0xffffffff00000000;
    uVar2 = uVar3 & 0xffffff00;
    uVar3 = uVar3 & 0xff;
  }
  uVar4 = uVar1 | uVar2 | uVar3;
  if (*(long *)(this + 0x1a0) != 0) {
    param_2 = BytecodeRegisterOptimizer::GetInputRegister();
  }
  local_58[0] = (BytecodeNode)0x17;
  local_54 = -5 - param_2;
  local_40 = 1;
  local_3c = 2;
  if (0xffff < 0x7ffbU - param_2) {
    local_3c = 4;
  }
  if (0x7bU - param_2 < 0x100) {
    local_3c = 1;
  }
  if (local_3c < 2) {
    local_3c = 1;
  }
  local_50 = 0;
  uStack_48 = 0;
  local_38 = uVar4;
  if (this[0x1b0] != (BytecodeArrayBuilder)0x0) {
    if ((int)uVar3 == 0) {
      local_38 = *(ulong *)(this + 0x1b0);
    }
    else if (((int)uVar3 == 1) && (this[0x1b0] == (BytecodeArrayBuilder)0x2)) {
      local_38 = uVar1 | uVar2 | 2;
    }
    this[0x1b0] = (BytecodeArrayBuilder)0x0;
    *(undefined4 *)(this + 0x1b4) = 0xffffffff;
  }
  BytecodeArrayWriter::Write((BytecodeArrayWriter *)(this + 0x110),local_58);
  return this;
}

