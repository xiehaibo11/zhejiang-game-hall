
/* v8::internal::interpreter::BytecodeArrayBuilder::LoadKeyedProperty(v8::internal::interpreter::Register,
   int) */

BytecodeArrayBuilder * __thiscall
v8::internal::interpreter::BytecodeArrayBuilder::LoadKeyedProperty
          (BytecodeArrayBuilder *this,int param_2,uint param_3)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  BytecodeRegisterOptimizer *this_00;
  ulong uVar5;
  BytecodeNode local_68 [4];
  int local_64;
  uint uStack_60;
  undefined8 local_5c;
  undefined8 uStack_54;
  byte local_4c;
  ulong local_48;
  
  this_00 = *(BytecodeRegisterOptimizer **)(this + 0x1a0);
  if (this_00 != (BytecodeRegisterOptimizer *)0x0) {
    BytecodeRegisterOptimizer::Materialize(this_00,*(RegisterInfo **)(this_00 + 0x10));
    BytecodeRegisterOptimizer::PrepareOutputRegister(this_00,*(undefined4 *)(this_00 + 8));
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
  uVar5 = uVar2 | uVar3 | uVar4;
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
  local_68[0] = (BytecodeNode)0x2a;
  if (bVar1 < 2) {
    bVar1 = 1;
  }
  if (0xffff < param_3) {
    local_4c = 4;
  }
  if (param_3 < 0x100) {
    local_4c = 1;
  }
  if (local_4c <= bVar1) {
    local_4c = bVar1;
  }
  uStack_54 = 0x200000000;
  local_5c = 0;
  local_48 = uVar5;
  if (this[0x1b0] != (BytecodeArrayBuilder)0x0) {
    if ((int)uVar4 == 0) {
      local_48 = *(ulong *)(this + 0x1b0);
    }
    else if (((int)uVar4 == 1) && (this[0x1b0] == (BytecodeArrayBuilder)0x2)) {
      local_48 = uVar2 | uVar3 | 2;
    }
    this[0x1b0] = (BytecodeArrayBuilder)0x0;
    *(undefined4 *)(this + 0x1b4) = 0xffffffff;
  }
  uStack_60 = param_3;
  BytecodeArrayWriter::Write((BytecodeArrayWriter *)(this + 0x110),local_68);
  return this;
}

