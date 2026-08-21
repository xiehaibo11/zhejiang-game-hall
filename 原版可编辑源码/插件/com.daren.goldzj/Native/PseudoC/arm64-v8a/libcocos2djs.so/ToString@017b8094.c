
/* v8::internal::interpreter::BytecodeArrayBuilder::ToString() */

BytecodeArrayBuilder * __thiscall
v8::internal::interpreter::BytecodeArrayBuilder::ToString(BytecodeArrayBuilder *this)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  BytecodeRegisterOptimizer *this_00;
  BytecodeNode local_48 [4];
  undefined8 local_44;
  undefined8 local_3c;
  undefined8 local_34;
  undefined1 local_2c;
  ulong local_28;
  
  this_00 = *(BytecodeRegisterOptimizer **)(this + 0x1a0);
  if (this_00 != (BytecodeRegisterOptimizer *)0x0) {
    BytecodeRegisterOptimizer::Materialize(this_00,*(RegisterInfo **)(this_00 + 0x10));
    BytecodeRegisterOptimizer::PrepareOutputRegister(this_00,*(undefined4 *)(this_00 + 8));
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
  local_28 = uVar1 | uVar2 | uVar3;
  local_34 = 0;
  local_3c = 0;
  local_48[0] = (BytecodeNode)0x78;
  local_2c = 1;
  local_44 = 0;
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

