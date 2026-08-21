
/* v8::internal::interpreter::BytecodeArrayBuilder::ThrowReferenceErrorIfHole(v8::internal::AstRawString
   const*) */

BytecodeArrayBuilder * __thiscall
v8::internal::interpreter::BytecodeArrayBuilder::ThrowReferenceErrorIfHole
          (BytecodeArrayBuilder *this,AstRawString *param_1)

{
  BytecodeRegisterOptimizer *this_00;
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  BytecodeNode local_48 [4];
  uint local_44;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  byte local_2c;
  ulong local_28;
  
  local_44 = ConstantArrayBuilder::Insert((ConstantArrayBuilder *)(this + 0x18),param_1);
  this_00 = *(BytecodeRegisterOptimizer **)(this + 0x1a0);
  if (this_00 != (BytecodeRegisterOptimizer *)0x0) {
    BytecodeRegisterOptimizer::Materialize(this_00,*(RegisterInfo **)(this_00 + 0x10));
  }
  if (this[0x1a8] == (BytecodeArrayBuilder)0x0) {
    uVar2 = 0;
    uVar3 = 0;
    uVar1 = 0xffffffff00000000;
  }
  else {
    uVar3 = *(ulong *)(this + 0x1a8);
    this[0x1a8] = (BytecodeArrayBuilder)0x0;
    *(undefined4 *)(this + 0x1ac) = 0xffffffff;
    uVar1 = uVar3 & 0xffffffff00000000;
    uVar2 = uVar3 & 0xffffff00;
    uVar3 = uVar3 & 0xff;
  }
  local_2c = 2;
  if (0xffff < local_44) {
    local_2c = 4;
  }
  if (local_44 < 0x100) {
    local_2c = 1;
  }
  local_28 = uVar1 | uVar2 | uVar3;
  if (local_2c < 2) {
    local_2c = 1;
  }
  local_48[0] = (BytecodeNode)0xac;
  local_30 = 1;
  local_40 = 0;
  uStack_38 = 0;
  if (this[0x1b0] != (BytecodeArrayBuilder)0x0) {
    if ((int)uVar3 == 0) {
      local_28 = *(ulong *)(this + 0x1b0);
    }
    else if (((int)uVar3 == 1) && (this[0x1b0] == (BytecodeArrayBuilder)0x2)) {
      local_28 = uVar1 | uVar2 | 2;
    }
    this[0x1b0] = (BytecodeArrayBuilder)0x0;
    *(undefined4 *)(this + 0x1b4) = 0xffffffff;
  }
  BytecodeArrayWriter::Write((BytecodeArrayWriter *)(this + 0x110),local_48);
  return this;
}

