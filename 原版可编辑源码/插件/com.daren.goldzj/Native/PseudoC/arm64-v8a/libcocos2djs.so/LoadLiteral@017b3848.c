
/* v8::internal::interpreter::BytecodeArrayBuilder::LoadLiteral(v8::internal::AstSymbol) */

BytecodeArrayBuilder * __thiscall
v8::internal::interpreter::BytecodeArrayBuilder::LoadLiteral
          (BytecodeArrayBuilder *this,char param_2)

{
  BytecodeRegisterOptimizer *pBVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  uint unaff_w20;
  BytecodeNode local_48 [4];
  uint local_44;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  byte local_2c;
  ulong local_28;
  
  if (param_2 == '\0') {
    unaff_w20 = ConstantArrayBuilder::InsertHomeObjectSymbol();
    pBVar1 = *(BytecodeRegisterOptimizer **)(this + 0x1a0);
  }
  else {
    pBVar1 = *(BytecodeRegisterOptimizer **)(this + 0x1a0);
  }
  if (pBVar1 != (BytecodeRegisterOptimizer *)0x0) {
    BytecodeRegisterOptimizer::PrepareOutputRegister(pBVar1,*(undefined4 *)(pBVar1 + 8));
  }
  if ((this[0x1a8] == (BytecodeArrayBuilder)0x0) ||
     ((this[0x1a8] != (BytecodeArrayBuilder)0x2 &&
      (FLAG_ignition_filter_expression_positions != '\0')))) {
    uVar4 = 0;
    uVar2 = 0;
    uVar3 = 0xffffffff00000000;
  }
  else {
    uVar2 = *(ulong *)(this + 0x1a8);
    this[0x1a8] = (BytecodeArrayBuilder)0x0;
    *(undefined4 *)(this + 0x1ac) = 0xffffffff;
    uVar3 = uVar2 & 0xffffffff00000000;
    uVar4 = uVar2 & 0xffffff00;
    uVar2 = uVar2 & 0xff;
  }
  local_2c = 2;
  if (0xffff < unaff_w20) {
    local_2c = 4;
  }
  if (unaff_w20 < 0x100) {
    local_2c = 1;
  }
  local_28 = uVar3 | uVar4 | uVar2;
  if (local_2c < 2) {
    local_2c = 1;
  }
  local_48[0] = (BytecodeNode)0x12;
  local_30 = 1;
  local_40 = 0;
  uStack_38 = 0;
  if (this[0x1b0] != (BytecodeArrayBuilder)0x0) {
    if ((int)uVar2 == 0) {
      local_28 = *(ulong *)(this + 0x1b0);
    }
    else if (((int)uVar2 == 1) && (this[0x1b0] == (BytecodeArrayBuilder)0x2)) {
      local_28 = uVar3 | uVar4 | 2;
    }
    this[0x1b0] = (BytecodeArrayBuilder)0x0;
    *(undefined4 *)(this + 0x1b4) = 0xffffffff;
  }
  local_44 = unaff_w20;
  BytecodeArrayWriter::Write((BytecodeArrayWriter *)(this + 0x110),local_48);
  return this;
}

