
/* v8::internal::Decoder<v8::internal::DispatchingDecoderVisitor>::DecodeLoadStore(v8::internal::Instruction*)
    */

void __thiscall
v8::internal::Decoder<v8::internal::DispatchingDecoderVisitor>::DecodeLoadStore
          (Decoder<v8::internal::DispatchingDecoderVisitor> *this,Instruction *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)param_1;
  if ((uVar1 & 0x34000000) == 0x4000000) {
    DecodeNEONLoadStore(this,param_1);
    return;
  }
  if ((uVar1 >> 0x18 & 1) == 0) {
    if ((uVar1 >> 0x1c & 1) == 0) {
      if ((uVar1 >> 0x1d & 1) == 0) {
        if ((uVar1 >> 0x1a & 1) != 0) {
          return;
        }
        if (((uVar1 & 0xa08000) == 0x800000) || ((uVar1 & 0xa00000) == 0xa00000)) goto LAB_0128a320;
        if ((uVar1 & 0x808000) != 0) {
          DispatchingDecoderVisitor::VisitLoadStoreAcquireRelease
                    ((DispatchingDecoderVisitor *)this,param_1);
          return;
        }
      }
      else {
        if ((2 < uVar1 >> 0x1e) || ((uVar1 & 0xc4400000) == 0x40000000)) goto LAB_0128a320;
        if ((uVar1 >> 0x17 & 1) != 0) {
          DispatchingDecoderVisitor::VisitLoadStorePairPostIndex
                    ((DispatchingDecoderVisitor *)this,param_1);
          return;
        }
      }
switchD_0128a3a0_caseD_2:
      DispatchingDecoderVisitor::VisitUnimplemented((DispatchingDecoderVisitor *)this,param_1);
      return;
    }
    if ((uVar1 >> 0x1d & 1) == 0) {
      if (((uVar1 ^ 0xffffffff) & 0xc4000000) != 0) {
        DispatchingDecoderVisitor::VisitLoadLiteral((DispatchingDecoderVisitor *)this,param_1);
        return;
      }
    }
    else if (((((uVar1 ^ 0xffffffff) & 0x84800000) != 0) && ((uVar1 & 0x84c00000) != 0x80c00000)) &&
            ((uVar1 & 0x44800000) != 0x44800000)) {
      uVar2 = uVar1 >> 10 & 3;
      if ((uVar1 >> 0x15 & 1) == 0) {
        switch(uVar2) {
        case 0:
          DispatchingDecoderVisitor::VisitLoadStoreUnscaledOffset
                    ((DispatchingDecoderVisitor *)this,param_1);
          return;
        case 1:
          if ((uVar1 & 0xc4c00000) != 0xc0800000) {
            DispatchingDecoderVisitor::VisitLoadStorePostIndex
                      ((DispatchingDecoderVisitor *)this,param_1);
            return;
          }
          break;
        case 2:
          goto switchD_0128a3a0_caseD_2;
        case 3:
          if ((uVar1 & 0xc4c00000) != 0xc0800000) {
            DispatchingDecoderVisitor::VisitLoadStorePreIndex
                      ((DispatchingDecoderVisitor *)this,param_1);
            return;
          }
        }
      }
      else if ((uVar2 == 2) && ((uVar1 >> 0xe & 1) != 0)) {
        DispatchingDecoderVisitor::VisitLoadStoreRegisterOffset
                  ((DispatchingDecoderVisitor *)this,param_1);
        return;
      }
    }
  }
  else if ((uVar1 >> 0x1c & 1) == 0) {
    if ((((uVar1 >> 0x1d & 1) != 0) && (uVar1 >> 0x1e < 3)) && ((uVar1 & 0xc4400000) != 0x40000000))
    {
      if ((uVar1 >> 0x17 & 1) == 0) {
        DispatchingDecoderVisitor::VisitLoadStorePairOffset
                  ((DispatchingDecoderVisitor *)this,param_1);
        return;
      }
      DispatchingDecoderVisitor::VisitLoadStorePairPreIndex
                ((DispatchingDecoderVisitor *)this,param_1);
      return;
    }
  }
  else if (((((uVar1 >> 0x1d & 1) != 0) && (((uVar1 ^ 0xffffffff) & 0x84800000) != 0)) &&
           ((uVar1 & 0x84c00000) != 0x80c00000)) && ((uVar1 & 0x44800000) != 0x44800000)) {
    DispatchingDecoderVisitor::VisitLoadStoreUnsignedOffset
              ((DispatchingDecoderVisitor *)this,param_1);
    return;
  }
LAB_0128a320:
  DispatchingDecoderVisitor::VisitUnallocated((DispatchingDecoderVisitor *)this,param_1);
  return;
}

