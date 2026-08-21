
/* v8::internal::interpreter::BytecodeArrayBuilder::BinaryOperationSmiLiteral(v8::internal::Token::Value,
   v8::internal::Smi, int) */

BytecodeArrayBuilder * __thiscall
v8::internal::interpreter::BytecodeArrayBuilder::BinaryOperationSmiLiteral
          (BytecodeArrayBuilder *this,uint param_2,int param_3,uint param_4)

{
  char cVar1;
  short sVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  byte bVar7;
  BytecodeRegisterOptimizer *pBVar8;
  BytecodeNode local_58 [4];
  int local_54;
  uint uStack_50;
  undefined8 local_4c;
  undefined8 uStack_44;
  byte local_3c;
  ulong local_38;
  
  if ((param_2 & 0xff) - 0x22 < 0xc) {
    param_3 = param_3 >> 1;
    cVar1 = (char)param_3;
    sVar2 = (short)param_3;
    switch(param_2 & 0xff) {
    case 0x22:
      pBVar8 = *(BytecodeRegisterOptimizer **)(this + 0x1a0);
      if (pBVar8 != (BytecodeRegisterOptimizer *)0x0) {
        BytecodeRegisterOptimizer::Materialize(pBVar8,*(RegisterInfo **)(pBVar8 + 0x10));
        BytecodeRegisterOptimizer::PrepareOutputRegister(pBVar8,*(undefined4 *)(pBVar8 + 8));
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
      uVar4 = uVar4 | uVar5;
      bVar7 = 2;
      if (param_3 != sVar2) {
        bVar7 = 4;
      }
      bVar3 = param_3 == cVar1;
      local_58[0] = (BytecodeNode)0x46;
      break;
    case 0x23:
      pBVar8 = *(BytecodeRegisterOptimizer **)(this + 0x1a0);
      if (pBVar8 != (BytecodeRegisterOptimizer *)0x0) {
        BytecodeRegisterOptimizer::Materialize(pBVar8,*(RegisterInfo **)(pBVar8 + 0x10));
        BytecodeRegisterOptimizer::PrepareOutputRegister(pBVar8,*(undefined4 *)(pBVar8 + 8));
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
      uVar4 = uVar4 | uVar5;
      bVar7 = 2;
      if (param_3 != sVar2) {
        bVar7 = 4;
      }
      bVar3 = param_3 == cVar1;
      local_58[0] = (BytecodeNode)0x47;
      break;
    case 0x24:
      pBVar8 = *(BytecodeRegisterOptimizer **)(this + 0x1a0);
      if (pBVar8 != (BytecodeRegisterOptimizer *)0x0) {
        BytecodeRegisterOptimizer::Materialize(pBVar8,*(RegisterInfo **)(pBVar8 + 0x10));
        BytecodeRegisterOptimizer::PrepareOutputRegister(pBVar8,*(undefined4 *)(pBVar8 + 8));
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
      uVar4 = uVar4 | uVar5;
      bVar7 = 2;
      if (param_3 != sVar2) {
        bVar7 = 4;
      }
      bVar3 = param_3 == cVar1;
      local_58[0] = (BytecodeNode)0x48;
      break;
    case 0x25:
      pBVar8 = *(BytecodeRegisterOptimizer **)(this + 0x1a0);
      if (pBVar8 != (BytecodeRegisterOptimizer *)0x0) {
        BytecodeRegisterOptimizer::Materialize(pBVar8,*(RegisterInfo **)(pBVar8 + 0x10));
        BytecodeRegisterOptimizer::PrepareOutputRegister(pBVar8,*(undefined4 *)(pBVar8 + 8));
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
      uVar4 = uVar4 | uVar5;
      bVar7 = 2;
      if (param_3 != sVar2) {
        bVar7 = 4;
      }
      bVar3 = param_3 == cVar1;
      local_58[0] = (BytecodeNode)0x49;
      break;
    case 0x26:
      pBVar8 = *(BytecodeRegisterOptimizer **)(this + 0x1a0);
      if (pBVar8 != (BytecodeRegisterOptimizer *)0x0) {
        BytecodeRegisterOptimizer::Materialize(pBVar8,*(RegisterInfo **)(pBVar8 + 0x10));
        BytecodeRegisterOptimizer::PrepareOutputRegister(pBVar8,*(undefined4 *)(pBVar8 + 8));
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
      uVar4 = uVar4 | uVar5;
      bVar7 = 2;
      if (param_3 != sVar2) {
        bVar7 = 4;
      }
      bVar3 = param_3 == cVar1;
      local_58[0] = (BytecodeNode)0x4a;
      break;
    case 0x27:
      pBVar8 = *(BytecodeRegisterOptimizer **)(this + 0x1a0);
      if (pBVar8 != (BytecodeRegisterOptimizer *)0x0) {
        BytecodeRegisterOptimizer::Materialize(pBVar8,*(RegisterInfo **)(pBVar8 + 0x10));
        BytecodeRegisterOptimizer::PrepareOutputRegister(pBVar8,*(undefined4 *)(pBVar8 + 8));
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
      uVar4 = uVar4 | uVar5;
      bVar7 = 2;
      if (param_3 != sVar2) {
        bVar7 = 4;
      }
      bVar3 = param_3 == cVar1;
      local_58[0] = (BytecodeNode)0x4b;
      break;
    case 0x28:
      pBVar8 = *(BytecodeRegisterOptimizer **)(this + 0x1a0);
      if (pBVar8 != (BytecodeRegisterOptimizer *)0x0) {
        BytecodeRegisterOptimizer::Materialize(pBVar8,*(RegisterInfo **)(pBVar8 + 0x10));
        BytecodeRegisterOptimizer::PrepareOutputRegister(pBVar8,*(undefined4 *)(pBVar8 + 8));
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
      uVar4 = uVar4 | uVar5;
      bVar7 = 2;
      if (param_3 != sVar2) {
        bVar7 = 4;
      }
      bVar3 = param_3 == cVar1;
      local_58[0] = (BytecodeNode)0x42;
      break;
    case 0x29:
      pBVar8 = *(BytecodeRegisterOptimizer **)(this + 0x1a0);
      if (pBVar8 != (BytecodeRegisterOptimizer *)0x0) {
        BytecodeRegisterOptimizer::Materialize(pBVar8,*(RegisterInfo **)(pBVar8 + 0x10));
        BytecodeRegisterOptimizer::PrepareOutputRegister(pBVar8,*(undefined4 *)(pBVar8 + 8));
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
      uVar4 = uVar4 | uVar5;
      bVar7 = 2;
      if (param_3 != sVar2) {
        bVar7 = 4;
      }
      bVar3 = param_3 == cVar1;
      local_58[0] = (BytecodeNode)0x43;
      break;
    case 0x2a:
      pBVar8 = *(BytecodeRegisterOptimizer **)(this + 0x1a0);
      if (pBVar8 != (BytecodeRegisterOptimizer *)0x0) {
        BytecodeRegisterOptimizer::Materialize(pBVar8,*(RegisterInfo **)(pBVar8 + 0x10));
        BytecodeRegisterOptimizer::PrepareOutputRegister(pBVar8,*(undefined4 *)(pBVar8 + 8));
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
      uVar4 = uVar4 | uVar5;
      bVar7 = 2;
      if (param_3 != sVar2) {
        bVar7 = 4;
      }
      bVar3 = param_3 == cVar1;
      local_58[0] = (BytecodeNode)0x44;
      break;
    case 0x2b:
      pBVar8 = *(BytecodeRegisterOptimizer **)(this + 0x1a0);
      if (pBVar8 != (BytecodeRegisterOptimizer *)0x0) {
        BytecodeRegisterOptimizer::Materialize(pBVar8,*(RegisterInfo **)(pBVar8 + 0x10));
        BytecodeRegisterOptimizer::PrepareOutputRegister(pBVar8,*(undefined4 *)(pBVar8 + 8));
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
      uVar4 = uVar4 | uVar5;
      bVar7 = 2;
      if (param_3 != sVar2) {
        bVar7 = 4;
      }
      bVar3 = param_3 == cVar1;
      local_58[0] = (BytecodeNode)0x45;
      break;
    case 0x2c:
      pBVar8 = *(BytecodeRegisterOptimizer **)(this + 0x1a0);
      if (pBVar8 != (BytecodeRegisterOptimizer *)0x0) {
        BytecodeRegisterOptimizer::Materialize(pBVar8,*(RegisterInfo **)(pBVar8 + 0x10));
        BytecodeRegisterOptimizer::PrepareOutputRegister(pBVar8,*(undefined4 *)(pBVar8 + 8));
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
      uVar4 = uVar4 | uVar5;
      bVar7 = 2;
      if (param_3 != sVar2) {
        bVar7 = 4;
      }
      bVar3 = param_3 == cVar1;
      local_58[0] = (BytecodeNode)0x40;
      break;
    case 0x2d:
      pBVar8 = *(BytecodeRegisterOptimizer **)(this + 0x1a0);
      if (pBVar8 != (BytecodeRegisterOptimizer *)0x0) {
        BytecodeRegisterOptimizer::Materialize(pBVar8,*(RegisterInfo **)(pBVar8 + 0x10));
        BytecodeRegisterOptimizer::PrepareOutputRegister(pBVar8,*(undefined4 *)(pBVar8 + 8));
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
      uVar4 = uVar4 | uVar5;
      bVar7 = 2;
      if (param_3 != sVar2) {
        bVar7 = 4;
      }
      bVar3 = param_3 == cVar1;
      local_58[0] = (BytecodeNode)0x41;
    }
    if (bVar3) {
      bVar7 = 1;
    }
    local_38 = uVar4 | uVar6;
    if (bVar7 < 2) {
      bVar7 = 1;
    }
    local_3c = 2;
    if (0xffff < param_4) {
      local_3c = 4;
    }
    if (param_4 < 0x100) {
      local_3c = 1;
    }
    if (local_3c <= bVar7) {
      local_3c = bVar7;
    }
    uStack_44 = 0x200000000;
    local_4c = 0;
    if (this[0x1b0] != (BytecodeArrayBuilder)0x0) {
      if ((int)uVar6 == 0) {
        local_38 = *(ulong *)(this + 0x1b0);
      }
      else if (((int)uVar6 == 1) && (this[0x1b0] == (BytecodeArrayBuilder)0x2)) {
        local_38 = uVar4 | 2;
      }
      this[0x1b0] = (BytecodeArrayBuilder)0x0;
      *(undefined4 *)(this + 0x1b4) = 0xffffffff;
    }
    local_54 = param_3;
    uStack_50 = param_4;
    BytecodeArrayWriter::Write((BytecodeArrayWriter *)(this + 0x110),local_58);
    return this;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

