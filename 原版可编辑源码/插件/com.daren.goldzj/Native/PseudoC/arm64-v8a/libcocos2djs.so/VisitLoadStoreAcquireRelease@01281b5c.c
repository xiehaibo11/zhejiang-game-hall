
/* v8::internal::DisassemblingDecoder::VisitLoadStoreAcquireRelease(v8::internal::Instruction*) */

void __thiscall
v8::internal::DisassemblingDecoder::VisitLoadStoreAcquireRelease
          (DisassemblingDecoder *this,Instruction *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)param_1 & 0xcfc08000;
  if ((int)uVar1 < 0x8008000) {
    if ((int)uVar1 < -0x37ff8000) {
      if ((int)uVar1 < -0x777f8000) {
        if (uVar1 == 0x88008000) {
          Format(this,param_1,"stlxr","\'Ws, \'Wt, [\'Xns]");
          return;
        }
        if (uVar1 == 0x88408000) {
          Format(this,param_1,"ldaxr","\'Wt, [\'Xns]");
          return;
        }
      }
      else {
        if (uVar1 == 0x88808000) {
          Format(this,param_1,"stlr","\'Wt, [\'Xns]");
          return;
        }
        if (uVar1 == 0x88c08000) {
          Format(this,param_1,"ldar","\'Wt, [\'Xns]");
          return;
        }
      }
    }
    else if ((int)uVar1 < -0x377f8000) {
      if (uVar1 == 0xc8008000) {
        Format(this,param_1,"stlxr","\'Ws, \'Xt, [\'Xns]");
        return;
      }
      if (uVar1 == 0xc8408000) {
        Format(this,param_1,"ldaxr","\'Xt, [\'Xns]");
        return;
      }
    }
    else {
      if (uVar1 == 0xc8808000) {
        Format(this,param_1,"stlr","\'Xt, [\'Xns]");
        return;
      }
      if (uVar1 == 0xc8c08000) {
        Format(this,param_1,"ldar","\'Xt, [\'Xns]");
        return;
      }
    }
  }
  else if ((int)uVar1 < 0x48008000) {
    if ((int)uVar1 < 0x8808000) {
      if (uVar1 == 0x8008000) {
        Format(this,param_1,"stlxrb","\'Ws, \'Wt, [\'Xns]");
        return;
      }
      if (uVar1 == 0x8408000) {
        Format(this,param_1,"ldaxrb","\'Wt, [\'Xns]");
        return;
      }
    }
    else {
      if (uVar1 == 0x8808000) {
        Format(this,param_1,"stlrb","\'Wt, [\'Xns]");
        return;
      }
      if (uVar1 == 0x8c08000) {
        Format(this,param_1,"ldarb","\'Wt, [\'Xns]");
        return;
      }
    }
  }
  else if ((int)uVar1 < 0x48808000) {
    if (uVar1 == 0x48008000) {
      Format(this,param_1,"stlxrh","\'Ws, \'Wt, [\'Xns]");
      return;
    }
    if (uVar1 == 0x48408000) {
      Format(this,param_1,"ldaxrh","\'Wt, [\'Xns]");
      return;
    }
  }
  else {
    if (uVar1 == 0x48808000) {
      Format(this,param_1,"stlrh","\'Wt, [\'Xns]");
      return;
    }
    if (uVar1 == 0x48c08000) {
      Format(this,param_1,"ldarh","\'Wt, [\'Xns]");
      return;
    }
  }
  Format(this,param_1,"unimplemented","(LoadStoreAcquireRelease)");
  return;
}

