
/* v8::internal::interpreter::BytecodeArrayBuilder::StoreNamedProperty(v8::internal::interpreter::Register,
   unsigned long, int, v8::internal::LanguageMode) */

long v8::internal::interpreter::BytecodeArrayBuilder::StoreNamedProperty
               (long param_1,int param_2,uint param_3,uint param_4)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  BytecodeRegisterOptimizer *this;
  ulong uVar6;
  BytecodeNode local_68 [4];
  int local_64;
  uint uStack_60;
  uint local_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  byte local_4c;
  ulong local_48;
  
  this = *(BytecodeRegisterOptimizer **)(param_1 + 0x1a0);
  if (this != (BytecodeRegisterOptimizer *)0x0) {
    BytecodeRegisterOptimizer::Materialize(this,*(RegisterInfo **)(this + 0x10));
    BytecodeRegisterOptimizer::PrepareOutputRegister(this,*(undefined4 *)(this + 8));
  }
  if (*(char *)(param_1 + 0x1a8) == '\0') {
    uVar3 = 0;
    uVar4 = 0;
    uVar2 = 0xffffffff00000000;
  }
  else {
    uVar4 = *(ulong *)(param_1 + 0x1a8);
    *(undefined1 *)(param_1 + 0x1a8) = 0;
    *(undefined4 *)(param_1 + 0x1ac) = 0xffffffff;
    uVar2 = uVar4 & 0xffffffff00000000;
    uVar3 = uVar4 & 0xffffff00;
    uVar4 = uVar4 & 0xff;
  }
  uVar6 = uVar2 | uVar3 | uVar4;
  if (*(long *)(param_1 + 0x1a0) != 0) {
    param_2 = BytecodeRegisterOptimizer::GetInputRegister();
  }
  local_64 = -5 - param_2;
  bVar5 = 2;
  bVar1 = bVar5;
  if (0xffff < 0x7ffbU - param_2) {
    bVar1 = 4;
  }
  if (0x7bU - param_2 < 0x100) {
    bVar1 = 1;
  }
  if (bVar1 < 2) {
    bVar1 = 1;
  }
  if (0xffff < param_3) {
    bVar5 = 4;
  }
  if (param_3 < 0x100) {
    bVar5 = 1;
  }
  if (bVar5 <= bVar1) {
    bVar5 = bVar1;
  }
  local_4c = 2;
  if (0xffff < param_4) {
    local_4c = 4;
  }
  if (param_4 < 0x100) {
    local_4c = 1;
  }
  local_68[0] = (BytecodeNode)0x2d;
  if (local_4c <= bVar5) {
    local_4c = bVar5;
  }
  uStack_58 = 0;
  local_54 = 0;
  uStack_50 = 3;
  local_48 = uVar6;
  if (*(char *)(param_1 + 0x1b0) != '\0') {
    if ((int)uVar4 == 0) {
      local_48 = *(ulong *)(param_1 + 0x1b0);
    }
    else if (((int)uVar4 == 1) && (*(char *)(param_1 + 0x1b0) == '\x02')) {
      local_48 = uVar2 | uVar3 | 2;
    }
    *(undefined1 *)(param_1 + 0x1b0) = 0;
    *(undefined4 *)(param_1 + 0x1b4) = 0xffffffff;
  }
  uStack_60 = param_3;
  local_5c = param_4;
  BytecodeArrayWriter::Write((BytecodeArrayWriter *)(param_1 + 0x110),local_68);
  return param_1;
}

