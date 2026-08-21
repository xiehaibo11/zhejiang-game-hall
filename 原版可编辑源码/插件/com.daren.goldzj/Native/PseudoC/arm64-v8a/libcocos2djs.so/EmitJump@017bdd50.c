
/* v8::internal::interpreter::BytecodeArrayWriter::EmitJump(v8::internal::interpreter::BytecodeNode*,
   v8::internal::interpreter::BytecodeLabel*) */

void __thiscall
v8::internal::interpreter::BytecodeArrayWriter::EmitJump
          (BytecodeArrayWriter *this,BytecodeNode *param_1,BytecodeLabel *param_2)

{
  BytecodeNode BVar1;
  undefined1 uVar2;
  BytecodeNode BVar3;
  uint uVar4;
  ulong uVar5;
  
  *(int *)(this + 0x30) = *(int *)(this + 0x30) + 1;
  *(long *)(param_2 + 8) = *(long *)(this + 0x18) - *(long *)(this + 0x10);
  uVar2 = ConstantArrayBuilder::CreateReservedEntry(*(ConstantArrayBuilder **)(this + 0x70));
  switch(uVar2) {
  case 0:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  case 1:
    uVar5 = (ulong)(byte)*param_1;
    uVar4 = *(uint *)this;
    break;
  case 2:
    uVar5 = (ulong)(byte)*param_1;
    uVar4 = *(uint *)(this + 4);
    break;
  default:
    goto switchD_017bdda8_caseD_3;
  case 4:
    uVar5 = (ulong)(byte)*param_1;
    uVar4 = *(uint *)(this + 8);
  }
  *(uint *)(param_1 + 4) = uVar4;
  if (**(char **)(Bytecodes::kOperandTypeInfos + uVar5 * 8) == '\x02') {
    BVar1 = param_1[0x1c];
    BVar3 = (BytecodeNode)0x2;
    if (0xffff < uVar4) {
      BVar3 = (BytecodeNode)0x4;
    }
    if (uVar4 < 0x100) {
      BVar3 = (BytecodeNode)0x1;
    }
  }
  else {
    if (**(char **)(Bytecodes::kOperandTypeInfos + uVar5 * 8) != '\x01')
    goto switchD_017bdda8_caseD_3;
    BVar1 = param_1[0x1c];
    BVar3 = (BytecodeNode)0x2;
    if (uVar4 != (int)(short)uVar4) {
      BVar3 = (BytecodeNode)0x4;
    }
    if (uVar4 == (int)(char)uVar4) {
      BVar3 = (BytecodeNode)0x1;
    }
  }
  if ((byte)BVar3 <= (byte)BVar1) {
    BVar3 = BVar1;
  }
  param_1[0x1c] = BVar3;
switchD_017bdda8_caseD_3:
  EmitBytecode(this,param_1);
  return;
}

