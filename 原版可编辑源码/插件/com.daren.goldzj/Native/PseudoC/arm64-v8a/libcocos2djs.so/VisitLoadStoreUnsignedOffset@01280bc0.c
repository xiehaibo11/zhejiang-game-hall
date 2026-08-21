
/* v8::internal::DisassemblingDecoder::VisitLoadStoreUnsignedOffset(v8::internal::Instruction*) */

void __thiscall
v8::internal::DisassemblingDecoder::VisitLoadStoreUnsignedOffset
          (DisassemblingDecoder *this,Instruction *param_1)

{
  uint uVar1;
  char *pcVar2;
  char *pcVar3;
  
  uVar1 = *(uint *)param_1 & 0xffc00000;
  pcVar3 = "(LoadStoreUnsignedOffset)";
  pcVar2 = "unimplemented";
  if ((int)uVar1 < 0x39800000) {
    if ((int)uVar1 < -0x6c00000) {
      pcVar2 = "unimplemented";
      pcVar3 = "(LoadStoreUnsignedOffset)";
      if ((int)uVar1 < -0x43000000) {
        if (uVar1 == 0xb9000000) {
          Format(this,param_1,"str","\'Wt, [\'Xns\'ILU]");
          return;
        }
        if (uVar1 == 0xb9400000) {
          Format(this,param_1,"ldr","\'Wt, [\'Xns\'ILU]");
          return;
        }
        if (uVar1 == 0xb9800000) {
          Format(this,param_1,"ldrsw","\'Xt, [\'Xns\'ILU]");
          return;
        }
      }
      else {
        if (uVar1 == 0xbd000000) {
          Format(this,param_1,"str","\'St, [\'Xns\'ILU]");
          return;
        }
        if (uVar1 == 0xbd400000) {
          Format(this,param_1,"ldr","\'St, [\'Xns\'ILU]");
          return;
        }
        if (uVar1 == 0xf9000000) {
          Format(this,param_1,"str","\'Xt, [\'Xns\'ILU]");
          return;
        }
      }
    }
    else if ((int)uVar1 < -0x2c00000) {
      if (uVar1 == 0xf9400000) {
        Format(this,param_1,"ldr","\'Xt, [\'Xns\'ILU]");
        return;
      }
      if (uVar1 == 0xf9800000) {
        pcVar3 = "\'PrefOp, [\'Xn\'ILU]";
        pcVar2 = "prfm";
      }
      else if (uVar1 == 0xfd000000) {
        Format(this,param_1,"str","\'Dt, [\'Xns\'ILU]");
        return;
      }
    }
    else {
      if (uVar1 == 0xfd400000) {
        Format(this,param_1,"ldr","\'Dt, [\'Xns\'ILU]");
        return;
      }
      if (uVar1 == 0x39000000) {
        Format(this,param_1,"strb","\'Wt, [\'Xns\'ILU]");
        return;
      }
      if (uVar1 == 0x39400000) {
        Format(this,param_1,"ldrb","\'Wt, [\'Xns\'ILU]");
        return;
      }
    }
  }
  else if ((int)uVar1 < 0x79000000) {
    if ((int)uVar1 < 0x3d400000) {
      if (uVar1 == 0x39800000) {
        Format(this,param_1,"ldrsb","\'Xt, [\'Xns\'ILU]");
        return;
      }
      if (uVar1 == 0x39c00000) {
        Format(this,param_1,"ldrsb","\'Wt, [\'Xns\'ILU]");
        return;
      }
      if (uVar1 == 0x3d000000) {
        Format(this,param_1,"str","\'Bt, [\'Xns\'ILU]");
        return;
      }
    }
    else {
      if (uVar1 == 0x3d400000) {
        Format(this,param_1,"ldr","\'Bt, [\'Xns\'ILU]");
        return;
      }
      if (uVar1 == 0x3d800000) {
        Format(this,param_1,"str","\'Qt, [\'Xns\'ILU]");
        return;
      }
      if (uVar1 == 0x3dc00000) {
        Format(this,param_1,"ldr","\'Qt, [\'Xns\'ILU]");
        return;
      }
    }
  }
  else if ((int)uVar1 < 0x79c00000) {
    if (uVar1 == 0x79000000) {
      Format(this,param_1,"strh","\'Wt, [\'Xns\'ILU]");
      return;
    }
    if (uVar1 == 0x79400000) {
      Format(this,param_1,"ldrh","\'Wt, [\'Xns\'ILU]");
      return;
    }
    if (uVar1 == 0x79800000) {
      Format(this,param_1,"ldrsh","\'Xt, [\'Xns\'ILU]");
      return;
    }
  }
  else {
    if (uVar1 == 0x79c00000) {
      Format(this,param_1,"ldrsh","\'Wt, [\'Xns\'ILU]");
      return;
    }
    if (uVar1 == 0x7d000000) {
      Format(this,param_1,"str","\'Ht, [\'Xns\'ILU]");
      return;
    }
    if (uVar1 == 0x7d400000) {
      Format(this,param_1,"ldr","\'Ht, [\'Xns\'ILU]");
      return;
    }
  }
  Format(this,param_1,pcVar2,pcVar3);
  return;
}

