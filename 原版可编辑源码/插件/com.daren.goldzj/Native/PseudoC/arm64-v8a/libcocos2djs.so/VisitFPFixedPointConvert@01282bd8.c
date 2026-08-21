
/* v8::internal::DisassemblingDecoder::VisitFPFixedPointConvert(v8::internal::Instruction*) */

void __thiscall
v8::internal::DisassemblingDecoder::VisitFPFixedPointConvert
          (DisassemblingDecoder *this,Instruction *param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  
  uVar6 = (uint)*(ushort *)(param_1 + 2);
  iVar1 = uVar6 * 0x10000;
  pcVar3 = "";
  pcVar2 = "";
  pcVar5 = "\'Rd, \'Fn, \'IFPFBits";
  pcVar4 = "\'Rd, \'Fn, \'IFPFBits";
  if (iVar1 < 0x1e020000) {
    if (-0x61be0001 < iVar1) {
      if (-0x61a80001 < iVar1) {
        if (uVar6 == 0x9e58) goto LAB_01282d3c;
        pcVar3 = pcVar2;
        pcVar5 = pcVar4;
        if (uVar6 == 0x9e59) goto LAB_01282d50;
        goto LAB_01282ccc;
      }
      if (uVar6 != 0x9e42) {
        pcVar3 = pcVar2;
        pcVar5 = pcVar4;
        if (uVar6 != 0x9e43) goto LAB_01282ccc;
        goto LAB_01282cb0;
      }
      goto LAB_01282cbc;
    }
    if (-0x61e80001 < iVar1) {
      if (uVar6 == 0x9e18) {
LAB_01282d3c:
        Format(this,param_1,"fcvtzs","\'Rd, \'Fn, \'IFPFBits");
        return;
      }
      pcVar5 = pcVar4;
      if (uVar6 == 0x9e19) goto LAB_01282d50;
      goto LAB_01282ccc;
    }
    if (uVar6 == 0x9e02) goto LAB_01282cbc;
    if (uVar6 != 0x9e03) goto LAB_01282ccc;
LAB_01282cb0:
    pcVar3 = "ucvtf";
  }
  else {
    if (iVar1 < 0x1e420000) {
      if (0x1e17ffff < iVar1) {
        if (uVar6 == 0x1e18) goto LAB_01282d3c;
        pcVar3 = pcVar2;
        pcVar5 = pcVar4;
        if (uVar6 == 0x1e19) goto LAB_01282d50;
        goto LAB_01282ccc;
      }
      if (uVar6 != 0x1e02) {
        pcVar3 = pcVar2;
        pcVar5 = pcVar4;
        if (uVar6 != 0x1e03) goto LAB_01282ccc;
        goto LAB_01282cb0;
      }
    }
    else {
      if (0x1e57ffff < iVar1) {
        if (uVar6 == 0x1e59) {
LAB_01282d50:
          Format(this,param_1,"fcvtzu","\'Rd, \'Fn, \'IFPFBits");
          return;
        }
        pcVar3 = pcVar2;
        pcVar5 = pcVar4;
        if (uVar6 == 0x1e58) goto LAB_01282d3c;
        goto LAB_01282ccc;
      }
      if (uVar6 != 0x1e42) {
        pcVar3 = pcVar2;
        pcVar5 = pcVar4;
        if (uVar6 != 0x1e43) goto LAB_01282ccc;
        goto LAB_01282cb0;
      }
    }
LAB_01282cbc:
    pcVar3 = "scvtf";
  }
  pcVar5 = "\'Fd, \'Rn, \'IFPFBits";
LAB_01282ccc:
  Format(this,param_1,pcVar3,pcVar5);
  return;
}

