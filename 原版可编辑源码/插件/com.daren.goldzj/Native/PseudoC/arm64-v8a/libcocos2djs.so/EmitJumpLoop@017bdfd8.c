
/* v8::internal::interpreter::BytecodeArrayWriter::EmitJumpLoop(v8::internal::interpreter::BytecodeNode*,
   v8::internal::interpreter::BytecodeLoopHeader*) */

void __thiscall
v8::internal::interpreter::BytecodeArrayWriter::EmitJumpLoop
          (BytecodeArrayWriter *this,BytecodeNode *param_1,BytecodeLoopHeader *param_2)

{
  BytecodeNode BVar1;
  uint uVar2;
  BytecodeNode BVar3;
  ulong uVar4;
  char *pcVar5;
  
  uVar4 = *(long *)(this + 0x18) - *(long *)(this + 0x10);
  if (uVar4 < *(ulong *)param_2) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","current_offset >= loop_header->offset()");
  }
  if (uVar4 >> 0x20 != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","current_offset <= static_cast<size_t>(kMaxUInt32)");
  }
  uVar2 = (int)uVar4 - (int)*(ulong *)param_2;
  pcVar5 = *(char **)(Bytecodes::kOperandTypeInfos + (ulong)(byte)*param_1 * 8);
  if (0xff < uVar2) {
    uVar2 = uVar2 + 1;
  }
  *(uint *)(param_1 + 4) = uVar2;
  if (*pcVar5 == '\x02') {
    BVar1 = param_1[0x1c];
    BVar3 = (BytecodeNode)0x2;
    if (0xffff < uVar2) {
      BVar3 = (BytecodeNode)0x4;
    }
    if (uVar2 < 0x100) {
      BVar3 = (BytecodeNode)0x1;
    }
  }
  else {
    if (*pcVar5 != '\x01') goto LAB_017be080;
    BVar1 = param_1[0x1c];
    BVar3 = (BytecodeNode)0x2;
    if (uVar2 != (int)(short)uVar2) {
      BVar3 = (BytecodeNode)0x4;
    }
    if (uVar2 == (int)(char)uVar2) {
      BVar3 = (BytecodeNode)0x1;
    }
  }
  if ((byte)BVar3 <= (byte)BVar1) {
    BVar3 = BVar1;
  }
  param_1[0x1c] = BVar3;
LAB_017be080:
  EmitBytecode(this,param_1);
  return;
}

