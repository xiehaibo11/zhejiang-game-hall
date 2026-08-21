
/* v8::internal::interpreter::BytecodeArrayBuilder::BinaryOperation(v8::internal::Token::Value,
   v8::internal::interpreter::Register, int) */

BytecodeArrayBuilder * __thiscall
v8::internal::interpreter::BytecodeArrayBuilder::BinaryOperation
          (BytecodeArrayBuilder *this,undefined1 param_2,int param_3,uint param_4)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  BytecodeRegisterOptimizer *pBVar5;
  BytecodeNode local_68 [4];
  int local_64;
  uint uStack_60;
  undefined8 local_5c;
  undefined8 uStack_54;
  byte local_4c;
  ulong local_48;
  
  switch(param_2) {
  case 0x22:
    pBVar5 = *(BytecodeRegisterOptimizer **)(this + 0x1a0);
    if (pBVar5 != (BytecodeRegisterOptimizer *)0x0) {
      BytecodeRegisterOptimizer::Materialize(pBVar5,*(RegisterInfo **)(pBVar5 + 0x10));
      BytecodeRegisterOptimizer::PrepareOutputRegister(pBVar5,*(undefined4 *)(pBVar5 + 8));
    }
    if (this[0x1a8] == (BytecodeArrayBuilder)0x0) {
      uVar3 = 0;
      uVar4 = 0;
      uVar2 = 0xffffffff00000000;
    }
    else {
      uVar4 = *(ulong *)(this + 0x1a8);
      this[0x1a8] = (BytecodeArrayBuilder)0x0;
      *(undefined4 *)(this + 0x1ac) = 0xffffffff;
      uVar2 = uVar4 & 0xffffffff00000000;
      uVar3 = uVar4 & 0xffffff00;
      uVar4 = uVar4 & 0xff;
    }
    uVar2 = uVar2 | uVar3;
    uVar3 = uVar2 | uVar4;
    if (*(long *)(this + 0x1a0) != 0) {
      param_3 = BytecodeRegisterOptimizer::GetInputRegister();
    }
    local_64 = -5 - param_3;
    bVar1 = 2;
    if (0xffff < 0x7ffbU - param_3) {
      bVar1 = 4;
    }
    if (0x7bU - param_3 < 0x100) {
      bVar1 = 1;
    }
    local_68[0] = (BytecodeNode)0x3a;
    break;
  case 0x23:
    pBVar5 = *(BytecodeRegisterOptimizer **)(this + 0x1a0);
    if (pBVar5 != (BytecodeRegisterOptimizer *)0x0) {
      BytecodeRegisterOptimizer::Materialize(pBVar5,*(RegisterInfo **)(pBVar5 + 0x10));
      BytecodeRegisterOptimizer::PrepareOutputRegister(pBVar5,*(undefined4 *)(pBVar5 + 8));
    }
    if (this[0x1a8] == (BytecodeArrayBuilder)0x0) {
      uVar3 = 0;
      uVar4 = 0;
      uVar2 = 0xffffffff00000000;
    }
    else {
      uVar4 = *(ulong *)(this + 0x1a8);
      this[0x1a8] = (BytecodeArrayBuilder)0x0;
      *(undefined4 *)(this + 0x1ac) = 0xffffffff;
      uVar2 = uVar4 & 0xffffffff00000000;
      uVar3 = uVar4 & 0xffffff00;
      uVar4 = uVar4 & 0xff;
    }
    uVar2 = uVar2 | uVar3;
    uVar3 = uVar2 | uVar4;
    if (*(long *)(this + 0x1a0) != 0) {
      param_3 = BytecodeRegisterOptimizer::GetInputRegister();
    }
    local_64 = -5 - param_3;
    bVar1 = 2;
    if (0xffff < 0x7ffbU - param_3) {
      bVar1 = 4;
    }
    if (0x7bU - param_3 < 0x100) {
      bVar1 = 1;
    }
    local_68[0] = (BytecodeNode)0x3b;
    break;
  case 0x24:
    pBVar5 = *(BytecodeRegisterOptimizer **)(this + 0x1a0);
    if (pBVar5 != (BytecodeRegisterOptimizer *)0x0) {
      BytecodeRegisterOptimizer::Materialize(pBVar5,*(RegisterInfo **)(pBVar5 + 0x10));
      BytecodeRegisterOptimizer::PrepareOutputRegister(pBVar5,*(undefined4 *)(pBVar5 + 8));
    }
    if (this[0x1a8] == (BytecodeArrayBuilder)0x0) {
      uVar3 = 0;
      uVar4 = 0;
      uVar2 = 0xffffffff00000000;
    }
    else {
      uVar4 = *(ulong *)(this + 0x1a8);
      this[0x1a8] = (BytecodeArrayBuilder)0x0;
      *(undefined4 *)(this + 0x1ac) = 0xffffffff;
      uVar2 = uVar4 & 0xffffffff00000000;
      uVar3 = uVar4 & 0xffffff00;
      uVar4 = uVar4 & 0xff;
    }
    uVar2 = uVar2 | uVar3;
    uVar3 = uVar2 | uVar4;
    if (*(long *)(this + 0x1a0) != 0) {
      param_3 = BytecodeRegisterOptimizer::GetInputRegister();
    }
    local_64 = -5 - param_3;
    bVar1 = 2;
    if (0xffff < 0x7ffbU - param_3) {
      bVar1 = 4;
    }
    if (0x7bU - param_3 < 0x100) {
      bVar1 = 1;
    }
    local_68[0] = (BytecodeNode)0x3c;
    break;
  case 0x25:
    pBVar5 = *(BytecodeRegisterOptimizer **)(this + 0x1a0);
    if (pBVar5 != (BytecodeRegisterOptimizer *)0x0) {
      BytecodeRegisterOptimizer::Materialize(pBVar5,*(RegisterInfo **)(pBVar5 + 0x10));
      BytecodeRegisterOptimizer::PrepareOutputRegister(pBVar5,*(undefined4 *)(pBVar5 + 8));
    }
    if (this[0x1a8] == (BytecodeArrayBuilder)0x0) {
      uVar3 = 0;
      uVar4 = 0;
      uVar2 = 0xffffffff00000000;
    }
    else {
      uVar4 = *(ulong *)(this + 0x1a8);
      this[0x1a8] = (BytecodeArrayBuilder)0x0;
      *(undefined4 *)(this + 0x1ac) = 0xffffffff;
      uVar2 = uVar4 & 0xffffffff00000000;
      uVar3 = uVar4 & 0xffffff00;
      uVar4 = uVar4 & 0xff;
    }
    uVar2 = uVar2 | uVar3;
    uVar3 = uVar2 | uVar4;
    if (*(long *)(this + 0x1a0) != 0) {
      param_3 = BytecodeRegisterOptimizer::GetInputRegister();
    }
    local_64 = -5 - param_3;
    bVar1 = 2;
    if (0xffff < 0x7ffbU - param_3) {
      bVar1 = 4;
    }
    if (0x7bU - param_3 < 0x100) {
      bVar1 = 1;
    }
    local_68[0] = (BytecodeNode)0x3d;
    break;
  case 0x26:
    pBVar5 = *(BytecodeRegisterOptimizer **)(this + 0x1a0);
    if (pBVar5 != (BytecodeRegisterOptimizer *)0x0) {
      BytecodeRegisterOptimizer::Materialize(pBVar5,*(RegisterInfo **)(pBVar5 + 0x10));
      BytecodeRegisterOptimizer::PrepareOutputRegister(pBVar5,*(undefined4 *)(pBVar5 + 8));
    }
    if (this[0x1a8] == (BytecodeArrayBuilder)0x0) {
      uVar3 = 0;
      uVar4 = 0;
      uVar2 = 0xffffffff00000000;
    }
    else {
      uVar4 = *(ulong *)(this + 0x1a8);
      this[0x1a8] = (BytecodeArrayBuilder)0x0;
      *(undefined4 *)(this + 0x1ac) = 0xffffffff;
      uVar2 = uVar4 & 0xffffffff00000000;
      uVar3 = uVar4 & 0xffffff00;
      uVar4 = uVar4 & 0xff;
    }
    uVar2 = uVar2 | uVar3;
    uVar3 = uVar2 | uVar4;
    if (*(long *)(this + 0x1a0) != 0) {
      param_3 = BytecodeRegisterOptimizer::GetInputRegister();
    }
    local_64 = -5 - param_3;
    bVar1 = 2;
    if (0xffff < 0x7ffbU - param_3) {
      bVar1 = 4;
    }
    if (0x7bU - param_3 < 0x100) {
      bVar1 = 1;
    }
    local_68[0] = (BytecodeNode)0x3e;
    break;
  case 0x27:
    pBVar5 = *(BytecodeRegisterOptimizer **)(this + 0x1a0);
    if (pBVar5 != (BytecodeRegisterOptimizer *)0x0) {
      BytecodeRegisterOptimizer::Materialize(pBVar5,*(RegisterInfo **)(pBVar5 + 0x10));
      BytecodeRegisterOptimizer::PrepareOutputRegister(pBVar5,*(undefined4 *)(pBVar5 + 8));
    }
    if (this[0x1a8] == (BytecodeArrayBuilder)0x0) {
      uVar3 = 0;
      uVar4 = 0;
      uVar2 = 0xffffffff00000000;
    }
    else {
      uVar4 = *(ulong *)(this + 0x1a8);
      this[0x1a8] = (BytecodeArrayBuilder)0x0;
      *(undefined4 *)(this + 0x1ac) = 0xffffffff;
      uVar2 = uVar4 & 0xffffffff00000000;
      uVar3 = uVar4 & 0xffffff00;
      uVar4 = uVar4 & 0xff;
    }
    uVar2 = uVar2 | uVar3;
    uVar3 = uVar2 | uVar4;
    if (*(long *)(this + 0x1a0) != 0) {
      param_3 = BytecodeRegisterOptimizer::GetInputRegister();
    }
    local_64 = -5 - param_3;
    bVar1 = 2;
    if (0xffff < 0x7ffbU - param_3) {
      bVar1 = 4;
    }
    if (0x7bU - param_3 < 0x100) {
      bVar1 = 1;
    }
    local_68[0] = (BytecodeNode)0x3f;
    break;
  case 0x28:
    pBVar5 = *(BytecodeRegisterOptimizer **)(this + 0x1a0);
    if (pBVar5 != (BytecodeRegisterOptimizer *)0x0) {
      BytecodeRegisterOptimizer::Materialize(pBVar5,*(RegisterInfo **)(pBVar5 + 0x10));
      BytecodeRegisterOptimizer::PrepareOutputRegister(pBVar5,*(undefined4 *)(pBVar5 + 8));
    }
    if (this[0x1a8] == (BytecodeArrayBuilder)0x0) {
      uVar3 = 0;
      uVar4 = 0;
      uVar2 = 0xffffffff00000000;
    }
    else {
      uVar4 = *(ulong *)(this + 0x1a8);
      this[0x1a8] = (BytecodeArrayBuilder)0x0;
      *(undefined4 *)(this + 0x1ac) = 0xffffffff;
      uVar2 = uVar4 & 0xffffffff00000000;
      uVar3 = uVar4 & 0xffffff00;
      uVar4 = uVar4 & 0xff;
    }
    uVar2 = uVar2 | uVar3;
    uVar3 = uVar2 | uVar4;
    if (*(long *)(this + 0x1a0) != 0) {
      param_3 = BytecodeRegisterOptimizer::GetInputRegister();
    }
    local_64 = -5 - param_3;
    bVar1 = 2;
    if (0xffff < 0x7ffbU - param_3) {
      bVar1 = 4;
    }
    if (0x7bU - param_3 < 0x100) {
      bVar1 = 1;
    }
    local_68[0] = (BytecodeNode)0x36;
    break;
  case 0x29:
    pBVar5 = *(BytecodeRegisterOptimizer **)(this + 0x1a0);
    if (pBVar5 != (BytecodeRegisterOptimizer *)0x0) {
      BytecodeRegisterOptimizer::Materialize(pBVar5,*(RegisterInfo **)(pBVar5 + 0x10));
      BytecodeRegisterOptimizer::PrepareOutputRegister(pBVar5,*(undefined4 *)(pBVar5 + 8));
    }
    if (this[0x1a8] == (BytecodeArrayBuilder)0x0) {
      uVar3 = 0;
      uVar4 = 0;
      uVar2 = 0xffffffff00000000;
    }
    else {
      uVar4 = *(ulong *)(this + 0x1a8);
      this[0x1a8] = (BytecodeArrayBuilder)0x0;
      *(undefined4 *)(this + 0x1ac) = 0xffffffff;
      uVar2 = uVar4 & 0xffffffff00000000;
      uVar3 = uVar4 & 0xffffff00;
      uVar4 = uVar4 & 0xff;
    }
    uVar2 = uVar2 | uVar3;
    uVar3 = uVar2 | uVar4;
    if (*(long *)(this + 0x1a0) != 0) {
      param_3 = BytecodeRegisterOptimizer::GetInputRegister();
    }
    local_64 = -5 - param_3;
    bVar1 = 2;
    if (0xffff < 0x7ffbU - param_3) {
      bVar1 = 4;
    }
    if (0x7bU - param_3 < 0x100) {
      bVar1 = 1;
    }
    local_68[0] = (BytecodeNode)0x37;
    break;
  case 0x2a:
    pBVar5 = *(BytecodeRegisterOptimizer **)(this + 0x1a0);
    if (pBVar5 != (BytecodeRegisterOptimizer *)0x0) {
      BytecodeRegisterOptimizer::Materialize(pBVar5,*(RegisterInfo **)(pBVar5 + 0x10));
      BytecodeRegisterOptimizer::PrepareOutputRegister(pBVar5,*(undefined4 *)(pBVar5 + 8));
    }
    if (this[0x1a8] == (BytecodeArrayBuilder)0x0) {
      uVar3 = 0;
      uVar4 = 0;
      uVar2 = 0xffffffff00000000;
    }
    else {
      uVar4 = *(ulong *)(this + 0x1a8);
      this[0x1a8] = (BytecodeArrayBuilder)0x0;
      *(undefined4 *)(this + 0x1ac) = 0xffffffff;
      uVar2 = uVar4 & 0xffffffff00000000;
      uVar3 = uVar4 & 0xffffff00;
      uVar4 = uVar4 & 0xff;
    }
    uVar2 = uVar2 | uVar3;
    uVar3 = uVar2 | uVar4;
    if (*(long *)(this + 0x1a0) != 0) {
      param_3 = BytecodeRegisterOptimizer::GetInputRegister();
    }
    local_64 = -5 - param_3;
    bVar1 = 2;
    if (0xffff < 0x7ffbU - param_3) {
      bVar1 = 4;
    }
    if (0x7bU - param_3 < 0x100) {
      bVar1 = 1;
    }
    local_68[0] = (BytecodeNode)0x38;
    break;
  case 0x2b:
    pBVar5 = *(BytecodeRegisterOptimizer **)(this + 0x1a0);
    if (pBVar5 != (BytecodeRegisterOptimizer *)0x0) {
      BytecodeRegisterOptimizer::Materialize(pBVar5,*(RegisterInfo **)(pBVar5 + 0x10));
      BytecodeRegisterOptimizer::PrepareOutputRegister(pBVar5,*(undefined4 *)(pBVar5 + 8));
    }
    if (this[0x1a8] == (BytecodeArrayBuilder)0x0) {
      uVar3 = 0;
      uVar4 = 0;
      uVar2 = 0xffffffff00000000;
    }
    else {
      uVar4 = *(ulong *)(this + 0x1a8);
      this[0x1a8] = (BytecodeArrayBuilder)0x0;
      *(undefined4 *)(this + 0x1ac) = 0xffffffff;
      uVar2 = uVar4 & 0xffffffff00000000;
      uVar3 = uVar4 & 0xffffff00;
      uVar4 = uVar4 & 0xff;
    }
    uVar2 = uVar2 | uVar3;
    uVar3 = uVar2 | uVar4;
    if (*(long *)(this + 0x1a0) != 0) {
      param_3 = BytecodeRegisterOptimizer::GetInputRegister();
    }
    local_64 = -5 - param_3;
    bVar1 = 2;
    if (0xffff < 0x7ffbU - param_3) {
      bVar1 = 4;
    }
    if (0x7bU - param_3 < 0x100) {
      bVar1 = 1;
    }
    local_68[0] = (BytecodeNode)0x39;
    break;
  case 0x2c:
    pBVar5 = *(BytecodeRegisterOptimizer **)(this + 0x1a0);
    if (pBVar5 != (BytecodeRegisterOptimizer *)0x0) {
      BytecodeRegisterOptimizer::Materialize(pBVar5,*(RegisterInfo **)(pBVar5 + 0x10));
      BytecodeRegisterOptimizer::PrepareOutputRegister(pBVar5,*(undefined4 *)(pBVar5 + 8));
    }
    if (this[0x1a8] == (BytecodeArrayBuilder)0x0) {
      uVar3 = 0;
      uVar4 = 0;
      uVar2 = 0xffffffff00000000;
    }
    else {
      uVar4 = *(ulong *)(this + 0x1a8);
      this[0x1a8] = (BytecodeArrayBuilder)0x0;
      *(undefined4 *)(this + 0x1ac) = 0xffffffff;
      uVar2 = uVar4 & 0xffffffff00000000;
      uVar3 = uVar4 & 0xffffff00;
      uVar4 = uVar4 & 0xff;
    }
    uVar2 = uVar2 | uVar3;
    uVar3 = uVar2 | uVar4;
    if (*(long *)(this + 0x1a0) != 0) {
      param_3 = BytecodeRegisterOptimizer::GetInputRegister();
    }
    local_64 = -5 - param_3;
    bVar1 = 2;
    if (0xffff < 0x7ffbU - param_3) {
      bVar1 = 4;
    }
    if (0x7bU - param_3 < 0x100) {
      bVar1 = 1;
    }
    local_68[0] = (BytecodeNode)0x34;
    break;
  case 0x2d:
    pBVar5 = *(BytecodeRegisterOptimizer **)(this + 0x1a0);
    if (pBVar5 != (BytecodeRegisterOptimizer *)0x0) {
      BytecodeRegisterOptimizer::Materialize(pBVar5,*(RegisterInfo **)(pBVar5 + 0x10));
      BytecodeRegisterOptimizer::PrepareOutputRegister(pBVar5,*(undefined4 *)(pBVar5 + 8));
    }
    if (this[0x1a8] == (BytecodeArrayBuilder)0x0) {
      uVar3 = 0;
      uVar4 = 0;
      uVar2 = 0xffffffff00000000;
    }
    else {
      uVar4 = *(ulong *)(this + 0x1a8);
      this[0x1a8] = (BytecodeArrayBuilder)0x0;
      *(undefined4 *)(this + 0x1ac) = 0xffffffff;
      uVar2 = uVar4 & 0xffffffff00000000;
      uVar3 = uVar4 & 0xffffff00;
      uVar4 = uVar4 & 0xff;
    }
    uVar2 = uVar2 | uVar3;
    uVar3 = uVar2 | uVar4;
    if (*(long *)(this + 0x1a0) != 0) {
      param_3 = BytecodeRegisterOptimizer::GetInputRegister();
    }
    local_64 = -5 - param_3;
    bVar1 = 2;
    if (0xffff < 0x7ffbU - param_3) {
      bVar1 = 4;
    }
    if (0x7bU - param_3 < 0x100) {
      bVar1 = 1;
    }
    local_68[0] = (BytecodeNode)0x35;
    break;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  if (bVar1 < 2) {
    bVar1 = 1;
  }
  local_4c = 2;
  if (0xffff < param_4) {
    local_4c = 4;
  }
  if (param_4 < 0x100) {
    local_4c = 1;
  }
  if (local_4c <= bVar1) {
    local_4c = bVar1;
  }
  uStack_54 = 0x200000000;
  local_5c = 0;
  local_48 = uVar3;
  if (this[0x1b0] != (BytecodeArrayBuilder)0x0) {
    if ((int)uVar4 == 0) {
      local_48 = *(ulong *)(this + 0x1b0);
    }
    else if (((int)uVar4 == 1) && (this[0x1b0] == (BytecodeArrayBuilder)0x2)) {
      local_48 = uVar2 | 2;
    }
    this[0x1b0] = (BytecodeArrayBuilder)0x0;
    *(undefined4 *)(this + 0x1b4) = 0xffffffff;
  }
  uStack_60 = param_4;
  BytecodeArrayWriter::Write((BytecodeArrayWriter *)(this + 0x110),local_68);
  return this;
}

