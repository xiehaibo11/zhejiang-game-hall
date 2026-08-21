
/* v8::internal::DisassemblingDecoder::SubstitutePrefetchField(v8::internal::Instruction*, char
   const*) */

undefined8
v8::internal::DisassemblingDecoder::SubstitutePrefetchField(Instruction *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  
  uVar3 = *(uint *)param_2;
  pcVar1 = "ld";
  if ((uVar3 & 0x10) != 0) {
    pcVar1 = "st";
  }
  pcVar2 = "keep";
  if ((uVar3 & 1) != 0) {
    pcVar2 = "strm";
  }
  AppendToOutput((char *)param_1,"p%sl%d%s",pcVar1,(ulong)((uVar3 >> 1 & 0xf) + 1),pcVar2);
  return 6;
}

