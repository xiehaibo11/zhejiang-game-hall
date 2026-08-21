
/* v8::internal::interpreter::BytecodeArrayBuilder::CreateRegExpLiteral(v8::internal::AstRawString
   const*, int, int) */

BytecodeArrayBuilder * __thiscall
v8::internal::interpreter::BytecodeArrayBuilder::CreateRegExpLiteral
          (BytecodeArrayBuilder *this,AstRawString *param_1,int param_2,int param_3)

{
  byte bVar1;
  BytecodeRegisterOptimizer *pBVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  BytecodeNode local_58 [4];
  uint local_54;
  int iStack_50;
  int local_4c;
  undefined8 local_48;
  undefined4 local_40;
  byte local_3c;
  ulong local_38;
  
  local_54 = ConstantArrayBuilder::Insert((ConstantArrayBuilder *)(this + 0x18),param_1);
  pBVar2 = *(BytecodeRegisterOptimizer **)(this + 0x1a0);
  if (pBVar2 != (BytecodeRegisterOptimizer *)0x0) {
    BytecodeRegisterOptimizer::PrepareOutputRegister(pBVar2,*(undefined4 *)(pBVar2 + 8));
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
  local_3c = 2;
  bVar1 = local_3c;
  if (0xffff < local_54) {
    bVar1 = 4;
  }
  local_58[0] = (BytecodeNode)0x79;
  if (local_54 < 0x100) {
    bVar1 = 1;
  }
  if (bVar1 < 2) {
    bVar1 = 1;
  }
  if (0xffff < (uint)param_2) {
    local_3c = 4;
  }
  if ((uint)param_2 < 0x100) {
    local_3c = 1;
  }
  local_38 = uVar3 | uVar4 | uVar5;
  if (local_3c <= bVar1) {
    local_3c = bVar1;
  }
  local_48 = 0;
  local_40 = 3;
  if (this[0x1b0] != (BytecodeArrayBuilder)0x0) {
    if ((int)uVar5 == 0) {
      local_38 = *(ulong *)(this + 0x1b0);
    }
    else if (((int)uVar5 == 1) && (this[0x1b0] == (BytecodeArrayBuilder)0x2)) {
      local_38 = uVar3 | uVar4 | 2;
    }
    this[0x1b0] = (BytecodeArrayBuilder)0x0;
    *(undefined4 *)(this + 0x1b4) = 0xffffffff;
  }
  iStack_50 = param_2;
  local_4c = param_3;
  BytecodeArrayWriter::Write((BytecodeArrayWriter *)(this + 0x110),local_58);
  return this;
}

