
/* v8::internal::DisassemblingDecoder::VisitException(v8::internal::Instruction*) */

void __thiscall
v8::internal::DisassemblingDecoder::VisitException(DisassemblingDecoder *this,Instruction *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)param_1 & 0xffe0001f;
  if ((int)uVar1 < -0x2bc00000) {
    if ((int)uVar1 < -0x2bfffffd) {
      if (uVar1 == 0xd4000001) {
        Format(this,param_1,"svc","\'IDebug");
        return;
      }
      if (uVar1 == 0xd4000002) {
        Format(this,param_1,"hvc","\'IDebug");
        return;
      }
    }
    else {
      if (uVar1 == 0xd4000003) {
        Format(this,param_1,"smc","\'IDebug");
        return;
      }
      if (uVar1 == 0xd4200000) {
        Format(this,param_1,"brk","\'IDebug");
        return;
      }
    }
  }
  else if ((int)uVar1 < -0x2b5ffffe) {
    if (uVar1 == 0xd4400000) {
      Format(this,param_1,"hlt","\'IDebug");
      return;
    }
    if (uVar1 == 0xd4a00001) {
      Format(this,param_1,"dcps1","{\'IDebug}");
      return;
    }
  }
  else {
    if (uVar1 == 0xd4a00002) {
      Format(this,param_1,"dcps2","{\'IDebug}");
      return;
    }
    if (uVar1 == 0xd4a00003) {
      Format(this,param_1,"dcps3","{\'IDebug}");
      return;
    }
  }
  Format(this,param_1,"unimplemented","(Exception)");
  return;
}

