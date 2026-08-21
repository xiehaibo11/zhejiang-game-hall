
/* v8::internal::interpreter::BytecodeArrayBuilder::CallJSRuntime(int,
   v8::internal::interpreter::RegisterList) */

BytecodeArrayBuilder * __thiscall
v8::internal::interpreter::BytecodeArrayBuilder::CallJSRuntime
          (BytecodeArrayBuilder *this,undefined4 param_1,ulong param_3)

{
  byte bVar1;
  BytecodeRegisterOptimizer *pBVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  BytecodeNode local_78 [4];
  undefined4 local_74;
  int local_70;
  uint uStack_6c;
  undefined8 local_68;
  undefined4 local_60;
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
  uVar8 = uVar4 | uVar5 | uVar6;
  uVar3 = param_3;
  if (*(BytecodeRegisterOptimizer **)(this + 0x1a0) != (BytecodeRegisterOptimizer *)0x0) {
    uVar3 = BytecodeRegisterOptimizer::GetInputRegisterList
                      (*(BytecodeRegisterOptimizer **)(this + 0x1a0),param_3);
  }
  iVar7 = 0;
  if (uVar3 >> 0x20 != 0) {
    iVar7 = (int)uVar3;
  }
  local_78[0] = (BytecodeNode)0x63;
  local_70 = -5 - iVar7;
  uStack_6c = (uint)(param_3 >> 0x20);
  local_5c = 2;
  bVar1 = local_5c;
  if (0xffff < 0x7ffbU - iVar7) {
    bVar1 = 4;
  }
  if (0x7bU - iVar7 < 0x100) {
    bVar1 = 1;
  }
  if (bVar1 < 2) {
    bVar1 = 1;
  }
  if (0xffff < uStack_6c) {
    local_5c = 4;
  }
  if (uStack_6c < 0x100) {
    local_5c = 1;
  }
  if (local_5c <= bVar1) {
    local_5c = bVar1;
  }
  local_68 = 0;
  local_60 = 3;
  local_58 = uVar8;
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
  local_74 = param_1;
  BytecodeArrayWriter::Write((BytecodeArrayWriter *)(this + 0x110),local_78);
  return this;
}

