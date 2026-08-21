
/* v8::internal::interpreter::BytecodeArrayBuilder::ToName(v8::internal::interpreter::Register) */

BytecodeArrayBuilder * __thiscall
v8::internal::interpreter::BytecodeArrayBuilder::ToName(BytecodeArrayBuilder *this,int param_2)

{
  BytecodeRegisterOptimizer *this_00;
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  BytecodeNode local_68 [4];
  int local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  byte local_4c;
  ulong local_48;
  
  this_00 = *(BytecodeRegisterOptimizer **)(this + 0x1a0);
  if (this_00 != (BytecodeRegisterOptimizer *)0x0) {
    BytecodeRegisterOptimizer::Materialize(this_00,*(RegisterInfo **)(this_00 + 0x10));
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
  uVar4 = uVar1 | uVar2 | uVar3;
  if (*(BytecodeRegisterOptimizer **)(this + 0x1a0) != (BytecodeRegisterOptimizer *)0x0) {
    BytecodeRegisterOptimizer::PrepareOutputRegister
              (*(BytecodeRegisterOptimizer **)(this + 0x1a0),param_2);
  }
  local_68[0] = (BytecodeNode)0x74;
  local_64 = -5 - param_2;
  local_50 = 1;
  local_4c = 2;
  if (0xffff < 0x7ffbU - param_2) {
    local_4c = 4;
  }
  if (0x7bU - param_2 < 0x100) {
    local_4c = 1;
  }
  if (local_4c < 2) {
    local_4c = 1;
  }
  local_60 = 0;
  uStack_58 = 0;
  local_48 = uVar4;
  if (this[0x1b0] != (BytecodeArrayBuilder)0x0) {
    if ((int)uVar3 == 0) {
      local_48 = *(ulong *)(this + 0x1b0);
    }
    else if (((int)uVar3 == 1) && (this[0x1b0] == (BytecodeArrayBuilder)0x2)) {
      local_48 = uVar1 | uVar2 | 2;
    }
    this[0x1b0] = (BytecodeArrayBuilder)0x0;
    *(undefined4 *)(this + 0x1b4) = 0xffffffff;
  }
  BytecodeArrayWriter::Write((BytecodeArrayWriter *)(this + 0x110),local_68);
  return this;
}

