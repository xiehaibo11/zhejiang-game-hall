
/* v8::internal::interpreter::BytecodeArrayBuilder::UnaryOperation(v8::internal::Token::Value, int)
    */

BytecodeArrayBuilder * __thiscall
v8::internal::interpreter::BytecodeArrayBuilder::UnaryOperation
          (BytecodeArrayBuilder *this,undefined1 param_2,uint param_3)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  BytecodeRegisterOptimizer *pBVar6;
  BytecodeNode local_58 [4];
  uint local_54;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  char local_3c;
  ulong local_38;
  
  switch(param_2) {
  case 0x2c:
    pBVar6 = *(BytecodeRegisterOptimizer **)(this + 0x1a0);
    if (pBVar6 != (BytecodeRegisterOptimizer *)0x0) {
      BytecodeRegisterOptimizer::Materialize(pBVar6,*(RegisterInfo **)(pBVar6 + 0x10));
      BytecodeRegisterOptimizer::PrepareOutputRegister(pBVar6,*(undefined4 *)(pBVar6 + 8));
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
    uVar3 = uVar3 | uVar4;
    local_3c = '\x02';
    if (0xffff < param_3) {
      local_3c = '\x04';
    }
    if (param_3 < 0x100) {
      local_3c = '\x01';
    }
    bVar1 = local_3c != '\0';
    bVar2 = local_3c == '\x01';
    local_58[0] = (BytecodeNode)0x75;
    break;
  case 0x2d:
    pBVar6 = *(BytecodeRegisterOptimizer **)(this + 0x1a0);
    if (pBVar6 != (BytecodeRegisterOptimizer *)0x0) {
      BytecodeRegisterOptimizer::Materialize(pBVar6,*(RegisterInfo **)(pBVar6 + 0x10));
      BytecodeRegisterOptimizer::PrepareOutputRegister(pBVar6,*(undefined4 *)(pBVar6 + 8));
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
    uVar3 = uVar3 | uVar4;
    local_3c = '\x02';
    if (0xffff < param_3) {
      local_3c = '\x04';
    }
    if (param_3 < 0x100) {
      local_3c = '\x01';
    }
    bVar1 = local_3c != '\0';
    bVar2 = local_3c == '\x01';
    local_58[0] = (BytecodeNode)0x4e;
    break;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  case 0x2f:
    pBVar6 = *(BytecodeRegisterOptimizer **)(this + 0x1a0);
    if (pBVar6 != (BytecodeRegisterOptimizer *)0x0) {
      BytecodeRegisterOptimizer::Materialize(pBVar6,*(RegisterInfo **)(pBVar6 + 0x10));
      BytecodeRegisterOptimizer::PrepareOutputRegister(pBVar6,*(undefined4 *)(pBVar6 + 8));
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
    uVar3 = uVar3 | uVar4;
    local_3c = '\x02';
    if (0xffff < param_3) {
      local_3c = '\x04';
    }
    if (param_3 < 0x100) {
      local_3c = '\x01';
    }
    bVar1 = local_3c != '\0';
    bVar2 = local_3c == '\x01';
    local_58[0] = (BytecodeNode)0x4f;
    break;
  case 0x33:
    pBVar6 = *(BytecodeRegisterOptimizer **)(this + 0x1a0);
    if (pBVar6 != (BytecodeRegisterOptimizer *)0x0) {
      BytecodeRegisterOptimizer::Materialize(pBVar6,*(RegisterInfo **)(pBVar6 + 0x10));
      BytecodeRegisterOptimizer::PrepareOutputRegister(pBVar6,*(undefined4 *)(pBVar6 + 8));
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
    uVar3 = uVar3 | uVar4;
    local_3c = '\x02';
    if (0xffff < param_3) {
      local_3c = '\x04';
    }
    if (param_3 < 0x100) {
      local_3c = '\x01';
    }
    bVar1 = local_3c != '\0';
    bVar2 = local_3c == '\x01';
    local_58[0] = (BytecodeNode)0x4c;
    break;
  case 0x34:
    pBVar6 = *(BytecodeRegisterOptimizer **)(this + 0x1a0);
    if (pBVar6 != (BytecodeRegisterOptimizer *)0x0) {
      BytecodeRegisterOptimizer::Materialize(pBVar6,*(RegisterInfo **)(pBVar6 + 0x10));
      BytecodeRegisterOptimizer::PrepareOutputRegister(pBVar6,*(undefined4 *)(pBVar6 + 8));
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
    uVar3 = uVar3 | uVar4;
    local_3c = '\x02';
    if (0xffff < param_3) {
      local_3c = '\x04';
    }
    if (param_3 < 0x100) {
      local_3c = '\x01';
    }
    bVar1 = local_3c != '\0';
    bVar2 = local_3c == '\x01';
    local_58[0] = (BytecodeNode)0x4d;
  }
  local_38 = uVar3 | uVar5;
  if (!bVar1 || bVar2) {
    local_3c = '\x01';
  }
  local_40 = 1;
  local_50 = 0;
  uStack_48 = 0;
  if (this[0x1b0] != (BytecodeArrayBuilder)0x0) {
    if ((int)uVar5 == 0) {
      local_38 = *(ulong *)(this + 0x1b0);
    }
    else if (((int)uVar5 == 1) && (this[0x1b0] == (BytecodeArrayBuilder)0x2)) {
      local_38 = uVar3 | 2;
    }
    this[0x1b0] = (BytecodeArrayBuilder)0x0;
    *(undefined4 *)(this + 0x1b4) = 0xffffffff;
  }
  local_54 = param_3;
  BytecodeArrayWriter::Write((BytecodeArrayWriter *)(this + 0x110),local_58);
  return this;
}

