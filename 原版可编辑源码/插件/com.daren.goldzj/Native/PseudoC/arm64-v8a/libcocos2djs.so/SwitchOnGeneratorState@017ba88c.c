
/* v8::internal::interpreter::BytecodeArrayBuilder::SwitchOnGeneratorState(v8::internal::interpreter::Register,
   v8::internal::interpreter::BytecodeJumpTable*) */

BytecodeArrayBuilder * __thiscall
v8::internal::interpreter::BytecodeArrayBuilder::SwitchOnGeneratorState
          (BytecodeArrayBuilder *this,int param_2,BytecodeJumpTable *param_3)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  BytecodeNode local_78 [4];
  int local_74;
  uint uStack_70;
  uint local_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 uStack_60;
  byte local_5c;
  ulong local_58;
  
  uVar7 = *(undefined8 *)param_3;
  uVar2 = *(uint *)(param_3 + 0x10);
  if (*(BytecodeRegisterOptimizer **)(this + 0x1a0) != (BytecodeRegisterOptimizer *)0x0) {
    BytecodeRegisterOptimizer::Flush(*(BytecodeRegisterOptimizer **)(this + 0x1a0));
  }
  if ((this[0x1a8] == (BytecodeArrayBuilder)0x0) ||
     ((this[0x1a8] != (BytecodeArrayBuilder)0x2 &&
      (FLAG_ignition_filter_expression_positions != '\0')))) {
    uVar4 = 0;
    uVar6 = 0;
    uVar3 = 0xffffffff00000000;
  }
  else {
    uVar6 = *(ulong *)(this + 0x1a8);
    this[0x1a8] = (BytecodeArrayBuilder)0x0;
    *(undefined4 *)(this + 0x1ac) = 0xffffffff;
    uVar3 = uVar6 & 0xffffffff00000000;
    uVar4 = uVar6 & 0xffffff00;
    uVar6 = uVar6 & 0xff;
  }
  uVar8 = uVar3 | uVar4 | uVar6;
  if (*(long *)(this + 0x1a0) != 0) {
    param_2 = BytecodeRegisterOptimizer::GetInputRegister();
  }
  local_74 = -5 - param_2;
  uStack_70 = (uint)uVar7;
  bVar5 = 2;
  bVar1 = bVar5;
  if (0xffff < 0x7ffbU - param_2) {
    bVar1 = 4;
  }
  if (0x7bU - param_2 < 0x100) {
    bVar1 = 1;
  }
  if (bVar1 < 2) {
    bVar1 = 1;
  }
  if (0xffff < uStack_70) {
    bVar5 = 4;
  }
  if (uStack_70 < 0x100) {
    bVar5 = 1;
  }
  if (bVar5 <= bVar1) {
    bVar5 = bVar1;
  }
  local_5c = 2;
  if (0xffff < uVar2) {
    local_5c = 4;
  }
  if (uVar2 < 0x100) {
    local_5c = 1;
  }
  local_78[0] = (BytecodeNode)0xaf;
  if (local_5c <= bVar5) {
    local_5c = bVar5;
  }
  uStack_68 = 0;
  local_64 = 0;
  uStack_60 = 3;
  local_58 = uVar8;
  if (this[0x1b0] != (BytecodeArrayBuilder)0x0) {
    if ((int)uVar6 == 0) {
      local_58 = *(ulong *)(this + 0x1b0);
    }
    else if ((this[0x1b0] == (BytecodeArrayBuilder)0x2) && ((int)uVar6 == 1)) {
      local_58 = uVar3 | uVar4 | 2;
    }
    this[0x1b0] = (BytecodeArrayBuilder)0x0;
    *(undefined4 *)(this + 0x1b4) = 0xffffffff;
  }
  local_6c = uVar2;
  BytecodeArrayWriter::WriteSwitch((BytecodeArrayWriter *)(this + 0x110),local_78,param_3);
  return this;
}

