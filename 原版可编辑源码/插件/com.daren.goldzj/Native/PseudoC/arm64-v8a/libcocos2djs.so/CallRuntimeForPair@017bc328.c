
/* v8::internal::interpreter::BytecodeArrayBuilder::CallRuntimeForPair(v8::internal::Runtime::FunctionId,
   v8::internal::interpreter::RegisterList, v8::internal::interpreter::RegisterList) */

BytecodeArrayBuilder * __thiscall
v8::internal::interpreter::BytecodeArrayBuilder::CallRuntimeForPair
          (BytecodeArrayBuilder *this,uint param_2,undefined8 param_3,ulong param_4)

{
  byte bVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  byte bVar8;
  int iVar9;
  ulong uVar10;
  BytecodeNode local_78 [4];
  uint local_74;
  int iStack_70;
  int iStack_68;
  undefined8 local_64;
  byte local_5c;
  ulong local_58;
  
  uVar3 = (uint)((ulong)param_3 >> 0x20);
  if (this[0x1a8] == (BytecodeArrayBuilder)0x0) {
    uVar6 = 0;
    uVar7 = 0;
    uVar5 = 0xffffffff00000000;
  }
  else {
    uVar7 = *(ulong *)(this + 0x1a8);
    this[0x1a8] = (BytecodeArrayBuilder)0x0;
    *(undefined4 *)(this + 0x1ac) = 0xffffffff;
    uVar5 = uVar7 & 0xffffffff00000000;
    uVar6 = uVar7 & 0xffffff00;
    uVar7 = uVar7 & 0xff;
  }
  uVar10 = uVar5 | uVar6 | uVar7;
  if (*(BytecodeRegisterOptimizer **)(this + 0x1a0) == (BytecodeRegisterOptimizer *)0x0) {
    iVar4 = 0;
    if (uVar3 != 0) {
      iVar4 = (int)param_3;
    }
    iVar4 = -5 - iVar4;
  }
  else {
    uVar2 = BytecodeRegisterOptimizer::GetInputRegisterList
                      (*(BytecodeRegisterOptimizer **)(this + 0x1a0),param_3);
    iVar4 = 0;
    if (uVar2 >> 0x20 != 0) {
      iVar4 = (int)uVar2;
    }
    iVar4 = -5 - iVar4;
    if (*(BytecodeRegisterOptimizer **)(this + 0x1a0) != (BytecodeRegisterOptimizer *)0x0) {
      BytecodeRegisterOptimizer::PrepareOutputRegisterList
                (*(BytecodeRegisterOptimizer **)(this + 0x1a0),param_4);
    }
  }
  iVar9 = 0;
  if (param_4 >> 0x20 != 0) {
    iVar9 = (int)param_4;
  }
  local_78[0] = (BytecodeNode)0x62;
  bVar8 = 2;
  bVar1 = bVar8;
  if (iVar4 != (short)iVar4) {
    bVar1 = 4;
  }
  iStack_68 = -5 - iVar9;
  if (iVar4 == (char)iVar4) {
    bVar1 = 1;
  }
  if (bVar1 < 2) {
    bVar1 = 1;
  }
  if (0xffff < uVar3) {
    bVar8 = 4;
  }
  if (uVar3 < 0x100) {
    bVar8 = 1;
  }
  if (bVar8 <= bVar1) {
    bVar8 = bVar1;
  }
  local_5c = 2;
  if (0xffff < 0x7ffbU - iVar9) {
    local_5c = 4;
  }
  if (0x7bU - iVar9 < 0x100) {
    local_5c = 1;
  }
  if (local_5c <= bVar8) {
    local_5c = bVar8;
  }
  local_64 = 0x400000000;
  local_58 = uVar10;
  if (this[0x1b0] != (BytecodeArrayBuilder)0x0) {
    if ((int)uVar7 == 0) {
      local_58 = *(ulong *)(this + 0x1b0);
    }
    else if (((int)uVar7 == 1) && (this[0x1b0] == (BytecodeArrayBuilder)0x2)) {
      local_58 = uVar5 | uVar6 | 2;
    }
    this[0x1b0] = (BytecodeArrayBuilder)0x0;
    *(undefined4 *)(this + 0x1b4) = 0xffffffff;
  }
  local_74 = param_2 & 0xffff;
  iStack_70 = iVar4;
  BytecodeArrayWriter::Write((BytecodeArrayWriter *)(this + 0x110),local_78);
  return this;
}

