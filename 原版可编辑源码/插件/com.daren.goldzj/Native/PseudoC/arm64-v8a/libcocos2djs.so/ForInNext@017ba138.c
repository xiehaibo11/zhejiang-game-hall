
/* v8::internal::interpreter::BytecodeArrayBuilder::ForInNext(v8::internal::interpreter::Register,
   v8::internal::interpreter::Register, v8::internal::interpreter::RegisterList, int) */

BytecodeArrayBuilder * __thiscall
v8::internal::interpreter::BytecodeArrayBuilder::ForInNext
          (BytecodeArrayBuilder *this,int param_2,int param_3,ulong param_4,uint param_5)

{
  byte bVar1;
  BytecodeRegisterOptimizer *pBVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  byte bVar6;
  int iVar7;
  ulong uVar8;
  BytecodeNode local_88 [4];
  int local_84;
  int iStack_80;
  int local_7c;
  uint uStack_78;
  undefined8 local_74;
  byte local_6c;
  ulong local_68;
  
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
  uVar8 = uVar3 | uVar4 | uVar5;
  if (*(BytecodeRegisterOptimizer **)(this + 0x1a0) == (BytecodeRegisterOptimizer *)0x0) {
    param_2 = -5 - param_2;
    iStack_80 = -5 - param_3;
  }
  else {
    param_2 = BytecodeRegisterOptimizer::GetInputRegister
                        (*(BytecodeRegisterOptimizer **)(this + 0x1a0),param_2);
    param_2 = -5 - param_2;
    if (*(BytecodeRegisterOptimizer **)(this + 0x1a0) == (BytecodeRegisterOptimizer *)0x0) {
      iStack_80 = -5 - param_3;
    }
    else {
      iStack_80 = BytecodeRegisterOptimizer::GetInputRegister
                            (*(BytecodeRegisterOptimizer **)(this + 0x1a0),param_3);
      iStack_80 = -5 - iStack_80;
      if (*(BytecodeRegisterOptimizer **)(this + 0x1a0) != (BytecodeRegisterOptimizer *)0x0) {
        param_4 = BytecodeRegisterOptimizer::GetInputRegisterList
                            (*(BytecodeRegisterOptimizer **)(this + 0x1a0),param_4);
      }
    }
  }
  iVar7 = 0;
  if (param_4 >> 0x20 != 0) {
    iVar7 = (int)param_4;
  }
  local_88[0] = (BytecodeNode)0xa5;
  bVar6 = 2;
  bVar1 = bVar6;
  if (param_2 != (short)param_2) {
    bVar1 = 4;
  }
  local_7c = -5 - iVar7;
  if (param_2 == (char)param_2) {
    bVar1 = 1;
  }
  if (bVar1 < 2) {
    bVar1 = 1;
  }
  if (iStack_80 != (short)iStack_80) {
    bVar6 = 4;
  }
  if (iStack_80 == (char)iStack_80) {
    bVar6 = 1;
  }
  if (bVar6 <= bVar1) {
    bVar6 = bVar1;
  }
  local_6c = 2;
  bVar1 = local_6c;
  if (0xffff < 0x7ffbU - iVar7) {
    bVar1 = 4;
  }
  if (0x7bU - iVar7 < 0x100) {
    bVar1 = 1;
  }
  if (bVar1 <= bVar6) {
    bVar1 = bVar6;
  }
  if (0xffff < param_5) {
    local_6c = 4;
  }
  if (param_5 < 0x100) {
    local_6c = 1;
  }
  if (local_6c <= bVar1) {
    local_6c = bVar1;
  }
  local_74 = 0x400000000;
  local_68 = uVar8;
  if (this[0x1b0] != (BytecodeArrayBuilder)0x0) {
    if ((int)uVar5 == 0) {
      local_68 = *(ulong *)(this + 0x1b0);
    }
    else if (((int)uVar5 == 1) && (this[0x1b0] == (BytecodeArrayBuilder)0x2)) {
      local_68 = uVar3 | uVar4 | 2;
    }
    this[0x1b0] = (BytecodeArrayBuilder)0x0;
    *(undefined4 *)(this + 0x1b4) = 0xffffffff;
  }
  local_84 = param_2;
  uStack_78 = param_5;
  BytecodeArrayWriter::Write((BytecodeArrayWriter *)(this + 0x110),local_88);
  return this;
}

