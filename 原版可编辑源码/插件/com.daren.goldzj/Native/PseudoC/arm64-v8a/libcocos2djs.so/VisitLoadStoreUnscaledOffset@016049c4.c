
/* v8::internal::DispatchingDecoderVisitor::VisitLoadStoreUnscaledOffset(v8::internal::Instruction*)
    */

void __thiscall
v8::internal::DispatchingDecoderVisitor::VisitLoadStoreUnscaledOffset
          (DispatchingDecoderVisitor *this,Instruction *param_1)

{
  DispatchingDecoderVisitor *pDVar1;
  
  for (pDVar1 = *(DispatchingDecoderVisitor **)(this + 0x10); this + 8 != pDVar1;
      pDVar1 = *(DispatchingDecoderVisitor **)(pDVar1 + 8)) {
    (**(code **)(**(long **)(pDVar1 + 0x10) + 0x98))(*(long **)(pDVar1 + 0x10),param_1);
  }
  return;
}

