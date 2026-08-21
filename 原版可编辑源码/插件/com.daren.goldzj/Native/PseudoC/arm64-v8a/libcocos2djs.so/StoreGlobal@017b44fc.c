
/* v8::internal::interpreter::BytecodeArrayBuilder::StoreGlobal(v8::internal::AstRawString const*,
   int) */

BytecodeArrayBuilder * __thiscall
v8::internal::interpreter::BytecodeArrayBuilder::StoreGlobal
          (BytecodeArrayBuilder *this,AstRawString *param_1,int param_2)

{
  byte bVar1;
  BytecodeRegisterOptimizer *this_00;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  BytecodeNode local_58 [4];
  uint local_54;
  int iStack_50;
  undefined8 local_4c;
  undefined8 uStack_44;
  byte local_3c;
  ulong local_38;
  
  local_54 = ConstantArrayBuilder::Insert((ConstantArrayBuilder *)(this + 0x18),param_1);
  this_00 = *(BytecodeRegisterOptimizer **)(this + 0x1a0);
  if (this_00 != (BytecodeRegisterOptimizer *)0x0) {
    BytecodeRegisterOptimizer::Materialize(this_00,*(RegisterInfo **)(this_00 + 0x10));
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
  local_3c = 2;
  bVar1 = local_3c;
  if (0xffff < local_54) {
    bVar1 = 4;
  }
  if (local_54 < 0x100) {
    bVar1 = 1;
  }
  local_58[0] = (BytecodeNode)0x15;
  local_38 = uVar2 | uVar3 | uVar4;
  if (bVar1 < 2) {
    bVar1 = 1;
  }
  if (0xffff < (uint)param_2) {
    local_3c = 4;
  }
  if ((uint)param_2 < 0x100) {
    local_3c = 1;
  }
  if (local_3c <= bVar1) {
    local_3c = bVar1;
  }
  uStack_44 = 0x200000000;
  local_4c = 0;
  if (this[0x1b0] != (BytecodeArrayBuilder)0x0) {
    if ((int)uVar4 == 0) {
      local_38 = *(ulong *)(this + 0x1b0);
    }
    else if (((int)uVar4 == 1) && (this[0x1b0] == (BytecodeArrayBuilder)0x2)) {
      local_38 = uVar2 | uVar3 | 2;
    }
    this[0x1b0] = (BytecodeArrayBuilder)0x0;
    *(undefined4 *)(this + 0x1b4) = 0xffffffff;
  }
  iStack_50 = param_2;
  BytecodeArrayWriter::Write((BytecodeArrayWriter *)(this + 0x110),local_58);
  return this;
}

