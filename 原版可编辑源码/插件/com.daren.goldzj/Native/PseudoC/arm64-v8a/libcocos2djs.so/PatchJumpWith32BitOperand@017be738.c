
/* v8::internal::interpreter::BytecodeArrayWriter::PatchJumpWith32BitOperand(unsigned long, int) */

void __thiscall
v8::internal::interpreter::BytecodeArrayWriter::PatchJumpWith32BitOperand
          (BytecodeArrayWriter *this,ulong param_1,int param_2)

{
  undefined1 uStack_13;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  ConstantArrayBuilder::DiscardReservedEntry(*(ConstantArrayBuilder **)(this + 0x70),4);
  if (param_1 + 1 < (ulong)(*(long *)(this + 0x18) - *(long *)(this + 0x10))) {
    *(char *)(*(long *)(this + 0x10) + param_1 + 1) = (char)param_2;
    if (param_1 + 2 < (ulong)(*(long *)(this + 0x18) - *(long *)(this + 0x10))) {
      uStack_13 = (undefined1)((uint)param_2 >> 8);
      *(undefined1 *)(*(long *)(this + 0x10) + param_1 + 2) = uStack_13;
      if (param_1 + 3 < (ulong)(*(long *)(this + 0x18) - *(long *)(this + 0x10))) {
        uStack_12 = (undefined1)((uint)param_2 >> 0x10);
        *(undefined1 *)(*(long *)(this + 0x10) + param_1 + 3) = uStack_12;
        if (param_1 + 4 < (ulong)(*(long *)(this + 0x18) - *(long *)(this + 0x10))) {
          uStack_11 = (undefined1)((uint)param_2 >> 0x18);
          *(undefined1 *)(*(long *)(this + 0x10) + param_1 + 4) = uStack_11;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

