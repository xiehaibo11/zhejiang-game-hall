
/* v8::internal::interpreter::BytecodeArrayBuilder::JumpLoop(v8::internal::interpreter::BytecodeLoopHeader*,
   int) */

BytecodeArrayBuilder * __thiscall
v8::internal::interpreter::BytecodeArrayBuilder::JumpLoop
          (BytecodeArrayBuilder *this,BytecodeLoopHeader *param_1,int param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  BytecodeNode local_58 [4];
  undefined4 local_54;
  int iStack_50;
  undefined8 local_4c;
  undefined8 uStack_44;
  byte local_3c;
  ulong local_38;
  
  if (*(BytecodeRegisterOptimizer **)(this + 0x1a0) != (BytecodeRegisterOptimizer *)0x0) {
    BytecodeRegisterOptimizer::Flush(*(BytecodeRegisterOptimizer **)(this + 0x1a0));
  }
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
  local_3c = 2;
  if (param_2 != (short)param_2) {
    local_3c = 4;
  }
  if (param_2 == (char)param_2) {
    local_3c = 1;
  }
  local_38 = uVar2 | uVar3 | uVar1;
  if (local_3c < 2) {
    local_3c = 1;
  }
  local_54 = 0;
  local_58[0] = (BytecodeNode)0x8a;
  uStack_44 = 0x200000000;
  local_4c = 0;
  if (this[0x1b0] != (BytecodeArrayBuilder)0x0) {
    if ((int)uVar1 == 0) {
      local_38 = *(ulong *)(this + 0x1b0);
    }
    else if (((int)uVar1 == 1) && (this[0x1b0] == (BytecodeArrayBuilder)0x2)) {
      local_38 = uVar2 | uVar3 | 2;
    }
    this[0x1b0] = (BytecodeArrayBuilder)0x0;
    *(undefined4 *)(this + 0x1b4) = 0xffffffff;
  }
  iStack_50 = param_2;
  BytecodeArrayWriter::WriteJumpLoop((BytecodeArrayWriter *)(this + 0x110),local_58,param_1);
  return this;
}

