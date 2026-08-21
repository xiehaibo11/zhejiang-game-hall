
/* v8::internal::DisassemblingDecoder::VisitAddSubShifted(v8::internal::Instruction*) */

void __thiscall
v8::internal::DisassemblingDecoder::VisitAddSubShifted
          (DisassemblingDecoder *this,Instruction *param_1)

{
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  
  uVar2 = *(uint *)param_1;
  uVar1 = uVar2 + 0x75000000 >> 0x1d | (uVar2 + 0x75000000) * 8 & 0xf9000007;
  if (7 < uVar1) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  pcVar3 = "add";
  pcVar4 = "\'Rd, \'Rn, \'Rm\'NDP";
  switch(uVar1) {
  case 1:
  case 5:
    if ((uVar2 & 0x1f) != 0x1f) {
      pcVar3 = "adds";
      goto LAB_0127f1e8;
    }
    pcVar3 = "cmn";
    pcVar4 = "\'Rn, \'Rm\'NDP";
    break;
  case 2:
  case 6:
    if ((uVar2 & 0x3e0) == 0x3e0) {
      pcVar3 = "neg";
LAB_0127f1b8:
      Format(this,param_1,pcVar3,"\'Rd, \'Rm\'NDP");
      return;
    }
    pcVar3 = "sub";
LAB_0127f1e8:
    Format(this,param_1,pcVar3,"\'Rd, \'Rn, \'Rm\'NDP");
    return;
  case 3:
  case 7:
    pcVar3 = "cmp";
    pcVar4 = "\'Rn, \'Rm\'NDP";
    if (((uVar2 & 0x1f) != 0x1f) &&
       (pcVar3 = "subs", pcVar4 = "\'Rd, \'Rn, \'Rm\'NDP", (uVar2 & 0x3e0) == 0x3e0)) {
      pcVar3 = "negs";
      goto LAB_0127f1b8;
    }
  }
  Format(this,param_1,pcVar3,pcVar4);
  return;
}

