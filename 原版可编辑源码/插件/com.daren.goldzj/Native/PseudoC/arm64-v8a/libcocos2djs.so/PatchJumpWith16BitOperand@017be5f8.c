
/* v8::internal::interpreter::BytecodeArrayWriter::PatchJumpWith16BitOperand(unsigned long, int) */

void __thiscall
v8::internal::interpreter::BytecodeArrayWriter::PatchJumpWith16BitOperand
          (BytecodeArrayWriter *this,ulong param_1,int param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uStack_33;
  
  if (param_1 < (ulong)(*(long *)(this + 0x18) - *(long *)(this + 0x10))) {
    if ((param_2 & 0xffff0000U) == 0) {
      ConstantArrayBuilder::DiscardReservedEntry(*(ConstantArrayBuilder **)(this + 0x70),2);
    }
    else {
      uVar1 = *(undefined1 *)(*(long *)(this + 0x10) + param_1);
      param_2 = ConstantArrayBuilder::CommitReservedEntry
                          (*(ConstantArrayBuilder **)(this + 0x70),2,
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
      if ((ulong)(*(long *)(this + 0x18) - *(long *)(this + 0x10)) <= param_1) goto LAB_017be728;
      *(undefined1 *)(*(long *)(this + 0x10) + param_1) = uVar2;
    }
    if (param_1 + 1 < (ulong)(*(long *)(this + 0x18) - *(long *)(this + 0x10))) {
      *(char *)(*(long *)(this + 0x10) + param_1 + 1) = (char)param_2;
      if (param_1 + 2 < (ulong)(*(long *)(this + 0x18) - *(long *)(this + 0x10))) {
        uStack_33 = (undefined1)((uint)param_2 >> 8);
        *(undefined1 *)(*(long *)(this + 0x10) + param_1 + 2) = uStack_33;
        return;
      }
    }
  }
LAB_017be728:
                    /* WARNING: Subroutine does not return */
  abort();
}

