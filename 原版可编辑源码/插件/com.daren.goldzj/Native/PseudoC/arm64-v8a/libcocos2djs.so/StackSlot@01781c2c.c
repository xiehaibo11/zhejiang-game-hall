
/* v8::internal::compiler::MachineOperatorBuilder::StackSlot(v8::internal::MachineRepresentation,
   int) */

void __thiscall
v8::internal::compiler::MachineOperatorBuilder::StackSlot
          (MachineOperatorBuilder *this,char param_2,int param_3)

{
  if ((byte)(param_2 - 1U) < 0xd) {
    StackSlot(this,1 << (ulong)(*(uint *)(&DAT_01a619b4 + (long)(char)(param_2 - 1U) * 4) & 0x1f),
              param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

