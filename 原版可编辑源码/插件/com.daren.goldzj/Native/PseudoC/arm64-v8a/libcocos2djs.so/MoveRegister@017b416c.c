
/* v8::internal::interpreter::BytecodeArrayBuilder::MoveRegister(v8::internal::interpreter::Register,
   v8::internal::interpreter::Register) */

BytecodeArrayBuilder * __thiscall
v8::internal::interpreter::BytecodeArrayBuilder::MoveRegister
          (BytecodeArrayBuilder *this,int param_2,int param_3)

{
  byte bVar1;
  BytecodeRegisterOptimizer *this_00;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  BytecodeNode local_48 [4];
  int local_44;
  int iStack_40;
  undefined8 local_3c;
  undefined8 uStack_34;
  byte local_2c;
  ulong local_28;
  
  this_00 = *(BytecodeRegisterOptimizer **)(this + 0x1a0);
  if (this_00 == (BytecodeRegisterOptimizer *)0x0) {
    if ((this[0x1a8] == (BytecodeArrayBuilder)0x0) ||
       ((this[0x1a8] != (BytecodeArrayBuilder)0x2 &&
        (FLAG_ignition_filter_expression_positions != '\0')))) {
      uVar4 = 0;
      uVar2 = 0;
      uVar3 = 0xffffffff00000000;
    }
    else {
      uVar2 = *(ulong *)(this + 0x1a8);
      this[0x1a8] = (BytecodeArrayBuilder)0x0;
      *(undefined4 *)(this + 0x1ac) = 0xffffffff;
      uVar3 = uVar2 & 0xffffffff00000000;
      uVar4 = uVar2 & 0xffffff00;
      uVar2 = uVar2 & 0xff;
    }
    local_44 = -5 - param_2;
    iStack_40 = -5 - param_3;
    local_2c = 2;
    bVar1 = local_2c;
    if (0xffff < 0x7ffbU - param_2) {
      bVar1 = 4;
    }
    if (0x7bU - param_2 < 0x100) {
      bVar1 = 1;
    }
    if (bVar1 < 2) {
      bVar1 = 1;
    }
    if (0xffff < 0x7ffbU - param_3) {
      local_2c = 4;
    }
    if (0x7bU - param_3 < 0x100) {
      local_2c = 1;
    }
    local_48[0] = (BytecodeNode)0x27;
    local_28 = uVar3 | uVar4 | uVar2;
    if (local_2c <= bVar1) {
      local_2c = bVar1;
    }
    uStack_34 = 0x200000000;
    local_3c = 0;
    if (this[0x1b0] != (BytecodeArrayBuilder)0x0) {
      if ((int)uVar2 == 0) {
        local_28 = *(ulong *)(this + 0x1b0);
      }
      else if (((int)uVar2 == 1) && (this[0x1b0] == (BytecodeArrayBuilder)0x2)) {
        local_28 = uVar3 | uVar4 | 2;
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
      uVar2 = *(ulong *)(this + 0x1a8);
      this[0x1a8] = (BytecodeArrayBuilder)0x0;
      *(undefined4 *)(this + 0x1ac) = 0xffffffff;
      if ((uVar2 & 0xff) != 0) {
        *(ulong *)(this + 0x1b0) = uVar2;
      }
    }
    BytecodeRegisterOptimizer::RegisterTransfer
              (this_00,*(RegisterInfo **)
                        (*(long *)(this_00 + 0x20) + (long)(*(int *)(this_00 + 0x40) + param_2) * 8)
               ,*(RegisterInfo **)
                 (*(long *)(this_00 + 0x20) + (long)(*(int *)(this_00 + 0x40) + param_3) * 8));
  }
  return this;
}

