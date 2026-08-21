
/* v8::internal::interpreter::Bytecodes::GetOperandOffset(v8::internal::interpreter::Bytecode, int,
   v8::internal::interpreter::OperandScale) */

int v8::internal::interpreter::Bytecodes::GetOperandOffset(byte param_1,uint param_2,uint param_3)

{
  byte *pbVar1;
  int iVar2;
  ulong uVar3;
  
  if ((int)param_2 < 1) {
    return 1;
  }
  uVar3 = 0;
  iVar2 = 1;
  do {
    if ((*(uint *)(kOperandCount + (ulong)param_1 * 4) &
        ((int)*(uint *)(kOperandCount + (ulong)param_1 * 4) >> 0x1f ^ 0xffffffffU)) <= param_2 - 1)
    {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","i < NumberOfOperands(bytecode)");
    }
    pbVar1 = (byte *)(*(long *)(kOperandSizes +
                               (ulong)param_1 * 8 + (ulong)(param_3 >> 1 & 0x7f) * 0x5b8) + uVar3);
    uVar3 = uVar3 + 1;
    iVar2 = iVar2 + (uint)*pbVar1;
  } while (param_2 != uVar3);
  return iVar2;
}

