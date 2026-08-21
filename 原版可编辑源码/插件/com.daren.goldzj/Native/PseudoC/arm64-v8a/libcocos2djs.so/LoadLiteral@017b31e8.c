
/* v8::internal::interpreter::BytecodeArrayBuilder::LoadLiteral(v8::internal::Smi) */

BytecodeArrayBuilder * __thiscall
v8::internal::interpreter::BytecodeArrayBuilder::LoadLiteral(BytecodeArrayBuilder *this,int param_2)

{
  BytecodeRegisterOptimizer *pBVar1;
  ulong uVar2;
  ulong uVar3;
  BytecodeArrayBuilder BVar4;
  ulong uVar5;
  BytecodeNode local_48 [4];
  int local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  byte local_2c;
  ulong local_28;
  
  param_2 = param_2 >> 1;
  if (param_2 == 0) {
    pBVar1 = *(BytecodeRegisterOptimizer **)(this + 0x1a0);
    if (pBVar1 != (BytecodeRegisterOptimizer *)0x0) {
      BytecodeRegisterOptimizer::PrepareOutputRegister(pBVar1,*(undefined4 *)(pBVar1 + 8));
    }
    if ((this[0x1a8] == (BytecodeArrayBuilder)0x0) ||
       ((this[0x1a8] != (BytecodeArrayBuilder)0x2 &&
        (FLAG_ignition_filter_expression_positions != '\0')))) {
      uVar5 = 0;
      uVar2 = 0;
      uVar3 = 0xffffffff00000000;
    }
    else {
      uVar2 = *(ulong *)(this + 0x1a8);
      this[0x1a8] = (BytecodeArrayBuilder)0x0;
      *(undefined4 *)(this + 0x1ac) = 0xffffffff;
      uVar3 = uVar2 & 0xffffffff00000000;
      uVar5 = uVar2 & 0xffffff00;
      uVar2 = uVar2 & 0xff;
    }
    uVar3 = uVar3 | uVar5;
    local_28 = uVar3 | uVar2;
    uStack_30 = 0;
    local_48[0] = (BytecodeNode)0xb;
    local_2c = 1;
    local_44 = 0;
    BVar4 = this[0x1b0];
    if (BVar4 == (BytecodeArrayBuilder)0x0) goto LAB_017b3378;
    if ((int)uVar2 != 0) goto LAB_017b32f8;
LAB_017b3364:
    local_28 = *(ulong *)(this + 0x1b0);
  }
  else {
    pBVar1 = *(BytecodeRegisterOptimizer **)(this + 0x1a0);
    if (pBVar1 != (BytecodeRegisterOptimizer *)0x0) {
      BytecodeRegisterOptimizer::PrepareOutputRegister(pBVar1,*(undefined4 *)(pBVar1 + 8));
    }
    if ((this[0x1a8] == (BytecodeArrayBuilder)0x0) ||
       ((this[0x1a8] != (BytecodeArrayBuilder)0x2 &&
        (FLAG_ignition_filter_expression_positions != '\0')))) {
      uVar5 = 0;
      uVar2 = 0;
      uVar3 = 0xffffffff00000000;
    }
    else {
      uVar2 = *(ulong *)(this + 0x1a8);
      this[0x1a8] = (BytecodeArrayBuilder)0x0;
      *(undefined4 *)(this + 0x1ac) = 0xffffffff;
      uVar3 = uVar2 & 0xffffffff00000000;
      uVar5 = uVar2 & 0xffffff00;
      uVar2 = uVar2 & 0xff;
    }
    uVar3 = uVar3 | uVar5;
    local_2c = 2;
    if (param_2 != (short)param_2) {
      local_2c = 4;
    }
    if (param_2 == (char)param_2) {
      local_2c = 1;
    }
    local_28 = uVar3 | uVar2;
    if (local_2c < 2) {
      local_2c = 1;
    }
    local_48[0] = (BytecodeNode)0xc;
    uStack_30 = 1;
    BVar4 = this[0x1b0];
    local_44 = param_2;
    if (BVar4 == (BytecodeArrayBuilder)0x0) goto LAB_017b3378;
    if ((int)uVar2 == 0) goto LAB_017b3364;
LAB_017b32f8:
    if (((int)uVar2 == 1) && (BVar4 == (BytecodeArrayBuilder)0x2)) {
      local_28 = uVar3 | 2;
    }
  }
  this[0x1b0] = (BytecodeArrayBuilder)0x0;
  *(undefined4 *)(this + 0x1b4) = 0xffffffff;
LAB_017b3378:
  local_34 = 0;
  uStack_38 = 0;
  uStack_3c = 0;
  uStack_40 = 0;
  BytecodeArrayWriter::Write((BytecodeArrayWriter *)(this + 0x110),local_48);
  return this;
}

