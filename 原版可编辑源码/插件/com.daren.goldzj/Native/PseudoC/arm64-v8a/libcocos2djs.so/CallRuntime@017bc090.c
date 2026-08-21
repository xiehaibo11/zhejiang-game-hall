
/* v8::internal::interpreter::BytecodeArrayBuilder::CallRuntime(v8::internal::Runtime::FunctionId,
   v8::internal::interpreter::RegisterList) */

BytecodeArrayBuilder * __thiscall
v8::internal::interpreter::BytecodeArrayBuilder::CallRuntime
          (BytecodeArrayBuilder *this,undefined4 param_2,ulong param_3)

{
  byte bVar1;
  undefined4 uVar2;
  ulong uVar3;
  BytecodeArrayBuilder BVar4;
  BytecodeRegisterOptimizer *pBVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  uint uVar9;
  BytecodeNode local_78 [4];
  undefined4 local_74;
  int local_70;
  uint uStack_6c;
  undefined8 local_68;
  undefined4 local_60;
  byte local_5c;
  ulong local_58;
  
  uVar3 = IntrinsicsHelper::IsSupported(param_2);
  uVar9 = (uint)(param_3 >> 0x20);
  if ((uVar3 & 1) == 0) {
    pBVar5 = *(BytecodeRegisterOptimizer **)(this + 0x1a0);
    if (pBVar5 != (BytecodeRegisterOptimizer *)0x0) {
      BytecodeRegisterOptimizer::PrepareOutputRegister(pBVar5,*(undefined4 *)(pBVar5 + 8));
    }
    if (this[0x1a8] == (BytecodeArrayBuilder)0x0) {
      uVar6 = 0;
      uVar7 = 0;
      uVar3 = 0xffffffff00000000;
    }
    else {
      uVar7 = *(ulong *)(this + 0x1a8);
      this[0x1a8] = (BytecodeArrayBuilder)0x0;
      *(undefined4 *)(this + 0x1ac) = 0xffffffff;
      uVar3 = uVar7 & 0xffffffff00000000;
      uVar6 = uVar7 & 0xffffff00;
      uVar7 = uVar7 & 0xff;
    }
    uVar3 = uVar3 | uVar6;
    if (*(BytecodeRegisterOptimizer **)(this + 0x1a0) != (BytecodeRegisterOptimizer *)0x0) {
      param_3 = BytecodeRegisterOptimizer::GetInputRegisterList
                          (*(BytecodeRegisterOptimizer **)(this + 0x1a0),param_3);
    }
    iVar8 = 0;
    if (param_3 >> 0x20 != 0) {
      iVar8 = (int)param_3;
    }
    local_78[0] = (BytecodeNode)0x61;
    local_70 = -5 - iVar8;
    local_5c = 2;
    bVar1 = local_5c;
    if (0xffff < 0x7ffbU - iVar8) {
      bVar1 = 4;
    }
    if (0x7bU - iVar8 < 0x100) {
      bVar1 = 1;
    }
    if (bVar1 < 2) {
      bVar1 = 1;
    }
    if (0xffff < uVar9) {
      local_5c = 4;
    }
    if (uVar9 < 0x100) {
      local_5c = 1;
    }
    if (local_5c <= bVar1) {
      local_5c = bVar1;
    }
    BVar4 = this[0x1b0];
    local_74 = param_2;
    local_58 = uVar3 | uVar7;
    if (BVar4 == (BytecodeArrayBuilder)0x0) goto LAB_017bc2e4;
    if ((int)uVar7 != 0) goto LAB_017bc204;
LAB_017bc2d0:
    local_58 = *(ulong *)(this + 0x1b0);
  }
  else {
    uVar2 = IntrinsicsHelper::FromRuntimeId(param_2);
    pBVar5 = *(BytecodeRegisterOptimizer **)(this + 0x1a0);
    if (pBVar5 != (BytecodeRegisterOptimizer *)0x0) {
      BytecodeRegisterOptimizer::PrepareOutputRegister(pBVar5,*(undefined4 *)(pBVar5 + 8));
    }
    if (this[0x1a8] == (BytecodeArrayBuilder)0x0) {
      uVar6 = 0;
      uVar7 = 0;
      uVar3 = 0xffffffff00000000;
    }
    else {
      uVar7 = *(ulong *)(this + 0x1a8);
      this[0x1a8] = (BytecodeArrayBuilder)0x0;
      *(undefined4 *)(this + 0x1ac) = 0xffffffff;
      uVar3 = uVar7 & 0xffffffff00000000;
      uVar6 = uVar7 & 0xffffff00;
      uVar7 = uVar7 & 0xff;
    }
    uVar3 = uVar3 | uVar6;
    if (*(BytecodeRegisterOptimizer **)(this + 0x1a0) != (BytecodeRegisterOptimizer *)0x0) {
      param_3 = BytecodeRegisterOptimizer::GetInputRegisterList
                          (*(BytecodeRegisterOptimizer **)(this + 0x1a0),param_3);
    }
    iVar8 = 0;
    if (param_3 >> 0x20 != 0) {
      iVar8 = (int)param_3;
    }
    local_78[0] = (BytecodeNode)0x64;
    local_70 = -5 - iVar8;
    local_5c = 2;
    bVar1 = local_5c;
    if (0xffff < 0x7ffbU - iVar8) {
      bVar1 = 4;
    }
    if (0x7bU - iVar8 < 0x100) {
      bVar1 = 1;
    }
    if (bVar1 < 2) {
      bVar1 = 1;
    }
    if (0xffff < uVar9) {
      local_5c = 4;
    }
    if (uVar9 < 0x100) {
      local_5c = 1;
    }
    if (local_5c <= bVar1) {
      local_5c = bVar1;
    }
    BVar4 = this[0x1b0];
    local_74 = uVar2;
    local_58 = uVar3 | uVar7;
    if (BVar4 == (BytecodeArrayBuilder)0x0) goto LAB_017bc2e4;
    if ((int)uVar7 == 0) goto LAB_017bc2d0;
LAB_017bc204:
    if (((int)uVar7 == 1) && (BVar4 == (BytecodeArrayBuilder)0x2)) {
      local_58 = uVar3 | 2;
    }
  }
  this[0x1b0] = (BytecodeArrayBuilder)0x0;
  *(undefined4 *)(this + 0x1b4) = 0xffffffff;
LAB_017bc2e4:
  local_60 = 3;
  local_68 = 0;
  uStack_6c = uVar9;
  BytecodeArrayWriter::Write((BytecodeArrayWriter *)(this + 0x110),local_78);
  return this;
}

