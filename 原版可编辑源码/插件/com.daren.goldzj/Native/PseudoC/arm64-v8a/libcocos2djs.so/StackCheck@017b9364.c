
/* v8::internal::interpreter::BytecodeArrayBuilder::StackCheck(int) */

BytecodeArrayBuilder * __thiscall
v8::internal::interpreter::BytecodeArrayBuilder::StackCheck(BytecodeArrayBuilder *this,int param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  BytecodeNode local_48 [4];
  undefined8 local_44;
  undefined8 local_3c;
  undefined8 local_34;
  undefined1 local_2c;
  ulong local_28;
  
  if (param_1 == -1) {
    if (this[0x1a8] == (BytecodeArrayBuilder)0x0) {
      uVar2 = 0;
      uVar3 = 0;
      uVar1 = 0xffffffff00000000;
      goto LAB_017b93b8;
    }
  }
  else {
    this[0x1a8] = (BytecodeArrayBuilder)0x1;
    *(int *)(this + 0x1ac) = param_1;
  }
  uVar3 = *(ulong *)(this + 0x1a8);
  this[0x1a8] = (BytecodeArrayBuilder)0x0;
  *(undefined4 *)(this + 0x1ac) = 0xffffffff;
  uVar1 = uVar3 & 0xffffffff00000000;
  uVar2 = uVar3 & 0xffffff00;
  uVar3 = uVar3 & 0xff;
LAB_017b93b8:
  local_28 = uVar1 | uVar2 | uVar3;
  local_34 = 0;
  local_3c = 0;
  local_48[0] = (BytecodeNode)0xa7;
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

