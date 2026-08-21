
/* v8::internal::compiler::CsaLoadEliminationHelpers::OffsetMayAlias(v8::internal::compiler::Node*,
   v8::internal::MachineRepresentation, v8::internal::compiler::Node*,
   v8::internal::MachineRepresentation) */

bool v8::internal::compiler::CsaLoadEliminationHelpers::OffsetMayAlias
               (long *param_1,char param_2,long *param_3,char param_4)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  if (*(short *)(lVar2 + 0x10) == 0x18) {
    lVar2 = *(long *)(lVar2 + 0x30);
  }
  else {
    if (*(short *)(lVar2 + 0x10) != 0x17) {
      lVar2 = 0;
      bVar1 = false;
      goto LAB_0169b8b4;
    }
    lVar2 = (long)*(int *)(lVar2 + 0x2c);
  }
  bVar1 = true;
LAB_0169b8b4:
  lVar3 = *param_3;
  if (*(short *)(lVar3 + 0x10) == 0x18) {
    lVar3 = *(long *)(lVar3 + 0x30);
  }
  else {
    if (*(short *)(lVar3 + 0x10) != 0x17) {
      return true;
    }
    lVar3 = (long)*(int *)(lVar3 + 0x2c);
  }
  if (!bVar1) {
    return true;
  }
  if (((byte)(param_2 - 1U) < 0xd) && ((byte)(param_4 - 1U) < 0xd)) {
    return lVar3 < lVar2 + (1L << ((ulong)*(uint *)(&DAT_01a5bc40 + (long)(char)(param_2 - 1U) * 4)
                                  & 0x3f)) &&
           lVar2 < lVar3 + (1L << ((ulong)*(uint *)(&DAT_01a5bc40 + (long)(char)(param_4 - 1U) * 4)
                                  & 0x3f));
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

