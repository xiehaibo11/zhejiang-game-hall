
/* v8::internal::interpreter::BytecodeArrayBuilder::LoadLookupGlobalSlot(v8::internal::AstRawString
   const*, v8::internal::TypeofMode, int, int) */

BytecodeArrayBuilder * __thiscall
v8::internal::interpreter::BytecodeArrayBuilder::LoadLookupGlobalSlot
          (BytecodeArrayBuilder *this,AstRawString *param_1,int param_3,uint param_4,uint param_5)

{
  byte bVar1;
  uint uVar2;
  BytecodeRegisterOptimizer *pBVar3;
  ulong uVar4;
  BytecodeArrayBuilder BVar5;
  ulong uVar6;
  byte bVar7;
  ulong uVar8;
  BytecodeNode local_68 [4];
  uint local_64;
  uint uStack_60;
  uint local_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  byte local_4c;
  ulong local_48;
  
  uVar2 = ConstantArrayBuilder::Insert((ConstantArrayBuilder *)(this + 0x18),param_1);
  if (param_3 == 0) {
    pBVar3 = *(BytecodeRegisterOptimizer **)(this + 0x1a0);
    if (pBVar3 != (BytecodeRegisterOptimizer *)0x0) {
      BytecodeRegisterOptimizer::PrepareOutputRegister(pBVar3,*(undefined4 *)(pBVar3 + 8));
    }
    if (this[0x1a8] == (BytecodeArrayBuilder)0x0) {
      uVar6 = 0;
      uVar8 = 0;
      uVar4 = 0xffffffff00000000;
    }
    else {
      uVar8 = *(ulong *)(this + 0x1a8);
      this[0x1a8] = (BytecodeArrayBuilder)0x0;
      *(undefined4 *)(this + 0x1ac) = 0xffffffff;
      uVar4 = uVar8 & 0xffffffff00000000;
      uVar6 = uVar8 & 0xffffff00;
      uVar8 = uVar8 & 0xff;
    }
    uVar4 = uVar4 | uVar6;
    bVar7 = 2;
    bVar1 = bVar7;
    if (0xffff < uVar2) {
      bVar1 = 4;
    }
    local_68[0] = (BytecodeNode)0x23;
    if (uVar2 < 0x100) {
      bVar1 = 1;
    }
    if (bVar1 < 2) {
      bVar1 = 1;
    }
    if (0xffff < param_4) {
      bVar7 = 4;
    }
    if (param_4 < 0x100) {
      bVar7 = 1;
    }
    if (bVar7 <= bVar1) {
      bVar7 = bVar1;
    }
    local_4c = 2;
    if (0xffff < param_5) {
      local_4c = 4;
    }
    if (param_5 < 0x100) {
      local_4c = 1;
    }
    local_48 = uVar4 | uVar8;
    if (local_4c <= bVar7) {
      local_4c = bVar7;
    }
    BVar5 = this[0x1b0];
    if (BVar5 == (BytecodeArrayBuilder)0x0) goto LAB_017b525c;
    if ((int)uVar8 != 0) goto LAB_017b51a0;
LAB_017b5248:
    local_48 = *(ulong *)(this + 0x1b0);
  }
  else {
    pBVar3 = *(BytecodeRegisterOptimizer **)(this + 0x1a0);
    if (pBVar3 != (BytecodeRegisterOptimizer *)0x0) {
      BytecodeRegisterOptimizer::PrepareOutputRegister(pBVar3,*(undefined4 *)(pBVar3 + 8));
    }
    if (this[0x1a8] == (BytecodeArrayBuilder)0x0) {
      uVar6 = 0;
      uVar8 = 0;
      uVar4 = 0xffffffff00000000;
    }
    else {
      uVar8 = *(ulong *)(this + 0x1a8);
      this[0x1a8] = (BytecodeArrayBuilder)0x0;
      *(undefined4 *)(this + 0x1ac) = 0xffffffff;
      uVar4 = uVar8 & 0xffffffff00000000;
      uVar6 = uVar8 & 0xffffff00;
      uVar8 = uVar8 & 0xff;
    }
    uVar4 = uVar4 | uVar6;
    bVar7 = 2;
    bVar1 = bVar7;
    if (0xffff < uVar2) {
      bVar1 = 4;
    }
    local_68[0] = (BytecodeNode)0x20;
    if (uVar2 < 0x100) {
      bVar1 = 1;
    }
    if (bVar1 < 2) {
      bVar1 = 1;
    }
    if (0xffff < param_4) {
      bVar7 = 4;
    }
    if (param_4 < 0x100) {
      bVar7 = 1;
    }
    if (bVar7 <= bVar1) {
      bVar7 = bVar1;
    }
    local_4c = 2;
    if (0xffff < param_5) {
      local_4c = 4;
    }
    if (param_5 < 0x100) {
      local_4c = 1;
    }
    local_48 = uVar4 | uVar8;
    if (local_4c <= bVar7) {
      local_4c = bVar7;
    }
    BVar5 = this[0x1b0];
    if (BVar5 == (BytecodeArrayBuilder)0x0) goto LAB_017b525c;
    if ((int)uVar8 == 0) goto LAB_017b5248;
LAB_017b51a0:
    if (((int)uVar8 == 1) && (BVar5 == (BytecodeArrayBuilder)0x2)) {
      local_48 = uVar4 | 2;
    }
  }
  this[0x1b0] = (BytecodeArrayBuilder)0x0;
  *(undefined4 *)(this + 0x1b4) = 0xffffffff;
LAB_017b525c:
  uStack_50 = 3;
  local_54 = 0;
  uStack_58 = 0;
  local_64 = uVar2;
  uStack_60 = param_4;
  local_5c = param_5;
  BytecodeArrayWriter::Write((BytecodeArrayWriter *)(this + 0x110),local_68);
  return this;
}

