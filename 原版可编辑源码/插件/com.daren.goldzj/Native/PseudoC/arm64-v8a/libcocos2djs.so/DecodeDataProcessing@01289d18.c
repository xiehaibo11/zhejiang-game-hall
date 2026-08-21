
/* v8::internal::Decoder<v8::internal::DispatchingDecoderVisitor>::DecodeDataProcessing(v8::internal::Instruction*)
    */

void __thiscall
v8::internal::Decoder<v8::internal::DispatchingDecoderVisitor>::DecodeDataProcessing
          (Decoder<v8::internal::DispatchingDecoderVisitor> *this,Instruction *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)param_1;
  if ((uVar1 >> 0x18 & 1) == 0) {
    if ((uVar1 >> 0x1c & 1) == 0) {
      if ((uVar1 & 0x80008000) != 0x8000) {
        DispatchingDecoderVisitor::VisitLogicalShifted((DispatchingDecoderVisitor *)this,param_1);
        return;
      }
    }
    else {
      switch(uVar1 >> 0x15 & 7) {
      case 0:
        if ((uVar1 & 0xfc00) == 0) {
          DispatchingDecoderVisitor::VisitAddSubWithCarry((DispatchingDecoderVisitor *)this,param_1)
          ;
          return;
        }
        break;
      case 2:
        if ((uVar1 & 0x20000410) == 0x20000000) {
          if ((uVar1 >> 0xb & 1) == 0) {
            DispatchingDecoderVisitor::VisitConditionalCompareRegister
                      ((DispatchingDecoderVisitor *)this,param_1);
            return;
          }
          DispatchingDecoderVisitor::VisitConditionalCompareImmediate
                    ((DispatchingDecoderVisitor *)this,param_1);
          return;
        }
        break;
      case 4:
        if ((uVar1 & 0x20000800) == 0) {
          DispatchingDecoderVisitor::VisitConditionalSelect
                    ((DispatchingDecoderVisitor *)this,param_1);
          return;
        }
        break;
      case 6:
        if ((uVar1 >> 0x1d & 1) == 0) {
          if ((uVar1 >> 0x1e & 1) == 0) {
            if ((((((uVar1 >> 0xf & 1) == 0) && ((uVar1 & 0xf800) != 0)) &&
                 ((uVar1 >> 0xc & 0xf | 2) != 3)) &&
                (((uVar1 & 0x8000e400) != 0x80004000 && ((uVar1 & 0x8000e800) != 0x80004000)))) &&
               (((uVar1 & 0xe000) != 0x6000 && ((uVar1 & 0x8000ec00) != 0x4c00)))) {
              DispatchingDecoderVisitor::VisitDataProcessing2Source
                        ((DispatchingDecoderVisitor *)this,param_1);
              return;
            }
          }
          else if ((((uVar1 & 0x1f2000) == 0) && ((uVar1 & 0x201ff800) != 0x1800)) &&
                  (((uVar1 & 0xc000) == 0 && ((uVar1 & 0xa01ffc00) != 0xc00)))) {
            DispatchingDecoderVisitor::VisitDataProcessing1Source
                      ((DispatchingDecoderVisitor *)this,param_1);
            return;
          }
        }
        else {
          DispatchingDecoderVisitor::VisitUnallocated((DispatchingDecoderVisitor *)this,param_1);
        }
      }
    }
  }
  else if ((uVar1 >> 0x1c & 1) == 0) {
    if ((uVar1 >> 0x15 & 1) == 0) {
      if (((uVar1 & 0xc00000) != 0xc00000) && ((uVar1 & 0x80008000) != 0x8000)) {
        DispatchingDecoderVisitor::VisitAddSubShifted((DispatchingDecoderVisitor *)this,param_1);
        return;
      }
    }
    else if ((((~uVar1 & 0x1800) != 0) && ((uVar1 & 0xc00000) == 0)) && ((uVar1 & 0x1400) != 0x1400)
            ) {
      DispatchingDecoderVisitor::VisitAddSubExtended((DispatchingDecoderVisitor *)this,param_1);
      return;
    }
  }
  else if (((((uVar1 >> 0x1e & 1) == 0) && ((uVar1 & 0x60608000) != 0x408000)) &&
           ((uVar1 & 0xe0608000) != 0x400000)) &&
          ((((uVar1 & 0x60000000) != 0x20000000 && ((uVar1 & 0xe0600000) != 0x200000)) &&
           ((uVar1 = uVar1 & 0x60e00000, uVar1 != 0x600000 &&
            ((uVar1 != 0xe00000 && (uVar1 != 0x800000)))))))) {
    DispatchingDecoderVisitor::VisitDataProcessing3Source((DispatchingDecoderVisitor *)this,param_1)
    ;
    return;
  }
  DispatchingDecoderVisitor::VisitUnallocated((DispatchingDecoderVisitor *)this,param_1);
  return;
}

