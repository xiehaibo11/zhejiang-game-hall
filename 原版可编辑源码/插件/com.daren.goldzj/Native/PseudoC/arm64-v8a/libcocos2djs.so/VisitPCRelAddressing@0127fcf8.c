
/* v8::internal::DisassemblingDecoder::VisitPCRelAddressing(v8::internal::Instruction*) */

void __thiscall
v8::internal::DisassemblingDecoder::VisitPCRelAddressing
          (DisassemblingDecoder *this,Instruction *param_1)

{
  if ((*(uint *)param_1 & 0x9f000000) == 0x10000000) {
    Format(this,param_1,"adr","\'Xd, \'AddrPCRelByte");
    return;
  }
  Format(this,param_1,"unimplemented","(PCRelAddressing)");
  return;
}

