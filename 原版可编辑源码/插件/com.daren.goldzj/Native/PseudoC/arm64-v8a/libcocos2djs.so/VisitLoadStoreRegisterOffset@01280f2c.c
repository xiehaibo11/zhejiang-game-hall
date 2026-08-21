
/* v8::internal::DisassemblingDecoder::VisitLoadStoreRegisterOffset(v8::internal::Instruction*) */

void __thiscall
v8::internal::DisassemblingDecoder::VisitLoadStoreRegisterOffset
          (DisassemblingDecoder *this,Instruction *param_1)

{
  uint uVar1;
  char *pcVar2;
  char *pcVar3;
  
  uVar1 = *(uint *)param_1 & 0xffe00c00;
  pcVar3 = "(LoadStoreRegisterOffset)";
  pcVar2 = "unimplemented";
  if ((int)uVar1 < 0x38a00800) {
    if ((int)uVar1 < -0x79ff800) {
      pcVar2 = "unimplemented";
      pcVar3 = "(LoadStoreRegisterOffset)";
      if ((int)uVar1 < -0x43dff800) {
        if (uVar1 == 0xb8200800) {
          Format(this,param_1,"str","\'Wt, [\'Xns, \'Offsetreg]");
          return;
        }
        if (uVar1 == 0xb8600800) {
          Format(this,param_1,"ldr","\'Wt, [\'Xns, \'Offsetreg]");
          return;
        }
        if (uVar1 == 0xb8a00800) {
          Format(this,param_1,"ldrsw","\'Xt, [\'Xns, \'Offsetreg]");
          return;
        }
      }
      else {
        if (uVar1 == 0xbc200800) {
          Format(this,param_1,"str","\'St, [\'Xns, \'Offsetreg]");
          return;
        }
        if (uVar1 == 0xbc600800) {
          Format(this,param_1,"ldr","\'St, [\'Xns, \'Offsetreg]");
          return;
        }
        if (uVar1 == 0xf8200800) {
          Format(this,param_1,"str","\'Xt, [\'Xns, \'Offsetreg]");
          return;
        }
      }
    }
    else if ((int)uVar1 < -0x39ff800) {
      if (uVar1 == 0xf8600800) {
        Format(this,param_1,"ldr","\'Xt, [\'Xns, \'Offsetreg]");
        return;
      }
      if (uVar1 == 0xf8a00800) {
        pcVar3 = "\'PrefOp, [\'Xns, \'Offsetreg]";
        pcVar2 = "prfm";
      }
      else if (uVar1 == 0xfc200800) {
        Format(this,param_1,"str","\'Dt, [\'Xns, \'Offsetreg]");
        return;
      }
    }
    else {
      if (uVar1 == 0xfc600800) {
        Format(this,param_1,"ldr","\'Dt, [\'Xns, \'Offsetreg]");
        return;
      }
      if (uVar1 == 0x38200800) {
        Format(this,param_1,"strb","\'Wt, [\'Xns, \'Offsetreg]");
        return;
      }
      if (uVar1 == 0x38600800) {
        Format(this,param_1,"ldrb","\'Wt, [\'Xns, \'Offsetreg]");
        return;
      }
    }
  }
  else if ((int)uVar1 < 0x78200800) {
    if ((int)uVar1 < 0x3c600800) {
      if (uVar1 == 0x38a00800) {
        Format(this,param_1,"ldrsb","\'Xt, [\'Xns, \'Offsetreg]");
        return;
      }
      if (uVar1 == 0x38e00800) {
        Format(this,param_1,"ldrsb","\'Wt, [\'Xns, \'Offsetreg]");
        return;
      }
      if (uVar1 == 0x3c200800) {
        Format(this,param_1,"str","\'Bt, [\'Xns, \'Offsetreg]");
        return;
      }
    }
    else {
      if (uVar1 == 0x3c600800) {
        Format(this,param_1,"ldr","\'Bt, [\'Xns, \'Offsetreg]");
        return;
      }
      if (uVar1 == 0x3ca00800) {
        Format(this,param_1,"str","\'Qt, [\'Xns, \'Offsetreg]");
        return;
      }
      if (uVar1 == 0x3ce00800) {
        Format(this,param_1,"ldr","\'Qt, [\'Xns, \'Offsetreg]");
        return;
      }
    }
  }
  else if ((int)uVar1 < 0x78e00800) {
    if (uVar1 == 0x78200800) {
      Format(this,param_1,"strh","\'Wt, [\'Xns, \'Offsetreg]");
      return;
    }
    if (uVar1 == 0x78600800) {
      Format(this,param_1,"ldrh","\'Wt, [\'Xns, \'Offsetreg]");
      return;
    }
    if (uVar1 == 0x78a00800) {
      Format(this,param_1,"ldrsh","\'Xt, [\'Xns, \'Offsetreg]");
      return;
    }
  }
  else {
    if (uVar1 == 0x78e00800) {
      Format(this,param_1,"ldrsh","\'Wt, [\'Xns, \'Offsetreg]");
      return;
    }
    if (uVar1 == 0x7c200800) {
      Format(this,param_1,"str","\'Ht, [\'Xns, \'Offsetreg]");
      return;
    }
    if (uVar1 == 0x7c600800) {
      Format(this,param_1,"ldr","\'Ht, [\'Xns, \'Offsetreg]");
      return;
    }
  }
  Format(this,param_1,pcVar2,pcVar3);
  return;
}

