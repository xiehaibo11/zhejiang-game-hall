
/* v8::internal::DisassemblingDecoder::VisitBitfield(v8::internal::Instruction*) */

void __thiscall
v8::internal::DisassemblingDecoder::VisitBitfield(DisassemblingDecoder *this,Instruction *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  uint uVar7;
  
  uVar1 = *(uint *)param_1;
  uVar7 = 0x3f;
  if (-1 < (int)uVar1) {
    uVar7 = 0x1f;
  }
  uVar2 = uVar1 + 0x6d000000 >> 0x1d;
  pcVar5 = "";
  if (6 < (uVar2 | (uVar1 + 0x6d000000) * 8 & 0xfc000007)) {
    Format(this,param_1,"","");
    return;
  }
  uVar3 = uVar1 >> 10 & 0x3f;
  uVar4 = uVar1 >> 0x10 & 0x3f;
  if ((1 << (ulong)uVar2 & 0x11U) == 0) {
    if ((1 << (ulong)uVar2 & 0x22U) == 0) {
      pcVar6 = pcVar5;
      if ((1 << (ulong)uVar2 & 0x44U) == 0) goto LAB_0127fc48;
      if (uVar4 == 0) {
        if (uVar3 == 7) {
          pcVar5 = "uxtb";
        }
        else {
          if (uVar3 != 0xf) goto LAB_0127fb1c;
          pcVar5 = "uxth";
        }
        pcVar6 = "\'Rd, \'Wn";
      }
      else {
LAB_0127fb1c:
        pcVar5 = "ubfx";
        pcVar6 = "\'Rd, \'Rn, \'IBr, \'IBs-r+1";
      }
      if (uVar3 == uVar7) {
        Format(this,param_1,"lsr","\'Rd, \'Rn, \'IBr");
        return;
      }
      if (uVar4 == uVar3 + 1) {
        Format(this,param_1,"lsl","\'Rd, \'Rn, \'IBZ-r");
        return;
      }
      if (uVar4 <= uVar3) goto LAB_0127fc48;
      pcVar5 = "ubfiz";
    }
    else {
      if (uVar4 <= uVar3) {
        Format(this,param_1,"bfxil","\'Rd, \'Rn, \'IBr, \'IBs-r+1");
        return;
      }
      pcVar5 = "bfi";
    }
  }
  else {
    if (uVar4 == 0) {
      if (uVar3 == 7) {
        Format(this,param_1,"sxtb","\'Rd, \'Wn");
        return;
      }
      if (uVar3 == 0x1f) {
        if ((int)uVar1 < 0) {
          Format(this,param_1,"sxtw","\'Rd, \'Wn");
          return;
        }
      }
      else if (uVar3 == 0xf) {
        Format(this,param_1,"sxth","\'Rd, \'Wn");
        return;
      }
LAB_0127fc64:
      Format(this,param_1,"sbfx","\'Rd, \'Rn, \'IBr, \'IBs-r+1");
      return;
    }
    if (uVar3 == uVar7) {
      Format(this,param_1,"asr","\'Rd, \'Rn, \'IBr");
      return;
    }
    if (uVar4 <= uVar3) goto LAB_0127fc64;
    pcVar5 = "sbfiz";
  }
  pcVar6 = "\'Rd, \'Rn, \'IBZ-r, \'IBs+1";
LAB_0127fc48:
  Format(this,param_1,pcVar5,pcVar6);
  return;
}

