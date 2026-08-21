
/* v8::internal::interpreter::BytecodeArrayBuilder::Delete(v8::internal::interpreter::Register,
   v8::internal::LanguageMode) */

BytecodeArrayBuilder * __thiscall
v8::internal::interpreter::BytecodeArrayBuilder::Delete
          (BytecodeArrayBuilder *this,int param_2,uint param_3)

{
  BytecodeArrayBuilder BVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  BytecodeRegisterOptimizer *pBVar5;
  BytecodeNode local_68 [4];
  int local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  byte local_4c;
  ulong local_48;
  
  if ((param_3 & 1) == 0) {
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
    if (*(BytecodeRegisterOptimizer **)(this + 0x1a0) != (BytecodeRegisterOptimizer *)0x0) {
      param_2 = BytecodeRegisterOptimizer::GetInputRegister
                          (*(BytecodeRegisterOptimizer **)(this + 0x1a0),param_2);
    }
    local_68[0] = (BytecodeNode)0x54;
    local_64 = -5 - param_2;
    local_4c = 2;
    if (0xffff < 0x7ffbU - param_2) {
      local_4c = 4;
    }
    if (0x7bU - param_2 < 0x100) {
      local_4c = 1;
    }
    if (local_4c < 2) {
      local_4c = 1;
    }
    BVar1 = this[0x1b0];
    local_48 = uVar2 | uVar4;
    if (BVar1 == (BytecodeArrayBuilder)0x0) goto LAB_017bc860;
    if ((int)uVar4 != 0) goto LAB_017bc7a8;
LAB_017bc84c:
    local_48 = *(ulong *)(this + 0x1b0);
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
    if (*(BytecodeRegisterOptimizer **)(this + 0x1a0) != (BytecodeRegisterOptimizer *)0x0) {
      param_2 = BytecodeRegisterOptimizer::GetInputRegister
                          (*(BytecodeRegisterOptimizer **)(this + 0x1a0),param_2);
    }
    local_68[0] = (BytecodeNode)0x53;
    local_64 = -5 - param_2;
    local_4c = 2;
    if (0xffff < 0x7ffbU - param_2) {
      local_4c = 4;
    }
    if (0x7bU - param_2 < 0x100) {
      local_4c = 1;
    }
    if (local_4c < 2) {
      local_4c = 1;
    }
    BVar1 = this[0x1b0];
    local_48 = uVar2 | uVar4;
    if (BVar1 == (BytecodeArrayBuilder)0x0) goto LAB_017bc860;
    if ((int)uVar4 == 0) goto LAB_017bc84c;
LAB_017bc7a8:
    if (((int)uVar4 == 1) && (BVar1 == (BytecodeArrayBuilder)0x2)) {
      local_48 = uVar2 | 2;
    }
  }
  this[0x1b0] = (BytecodeArrayBuilder)0x0;
  *(undefined4 *)(this + 0x1b4) = 0xffffffff;
LAB_017bc860:
  local_50 = 1;
  uStack_58 = 0;
  local_60 = 0;
  BytecodeArrayWriter::Write((BytecodeArrayWriter *)(this + 0x110),local_68);
  return this;
}

