
/* v8::internal::interpreter::BytecodeArrayBuilder::StoreKeyedProperty(v8::internal::interpreter::Register,
   v8::internal::interpreter::Register, int, v8::internal::LanguageMode) */

long v8::internal::interpreter::BytecodeArrayBuilder::StoreKeyedProperty
               (long param_1,int param_2,int param_3,uint param_4)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  ulong uVar5;
  BytecodeRegisterOptimizer *this;
  ulong uVar6;
  BytecodeNode local_78 [4];
  int local_74;
  int iStack_70;
  uint local_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 uStack_60;
  byte local_5c;
  ulong local_58;
  
  this = *(BytecodeRegisterOptimizer **)(param_1 + 0x1a0);
  if (this != (BytecodeRegisterOptimizer *)0x0) {
    BytecodeRegisterOptimizer::Materialize(this,*(RegisterInfo **)(this + 0x10));
    BytecodeRegisterOptimizer::PrepareOutputRegister(this,*(undefined4 *)(this + 8));
  }
  if (*(char *)(param_1 + 0x1a8) == '\0') {
    uVar3 = 0;
    uVar5 = 0;
    uVar2 = 0xffffffff00000000;
  }
  else {
    uVar5 = *(ulong *)(param_1 + 0x1a8);
    *(undefined1 *)(param_1 + 0x1a8) = 0;
    *(undefined4 *)(param_1 + 0x1ac) = 0xffffffff;
    uVar2 = uVar5 & 0xffffffff00000000;
    uVar3 = uVar5 & 0xffffff00;
    uVar5 = uVar5 & 0xff;
  }
  uVar6 = uVar2 | uVar3 | uVar5;
  if (*(BytecodeRegisterOptimizer **)(param_1 + 0x1a0) == (BytecodeRegisterOptimizer *)0x0) {
    local_74 = -5 - param_2;
  }
  else {
    local_74 = BytecodeRegisterOptimizer::GetInputRegister
                         (*(BytecodeRegisterOptimizer **)(param_1 + 0x1a0),param_2);
    local_74 = -5 - local_74;
    if (*(BytecodeRegisterOptimizer **)(param_1 + 0x1a0) != (BytecodeRegisterOptimizer *)0x0) {
      param_3 = BytecodeRegisterOptimizer::GetInputRegister
                          (*(BytecodeRegisterOptimizer **)(param_1 + 0x1a0),param_3);
    }
  }
  bVar4 = 2;
  bVar1 = bVar4;
  if (local_74 != (short)local_74) {
    bVar1 = 4;
  }
  local_78[0] = (BytecodeNode)0x30;
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
  if (0xffff < param_4) {
    local_5c = 4;
  }
  if (param_4 < 0x100) {
    local_5c = 1;
  }
  if (local_5c <= bVar4) {
    local_5c = bVar4;
  }
  uStack_68 = 0;
  local_64 = 0;
  uStack_60 = 3;
  local_58 = uVar6;
  if (*(char *)(param_1 + 0x1b0) != '\0') {
    if ((int)uVar5 == 0) {
      local_58 = *(ulong *)(param_1 + 0x1b0);
    }
    else if (((int)uVar5 == 1) && (*(char *)(param_1 + 0x1b0) == '\x02')) {
      local_58 = uVar2 | uVar3 | 2;
    }
    *(undefined1 *)(param_1 + 0x1b0) = 0;
    *(undefined4 *)(param_1 + 0x1b4) = 0xffffffff;
  }
  local_6c = param_4;
  BytecodeArrayWriter::Write((BytecodeArrayWriter *)(param_1 + 0x110),local_78);
  return param_1;
}

