
/* v8::internal::DisassemblingDecoder::VisitLoadStorePreIndex(v8::internal::Instruction*) */

void __thiscall
v8::internal::DisassemblingDecoder::VisitLoadStorePreIndex
          (DisassemblingDecoder *this,Instruction *param_1)

{
  uint uVar1;
  char *pcVar2;
  char *pcVar3;
  
  uVar1 = *(uint *)param_1 & 0xffe00c00;
  pcVar3 = "(LoadStorePreIndex)";
  pcVar2 = "unimplemented";
  if ((int)uVar1 < 0x38800c00) {
    if ((int)uVar1 < -0x7fff400) {
      if ((int)uVar1 < -0x477ff400) {
        if (uVar1 != 0xb8000c00) {
          if (uVar1 == 0xb8400c00) {
            Format(this,param_1,"ldr","\'Wt, [\'Xns\'ILS]!");
            return;
          }
          goto LAB_01280824;
        }
        pcVar3 = "\'Wt, [\'Xns\'ILS]!";
      }
      else {
        if (uVar1 == 0xb8800c00) {
          Format(this,param_1,"ldrsw","\'Xt, [\'Xns\'ILS]!");
          return;
        }
        if (uVar1 != 0xbc000c00) {
          if (uVar1 == 0xbc400c00) {
            Format(this,param_1,"ldr","\'St, [\'Xns\'ILS]!");
            return;
          }
          goto LAB_01280824;
        }
        pcVar3 = "\'St, [\'Xns\'ILS]!";
      }
    }
    else {
      if (-0x3bff401 < (int)uVar1) {
        if (uVar1 == 0xfc400c00) {
          Format(this,param_1,"ldr","\'Dt, [\'Xns\'ILS]!");
          return;
        }
        if (uVar1 == 0x38000c00) {
          Format(this,param_1,"strb","\'Wt, [\'Xns\'ILS]!");
          return;
        }
        if (uVar1 == 0x38400c00) {
          Format(this,param_1,"ldrb","\'Wt, [\'Xns\'ILS]!");
          return;
        }
        goto LAB_01280824;
      }
      if (uVar1 == 0xf8000c00) {
        pcVar3 = "\'Xt, [\'Xns\'ILS]!";
      }
      else {
        if (uVar1 == 0xf8400c00) {
          Format(this,param_1,"ldr","\'Xt, [\'Xns\'ILS]!");
          return;
        }
        if (uVar1 != 0xfc000c00) goto LAB_01280824;
        pcVar3 = "\'Dt, [\'Xns\'ILS]!";
      }
    }
  }
  else if ((int)uVar1 < 0x78000c00) {
    pcVar3 = "(LoadStorePreIndex)";
    if ((int)uVar1 < 0x3c400c00) {
      if (uVar1 == 0x38800c00) {
        Format(this,param_1,"ldrsb","\'Xt, [\'Xns\'ILS]!");
        return;
      }
      if (uVar1 == 0x38c00c00) {
        Format(this,param_1,"ldrsb","\'Wt, [\'Xns\'ILS]!");
        return;
      }
      pcVar2 = "unimplemented";
      if (uVar1 != 0x3c000c00) goto LAB_01280824;
      pcVar3 = "\'Bt, [\'Xns\'ILS]!";
    }
    else {
      if (uVar1 == 0x3c400c00) {
        Format(this,param_1,"ldr","\'Bt, [\'Xns\'ILS]!");
        return;
      }
      if (uVar1 != 0x3c800c00) {
        if (uVar1 == 0x3cc00c00) {
          Format(this,param_1,"ldr","\'Qt, [\'Xns\'ILS]!");
          return;
        }
        goto LAB_01280824;
      }
      pcVar3 = "\'Qt, [\'Xns\'ILS]!";
    }
  }
  else {
    if ((int)uVar1 < 0x78c00c00) {
      if (uVar1 == 0x78000c00) {
        Format(this,param_1,"strh","\'Wt, [\'Xns\'ILS]!");
        return;
      }
      if (uVar1 == 0x78400c00) {
        Format(this,param_1,"ldrh","\'Wt, [\'Xns\'ILS]!");
        return;
      }
      if (uVar1 == 0x78800c00) {
        Format(this,param_1,"ldrsh","\'Xt, [\'Xns\'ILS]!");
        return;
      }
      goto LAB_01280824;
    }
    if (uVar1 == 0x78c00c00) {
      Format(this,param_1,"ldrsh","\'Wt, [\'Xns\'ILS]!");
      return;
    }
    if (uVar1 != 0x7c000c00) {
      if (uVar1 == 0x7c400c00) {
        Format(this,param_1,"ldr","\'Ht, [\'Xns\'ILS]!");
        return;
      }
      goto LAB_01280824;
    }
    pcVar3 = "\'Ht, [\'Xns\'ILS]!";
  }
  pcVar2 = "str";
LAB_01280824:
  Format(this,param_1,pcVar2,pcVar3);
  return;
}

