
/* v8::internal::interpreter::BytecodeArrayBuilder::LoadGlobal(v8::internal::AstRawString const*,
   int, v8::internal::TypeofMode) */

BytecodeArrayBuilder * __thiscall
v8::internal::interpreter::BytecodeArrayBuilder::LoadGlobal
          (BytecodeArrayBuilder *this,AstRawString *param_1,uint param_2,int param_4)

{
  byte bVar1;
  uint uVar2;
  BytecodeRegisterOptimizer *pBVar3;
  ulong uVar4;
  BytecodeArrayBuilder BVar5;
  ulong uVar6;
  ulong uVar7;
  BytecodeNode local_58 [4];
  uint local_54;
  uint uStack_50;
  undefined8 local_4c;
  undefined8 uStack_44;
  byte local_3c;
  ulong local_38;
  
  uVar2 = ConstantArrayBuilder::Insert((ConstantArrayBuilder *)(this + 0x18),param_1);
  if (param_4 == 0) {
    pBVar3 = *(BytecodeRegisterOptimizer **)(this + 0x1a0);
    if (pBVar3 != (BytecodeRegisterOptimizer *)0x0) {
      BytecodeRegisterOptimizer::PrepareOutputRegister(pBVar3,*(undefined4 *)(pBVar3 + 8));
    }
    if (this[0x1a8] == (BytecodeArrayBuilder)0x0) {
      uVar6 = 0;
      uVar7 = 0;
      uVar4 = 0xffffffff00000000;
    }
    else {
      uVar7 = *(ulong *)(this + 0x1a8);
      this[0x1a8] = (BytecodeArrayBuilder)0x0;
      *(undefined4 *)(this + 0x1ac) = 0xffffffff;
      uVar4 = uVar7 & 0xffffffff00000000;
      uVar6 = uVar7 & 0xffffff00;
      uVar7 = uVar7 & 0xff;
    }
    uVar4 = uVar4 | uVar6;
    local_3c = 2;
    bVar1 = local_3c;
    if (0xffff < uVar2) {
      bVar1 = 4;
    }
    if (uVar2 < 0x100) {
      bVar1 = 1;
    }
    local_58[0] = (BytecodeNode)0x14;
    local_38 = uVar4 | uVar7;
    if (bVar1 < 2) {
      bVar1 = 1;
    }
    if (0xffff < param_2) {
      local_3c = 4;
    }
    if (param_2 < 0x100) {
      local_3c = 1;
    }
    if (local_3c <= bVar1) {
      local_3c = bVar1;
    }
    BVar5 = this[0x1b0];
    if (BVar5 == (BytecodeArrayBuilder)0x0) goto LAB_017b44d8;
    if ((int)uVar7 != 0) goto LAB_017b4434;
LAB_017b44c4:
    local_38 = *(ulong *)(this + 0x1b0);
  }
  else {
    pBVar3 = *(BytecodeRegisterOptimizer **)(this + 0x1a0);
    if (pBVar3 != (BytecodeRegisterOptimizer *)0x0) {
      BytecodeRegisterOptimizer::PrepareOutputRegister(pBVar3,*(undefined4 *)(pBVar3 + 8));
    }
    if (this[0x1a8] == (BytecodeArrayBuilder)0x0) {
      uVar6 = 0;
      uVar7 = 0;
      uVar4 = 0xffffffff00000000;
    }
    else {
      uVar7 = *(ulong *)(this + 0x1a8);
      this[0x1a8] = (BytecodeArrayBuilder)0x0;
      *(undefined4 *)(this + 0x1ac) = 0xffffffff;
      uVar4 = uVar7 & 0xffffffff00000000;
      uVar6 = uVar7 & 0xffffff00;
      uVar7 = uVar7 & 0xff;
    }
    uVar4 = uVar4 | uVar6;
    local_3c = 2;
    bVar1 = local_3c;
    if (0xffff < uVar2) {
      bVar1 = 4;
    }
    if (uVar2 < 0x100) {
      bVar1 = 1;
    }
    local_58[0] = (BytecodeNode)0x13;
    local_38 = uVar4 | uVar7;
    if (bVar1 < 2) {
      bVar1 = 1;
    }
    if (0xffff < param_2) {
      local_3c = 4;
    }
    if (param_2 < 0x100) {
      local_3c = 1;
    }
    if (local_3c <= bVar1) {
      local_3c = bVar1;
    }
    BVar5 = this[0x1b0];
    if (BVar5 == (BytecodeArrayBuilder)0x0) goto LAB_017b44d8;
    if ((int)uVar7 == 0) goto LAB_017b44c4;
LAB_017b4434:
    if (((int)uVar7 == 1) && (BVar5 == (BytecodeArrayBuilder)0x2)) {
      local_38 = uVar4 | 2;
    }
  }
  this[0x1b0] = (BytecodeArrayBuilder)0x0;
  *(undefined4 *)(this + 0x1b4) = 0xffffffff;
LAB_017b44d8:
  uStack_44 = 0x200000000;
  local_4c = 0;
  local_54 = uVar2;
  uStack_50 = param_2;
  BytecodeArrayWriter::Write((BytecodeArrayWriter *)(this + 0x110),local_58);
  return this;
}

