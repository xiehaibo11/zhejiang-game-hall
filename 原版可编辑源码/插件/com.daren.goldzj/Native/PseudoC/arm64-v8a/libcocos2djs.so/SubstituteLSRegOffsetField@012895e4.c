
/* v8::internal::DisassemblingDecoder::SubstituteLSRegOffsetField(v8::internal::Instruction*, char
   const*) */

undefined8
v8::internal::DisassemblingDecoder::SubstituteLSRegOffsetField(Instruction *param_1,char *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  
  uVar1 = *(uint *)param_2;
  uVar4 = (ulong)(uVar1 >> 0xd) & 7;
  uVar3 = (uint)uVar4;
  uVar2 = 0x77;
  if ((uVar3 | 4) != 6) {
    uVar2 = 0x78;
  }
  if ((uVar1 >> 0x10 & 0x1f) == 0x1f) {
    AppendToOutput((char *)param_1,&DAT_019f6287,(ulong)uVar2);
  }
  else {
    AppendToOutput((char *)param_1,&DAT_019f627e,(ulong)uVar2);
  }
  if ((((uVar1 >> 0xc & 1) != 0) || (uVar3 != 3)) &&
     (AppendToOutput((char *)param_1,", %s",(&PTR_s_undefined_019b2fcb_0x53_01cbdc98)[uVar4]),
     (uVar1 >> 0xc & 1) != 0)) {
    uVar4 = CalcLSDataSize(*(uint *)param_2 & 0xc4c00000);
    AppendToOutput((char *)param_1,&DAT_019f62a8,uVar4 & 0xffffffff);
  }
  return 9;
}

