
/* v8::internal::Decoder<v8::internal::DispatchingDecoderVisitor>::~Decoder() */

void __thiscall
v8::internal::Decoder<v8::internal::DispatchingDecoderVisitor>::~Decoder
          (Decoder<v8::internal::DispatchingDecoderVisitor> *this)

{
  long lVar1;
  Decoder<v8::internal::DispatchingDecoderVisitor> *pDVar2;
  Decoder<v8::internal::DispatchingDecoderVisitor> *pDVar3;
  
  *(undefined ***)this = &PTR__DispatchingDecoderVisitor_01cca348;
  if (*(long *)(this + 0x18) != 0) {
    lVar1 = *(long *)(this + 8);
    pDVar2 = *(Decoder<v8::internal::DispatchingDecoderVisitor> **)(this + 0x10);
    *(undefined8 *)(*(long *)pDVar2 + 8) = *(undefined8 *)(lVar1 + 8);
    **(undefined8 **)(lVar1 + 8) = *(undefined8 *)pDVar2;
    *(undefined8 *)(this + 0x18) = 0;
    while (pDVar2 != this + 8) {
      pDVar3 = *(Decoder<v8::internal::DispatchingDecoderVisitor> **)(pDVar2 + 8);
      operator_delete(pDVar2);
      pDVar2 = pDVar3;
    }
  }
  operator_delete(this);
  return;
}

