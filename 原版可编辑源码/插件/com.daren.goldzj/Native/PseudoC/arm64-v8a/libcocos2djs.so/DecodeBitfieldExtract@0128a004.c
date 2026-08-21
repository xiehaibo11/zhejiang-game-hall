
/* v8::internal::Decoder<v8::internal::DispatchingDecoderVisitor>::DecodeBitfieldExtract(v8::internal::Instruction*)
    */

void __thiscall
v8::internal::Decoder<v8::internal::DispatchingDecoderVisitor>::DecodeBitfieldExtract
          (Decoder<v8::internal::DispatchingDecoderVisitor> *this,Instruction *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)param_1;
  if ((((uVar1 & 0x80400000) != 0x80000000) && ((uVar1 & 0x80400000) != 0x400000)) &&
     ((uVar1 & 0x80008000) != 0x8000)) {
    if ((uVar1 >> 0x17 & 1) == 0) {
      if (((uVar1 & 0x80200000) != 0x200000) && ((uVar1 & 0x60000000) != 0x60000000)) {
        DispatchingDecoderVisitor::VisitBitfield((DispatchingDecoderVisitor *)this,param_1);
        return;
      }
    }
    else if (((uVar1 & 0x60200000) != 0x200000) && ((uVar1 & 0x60000000) == 0)) {
      DispatchingDecoderVisitor::VisitExtract((DispatchingDecoderVisitor *)this,param_1);
      return;
    }
  }
  DispatchingDecoderVisitor::VisitUnallocated((DispatchingDecoderVisitor *)this,param_1);
  return;
}

