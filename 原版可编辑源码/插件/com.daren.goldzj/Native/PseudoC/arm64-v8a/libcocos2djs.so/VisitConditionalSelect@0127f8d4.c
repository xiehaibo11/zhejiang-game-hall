
/* v8::internal::DisassemblingDecoder::VisitConditionalSelect(v8::internal::Instruction*) */

void __thiscall
v8::internal::DisassemblingDecoder::VisitConditionalSelect
          (DisassemblingDecoder *this,Instruction *param_1)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  
  uVar4 = *(uint *)param_1;
  uVar3 = uVar4 & 0xffe00c00;
  pcVar6 = "csel";
  uVar2 = (uVar4 >> 5 ^ uVar4 >> 0x10) & 0x1f;
  uVar5 = uVar4 >> 0xc & 0xe | 1;
  pcVar1 = "\'Rd, \'Rn, \'Rm, \'Cond";
  pcVar7 = "\'Rd, \'Rn, \'Rm, \'Cond";
  if ((int)uVar3 < 0x1a800000) {
    if ((int)uVar3 < -0x25800000) {
      pcVar6 = "csel";
      pcVar7 = pcVar1;
      if (uVar3 == 0x9a800000) goto LAB_0127fa90;
      if (uVar3 != 0x9a800400) {
LAB_0127fa98:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
LAB_0127f980:
      pcVar6 = "cset";
      pcVar7 = "\'Rd, \'CInv";
      if ((((uVar4 & 0x1f03e0) == 0x1f03e0 && uVar5 != 0xf) ||
          (pcVar6 = "csinc", pcVar7 = pcVar1, uVar2 != 0)) || (uVar5 == 0xf)) goto LAB_0127fa90;
      pcVar6 = "cinc";
    }
    else {
      if (uVar3 != 0xda800000) {
        if (uVar3 != 0xda800400) goto LAB_0127fa98;
        goto LAB_0127fa64;
      }
LAB_0127fa00:
      pcVar6 = "csetm";
      pcVar7 = "\'Rd, \'CInv";
      if ((((uVar4 & 0x1f03e0) == 0x1f03e0 && uVar5 != 0xf) ||
          (pcVar6 = "csinv", pcVar7 = pcVar1, uVar2 != 0)) || (uVar5 == 0xf)) goto LAB_0127fa90;
      pcVar6 = "cinv";
    }
  }
  else {
    if ((int)uVar3 < 0x5a800000) {
      if (uVar3 == 0x1a800000) goto LAB_0127fa90;
      if (uVar3 != 0x1a800400) goto LAB_0127fa98;
      goto LAB_0127f980;
    }
    if (uVar3 == 0x5a800000) goto LAB_0127fa00;
    if (uVar3 != 0x5a800400) goto LAB_0127fa98;
LAB_0127fa64:
    pcVar6 = "csneg";
    pcVar7 = "\'Rd, \'Rn, \'Rm, \'Cond";
    if ((uVar2 != 0) || (uVar5 == 0xf)) goto LAB_0127fa90;
    pcVar6 = "cneg";
  }
  pcVar7 = "\'Rd, \'Rn, \'CInv";
LAB_0127fa90:
  Format(this,param_1,pcVar6,pcVar7);
  return;
}

