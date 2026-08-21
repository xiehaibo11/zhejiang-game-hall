
/* v8::internal::DisassemblingDecoder::SubstitutePCRelAddressField(v8::internal::Instruction*, char
   const*) */

undefined8
v8::internal::DisassemblingDecoder::SubstitutePCRelAddressField(Instruction *param_1,char *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = *(uint *)param_2 >> 0x12 & 0x1800 | (*(uint *)param_2 >> 5) << 0xd;
  uVar1 = (int)uVar2 >> 0xb;
  uVar4 = 0x2d;
  if (-1 < (int)uVar2) {
    uVar4 = 0x2b;
  }
  uVar3 = -uVar1;
  if (-1 < (int)uVar2) {
    uVar3 = uVar1;
  }
  AppendToOutput((char *)param_1,"#%c0x%x (addr %p)",(ulong)uVar4,(ulong)uVar3,param_2 + (int)uVar1)
  ;
  return 0xd;
}

