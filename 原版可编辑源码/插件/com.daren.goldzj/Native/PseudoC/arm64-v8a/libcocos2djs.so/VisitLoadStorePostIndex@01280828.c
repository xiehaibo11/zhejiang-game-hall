
/* v8::internal::DisassemblingDecoder::VisitLoadStorePostIndex(v8::internal::Instruction*) */

void __thiscall
v8::internal::DisassemblingDecoder::VisitLoadStorePostIndex
          (DisassemblingDecoder *this,Instruction *param_1)

{
  uint uVar1;
  char *pcVar2;
  char *pcVar3;
  
  uVar1 = *(uint *)param_1 & 0xffe00c00;
  pcVar3 = "(LoadStorePostIndex)";
  pcVar2 = "unimplemented";
  if ((int)uVar1 < 0x38800400) {
    if ((int)uVar1 < -0x7fffc00) {
      if ((int)uVar1 < -0x477ffc00) {
        if (uVar1 != 0xb8000400) {
          if (uVar1 == 0xb8400400) {
            Format(this,param_1,"ldr","\'Wt, [\'Xns]\'ILS");
            return;
          }
          goto LAB_01280bbc;
        }
        pcVar3 = "\'Wt, [\'Xns]\'ILS";
      }
      else {
        if (uVar1 == 0xb8800400) {
          Format(this,param_1,"ldrsw","\'Xt, [\'Xns]\'ILS");
          return;
        }
        if (uVar1 != 0xbc000400) {
          if (uVar1 == 0xbc400400) {
            Format(this,param_1,"ldr","\'St, [\'Xns]\'ILS");
            return;
          }
          goto LAB_01280bbc;
        }
        pcVar3 = "\'St, [\'Xns]\'ILS";
      }
    }
    else {
      if (-0x3bffc01 < (int)uVar1) {
        if (uVar1 == 0xfc400400) {
          Format(this,param_1,"ldr","\'Dt, [\'Xns]\'ILS");
          return;
        }
        if (uVar1 == 0x38000400) {
          Format(this,param_1,"strb","\'Wt, [\'Xns]\'ILS");
          return;
        }
        if (uVar1 == 0x38400400) {
          Format(this,param_1,"ldrb","\'Wt, [\'Xns]\'ILS");
          return;
        }
        goto LAB_01280bbc;
      }
      if (uVar1 == 0xf8000400) {
        pcVar3 = "\'Xt, [\'Xns]\'ILS";
      }
      else {
        if (uVar1 == 0xf8400400) {
          Format(this,param_1,"ldr","\'Xt, [\'Xns]\'ILS");
          return;
        }
        if (uVar1 != 0xfc000400) goto LAB_01280bbc;
        pcVar3 = "\'Dt, [\'Xns]\'ILS";
      }
    }
  }
  else if ((int)uVar1 < 0x78000400) {
    pcVar3 = "(LoadStorePostIndex)";
    if ((int)uVar1 < 0x3c400400) {
      if (uVar1 == 0x38800400) {
        Format(this,param_1,"ldrsb","\'Xt, [\'Xns]\'ILS");
        return;
      }
      if (uVar1 == 0x38c00400) {
        Format(this,param_1,"ldrsb","\'Wt, [\'Xns]\'ILS");
        return;
      }
      pcVar2 = "unimplemented";
      if (uVar1 != 0x3c000400) goto LAB_01280bbc;
      pcVar3 = "\'Bt, [\'Xns]\'ILS";
    }
    else {
      if (uVar1 == 0x3c400400) {
        Format(this,param_1,"ldr","\'Bt, [\'Xns]\'ILS");
        return;
      }
      if (uVar1 != 0x3c800400) {
        if (uVar1 == 0x3cc00400) {
          Format(this,param_1,"ldr","\'Qt, [\'Xns]\'ILS");
          return;
        }
        goto LAB_01280bbc;
      }
      pcVar3 = "\'Qt, [\'Xns]\'ILS";
    }
  }
  else {
    if ((int)uVar1 < 0x78c00400) {
      if (uVar1 == 0x78000400) {
        Format(this,param_1,"strh","\'Wt, [\'Xns]\'ILS");
        return;
      }
      if (uVar1 == 0x78400400) {
        Format(this,param_1,"ldrh","\'Wt, [\'Xns]\'ILS");
        return;
      }
      if (uVar1 == 0x78800400) {
        Format(this,param_1,"ldrsh","\'Xt, [\'Xns]\'ILS");
        return;
      }
      goto LAB_01280bbc;
    }
    if (uVar1 == 0x78c00400) {
      Format(this,param_1,"ldrsh","\'Wt, [\'Xns]\'ILS");
      return;
    }
    if (uVar1 != 0x7c000400) {
      if (uVar1 == 0x7c400400) {
        Format(this,param_1,"ldr","\'Ht, [\'Xns]\'ILS");
        return;
      }
      goto LAB_01280bbc;
    }
    pcVar3 = "\'Ht, [\'Xns]\'ILS";
  }
  pcVar2 = "str";
LAB_01280bbc:
  Format(this,param_1,pcVar2,pcVar3);
  return;
}

