
/* v8::internal::interpreter::BytecodeArrayBuilder::ResumeGenerator(v8::internal::interpreter::Register,
   v8::internal::interpreter::RegisterList) */

BytecodeArrayBuilder * __thiscall
v8::internal::interpreter::BytecodeArrayBuilder::ResumeGenerator
          (BytecodeArrayBuilder *this,int param_2,ulong param_3)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  ulong uVar5;
  int iVar6;
  BytecodeRegisterOptimizer *this_00;
  ulong uVar7;
  BytecodeNode local_78 [4];
  int local_74;
  int iStack_70;
  uint local_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 uStack_60;
  byte local_5c;
  ulong local_58;
  
  this_00 = *(BytecodeRegisterOptimizer **)(this + 0x1a0);
  if (this_00 != (BytecodeRegisterOptimizer *)0x0) {
    BytecodeRegisterOptimizer::Flush(this_00);
    BytecodeRegisterOptimizer::PrepareOutputRegister(this_00,*(undefined4 *)(this_00 + 8));
  }
  if (this[0x1a8] == (BytecodeArrayBuilder)0x0) {
    uVar3 = 0;
    uVar5 = 0;
    uVar2 = 0xffffffff00000000;
  }
  else {
    uVar5 = *(ulong *)(this + 0x1a8);
    this[0x1a8] = (BytecodeArrayBuilder)0x0;
    *(undefined4 *)(this + 0x1ac) = 0xffffffff;
    uVar2 = uVar5 & 0xffffffff00000000;
    uVar3 = uVar5 & 0xffffff00;
    uVar5 = uVar5 & 0xff;
  }
  uVar7 = uVar2 | uVar3 | uVar5;
  if (*(BytecodeRegisterOptimizer **)(this + 0x1a0) == (BytecodeRegisterOptimizer *)0x0) {
    local_74 = -5 - param_2;
  }
  else {
    local_74 = BytecodeRegisterOptimizer::GetInputRegister
                         (*(BytecodeRegisterOptimizer **)(this + 0x1a0),param_2);
    local_74 = -5 - local_74;
    if (*(BytecodeRegisterOptimizer **)(this + 0x1a0) != (BytecodeRegisterOptimizer *)0x0) {
      BytecodeRegisterOptimizer::PrepareOutputRegisterList
                (*(BytecodeRegisterOptimizer **)(this + 0x1a0),param_3);
    }
  }
  iVar6 = 0;
  if (param_3 >> 0x20 != 0) {
    iVar6 = (int)param_3;
  }
  local_78[0] = (BytecodeNode)0xb1;
  bVar4 = 2;
  bVar1 = bVar4;
  if (local_74 != (short)local_74) {
    bVar1 = 4;
  }
  if (local_74 == (char)local_74) {
    bVar1 = 1;
  }
  iStack_70 = -5 - iVar6;
  if (bVar1 < 2) {
    bVar1 = 1;
  }
  if (0xffff < 0x7ffbU - iVar6) {
    bVar4 = 4;
  }
  if (0x7bU - iVar6 < 0x100) {
    bVar4 = 1;
  }
  if (bVar4 <= bVar1) {
    bVar4 = bVar1;
  }
  local_6c = (uint)(param_3 >> 0x20);
  local_5c = 2;
  if (0xffff < local_6c) {
    local_5c = 4;
  }
  if (local_6c < 0x100) {
    local_5c = 1;
  }
  if (local_5c <= bVar4) {
    local_5c = bVar4;
  }
  uStack_68 = 0;
  local_64 = 0;
  uStack_60 = 3;
  local_58 = uVar7;
  if (this[0x1b0] != (BytecodeArrayBuilder)0x0) {
    if ((int)uVar5 == 0) {
      local_58 = *(ulong *)(this + 0x1b0);
    }
    else if (((int)uVar5 == 1) && (this[0x1b0] == (BytecodeArrayBuilder)0x2)) {
      local_58 = uVar2 | uVar3 | 2;
    }
    this[0x1b0] = (BytecodeArrayBuilder)0x0;
    *(undefined4 *)(this + 0x1b4) = 0xffffffff;
  }
  BytecodeArrayWriter::Write((BytecodeArrayWriter *)(this + 0x110),local_78);
  return this;
}

