
/* v8::internal::interpreter::BytecodeArrayWriter::PatchJumpWith8BitOperand(unsigned long, int) */

void __thiscall
v8::internal::interpreter::BytecodeArrayWriter::PatchJumpWith8BitOperand
          (BytecodeArrayWriter *this,ulong param_1,int param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  if (param_1 < (ulong)(*(long *)(this + 0x18) - *(long *)(this + 0x10))) {
    if ((uint)param_2 < 0x100) {
      ConstantArrayBuilder::DiscardReservedEntry(*(ConstantArrayBuilder **)(this + 0x70),1);
    }
    else {
      uVar1 = *(undefined1 *)(*(long *)(this + 0x10) + param_1);
      param_2 = ConstantArrayBuilder::CommitReservedEntry
                          (*(ConstantArrayBuilder **)(this + 0x70),1,
                           -(ulong)((uint)param_2 >> 0x1f) & 0xfffffffe00000000 |
                           (ulong)(uint)param_2 << 1);
      uVar2 = 0x8c;
      switch(uVar1) {
      case 0x8b:
        break;
      default:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      case 0x97:
        uVar2 = 0x95;
        break;
      case 0x98:
        uVar2 = 0x96;
        break;
      case 0x99:
        uVar2 = 0x92;
        break;
      case 0x9a:
        uVar2 = 0x93;
        break;
      case 0x9b:
        uVar2 = 0x8d;
        break;
      case 0x9c:
        uVar2 = 0x8e;
        break;
      case 0x9d:
        uVar2 = 0x8f;
        break;
      case 0x9e:
        uVar2 = 0x90;
        break;
      case 0x9f:
        uVar2 = 0x91;
        break;
      case 0xa0:
        uVar2 = 0x94;
      }
      if ((ulong)(*(long *)(this + 0x18) - *(long *)(this + 0x10)) <= param_1) goto LAB_017be5e8;
      *(undefined1 *)(*(long *)(this + 0x10) + param_1) = uVar2;
    }
    if (param_1 + 1 < (ulong)(*(long *)(this + 0x18) - *(long *)(this + 0x10))) {
      *(char *)(*(long *)(this + 0x10) + param_1 + 1) = (char)param_2;
      return;
    }
  }
LAB_017be5e8:
                    /* WARNING: Subroutine does not return */
  abort();
}

