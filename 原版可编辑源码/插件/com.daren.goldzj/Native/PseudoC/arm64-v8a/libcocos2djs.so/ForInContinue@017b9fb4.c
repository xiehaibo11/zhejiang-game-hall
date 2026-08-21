
/* v8::internal::interpreter::BytecodeArrayBuilder::ForInContinue(v8::internal::interpreter::Register,
   v8::internal::interpreter::Register) */

BytecodeArrayBuilder * __thiscall
v8::internal::interpreter::BytecodeArrayBuilder::ForInContinue
          (BytecodeArrayBuilder *this,int param_2,int param_3)

{
  byte bVar1;
  BytecodeRegisterOptimizer *pBVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  BytecodeNode local_68 [4];
  int local_64;
  int iStack_60;
  undefined8 local_5c;
  undefined8 uStack_54;
  byte local_4c;
  ulong local_48;
  
  pBVar2 = *(BytecodeRegisterOptimizer **)(this + 0x1a0);
  if (pBVar2 != (BytecodeRegisterOptimizer *)0x0) {
    BytecodeRegisterOptimizer::PrepareOutputRegister(pBVar2,*(undefined4 *)(pBVar2 + 8));
  }
  if (this[0x1a8] == (BytecodeArrayBuilder)0x0) {
    uVar4 = 0;
    uVar5 = 0;
    uVar3 = 0xffffffff00000000;
  }
  else {
    uVar5 = *(ulong *)(this + 0x1a8);
    this[0x1a8] = (BytecodeArrayBuilder)0x0;
    *(undefined4 *)(this + 0x1ac) = 0xffffffff;
    uVar3 = uVar5 & 0xffffffff00000000;
    uVar4 = uVar5 & 0xffffff00;
    uVar5 = uVar5 & 0xff;
  }
  uVar6 = uVar3 | uVar4 | uVar5;
  if (*(BytecodeRegisterOptimizer **)(this + 0x1a0) == (BytecodeRegisterOptimizer *)0x0) {
    local_64 = -5 - param_2;
  }
  else {
    local_64 = BytecodeRegisterOptimizer::GetInputRegister
                         (*(BytecodeRegisterOptimizer **)(this + 0x1a0),param_2);
    local_64 = -5 - local_64;
    if (*(BytecodeRegisterOptimizer **)(this + 0x1a0) != (BytecodeRegisterOptimizer *)0x0) {
      param_3 = BytecodeRegisterOptimizer::GetInputRegister
                          (*(BytecodeRegisterOptimizer **)(this + 0x1a0),param_3);
    }
  }
  local_4c = 2;
  bVar1 = local_4c;
  if (local_64 != (short)local_64) {
    bVar1 = 4;
  }
  local_68[0] = (BytecodeNode)0xa4;
  if (local_64 == (char)local_64) {
    bVar1 = 1;
  }
  iStack_60 = -5 - param_3;
  if (bVar1 < 2) {
    bVar1 = 1;
  }
  if (0xffff < 0x7ffbU - param_3) {
    local_4c = 4;
  }
  if (0x7bU - param_3 < 0x100) {
    local_4c = 1;
  }
  if (local_4c <= bVar1) {
    local_4c = bVar1;
  }
  uStack_54 = 0x200000000;
  local_5c = 0;
  local_48 = uVar6;
  if (this[0x1b0] != (BytecodeArrayBuilder)0x0) {
    if ((int)uVar5 == 0) {
      local_48 = *(ulong *)(this + 0x1b0);
    }
    else if (((int)uVar5 == 1) && (this[0x1b0] == (BytecodeArrayBuilder)0x2)) {
      local_48 = uVar3 | uVar4 | 2;
    }
    this[0x1b0] = (BytecodeArrayBuilder)0x0;
    *(undefined4 *)(this + 0x1b4) = 0xffffffff;
  }
  BytecodeArrayWriter::Write((BytecodeArrayWriter *)(this + 0x110),local_68);
  return this;
}

