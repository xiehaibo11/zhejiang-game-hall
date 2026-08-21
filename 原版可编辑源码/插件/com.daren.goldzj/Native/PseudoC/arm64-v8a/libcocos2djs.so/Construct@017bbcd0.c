
/* v8::internal::interpreter::BytecodeArrayBuilder::Construct(v8::internal::interpreter::Register,
   v8::internal::interpreter::RegisterList, int) */

BytecodeArrayBuilder * __thiscall
v8::internal::interpreter::BytecodeArrayBuilder::Construct
          (BytecodeArrayBuilder *this,int param_2,ulong param_3,uint param_4)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  byte bVar6;
  int iVar7;
  BytecodeRegisterOptimizer *this_00;
  ulong uVar8;
  BytecodeNode local_78 [4];
  int local_74;
  int iStack_70;
  uint local_6c;
  uint uStack_68;
  undefined8 local_64;
  byte local_5c;
  ulong local_58;
  
  this_00 = *(BytecodeRegisterOptimizer **)(this + 0x1a0);
  if (this_00 != (BytecodeRegisterOptimizer *)0x0) {
    BytecodeRegisterOptimizer::Materialize(this_00,*(RegisterInfo **)(this_00 + 0x10));
    BytecodeRegisterOptimizer::PrepareOutputRegister(this_00,*(undefined4 *)(this_00 + 8));
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
  uVar8 = uVar3 | uVar4 | uVar5;
  uVar2 = param_3;
  if (*(BytecodeRegisterOptimizer **)(this + 0x1a0) == (BytecodeRegisterOptimizer *)0x0) {
    local_74 = -5 - param_2;
  }
  else {
    local_74 = BytecodeRegisterOptimizer::GetInputRegister
                         (*(BytecodeRegisterOptimizer **)(this + 0x1a0),param_2);
    local_74 = -5 - local_74;
    if (*(BytecodeRegisterOptimizer **)(this + 0x1a0) != (BytecodeRegisterOptimizer *)0x0) {
      uVar2 = BytecodeRegisterOptimizer::GetInputRegisterList
                        (*(BytecodeRegisterOptimizer **)(this + 0x1a0),param_3);
    }
  }
  iVar7 = 0;
  if (uVar2 >> 0x20 != 0) {
    iVar7 = (int)uVar2;
  }
  local_78[0] = (BytecodeNode)0x65;
  bVar6 = 2;
  bVar1 = bVar6;
  if (local_74 != (short)local_74) {
    bVar1 = 4;
  }
  iStack_70 = -5 - iVar7;
  if (local_74 == (char)local_74) {
    bVar1 = 1;
  }
  if (bVar1 < 2) {
    bVar1 = 1;
  }
  if (0xffff < 0x7ffbU - iVar7) {
    bVar6 = 4;
  }
  if (0x7bU - iVar7 < 0x100) {
    bVar6 = 1;
  }
  if (bVar6 <= bVar1) {
    bVar6 = bVar1;
  }
  local_6c = (uint)(param_3 >> 0x20);
  local_5c = 2;
  bVar1 = local_5c;
  if (0xffff < local_6c) {
    bVar1 = 4;
  }
  if (local_6c < 0x100) {
    bVar1 = 1;
  }
  if (bVar1 <= bVar6) {
    bVar1 = bVar6;
  }
  if (0xffff < param_4) {
    local_5c = 4;
  }
  if (param_4 < 0x100) {
    local_5c = 1;
  }
  if (local_5c <= bVar1) {
    local_5c = bVar1;
  }
  local_64 = 0x400000000;
  local_58 = uVar8;
  if (this[0x1b0] != (BytecodeArrayBuilder)0x0) {
    if ((int)uVar5 == 0) {
      local_58 = *(ulong *)(this + 0x1b0);
    }
    else if (((int)uVar5 == 1) && (this[0x1b0] == (BytecodeArrayBuilder)0x2)) {
      local_58 = uVar3 | uVar4 | 2;
    }
    this[0x1b0] = (BytecodeArrayBuilder)0x0;
    *(undefined4 *)(this + 0x1b4) = 0xffffffff;
  }
  uStack_68 = param_4;
  BytecodeArrayWriter::Write((BytecodeArrayWriter *)(this + 0x110),local_78);
  return this;
}

