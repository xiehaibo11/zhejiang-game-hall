
/* v8::internal::interpreter::BytecodeArrayBuilder::LoadLookupSlot(v8::internal::AstRawString
   const*, v8::internal::TypeofMode) */

BytecodeArrayBuilder * __thiscall
v8::internal::interpreter::BytecodeArrayBuilder::LoadLookupSlot
          (BytecodeArrayBuilder *this,AstRawString *param_1,int param_3)

{
  uint uVar1;
  BytecodeRegisterOptimizer *pBVar2;
  ulong uVar3;
  BytecodeArrayBuilder BVar4;
  ulong uVar5;
  ulong uVar6;
  BytecodeNode local_58 [4];
  uint local_54;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  byte local_3c;
  ulong local_38;
  
  uVar1 = ConstantArrayBuilder::Insert((ConstantArrayBuilder *)(this + 0x18),param_1);
  if (param_3 == 0) {
    pBVar2 = *(BytecodeRegisterOptimizer **)(this + 0x1a0);
    if (pBVar2 != (BytecodeRegisterOptimizer *)0x0) {
      BytecodeRegisterOptimizer::PrepareOutputRegister(pBVar2,*(undefined4 *)(pBVar2 + 8));
    }
    if (this[0x1a8] == (BytecodeArrayBuilder)0x0) {
      uVar5 = 0;
      uVar6 = 0;
      uVar3 = 0xffffffff00000000;
    }
    else {
      uVar6 = *(ulong *)(this + 0x1a8);
      this[0x1a8] = (BytecodeArrayBuilder)0x0;
      *(undefined4 *)(this + 0x1ac) = 0xffffffff;
      uVar3 = uVar6 & 0xffffffff00000000;
      uVar5 = uVar6 & 0xffffff00;
      uVar6 = uVar6 & 0xff;
    }
    uVar3 = uVar3 | uVar5;
    local_3c = 2;
    if (0xffff < uVar1) {
      local_3c = 4;
    }
    if (uVar1 < 0x100) {
      local_3c = 1;
    }
    local_38 = uVar3 | uVar6;
    if (local_3c < 2) {
      local_3c = 1;
    }
    local_58[0] = (BytecodeNode)0x21;
    BVar4 = this[0x1b0];
    if (BVar4 == (BytecodeArrayBuilder)0x0) goto LAB_017b4e18;
    if ((int)uVar6 != 0) goto LAB_017b4d8c;
LAB_017b4e04:
    local_38 = *(ulong *)(this + 0x1b0);
  }
  else {
    pBVar2 = *(BytecodeRegisterOptimizer **)(this + 0x1a0);
    if (pBVar2 != (BytecodeRegisterOptimizer *)0x0) {
      BytecodeRegisterOptimizer::PrepareOutputRegister(pBVar2,*(undefined4 *)(pBVar2 + 8));
    }
    if (this[0x1a8] == (BytecodeArrayBuilder)0x0) {
      uVar5 = 0;
      uVar6 = 0;
      uVar3 = 0xffffffff00000000;
    }
    else {
      uVar6 = *(ulong *)(this + 0x1a8);
      this[0x1a8] = (BytecodeArrayBuilder)0x0;
      *(undefined4 *)(this + 0x1ac) = 0xffffffff;
      uVar3 = uVar6 & 0xffffffff00000000;
      uVar5 = uVar6 & 0xffffff00;
      uVar6 = uVar6 & 0xff;
    }
    uVar3 = uVar3 | uVar5;
    local_3c = 2;
    if (0xffff < uVar1) {
      local_3c = 4;
    }
    if (uVar1 < 0x100) {
      local_3c = 1;
    }
    local_38 = uVar3 | uVar6;
    if (local_3c < 2) {
      local_3c = 1;
    }
    local_58[0] = (BytecodeNode)0x1e;
    BVar4 = this[0x1b0];
    if (BVar4 == (BytecodeArrayBuilder)0x0) goto LAB_017b4e18;
    if ((int)uVar6 == 0) goto LAB_017b4e04;
LAB_017b4d8c:
    if (((int)uVar6 == 1) && (BVar4 == (BytecodeArrayBuilder)0x2)) {
      local_38 = uVar3 | 2;
    }
  }
  this[0x1b0] = (BytecodeArrayBuilder)0x0;
  *(undefined4 *)(this + 0x1b4) = 0xffffffff;
LAB_017b4e18:
  local_40 = 1;
  uStack_48 = 0;
  local_50 = 0;
  local_54 = uVar1;
  BytecodeArrayWriter::Write((BytecodeArrayWriter *)(this + 0x110),local_58);
  return this;
}

