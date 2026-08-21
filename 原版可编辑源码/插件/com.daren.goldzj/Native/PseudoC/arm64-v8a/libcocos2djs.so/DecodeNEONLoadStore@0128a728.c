
/* v8::internal::Decoder<v8::internal::DispatchingDecoderVisitor>::DecodeNEONLoadStore(v8::internal::Instruction*)
    */

void __thiscall
v8::internal::Decoder<v8::internal::DispatchingDecoderVisitor>::DecodeNEONLoadStore
          (Decoder<v8::internal::DispatchingDecoderVisitor> *this,Instruction *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)param_1;
  if (((int)uVar1 < 0) || (((uVar1 >> 0x15 & 1) != 0 && ((uVar1 >> 0x18 & 1) == 0)))) {
    DispatchingDecoderVisitor::VisitUnallocated((DispatchingDecoderVisitor *)this,param_1);
    return;
  }
  if ((uVar1 >> 0x17 & 1) != 0) {
    if ((uVar1 >> 0x18 & 1) == 0) {
      DispatchingDecoderVisitor::VisitNEONLoadStoreMultiStructPostIndex
                ((DispatchingDecoderVisitor *)this,param_1);
      return;
    }
    DispatchingDecoderVisitor::VisitNEONLoadStoreSingleStructPostIndex
              ((DispatchingDecoderVisitor *)this,param_1);
    return;
  }
  if ((uVar1 & 0x1f0000) != 0) {
    DispatchingDecoderVisitor::VisitUnallocated((DispatchingDecoderVisitor *)this,param_1);
    return;
  }
  if ((uVar1 >> 0x18 & 1) == 0) {
    DispatchingDecoderVisitor::VisitNEONLoadStoreMultiStruct
              ((DispatchingDecoderVisitor *)this,param_1);
    return;
  }
  DispatchingDecoderVisitor::VisitNEONLoadStoreSingleStruct
            ((DispatchingDecoderVisitor *)this,param_1);
  return;
}

