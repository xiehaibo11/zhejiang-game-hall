
/* v8::internal::interpreter::BytecodeArrayBuilder::StoreLookupSlot(v8::internal::AstRawString
   const*, v8::internal::LanguageMode, v8::internal::LookupHoistingMode) */

BytecodeArrayBuilder * __thiscall
v8::internal::interpreter::BytecodeArrayBuilder::StoreLookupSlot
          (BytecodeArrayBuilder *this,AstRawString *param_1,uint param_3,undefined4 param_4)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  BytecodeRegisterOptimizer *this_00;
  BytecodeNode local_58 [4];
  uint local_54;
  uint uStack_50;
  undefined8 local_4c;
  undefined8 uStack_44;
  byte local_3c;
  ulong local_38;
  
  uVar1 = ConstantArrayBuilder::Insert((ConstantArrayBuilder *)(this + 0x18),param_1);
  uStack_50 = StoreLookupSlotFlags::Encode(param_3 & 1,param_4);
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
  local_3c = 2;
  if (0xffff < uVar1) {
    local_3c = 4;
  }
  uStack_50 = uStack_50 & 0xff;
  if (uVar1 < 0x100) {
    local_3c = 1;
  }
  local_58[0] = (BytecodeNode)0x24;
  local_38 = uVar2 | uVar3 | uVar4;
  if (local_3c < 2) {
    local_3c = 1;
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
  local_54 = uVar1;
  BytecodeArrayWriter::Write((BytecodeArrayWriter *)(this + 0x110),local_58);
  return this;
}

