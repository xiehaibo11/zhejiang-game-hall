
/* v8::internal::DisassemblingDecoder::VisitLoadStorePairPostIndex(v8::internal::Instruction*) */

void __thiscall
v8::internal::DisassemblingDecoder::VisitLoadStorePairPostIndex
          (DisassemblingDecoder *this,Instruction *param_1)

{
  uint uVar1;
  char *pcVar2;
  char *pcVar3;
  
  uVar1 = *(uint *)param_1 & 0xffc00000;
  pcVar3 = "(LoadStorePairPostIndex)";
  pcVar2 = "unimplemented";
  if ((int)uVar1 < 0x28c00000) {
    if ((int)uVar1 < -0x53800000) {
      if (uVar1 != 0xa8800000) {
        if (uVar1 == 0xa8c00000) {
          Format(this,param_1,"ldp","\'Xt, \'Xt2, [\'Xns]\'ILP3");
          return;
        }
        goto LAB_01281860;
      }
      pcVar3 = "\'Xt, \'Xt2, [\'Xns]\'ILP3";
    }
    else if (uVar1 == 0xac800000) {
      pcVar3 = "\'Qt, \'Qt2, [\'Xns]\'ILP4";
    }
    else {
      if (uVar1 == 0xacc00000) {
        Format(this,param_1,"ldp","\'Qt, \'Qt2, [\'Xns]\'ILP4");
        return;
      }
      if (uVar1 != 0x28800000) goto LAB_01281860;
      pcVar3 = "\'Wt, \'Wt2, [\'Xns]\'ILP2";
    }
  }
  else {
    pcVar3 = "(LoadStorePairPostIndex)";
    if ((int)uVar1 < 0x68c00000) {
      if (uVar1 == 0x28c00000) {
        Format(this,param_1,"ldp","\'Wt, \'Wt2, [\'Xns]\'ILP2");
        return;
      }
      if (uVar1 != 0x2c800000) {
        pcVar2 = "unimplemented";
        if (uVar1 == 0x2cc00000) {
          Format(this,param_1,"ldp","\'St, \'St2, [\'Xns]\'ILP2");
          return;
        }
        goto LAB_01281860;
      }
      pcVar3 = "\'St, \'St2, [\'Xns]\'ILP2";
    }
    else {
      if (uVar1 == 0x68c00000) {
        Format(this,param_1,"ldpsw","\'Xt, \'Xt2, [\'Xns]\'ILP2");
        return;
      }
      if (uVar1 != 0x6c800000) {
        if (uVar1 == 0x6cc00000) {
          Format(this,param_1,"ldp","\'Dt, \'Dt2, [\'Xns]\'ILP3");
          return;
        }
        goto LAB_01281860;
      }
      pcVar3 = "\'Dt, \'Dt2, [\'Xns]\'ILP3";
    }
  }
  pcVar2 = "stp";
LAB_01281860:
  Format(this,param_1,pcVar2,pcVar3);
  return;
}

