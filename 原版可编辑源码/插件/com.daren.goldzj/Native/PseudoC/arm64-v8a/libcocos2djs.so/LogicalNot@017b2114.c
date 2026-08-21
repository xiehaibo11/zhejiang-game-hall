
/* v8::internal::interpreter::BytecodeArrayBuilder::LogicalNot(v8::internal::interpreter::BytecodeArrayBuilder::ToBooleanMode)
    */

BytecodeArrayBuilder * __thiscall
v8::internal::interpreter::BytecodeArrayBuilder::LogicalNot(BytecodeArrayBuilder *this,int param_2)

{
  ulong uVar1;
  BytecodeArrayBuilder BVar2;
  ulong uVar3;
  ulong uVar4;
  BytecodeRegisterOptimizer *pBVar5;
  BytecodeNode local_48 [4];
  undefined8 local_44;
  undefined8 local_3c;
  undefined8 local_34;
  undefined1 local_2c;
  ulong local_28;
  
  if (param_2 == 1) {
    pBVar5 = *(BytecodeRegisterOptimizer **)(this + 0x1a0);
    if (pBVar5 != (BytecodeRegisterOptimizer *)0x0) {
      BytecodeRegisterOptimizer::Materialize(pBVar5,*(RegisterInfo **)(pBVar5 + 0x10));
      BytecodeRegisterOptimizer::PrepareOutputRegister(pBVar5,*(undefined4 *)(pBVar5 + 8));
    }
    if (this[0x1a8] == (BytecodeArrayBuilder)0x0) {
      uVar3 = 0;
      uVar4 = 0;
      uVar1 = 0xffffffff00000000;
    }
    else {
      uVar4 = *(ulong *)(this + 0x1a8);
      this[0x1a8] = (BytecodeArrayBuilder)0x0;
      *(undefined4 *)(this + 0x1ac) = 0xffffffff;
      uVar1 = uVar4 & 0xffffffff00000000;
      uVar3 = uVar4 & 0xffffff00;
      uVar4 = uVar4 & 0xff;
    }
    uVar1 = uVar1 | uVar3;
    local_28 = uVar1 | uVar4;
    local_48[0] = (BytecodeNode)0x51;
    BVar2 = this[0x1b0];
    if (BVar2 == (BytecodeArrayBuilder)0x0) goto LAB_017b2274;
    if ((int)uVar4 == 0) goto LAB_017b2260;
LAB_017b2208:
    if (((int)uVar4 == 1) && (BVar2 == (BytecodeArrayBuilder)0x2)) {
      local_28 = uVar1 | 2;
    }
  }
  else {
    pBVar5 = *(BytecodeRegisterOptimizer **)(this + 0x1a0);
    if (pBVar5 != (BytecodeRegisterOptimizer *)0x0) {
      BytecodeRegisterOptimizer::Materialize(pBVar5,*(RegisterInfo **)(pBVar5 + 0x10));
      BytecodeRegisterOptimizer::PrepareOutputRegister(pBVar5,*(undefined4 *)(pBVar5 + 8));
    }
    if (this[0x1a8] == (BytecodeArrayBuilder)0x0) {
      uVar3 = 0;
      uVar4 = 0;
      uVar1 = 0xffffffff00000000;
    }
    else {
      uVar4 = *(ulong *)(this + 0x1a8);
      this[0x1a8] = (BytecodeArrayBuilder)0x0;
      *(undefined4 *)(this + 0x1ac) = 0xffffffff;
      uVar1 = uVar4 & 0xffffffff00000000;
      uVar3 = uVar4 & 0xffffff00;
      uVar4 = uVar4 & 0xff;
    }
    uVar1 = uVar1 | uVar3;
    local_28 = uVar1 | uVar4;
    local_48[0] = (BytecodeNode)0x50;
    BVar2 = this[0x1b0];
    if (BVar2 == (BytecodeArrayBuilder)0x0) goto LAB_017b2274;
    if ((int)uVar4 != 0) goto LAB_017b2208;
LAB_017b2260:
    local_28 = *(ulong *)(this + 0x1b0);
  }
  this[0x1b0] = (BytecodeArrayBuilder)0x0;
  *(undefined4 *)(this + 0x1b4) = 0xffffffff;
LAB_017b2274:
  local_2c = 1;
  local_34 = 0;
  local_3c = 0;
  local_44 = 0;
  BytecodeArrayWriter::Write((BytecodeArrayWriter *)(this + 0x110),local_48);
  return this;
}

