
/* v8::internal::DisassemblingDecoder::VisitLoadStorePairPreIndex(v8::internal::Instruction*) */

void __thiscall
v8::internal::DisassemblingDecoder::VisitLoadStorePairPreIndex
          (DisassemblingDecoder *this,Instruction *param_1)

{
  uint uVar1;
  char *pcVar2;
  char *pcVar3;
  
  uVar1 = *(uint *)param_1 & 0xffc00000;
  pcVar3 = "(LoadStorePairPreIndex)";
  pcVar2 = "unimplemented";
  if ((int)uVar1 < 0x29c00000) {
    if ((int)uVar1 < -0x52800000) {
      if (uVar1 != 0xa9800000) {
        if (uVar1 == 0xa9c00000) {
          Format(this,param_1,"ldp","\'Xt, \'Xt2, [\'Xns\'ILP3]!");
          return;
        }
        goto LAB_012819dc;
      }
      pcVar3 = "\'Xt, \'Xt2, [\'Xns\'ILP3]!";
    }
    else if (uVar1 == 0xad800000) {
      pcVar3 = "\'Qt, \'Qt2, [\'Xns\'ILP4]!";
    }
    else {
      if (uVar1 == 0xadc00000) {
        Format(this,param_1,"ldp","\'Qt, \'Qt2, [\'Xns\'ILP4]!");
        return;
      }
      if (uVar1 != 0x29800000) goto LAB_012819dc;
      pcVar3 = "\'Wt, \'Wt2, [\'Xns\'ILP2]!";
    }
  }
  else {
    pcVar3 = "(LoadStorePairPreIndex)";
    if ((int)uVar1 < 0x69c00000) {
      if (uVar1 == 0x29c00000) {
        Format(this,param_1,"ldp","\'Wt, \'Wt2, [\'Xns\'ILP2]!");
        return;
      }
      if (uVar1 != 0x2d800000) {
        pcVar2 = "unimplemented";
        if (uVar1 == 0x2dc00000) {
          Format(this,param_1,"ldp","\'St, \'St2, [\'Xns\'ILP2]!");
          return;
        }
        goto LAB_012819dc;
      }
      pcVar3 = "\'St, \'St2, [\'Xns\'ILP2]!";
    }
    else {
      if (uVar1 == 0x69c00000) {
        Format(this,param_1,"ldpsw","\'Xt, \'Xt2, [\'Xns\'ILP2]!");
        return;
      }
      if (uVar1 != 0x6d800000) {
        if (uVar1 == 0x6dc00000) {
          Format(this,param_1,"ldp","\'Dt, \'Dt2, [\'Xns\'ILP3]!");
          return;
        }
        goto LAB_012819dc;
      }
      pcVar3 = "\'Dt, \'Dt2, [\'Xns\'ILP3]!";
    }
  }
  pcVar2 = "stp";
LAB_012819dc:
  Format(this,param_1,pcVar2,pcVar3);
  return;
}

