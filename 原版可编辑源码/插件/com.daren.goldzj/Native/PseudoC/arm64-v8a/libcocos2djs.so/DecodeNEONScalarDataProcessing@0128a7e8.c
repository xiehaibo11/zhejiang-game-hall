
/* v8::internal::Decoder<v8::internal::DispatchingDecoderVisitor>::DecodeNEONScalarDataProcessing(v8::internal::Instruction*)
    */

void __thiscall
v8::internal::Decoder<v8::internal::DispatchingDecoderVisitor>::DecodeNEONScalarDataProcessing
          (Decoder<v8::internal::DispatchingDecoderVisitor> *this,Instruction *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)param_1;
  if ((uVar1 >> 0x18 & 1) == 0) {
    if ((uVar1 >> 0x15 & 1) == 0) {
      if ((((uVar1 >> 0xf & 1) == 0) && ((uVar1 >> 10 & 1) != 0)) && ((uVar1 & 0xc00000) == 0)) {
        DispatchingDecoderVisitor::VisitNEONScalarCopy((DispatchingDecoderVisitor *)this,param_1);
        return;
      }
    }
    else {
      if ((uVar1 >> 10 & 1) != 0) {
        DispatchingDecoderVisitor::VisitNEONScalar3Same((DispatchingDecoderVisitor *)this,param_1);
        return;
      }
      if ((uVar1 >> 0xb & 1) == 0) {
        DispatchingDecoderVisitor::VisitNEONScalar3Diff((DispatchingDecoderVisitor *)this,param_1);
        return;
      }
      if ((uVar1 & 0x60000) == 0) {
        if ((uVar1 >> 0x14 & 1) == 0) {
          if ((uVar1 >> 0x13 & 1) == 0) {
            DispatchingDecoderVisitor::VisitNEONScalar2RegMisc
                      ((DispatchingDecoderVisitor *)this,param_1);
            return;
          }
        }
        else if ((uVar1 >> 0x13 & 1) == 0) {
          DispatchingDecoderVisitor::VisitNEONScalarPairwise
                    ((DispatchingDecoderVisitor *)this,param_1);
          return;
        }
      }
    }
  }
  else {
    if ((uVar1 >> 10 & 1) == 0) {
      DispatchingDecoderVisitor::VisitNEONScalarByIndexedElement
                ((DispatchingDecoderVisitor *)this,param_1);
      return;
    }
    if ((uVar1 >> 0x17 & 1) == 0) {
      DispatchingDecoderVisitor::VisitNEONScalarShiftImmediate
                ((DispatchingDecoderVisitor *)this,param_1);
      return;
    }
  }
  DispatchingDecoderVisitor::VisitUnallocated((DispatchingDecoderVisitor *)this,param_1);
  return;
}

