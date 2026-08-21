
/* v8::internal::interpreter::RegisterTransferWriter::EmitMov(v8::internal::interpreter::Register,
   v8::internal::interpreter::Register) */

void __thiscall
v8::internal::interpreter::RegisterTransferWriter::EmitMov
          (RegisterTransferWriter *this,int param_2,int param_3)

{
  byte bVar1;
  long lVar2;
  BytecodeNode local_38 [4];
  int local_34;
  int iStack_30;
  undefined8 local_2c;
  undefined8 uStack_24;
  byte local_1c;
  undefined8 local_18;
  
  local_34 = -5 - param_2;
  iStack_30 = -5 - param_3;
  lVar2 = *(long *)(this + 8);
  local_1c = 2;
  bVar1 = local_1c;
  if (0xffff < 0x7ffbU - param_2) {
    bVar1 = 4;
  }
  if (0x7bU - param_2 < 0x100) {
    bVar1 = 1;
  }
  local_38[0] = (BytecodeNode)0x27;
  local_18 = 0xffffffff00000000;
  if (bVar1 < 2) {
    bVar1 = 1;
  }
  if (0xffff < 0x7ffbU - param_3) {
    local_1c = 4;
  }
  if (0x7bU - param_3 < 0x100) {
    local_1c = 1;
  }
  if (local_1c <= bVar1) {
    local_1c = bVar1;
  }
  uStack_24 = 0x200000000;
  local_2c = 0;
  if (*(char *)(lVar2 + 0x1b0) != '\0') {
    local_18 = *(undefined8 *)(lVar2 + 0x1b0);
    *(undefined1 *)(lVar2 + 0x1b0) = 0;
    *(undefined4 *)(lVar2 + 0x1b4) = 0xffffffff;
  }
  BytecodeArrayWriter::Write((BytecodeArrayWriter *)(lVar2 + 0x110),local_38);
  return;
}

