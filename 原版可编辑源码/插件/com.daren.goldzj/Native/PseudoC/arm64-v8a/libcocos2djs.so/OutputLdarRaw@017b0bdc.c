
/* v8::internal::interpreter::BytecodeArrayBuilder::OutputLdarRaw(v8::internal::interpreter::Register)
    */

void __thiscall
v8::internal::interpreter::BytecodeArrayBuilder::OutputLdarRaw
          (BytecodeArrayBuilder *this,int param_2)

{
  BytecodeNode local_38 [4];
  int local_34;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined4 local_20;
  byte local_1c;
  undefined8 local_18;
  
  local_38[0] = (BytecodeNode)0x25;
  local_20 = 1;
  local_34 = -5 - param_2;
  local_18 = 0xffffffff00000000;
  local_1c = 2;
  if (0xffff < 0x7ffbU - param_2) {
    local_1c = 4;
  }
  if (0x7bU - param_2 < 0x100) {
    local_1c = 1;
  }
  if (local_1c < 2) {
    local_1c = 1;
  }
  local_30 = 0;
  uStack_28 = 0;
  if (this[0x1b0] != (BytecodeArrayBuilder)0x0) {
    local_18 = *(undefined8 *)(this + 0x1b0);
    this[0x1b0] = (BytecodeArrayBuilder)0x0;
    *(undefined4 *)(this + 0x1b4) = 0xffffffff;
  }
  BytecodeArrayWriter::Write((BytecodeArrayWriter *)(this + 0x110),local_38);
  return;
}

