
/* v8::internal::interpreter::BytecodeArrayBuilder::ForInEnumerate(v8::internal::interpreter::Register)
    */

BytecodeArrayBuilder * __thiscall
v8::internal::interpreter::BytecodeArrayBuilder::ForInEnumerate
          (BytecodeArrayBuilder *this,int param_2)

{
  BytecodeRegisterOptimizer *pBVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  BytecodeNode local_58 [4];
  int local_54;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  byte local_3c;
  ulong local_38;
  
  pBVar1 = *(BytecodeRegisterOptimizer **)(this + 0x1a0);
  if (pBVar1 != (BytecodeRegisterOptimizer *)0x0) {
    BytecodeRegisterOptimizer::PrepareOutputRegister(pBVar1,*(undefined4 *)(pBVar1 + 8));
  }
  if (this[0x1a8] == (BytecodeArrayBuilder)0x0) {
    uVar3 = 0;
    uVar4 = 0;
    uVar2 = 0xffffffff00000000;
  }
  else {
    uVar4 = *(ulong *)(this + 0x1a8);
    this[0x1a8] = (BytecodeArrayBuilder)0x0;
    *(undefined4 *)(this + 0x1ac) = 0xffffffff;
    uVar2 = uVar4 & 0xffffffff00000000;
    uVar3 = uVar4 & 0xffffff00;
    uVar4 = uVar4 & 0xff;
  }
  uVar5 = uVar2 | uVar3 | uVar4;
  if (*(long *)(this + 0x1a0) != 0) {
    param_2 = BytecodeRegisterOptimizer::GetInputRegister();
  }
  local_58[0] = (BytecodeNode)0xa2;
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
  local_38 = uVar5;
  if (this[0x1b0] != (BytecodeArrayBuilder)0x0) {
    if ((int)uVar4 == 0) {
      local_38 = *(ulong *)(this + 0x1b0);
    }
    else if (((int)uVar4 == 1) && (this[0x1b0] == (BytecodeArrayBuilder)0x2)) {
      local_38 = uVar2 | uVar3 | 2;
    }
    this[0x1b0] = (BytecodeArrayBuilder)0x0;
    *(undefined4 *)(this + 0x1b4) = 0xffffffff;
  }
  BytecodeArrayWriter::Write((BytecodeArrayWriter *)(this + 0x110),local_58);
  return this;
}

