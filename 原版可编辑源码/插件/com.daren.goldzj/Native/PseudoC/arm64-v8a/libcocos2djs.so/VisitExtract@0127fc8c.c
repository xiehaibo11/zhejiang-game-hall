
/* v8::internal::DisassemblingDecoder::VisitExtract(v8::internal::Instruction*) */

void __thiscall
v8::internal::DisassemblingDecoder::VisitExtract(DisassemblingDecoder *this,Instruction *param_1)

{
  char *pcVar1;
  uint uVar2;
  char *pcVar3;
  
  uVar2 = *(uint *)param_1;
  if ((uVar2 & 0xffa00000 | 0x80000000) != 0x93800000) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  pcVar1 = "\'Rd, \'Rn, \'IExtract";
  pcVar3 = "ror";
  if (((uVar2 >> 5 ^ uVar2 >> 0x10) & 0x1f) != 0) {
    pcVar1 = "\'Rd, \'Rn, \'Rm, \'IExtract";
    pcVar3 = "extr";
  }
  Format(this,param_1,pcVar3,pcVar1);
  return;
}

