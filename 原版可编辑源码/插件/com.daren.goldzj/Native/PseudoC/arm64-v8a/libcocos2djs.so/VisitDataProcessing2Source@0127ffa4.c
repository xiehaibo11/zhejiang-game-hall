
/* v8::internal::DisassemblingDecoder::VisitDataProcessing2Source(v8::internal::Instruction*) */

void __thiscall
v8::internal::DisassemblingDecoder::VisitDataProcessing2Source
          (DisassemblingDecoder *this,Instruction *param_1)

{
  uint uVar1;
  char *pcVar2;
  char *pcVar3;
  
  uVar1 = *(uint *)param_1 & 0xffe0fc00;
  pcVar3 = "\'Rd, \'Rn, \'Rm";
  pcVar2 = "udiv";
  if ((int)uVar1 < 0x1ac00800) {
    if ((int)uVar1 < -0x653fdc00) {
      pcVar2 = "udiv";
      pcVar3 = "\'Rd, \'Rn, \'Rm";
      if (uVar1 == 0x9ac00800) goto LAB_012800ac;
      if (uVar1 == 0x9ac00c00) {
LAB_012800f4:
        Format(this,param_1,"sdiv","\'Rd, \'Rn, \'Rm");
        return;
      }
      if (uVar1 == 0x9ac02000) {
LAB_01280058:
        Format(this,param_1,"lsl","\'Rd, \'Rn, \'Rm");
        return;
      }
    }
    else {
      if (uVar1 == 0x9ac02400) {
LAB_01280108:
        Format(this,param_1,"lsr","\'Rd, \'Rn, \'Rm");
        return;
      }
      if (uVar1 == 0x9ac02800) {
LAB_0128011c:
        Format(this,param_1,"asr","\'Rd, \'Rn, \'Rm");
        return;
      }
      if (uVar1 == 0x9ac02c00) {
LAB_012800e0:
        Format(this,param_1,"ror","\'Rd, \'Rn, \'Rm");
        return;
      }
    }
  }
  else if ((int)uVar1 < 0x1ac02400) {
    if (uVar1 == 0x1ac00800) goto LAB_012800ac;
    if (uVar1 == 0x1ac00c00) goto LAB_012800f4;
    if (uVar1 == 0x1ac02000) goto LAB_01280058;
  }
  else {
    if (uVar1 == 0x1ac02400) goto LAB_01280108;
    if (uVar1 == 0x1ac02800) goto LAB_0128011c;
    if (uVar1 == 0x1ac02c00) goto LAB_012800e0;
  }
  pcVar3 = "(DataProcessing2Source)";
  pcVar2 = "unimplemented";
LAB_012800ac:
  Format(this,param_1,pcVar2,pcVar3);
  return;
}

