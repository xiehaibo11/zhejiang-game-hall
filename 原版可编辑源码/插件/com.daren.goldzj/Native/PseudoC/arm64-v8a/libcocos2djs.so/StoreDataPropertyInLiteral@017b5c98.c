
/* v8::internal::interpreter::BytecodeArrayBuilder::StoreDataPropertyInLiteral(v8::internal::interpreter::Register,
   v8::internal::interpreter::Register, v8::base::Flags<v8::internal::DataPropertyInLiteralFlag,
   int>, int) */

BytecodeArrayBuilder * __thiscall
v8::internal::interpreter::BytecodeArrayBuilder::StoreDataPropertyInLiteral
          (BytecodeArrayBuilder *this,int param_2,int param_3,undefined4 param_4,uint param_5)

{
  byte bVar1;
  BytecodeRegisterOptimizer *this_00;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  ulong uVar5;
  ulong uVar6;
  BytecodeNode local_78 [4];
  int local_74;
  int iStack_70;
  undefined4 local_6c;
  uint uStack_68;
  undefined8 local_64;
  byte local_5c;
  ulong local_58;
  
  this_00 = *(BytecodeRegisterOptimizer **)(this + 0x1a0);
  if (this_00 != (BytecodeRegisterOptimizer *)0x0) {
    BytecodeRegisterOptimizer::Materialize(this_00,*(RegisterInfo **)(this_00 + 0x10));
  }
  if (this[0x1a8] == (BytecodeArrayBuilder)0x0) {
    uVar3 = 0;
    uVar5 = 0;
    uVar2 = 0xffffffff00000000;
  }
  else {
    uVar5 = *(ulong *)(this + 0x1a8);
    this[0x1a8] = (BytecodeArrayBuilder)0x0;
    *(undefined4 *)(this + 0x1ac) = 0xffffffff;
    uVar2 = uVar5 & 0xffffffff00000000;
    uVar3 = uVar5 & 0xffffff00;
    uVar5 = uVar5 & 0xff;
  }
  uVar6 = uVar2 | uVar3 | uVar5;
  if (*(BytecodeRegisterOptimizer **)(this + 0x1a0) == (BytecodeRegisterOptimizer *)0x0) {
    local_74 = -5 - param_2;
  }
  else {
    local_74 = BytecodeRegisterOptimizer::GetInputRegister
                         (*(BytecodeRegisterOptimizer **)(this + 0x1a0),param_2);
    local_74 = -5 - local_74;
    if (*(BytecodeRegisterOptimizer **)(this + 0x1a0) != (BytecodeRegisterOptimizer *)0x0) {
      param_3 = BytecodeRegisterOptimizer::GetInputRegister
                          (*(BytecodeRegisterOptimizer **)(this + 0x1a0),param_3);
    }
  }
  bVar4 = 2;
  bVar1 = bVar4;
  if (local_74 != (short)local_74) {
    bVar1 = 4;
  }
  local_78[0] = (BytecodeNode)0x32;
  if (local_74 == (char)local_74) {
    bVar1 = 1;
  }
  iStack_70 = -5 - param_3;
  if (bVar1 < 2) {
    bVar1 = 1;
  }
  if (0xffff < 0x7ffbU - param_3) {
    bVar4 = 4;
  }
  if (0x7bU - param_3 < 0x100) {
    bVar4 = 1;
  }
  if (bVar4 <= bVar1) {
    bVar4 = bVar1;
  }
  local_5c = 2;
  if (0xffff < param_5) {
    local_5c = 4;
  }
  if (param_5 < 0x100) {
    local_5c = 1;
  }
  if (local_5c <= bVar4) {
    local_5c = bVar4;
  }
  local_64 = 0x400000000;
  local_58 = uVar6;
  if (this[0x1b0] != (BytecodeArrayBuilder)0x0) {
    if ((int)uVar5 == 0) {
      local_58 = *(ulong *)(this + 0x1b0);
    }
    else if (((int)uVar5 == 1) && (this[0x1b0] == (BytecodeArrayBuilder)0x2)) {
      local_58 = uVar2 | uVar3 | 2;
    }
    this[0x1b0] = (BytecodeArrayBuilder)0x0;
    *(undefined4 *)(this + 0x1b4) = 0xffffffff;
  }
  local_6c = param_4;
  uStack_68 = param_5;
  BytecodeArrayWriter::Write((BytecodeArrayWriter *)(this + 0x110),local_78);
  return this;
}

