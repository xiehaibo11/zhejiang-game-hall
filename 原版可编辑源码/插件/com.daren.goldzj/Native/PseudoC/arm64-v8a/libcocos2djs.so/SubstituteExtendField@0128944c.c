
/* v8::internal::DisassemblingDecoder::SubstituteExtendField(v8::internal::Instruction*, char
   const*) */

undefined8
v8::internal::DisassemblingDecoder::SubstituteExtendField(Instruction *param_1,char *param_2)

{
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  ulong uVar4;
  
  uVar1 = *(uint *)param_2;
  uVar2 = uVar1 >> 0xd & 7;
  uVar4 = (ulong)uVar2;
  if (((~uVar1 & 0x1f) == 0) || ((uVar1 & 0x3e0) == 0x3e0)) {
    if (uVar2 == 3) {
LAB_01289494:
      if ((uVar1 >> 10 & 7) == 0) {
        return 3;
      }
      pcVar3 = ", lsl #%d";
      goto LAB_012894dc;
    }
    if (uVar2 == 2) {
      if (-1 < (int)uVar1) goto LAB_01289494;
      uVar4 = 2;
    }
  }
  AppendToOutput((char *)param_1,", %s",(&PTR_DAT_01cbdc58)[uVar4]);
  if ((*(uint *)param_2 >> 10 & 7) == 0) {
    return 3;
  }
  pcVar3 = " #%d";
LAB_012894dc:
  AppendToOutput((char *)param_1,pcVar3);
  return 3;
}

