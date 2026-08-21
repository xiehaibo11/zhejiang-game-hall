
/* v8::internal::interpreter::BytecodeArrayBuilder::ToNumber(int) */

BytecodeArrayBuilder * __thiscall
v8::internal::interpreter::BytecodeArrayBuilder::ToNumber(BytecodeArrayBuilder *this,int param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  BytecodeRegisterOptimizer *this_00;
  BytecodeNode local_58 [4];
  int local_54;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  byte local_3c;
  ulong local_38;
  
  this_00 = *(BytecodeRegisterOptimizer **)(this + 0x1a0);
  if (this_00 != (BytecodeRegisterOptimizer *)0x0) {
    BytecodeRegisterOptimizer::Materialize(this_00,*(RegisterInfo **)(this_00 + 0x10));
    BytecodeRegisterOptimizer::PrepareOutputRegister(this_00,*(undefined4 *)(this_00 + 8));
  }
  if (this[0x1a8] == (BytecodeArrayBuilder)0x0) {
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
  local_3c = 2;
  if (0xffff < (uint)param_1) {
    local_3c = 4;
  }
  if ((uint)param_1 < 0x100) {
    local_3c = 1;
  }
  local_38 = uVar1 | uVar2 | uVar3;
  if (local_3c < 2) {
    local_3c = 1;
  }
  local_58[0] = (BytecodeNode)0x75;
  local_40 = 1;
  local_50 = 0;
  uStack_48 = 0;
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
  local_54 = param_1;
  BytecodeArrayWriter::Write((BytecodeArrayWriter *)(this + 0x110),local_58);
  return this;
}

