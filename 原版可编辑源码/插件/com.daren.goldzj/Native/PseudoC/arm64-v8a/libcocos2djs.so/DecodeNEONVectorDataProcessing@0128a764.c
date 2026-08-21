
/* v8::internal::Decoder<v8::internal::DispatchingDecoderVisitor>::DecodeNEONVectorDataProcessing(v8::internal::Instruction*)
    */

void __thiscall
v8::internal::Decoder<v8::internal::DispatchingDecoderVisitor>::DecodeNEONVectorDataProcessing
          (Decoder<v8::internal::DispatchingDecoderVisitor> *this,Instruction *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)param_1;
  if (-1 < (int)uVar1) {
    if ((uVar1 >> 0x18 & 1) == 0) {
      if ((uVar1 >> 0x15 & 1) == 0) {
        if ((uVar1 >> 0xf & 1) == 0) {
          if ((uVar1 >> 10 & 1) == 0) {
            if ((uVar1 >> 0x1d & 1) != 0) {
              DispatchingDecoderVisitor::VisitNEONExtract((DispatchingDecoderVisitor *)this,param_1)
              ;
              return;
            }
            if ((uVar1 >> 0xb & 1) == 0) {
              DispatchingDecoderVisitor::VisitNEONTable((DispatchingDecoderVisitor *)this,param_1);
              return;
            }
            DispatchingDecoderVisitor::VisitNEONPerm((DispatchingDecoderVisitor *)this,param_1);
            return;
          }
          if ((uVar1 & 0xc00000) == 0) {
            DispatchingDecoderVisitor::VisitNEONCopy((DispatchingDecoderVisitor *)this,param_1);
            return;
          }
        }
      }
      else {
        if ((uVar1 >> 10 & 1) != 0) {
          DispatchingDecoderVisitor::VisitNEON3Same((DispatchingDecoderVisitor *)this,param_1);
          return;
        }
        if ((uVar1 >> 0xb & 1) == 0) {
          DispatchingDecoderVisitor::VisitNEON3Different((DispatchingDecoderVisitor *)this,param_1);
          return;
        }
        if ((uVar1 & 0x60000) == 0) {
          if ((uVar1 >> 0x14 & 1) == 0) {
            if ((uVar1 >> 0x13 & 1) == 0) {
              DispatchingDecoderVisitor::VisitNEON2RegMisc
                        ((DispatchingDecoderVisitor *)this,param_1);
              return;
            }
          }
          else if ((uVar1 >> 0x13 & 1) == 0) {
            DispatchingDecoderVisitor::VisitNEONAcrossLanes
                      ((DispatchingDecoderVisitor *)this,param_1);
            return;
          }
        }
      }
    }
    else {
      if ((uVar1 >> 10 & 1) == 0) {
        DispatchingDecoderVisitor::VisitNEONByIndexedElement
                  ((DispatchingDecoderVisitor *)this,param_1);
        return;
      }
      if ((uVar1 >> 0x17 & 1) == 0) {
        if ((uVar1 & 0x780000) != 0) {
          DispatchingDecoderVisitor::VisitNEONShiftImmediate
                    ((DispatchingDecoderVisitor *)this,param_1);
          return;
        }
        DispatchingDecoderVisitor::VisitNEONModifiedImmediate
                  ((DispatchingDecoderVisitor *)this,param_1);
        return;
      }
    }
  }
  DispatchingDecoderVisitor::VisitUnallocated((DispatchingDecoderVisitor *)this,param_1);
  return;
}

