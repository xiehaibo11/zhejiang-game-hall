
/* v8::internal::interpreter::BytecodeArrayBuilder::LoadNamedProperty(v8::internal::interpreter::Register,
   v8::internal::AstRawString const*, int) */

BytecodeArrayBuilder * __thiscall
v8::internal::interpreter::BytecodeArrayBuilder::LoadNamedProperty
          (BytecodeArrayBuilder *this,int param_2,AstRawString *param_3,uint param_4)

{
  byte bVar1;
  uint uVar2;
  BytecodeRegisterOptimizer *pBVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  byte bVar7;
  ulong uVar8;
  BytecodeNode local_68 [4];
  int local_64;
  uint uStack_60;
  uint local_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  byte local_4c;
  ulong local_48;
  
  uVar2 = ConstantArrayBuilder::Insert((ConstantArrayBuilder *)(this + 0x18),param_3);
  pBVar3 = *(BytecodeRegisterOptimizer **)(this + 0x1a0);
  if (pBVar3 != (BytecodeRegisterOptimizer *)0x0) {
    BytecodeRegisterOptimizer::PrepareOutputRegister(pBVar3,*(undefined4 *)(pBVar3 + 8));
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
  uVar8 = uVar4 | uVar5 | uVar6;
  if (*(long *)(this + 0x1a0) != 0) {
    param_2 = BytecodeRegisterOptimizer::GetInputRegister();
  }
  local_64 = -5 - param_2;
  bVar7 = 2;
  bVar1 = bVar7;
  if (0xffff < 0x7ffbU - param_2) {
    bVar1 = 4;
  }
  if (0x7bU - param_2 < 0x100) {
    bVar1 = 1;
  }
  if (bVar1 < 2) {
    bVar1 = 1;
  }
  if (0xffff < uVar2) {
    bVar7 = 4;
  }
  if (uVar2 < 0x100) {
    bVar7 = 1;
  }
  if (bVar7 <= bVar1) {
    bVar7 = bVar1;
  }
  local_4c = 2;
  if (0xffff < param_4) {
    local_4c = 4;
  }
  if (param_4 < 0x100) {
    local_4c = 1;
  }
  local_68[0] = (BytecodeNode)0x28;
  if (local_4c <= bVar7) {
    local_4c = bVar7;
  }
  uStack_58 = 0;
  local_54 = 0;
  uStack_50 = 3;
  local_48 = uVar8;
  if (this[0x1b0] != (BytecodeArrayBuilder)0x0) {
    if ((int)uVar6 == 0) {
      local_48 = *(ulong *)(this + 0x1b0);
    }
    else if (((int)uVar6 == 1) && (this[0x1b0] == (BytecodeArrayBuilder)0x2)) {
      local_48 = uVar4 | uVar5 | 2;
    }
    this[0x1b0] = (BytecodeArrayBuilder)0x0;
    *(undefined4 *)(this + 0x1b4) = 0xffffffff;
  }
  uStack_60 = uVar2;
  local_5c = param_4;
  BytecodeArrayWriter::Write((BytecodeArrayWriter *)(this + 0x110),local_68);
  return this;
}

