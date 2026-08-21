
/* v8::internal::DispatchingDecoderVisitor::PrependVisitor(v8::internal::DecoderVisitor*) */

void __thiscall
v8::internal::DispatchingDecoderVisitor::PrependVisitor
          (DispatchingDecoderVisitor *this,DecoderVisitor *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  DecoderVisitor *local_28;
  
  local_28 = param_1;
  std::__ndk1::
  list<v8::internal::DecoderVisitor*,std::__ndk1::allocator<v8::internal::DecoderVisitor*>>::remove
            ((list<v8::internal::DecoderVisitor*,std::__ndk1::allocator<v8::internal::DecoderVisitor*>>
              *)(this + 8),&local_28);
  puVar1 = operator_new(0x18);
  puVar1[2] = local_28;
  puVar2 = *(undefined8 **)(this + 0x10);
  *puVar1 = (list<v8::internal::DecoderVisitor*,std::__ndk1::allocator<v8::internal::DecoderVisitor*>>
             *)(this + 8);
  puVar1[1] = puVar2;
  *puVar2 = puVar1;
  *(undefined8 **)(this + 0x10) = puVar1;
  *(long *)(this + 0x18) = *(long *)(this + 0x18) + 1;
  return;
}

