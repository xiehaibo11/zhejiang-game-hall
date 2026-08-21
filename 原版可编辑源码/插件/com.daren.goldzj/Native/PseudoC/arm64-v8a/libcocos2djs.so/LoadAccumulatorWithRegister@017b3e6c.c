
/* v8::internal::interpreter::BytecodeArrayBuilder::LoadAccumulatorWithRegister(v8::internal::interpreter::Register)
    */

BytecodeArrayBuilder * __thiscall
v8::internal::interpreter::BytecodeArrayBuilder::LoadAccumulatorWithRegister
          (BytecodeArrayBuilder *this,int param_2)

{
  BytecodeRegisterOptimizer *this_00;
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  BytecodeNode local_48 [4];
  int local_44;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  byte local_2c;
  ulong local_28;
  
  this_00 = *(BytecodeRegisterOptimizer **)(this + 0x1a0);
  if (this_00 == (BytecodeRegisterOptimizer *)0x0) {
    if ((this[0x1a8] == (BytecodeArrayBuilder)0x0) ||
       ((this[0x1a8] != (BytecodeArrayBuilder)0x2 &&
        (FLAG_ignition_filter_expression_positions != '\0')))) {
      uVar3 = 0;
      uVar1 = 0;
      uVar2 = 0xffffffff00000000;
    }
    else {
      uVar1 = *(ulong *)(this + 0x1a8);
      this[0x1a8] = (BytecodeArrayBuilder)0x0;
      *(undefined4 *)(this + 0x1ac) = 0xffffffff;
      uVar2 = uVar1 & 0xffffffff00000000;
      uVar3 = uVar1 & 0xffffff00;
      uVar1 = uVar1 & 0xff;
    }
    local_48[0] = (BytecodeNode)0x25;
    local_44 = -5 - param_2;
    local_30 = 1;
    local_2c = 2;
    if (0xffff < 0x7ffbU - param_2) {
      local_2c = 4;
    }
    if (0x7bU - param_2 < 0x100) {
      local_2c = 1;
    }
    local_28 = uVar2 | uVar3 | uVar1;
    if (local_2c < 2) {
      local_2c = 1;
    }
    local_40 = 0;
    uStack_38 = 0;
    if (this[0x1b0] != (BytecodeArrayBuilder)0x0) {
      if ((int)uVar1 == 0) {
        local_28 = *(ulong *)(this + 0x1b0);
      }
      else if (((int)uVar1 == 1) && (this[0x1b0] == (BytecodeArrayBuilder)0x2)) {
        local_28 = uVar2 | uVar3 | 2;
      }
      this[0x1b0] = (BytecodeArrayBuilder)0x0;
      *(undefined4 *)(this + 0x1b4) = 0xffffffff;
    }
    BytecodeArrayWriter::Write((BytecodeArrayWriter *)(this + 0x110),local_48);
  }
  else {
    if ((this[0x1a8] != (BytecodeArrayBuilder)0x0) &&
       ((this[0x1a8] == (BytecodeArrayBuilder)0x2 ||
        (FLAG_ignition_filter_expression_positions == '\0')))) {
      uVar1 = *(ulong *)(this + 0x1a8);
      this[0x1a8] = (BytecodeArrayBuilder)0x0;
      *(undefined4 *)(this + 0x1ac) = 0xffffffff;
      if ((uVar1 & 0xff) != 0) {
        *(ulong *)(this + 0x1b0) = uVar1;
      }
    }
    BytecodeRegisterOptimizer::RegisterTransfer
              (this_00,*(RegisterInfo **)
                        (*(long *)(this_00 + 0x20) + (long)(*(int *)(this_00 + 0x40) + param_2) * 8)
               ,*(RegisterInfo **)(this_00 + 0x10));
  }
  return this;
}

