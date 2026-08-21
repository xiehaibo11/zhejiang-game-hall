
/* v8::internal::DispatchingDecoderVisitor::AppendVisitor(v8::internal::DecoderVisitor*) */

void __thiscall
v8::internal::DispatchingDecoderVisitor::AppendVisitor
          (DispatchingDecoderVisitor *this,DecoderVisitor *param_1)

{
  long *plVar1;
  long lVar2;
  DecoderVisitor *local_28;
  
  local_28 = param_1;
  std::__ndk1::
  list<v8::internal::DecoderVisitor*,std::__ndk1::allocator<v8::internal::DecoderVisitor*>>::remove
            ((list<v8::internal::DecoderVisitor*,std::__ndk1::allocator<v8::internal::DecoderVisitor*>>
              *)(this + 8),&local_28);
  plVar1 = operator_new(0x18);
  plVar1[1] = (long)(this + 8);
  plVar1[2] = (long)local_28;
  lVar2 = *(long *)(this + 8);
  *plVar1 = lVar2;
  *(long **)(lVar2 + 8) = plVar1;
  *(long **)(this + 8) = plVar1;
  *(long *)(this + 0x18) = *(long *)(this + 0x18) + 1;
  return;
}

