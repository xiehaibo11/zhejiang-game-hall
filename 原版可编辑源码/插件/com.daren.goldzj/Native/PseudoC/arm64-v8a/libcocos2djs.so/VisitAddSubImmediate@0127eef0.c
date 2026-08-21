
/* v8::internal::DisassemblingDecoder::VisitAddSubImmediate(v8::internal::Instruction*) */

void __thiscall
v8::internal::DisassemblingDecoder::VisitAddSubImmediate
          (DisassemblingDecoder *this,Instruction *param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  char *pcVar4;
  char *pcVar5;
  
  uVar2 = *(uint *)param_1;
  uVar1 = uVar2 & 0x1f;
  if ((uVar1 == 0x1f) || ((uVar2 & 0x3e0) == 0x3e0)) {
    bVar3 = (uVar2 & 0x3ffc00) == 0;
  }
  else {
    bVar3 = false;
  }
  pcVar4 = "sub";
  pcVar5 = "\'Rds, \'Rns, \'IAddSub";
  switch(uVar2 + 0x6f000000 >> 0x1d | (uVar2 + 0x6f000000) * 8 & 0xf8000007) {
  case 0:
  case 4:
    if (!bVar3) {
      pcVar4 = "add";
      break;
    }
    pcVar4 = "mov";
    pcVar5 = "\'Rds, \'Rns";
  case 2:
  case 6:
    Format(this,param_1,pcVar4,pcVar5);
    return;
  case 1:
  case 5:
    if (uVar1 == 0x1f) {
      pcVar4 = "cmn";
LAB_0127efac:
      Format(this,param_1,pcVar4,"\'Rns, \'IAddSub");
      return;
    }
    pcVar4 = "adds";
    break;
  case 3:
  case 7:
    if (uVar1 == 0x1f) {
      pcVar4 = "cmp";
      goto LAB_0127efac;
    }
    pcVar4 = "subs";
    break;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  Format(this,param_1,pcVar4,"\'Rds, \'Rns, \'IAddSub");
  return;
}

