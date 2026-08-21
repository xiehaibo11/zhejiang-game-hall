
/* v8::internal::interpreter::BytecodeArrayBuilder::StoreNamedPropertyNoFeedback(v8::internal::interpreter::Register,
   v8::internal::AstRawString const*, v8::internal::LanguageMode) */

BytecodeArrayBuilder * __thiscall
v8::internal::interpreter::BytecodeArrayBuilder::StoreNamedPropertyNoFeedback
          (BytecodeArrayBuilder *this,int param_2,AstRawString *param_3,uint param_4)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  BytecodeRegisterOptimizer *this_00;
  ulong uVar6;
  BytecodeNode local_68 [4];
  int local_64;
  uint local_60;
  uint uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  byte local_4c;
  ulong local_48;
  
  uVar2 = ConstantArrayBuilder::Insert((ConstantArrayBuilder *)(this + 0x18),param_3);
  this_00 = *(BytecodeRegisterOptimizer **)(this + 0x1a0);
  if (this_00 != (BytecodeRegisterOptimizer *)0x0) {
    BytecodeRegisterOptimizer::Materialize(this_00,*(RegisterInfo **)(this_00 + 0x10));
    BytecodeRegisterOptimizer::PrepareOutputRegister(this_00,*(undefined4 *)(this_00 + 8));
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
  uVar6 = uVar3 | uVar4 | uVar5;
  if (*(long *)(this + 0x1a0) != 0) {
    param_2 = BytecodeRegisterOptimizer::GetInputRegister();
  }
  local_64 = -5 - param_2;
  local_4c = 2;
  bVar1 = local_4c;
  if (0xffff < 0x7ffbU - param_2) {
    bVar1 = 4;
  }
  if (0x7bU - param_2 < 0x100) {
    bVar1 = 1;
  }
  uStack_5c = param_4 & 1;
  if (bVar1 < 2) {
    bVar1 = 1;
  }
  if (0xffff < uVar2) {
    local_4c = 4;
  }
  if (uVar2 < 0x100) {
    local_4c = 1;
  }
  local_68[0] = (BytecodeNode)0x2e;
  if (local_4c <= bVar1) {
    local_4c = bVar1;
  }
  local_58 = 0;
  local_50 = 3;
  local_48 = uVar6;
  if (this[0x1b0] != (BytecodeArrayBuilder)0x0) {
    if ((int)uVar5 == 0) {
      local_48 = *(ulong *)(this + 0x1b0);
    }
    else if (((int)uVar5 == 1) && (this[0x1b0] == (BytecodeArrayBuilder)0x2)) {
      local_48 = uVar3 | uVar4 | 2;
    }
    this[0x1b0] = (BytecodeArrayBuilder)0x0;
    *(undefined4 *)(this + 0x1b4) = 0xffffffff;
  }
  local_60 = uVar2;
  BytecodeArrayWriter::Write((BytecodeArrayWriter *)(this + 0x110),local_68);
  return this;
}

