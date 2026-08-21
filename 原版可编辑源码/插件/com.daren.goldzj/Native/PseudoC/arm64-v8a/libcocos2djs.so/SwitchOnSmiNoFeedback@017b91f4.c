
/* v8::internal::interpreter::BytecodeArrayBuilder::SwitchOnSmiNoFeedback(v8::internal::interpreter::BytecodeJumpTable*)
    */

BytecodeArrayBuilder * __thiscall
v8::internal::interpreter::BytecodeArrayBuilder::SwitchOnSmiNoFeedback
          (BytecodeArrayBuilder *this,BytecodeJumpTable *param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  byte bVar7;
  BytecodeRegisterOptimizer *this_00;
  undefined8 uVar8;
  BytecodeNode local_68 [4];
  uint local_64;
  uint uStack_60;
  int local_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  byte local_4c;
  ulong local_48;
  
  uVar8 = *(undefined8 *)param_1;
  this_00 = *(BytecodeRegisterOptimizer **)(this + 0x1a0);
  uVar2 = *(uint *)(param_1 + 0x10);
  iVar3 = *(int *)(param_1 + 0x14);
  if (this_00 != (BytecodeRegisterOptimizer *)0x0) {
    BytecodeRegisterOptimizer::Flush(this_00);
    BytecodeRegisterOptimizer::Materialize(this_00,*(RegisterInfo **)(this_00 + 0x10));
  }
  if ((this[0x1a8] == (BytecodeArrayBuilder)0x0) ||
     ((this[0x1a8] != (BytecodeArrayBuilder)0x2 &&
      (FLAG_ignition_filter_expression_positions != '\0')))) {
    uVar6 = 0;
    uVar4 = 0;
    uVar5 = 0xffffffff00000000;
  }
  else {
    uVar4 = *(ulong *)(this + 0x1a8);
    this[0x1a8] = (BytecodeArrayBuilder)0x0;
    *(undefined4 *)(this + 0x1ac) = 0xffffffff;
    uVar5 = uVar4 & 0xffffffff00000000;
    uVar6 = uVar4 & 0xffffff00;
    uVar4 = uVar4 & 0xff;
  }
  local_64 = (uint)uVar8;
  bVar7 = 2;
  bVar1 = bVar7;
  if (0xffff < local_64) {
    bVar1 = 4;
  }
  local_68[0] = (BytecodeNode)0xa1;
  if (local_64 < 0x100) {
    bVar1 = 1;
  }
  if (bVar1 < 2) {
    bVar1 = 1;
  }
  if (0xffff < uVar2) {
    bVar7 = 4;
  }
  if (uVar2 < 0x100) {
    bVar7 = 1;
  }
  if (bVar7 <= bVar1) {
    bVar7 = bVar1;
  }
  local_4c = 2;
  if (iVar3 != (short)iVar3) {
    local_4c = 4;
  }
  if (iVar3 == (char)iVar3) {
    local_4c = 1;
  }
  local_48 = uVar5 | uVar6 | uVar4;
  if (local_4c <= bVar7) {
    local_4c = bVar7;
  }
  uStack_58 = 0;
  local_54 = 0;
  uStack_50 = 3;
  if (this[0x1b0] != (BytecodeArrayBuilder)0x0) {
    if ((int)uVar4 == 0) {
      local_48 = *(ulong *)(this + 0x1b0);
    }
    else if (((int)uVar4 == 1) && (this[0x1b0] == (BytecodeArrayBuilder)0x2)) {
      local_48 = uVar5 | uVar6 | 2;
    }
    this[0x1b0] = (BytecodeArrayBuilder)0x0;
    *(undefined4 *)(this + 0x1b4) = 0xffffffff;
  }
  uStack_60 = uVar2;
  local_5c = iVar3;
  BytecodeArrayWriter::WriteSwitch((BytecodeArrayWriter *)(this + 0x110),local_68,param_1);
  return this;
}

