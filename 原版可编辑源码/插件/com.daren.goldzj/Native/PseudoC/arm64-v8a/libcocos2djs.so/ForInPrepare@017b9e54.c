
/* v8::internal::interpreter::BytecodeArrayBuilder::ForInPrepare(v8::internal::interpreter::RegisterList,
   int) */

BytecodeArrayBuilder * __thiscall
v8::internal::interpreter::BytecodeArrayBuilder::ForInPrepare
          (BytecodeArrayBuilder *this,ulong param_2,uint param_3)

{
  byte bVar1;
  BytecodeRegisterOptimizer *this_00;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  BytecodeNode local_68 [4];
  int local_64;
  uint uStack_60;
  undefined8 local_5c;
  undefined8 uStack_54;
  byte local_4c;
  ulong local_48;
  
  this_00 = *(BytecodeRegisterOptimizer **)(this + 0x1a0);
  if (this_00 != (BytecodeRegisterOptimizer *)0x0) {
    BytecodeRegisterOptimizer::Materialize(this_00,*(RegisterInfo **)(this_00 + 0x10));
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
  uVar6 = uVar2 | uVar3 | uVar4;
  if (*(BytecodeRegisterOptimizer **)(this + 0x1a0) != (BytecodeRegisterOptimizer *)0x0) {
    BytecodeRegisterOptimizer::PrepareOutputRegisterList
              (*(BytecodeRegisterOptimizer **)(this + 0x1a0),param_2);
  }
  iVar5 = 0;
  if (param_2 >> 0x20 != 0) {
    iVar5 = (int)param_2;
  }
  local_68[0] = (BytecodeNode)0xa3;
  local_64 = -5 - iVar5;
  local_4c = 2;
  bVar1 = local_4c;
  if (0xffff < 0x7ffbU - iVar5) {
    bVar1 = 4;
  }
  if (0x7bU - iVar5 < 0x100) {
    bVar1 = 1;
  }
  if (bVar1 < 2) {
    bVar1 = 1;
  }
  if (0xffff < param_3) {
    local_4c = 4;
  }
  if (param_3 < 0x100) {
    local_4c = 1;
  }
  if (local_4c <= bVar1) {
    local_4c = bVar1;
  }
  uStack_54 = 0x200000000;
  local_5c = 0;
  local_48 = uVar6;
  if (this[0x1b0] != (BytecodeArrayBuilder)0x0) {
    if ((int)uVar4 == 0) {
      local_48 = *(ulong *)(this + 0x1b0);
    }
    else if (((int)uVar4 == 1) && (this[0x1b0] == (BytecodeArrayBuilder)0x2)) {
      local_48 = uVar2 | uVar3 | 2;
    }
    this[0x1b0] = (BytecodeArrayBuilder)0x0;
    *(undefined4 *)(this + 0x1b4) = 0xffffffff;
  }
  uStack_60 = param_3;
  BytecodeArrayWriter::Write((BytecodeArrayWriter *)(this + 0x110),local_68);
  return this;
}

