
/* v8::internal::DisassemblingDecoder::VisitLoadStoreUnscaledOffset(v8::internal::Instruction*) */

void __thiscall
v8::internal::DisassemblingDecoder::VisitLoadStoreUnscaledOffset
          (DisassemblingDecoder *this,Instruction *param_1)

{
  uint uVar1;
  char *pcVar2;
  char *pcVar3;
  
  uVar1 = *(uint *)param_1 & 0xffe00c00;
  pcVar3 = "(LoadStoreUnscaledOffset)";
  pcVar2 = "unimplemented";
  if ((int)uVar1 < 0x38800000) {
    if ((int)uVar1 < -0x8000000) {
      if ((int)uVar1 < -0x47800000) {
        if (uVar1 != 0xb8000000) {
          if (uVar1 == 0xb8400000) {
            Format(this,param_1,"ldur","\'Wt, [\'Xns\'ILS]");
            return;
          }
          goto LAB_0128163c;
        }
        pcVar3 = "\'Wt, [\'Xns\'ILS]";
      }
      else {
        if (uVar1 == 0xb8800000) {
          Format(this,param_1,"ldursw","\'Xt, [\'Xns\'ILS]");
          return;
        }
        if (uVar1 != 0xbc000000) {
          if (uVar1 == 0xbc400000) {
            Format(this,param_1,"ldur","\'St, [\'Xns\'ILS]");
            return;
          }
          goto LAB_0128163c;
        }
        pcVar3 = "\'St, [\'Xns\'ILS]";
      }
    }
    else {
      if (-0x3c00001 < (int)uVar1) {
        if (uVar1 == 0xfc400000) {
          Format(this,param_1,"ldur","\'Dt, [\'Xns\'ILS]");
          return;
        }
        if (uVar1 == 0x38000000) {
          Format(this,param_1,"sturb","\'Wt, [\'Xns\'ILS]");
          return;
        }
        if (uVar1 == 0x38400000) {
          Format(this,param_1,"ldurb","\'Wt, [\'Xns\'ILS]");
          return;
        }
        goto LAB_0128163c;
      }
      if (uVar1 == 0xf8000000) {
        pcVar3 = "\'Xt, [\'Xns\'ILS]";
      }
      else {
        if (uVar1 == 0xf8400000) {
          Format(this,param_1,"ldur","\'Xt, [\'Xns\'ILS]");
          return;
        }
        if (uVar1 != 0xfc000000) goto LAB_0128163c;
        pcVar3 = "\'Dt, [\'Xns\'ILS]";
      }
    }
  }
  else if ((int)uVar1 < 0x78000000) {
    pcVar3 = "(LoadStoreUnscaledOffset)";
    if ((int)uVar1 < 0x3c400000) {
      if (uVar1 == 0x38800000) {
        Format(this,param_1,"ldursb","\'Xt, [\'Xns\'ILS]");
        return;
      }
      if (uVar1 == 0x38c00000) {
        Format(this,param_1,"ldursb","\'Wt, [\'Xns\'ILS]");
        return;
      }
      pcVar2 = "unimplemented";
      if (uVar1 != 0x3c000000) goto LAB_0128163c;
      pcVar3 = "\'Bt, [\'Xns\'ILS]";
    }
    else {
      if (uVar1 == 0x3c400000) {
        Format(this,param_1,"ldur","\'Bt, [\'Xns\'ILS]");
        return;
      }
      if (uVar1 != 0x3c800000) {
        if (uVar1 == 0x3cc00000) {
          Format(this,param_1,"ldur","\'Qt, [\'Xns\'ILS]");
          return;
        }
        goto LAB_0128163c;
      }
      pcVar3 = "\'Qt, [\'Xns\'ILS]";
    }
  }
  else {
    if ((int)uVar1 < 0x78c00000) {
      if (uVar1 == 0x78000000) {
        Format(this,param_1,"sturh","\'Wt, [\'Xns\'ILS]");
        return;
      }
      if (uVar1 == 0x78400000) {
        Format(this,param_1,"ldurh","\'Wt, [\'Xns\'ILS]");
        return;
      }
      if (uVar1 == 0x78800000) {
        Format(this,param_1,"ldursh","\'Xt, [\'Xns\'ILS]");
        return;
      }
      goto LAB_0128163c;
    }
    if (uVar1 == 0x78c00000) {
      Format(this,param_1,"ldursh","\'Wt, [\'Xns\'ILS]");
      return;
    }
    if (uVar1 != 0x7c000000) {
      if (uVar1 == 0x7c400000) {
        Format(this,param_1,"ldur","\'Ht, [\'Xns\'ILS]");
        return;
      }
      goto LAB_0128163c;
    }
    pcVar3 = "\'Ht, [\'Xns\'ILS]";
  }
  pcVar2 = "stur";
LAB_0128163c:
  Format(this,param_1,pcVar2,pcVar3);
  return;
}

