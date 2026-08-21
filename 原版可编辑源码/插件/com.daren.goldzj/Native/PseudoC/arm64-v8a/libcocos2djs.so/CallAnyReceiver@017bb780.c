
/* v8::internal::interpreter::BytecodeArrayBuilder::CallAnyReceiver(v8::internal::interpreter::Register,
   v8::internal::interpreter::RegisterList, int) */

BytecodeArrayBuilder * __thiscall
v8::internal::interpreter::BytecodeArrayBuilder::CallAnyReceiver
          (BytecodeArrayBuilder *this,int param_2,ulong param_3,uint param_4)

{
  byte bVar1;
  BytecodeRegisterOptimizer *pBVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  byte bVar7;
  int iVar8;
  ulong uVar9;
  BytecodeNode local_78 [4];
  int local_74;
  int iStack_70;
  uint local_6c;
  uint uStack_68;
  undefined8 local_64;
  byte local_5c;
  ulong local_58;
  
  pBVar2 = *(BytecodeRegisterOptimizer **)(this + 0x1a0);
  if (pBVar2 != (BytecodeRegisterOptimizer *)0x0) {
    BytecodeRegisterOptimizer::PrepareOutputRegister(pBVar2,*(undefined4 *)(pBVar2 + 8));
  }
  if (this[0x1a8] == (BytecodeArrayBuilder)0x0) {
    uVar5 = 0;
    uVar6 = 0;
    uVar4 = 0xffffffff00000000;
  }
  else {
    uVar6 = *(ulong *)(this + 0x1a8);
    this[0x1a8] = (BytecodeArrayBuilder)0x0;
    *(undefined4 *)(this + 0x1ac) = 0xffffffff;
    uVar4 = uVar6 & 0xffffffff00000000;
    uVar5 = uVar6 & 0xffffff00;
    uVar6 = uVar6 & 0xff;
  }
  uVar9 = uVar4 | uVar5 | uVar6;
  uVar3 = param_3;
  if (*(BytecodeRegisterOptimizer **)(this + 0x1a0) == (BytecodeRegisterOptimizer *)0x0) {
    local_74 = -5 - param_2;
  }
  else {
    local_74 = BytecodeRegisterOptimizer::GetInputRegister
                         (*(BytecodeRegisterOptimizer **)(this + 0x1a0),param_2);
    local_74 = -5 - local_74;
    if (*(BytecodeRegisterOptimizer **)(this + 0x1a0) != (BytecodeRegisterOptimizer *)0x0) {
      uVar3 = BytecodeRegisterOptimizer::GetInputRegisterList
                        (*(BytecodeRegisterOptimizer **)(this + 0x1a0),param_3);
    }
  }
  iVar8 = 0;
  if (uVar3 >> 0x20 != 0) {
    iVar8 = (int)uVar3;
  }
  local_78[0] = (BytecodeNode)0x56;
  bVar7 = 2;
  bVar1 = bVar7;
  if (local_74 != (short)local_74) {
    bVar1 = 4;
  }
  iStack_70 = -5 - iVar8;
  if (local_74 == (char)local_74) {
    bVar1 = 1;
  }
  if (bVar1 < 2) {
    bVar1 = 1;
  }
  if (0xffff < 0x7ffbU - iVar8) {
    bVar7 = 4;
  }
  if (0x7bU - iVar8 < 0x100) {
    bVar7 = 1;
  }
  if (bVar7 <= bVar1) {
    bVar7 = bVar1;
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
  if (bVar1 <= bVar7) {
    bVar1 = bVar7;
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
  local_58 = uVar9;
  if (this[0x1b0] != (BytecodeArrayBuilder)0x0) {
    if ((int)uVar6 == 0) {
      local_58 = *(ulong *)(this + 0x1b0);
    }
    else if (((int)uVar6 == 1) && (this[0x1b0] == (BytecodeArrayBuilder)0x2)) {
      local_58 = uVar4 | uVar5 | 2;
    }
    this[0x1b0] = (BytecodeArrayBuilder)0x0;
    *(undefined4 *)(this + 0x1b4) = 0xffffffff;
  }
  uStack_68 = param_4;
  BytecodeArrayWriter::Write((BytecodeArrayWriter *)(this + 0x110),local_78);
  return this;
}

