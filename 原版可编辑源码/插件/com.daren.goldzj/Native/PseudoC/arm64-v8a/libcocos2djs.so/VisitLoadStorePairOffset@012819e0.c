
/* v8::internal::DisassemblingDecoder::VisitLoadStorePairOffset(v8::internal::Instruction*) */

void __thiscall
v8::internal::DisassemblingDecoder::VisitLoadStorePairOffset
          (DisassemblingDecoder *this,Instruction *param_1)

{
  uint uVar1;
  char *pcVar2;
  char *pcVar3;
  
  uVar1 = *(uint *)param_1 & 0xffc00000;
  pcVar3 = "(LoadStorePairOffset)";
  pcVar2 = "unimplemented";
  if ((int)uVar1 < 0x29400000) {
    if ((int)uVar1 < -0x53000000) {
      if (uVar1 != 0xa9000000) {
        if (uVar1 == 0xa9400000) {
          Format(this,param_1,"ldp","\'Xt, \'Xt2, [\'Xns\'ILP3]");
          return;
        }
        goto LAB_01281b58;
      }
      pcVar3 = "\'Xt, \'Xt2, [\'Xns\'ILP3]";
    }
    else if (uVar1 == 0xad000000) {
      pcVar3 = "\'Qt, \'Qt2, [\'Xns\'ILP4]";
    }
    else {
      if (uVar1 == 0xad400000) {
        Format(this,param_1,"ldp","\'Qt, \'Qt2, [\'Xns\'ILP4]");
        return;
      }
      if (uVar1 != 0x29000000) goto LAB_01281b58;
      pcVar3 = "\'Wt, \'Wt2, [\'Xns\'ILP2]";
    }
  }
  else {
    pcVar3 = "(LoadStorePairOffset)";
    if ((int)uVar1 < 0x69400000) {
      if (uVar1 == 0x29400000) {
        Format(this,param_1,"ldp","\'Wt, \'Wt2, [\'Xns\'ILP2]");
        return;
      }
      if (uVar1 != 0x2d000000) {
        pcVar2 = "unimplemented";
        if (uVar1 == 0x2d400000) {
          Format(this,param_1,"ldp","\'St, \'St2, [\'Xns\'ILP2]");
          return;
        }
        goto LAB_01281b58;
      }
      pcVar3 = "\'St, \'St2, [\'Xns\'ILP2]";
    }
    else {
      if (uVar1 == 0x69400000) {
        Format(this,param_1,"ldpsw","\'Xt, \'Xt2, [\'Xns\'ILP2]");
        return;
      }
      if (uVar1 != 0x6d000000) {
        if (uVar1 == 0x6d400000) {
          Format(this,param_1,"ldp","\'Dt, \'Dt2, [\'Xns\'ILP3]");
          return;
        }
        goto LAB_01281b58;
      }
      pcVar3 = "\'Dt, \'Dt2, [\'Xns\'ILP3]";
    }
  }
  pcVar2 = "stp";
LAB_01281b58:
  Format(this,param_1,pcVar2,pcVar3);
  return;
}

