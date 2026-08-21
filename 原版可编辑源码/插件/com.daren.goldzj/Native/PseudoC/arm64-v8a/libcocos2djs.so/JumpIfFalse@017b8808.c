
/* v8::internal::interpreter::BytecodeArrayBuilder::JumpIfFalse(v8::internal::interpreter::BytecodeArrayBuilder::ToBooleanMode,
   v8::internal::interpreter::BytecodeLabel*) */

BytecodeArrayBuilder * __thiscall
v8::internal::interpreter::BytecodeArrayBuilder::JumpIfFalse
          (BytecodeArrayBuilder *this,int param_2,BytecodeLabel *param_3)

{
  ulong uVar1;
  ulong uVar2;
  BytecodeArrayBuilder BVar3;
  ulong uVar4;
  BytecodeRegisterOptimizer *pBVar5;
  BytecodeNode local_58 [4];
  undefined8 local_54;
  undefined8 local_4c;
  undefined8 local_44;
  undefined1 local_3c;
  ulong local_38;
  
  if (param_2 == 1) {
    pBVar5 = *(BytecodeRegisterOptimizer **)(this + 0x1a0);
    if (pBVar5 != (BytecodeRegisterOptimizer *)0x0) {
      BytecodeRegisterOptimizer::Flush(pBVar5);
      BytecodeRegisterOptimizer::Materialize(pBVar5,*(RegisterInfo **)(pBVar5 + 0x10));
    }
    if ((this[0x1a8] == (BytecodeArrayBuilder)0x0) ||
       ((this[0x1a8] != (BytecodeArrayBuilder)0x2 &&
        (FLAG_ignition_filter_expression_positions != '\0')))) {
      uVar4 = 0;
      uVar1 = 0;
      uVar2 = 0xffffffff00000000;
    }
    else {
      uVar1 = *(ulong *)(this + 0x1a8);
      this[0x1a8] = (BytecodeArrayBuilder)0x0;
      *(undefined4 *)(this + 0x1ac) = 0xffffffff;
      uVar2 = uVar1 & 0xffffffff00000000;
      uVar4 = uVar1 & 0xffffff00;
      uVar1 = uVar1 & 0xff;
    }
    uVar2 = uVar2 | uVar4;
    local_38 = uVar2 | uVar1;
    local_58[0] = (BytecodeNode)0x9a;
    BVar3 = this[0x1b0];
    if (BVar3 == (BytecodeArrayBuilder)0x0) goto LAB_017b8988;
    if ((int)uVar1 != 0) goto LAB_017b8904;
LAB_017b8974:
    local_38 = *(ulong *)(this + 0x1b0);
  }
  else {
    pBVar5 = *(BytecodeRegisterOptimizer **)(this + 0x1a0);
    if (pBVar5 != (BytecodeRegisterOptimizer *)0x0) {
      BytecodeRegisterOptimizer::Flush(pBVar5);
      BytecodeRegisterOptimizer::Materialize(pBVar5,*(RegisterInfo **)(pBVar5 + 0x10));
    }
    if (this[0x1a8] == (BytecodeArrayBuilder)0x0) {
      uVar4 = 0;
      uVar1 = 0;
      uVar2 = 0xffffffff00000000;
    }
    else {
      uVar1 = *(ulong *)(this + 0x1a8);
      this[0x1a8] = (BytecodeArrayBuilder)0x0;
      *(undefined4 *)(this + 0x1ac) = 0xffffffff;
      uVar2 = uVar1 & 0xffffffff00000000;
      uVar4 = uVar1 & 0xffffff00;
      uVar1 = uVar1 & 0xff;
    }
    uVar2 = uVar2 | uVar4;
    local_38 = uVar2 | uVar1;
    local_58[0] = (BytecodeNode)0x98;
    BVar3 = this[0x1b0];
    if (BVar3 == (BytecodeArrayBuilder)0x0) goto LAB_017b8988;
    if ((int)uVar1 == 0) goto LAB_017b8974;
LAB_017b8904:
    if (((int)uVar1 == 1) && (BVar3 == (BytecodeArrayBuilder)0x2)) {
      local_38 = uVar2 | 2;
    }
  }
  this[0x1b0] = (BytecodeArrayBuilder)0x0;
  *(undefined4 *)(this + 0x1b4) = 0xffffffff;
LAB_017b8988:
  local_3c = 1;
  local_44 = 0x100000000;
  local_4c = 0;
  local_54 = 0;
  BytecodeArrayWriter::WriteJump((BytecodeArrayWriter *)(this + 0x110),local_58,param_3);
  return this;
}

