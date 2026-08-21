
/* v8::internal::Decoder<v8::internal::DispatchingDecoderVisitor>::Decode(v8::internal::Instruction*)
    */

void __thiscall
v8::internal::Decoder<v8::internal::DispatchingDecoderVisitor>::Decode
          (Decoder<v8::internal::DispatchingDecoderVisitor> *this,Instruction *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)param_1;
  if ((uVar1 & 0x18000000) != 0) {
    switch(uVar1 >> 0x18 & 0xf) {
    case 0:
      DispatchingDecoderVisitor::VisitPCRelAddressing((DispatchingDecoderVisitor *)this,param_1);
      return;
    case 1:
      if ((uVar1 >> 0x17 & 1) == 0) {
        DispatchingDecoderVisitor::VisitAddSubImmediate((DispatchingDecoderVisitor *)this,param_1);
        return;
      }
      break;
    case 2:
      if ((uVar1 & 0x80400000) != 0x400000) {
        if ((uVar1 >> 0x17 & 1) == 0) {
          DispatchingDecoderVisitor::VisitLogicalImmediate
                    ((DispatchingDecoderVisitor *)this,param_1);
          return;
        }
        if ((uVar1 & 0x60000000) == 0x20000000) {
          DispatchingDecoderVisitor::VisitUnallocated((DispatchingDecoderVisitor *)this,param_1);
          return;
        }
        DispatchingDecoderVisitor::VisitMoveWideImmediate((DispatchingDecoderVisitor *)this,param_1)
        ;
        return;
      }
      break;
    case 3:
      DecodeBitfieldExtract(this,param_1);
      return;
    default:
      DecodeBranchSystemException(this,param_1);
      return;
    case 8:
    case 9:
    case 0xc:
    case 0xd:
      DecodeLoadStore(this,param_1);
      return;
    case 10:
    case 0xb:
      DecodeDataProcessing(this,param_1);
      return;
    case 0xe:
    case 0xf:
      DecodeFP(this,param_1);
      return;
    }
  }
  DispatchingDecoderVisitor::VisitUnallocated((DispatchingDecoderVisitor *)this,param_1);
  return;
}

