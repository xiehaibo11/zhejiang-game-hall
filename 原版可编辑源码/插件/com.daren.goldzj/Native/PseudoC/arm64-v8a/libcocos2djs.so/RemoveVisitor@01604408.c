
/* v8::internal::DispatchingDecoderVisitor::RemoveVisitor(v8::internal::DecoderVisitor*) */

void __thiscall
v8::internal::DispatchingDecoderVisitor::RemoveVisitor
          (DispatchingDecoderVisitor *this,DecoderVisitor *param_1)

{
  DecoderVisitor *local_18;
  
  local_18 = param_1;
  std::__ndk1::
  list<v8::internal::DecoderVisitor*,std::__ndk1::allocator<v8::internal::DecoderVisitor*>>::remove
            ((list<v8::internal::DecoderVisitor*,std::__ndk1::allocator<v8::internal::DecoderVisitor*>>
              *)(this + 8),&local_18);
  return;
}

