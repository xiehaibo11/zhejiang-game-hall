
/* v8::internal::DispatchingDecoderVisitor::InsertVisitorBefore(v8::internal::DecoderVisitor*,
   v8::internal::DecoderVisitor*) */

void __thiscall
v8::internal::DispatchingDecoderVisitor::InsertVisitorBefore
          (DispatchingDecoderVisitor *this,DecoderVisitor *param_1,DecoderVisitor *param_2)

{
  undefined8 *puVar1;
  list<v8::internal::DecoderVisitor*,std::__ndk1::allocator<v8::internal::DecoderVisitor*>> *this_00
  ;
  list<v8::internal::DecoderVisitor*,std::__ndk1::allocator<v8::internal::DecoderVisitor*>> *plVar2;
  DecoderVisitor *local_38;
  
  this_00 = (list<v8::internal::DecoderVisitor*,std::__ndk1::allocator<v8::internal::DecoderVisitor*>>
             *)(this + 8);
  local_38 = param_1;
  std::__ndk1::
  list<v8::internal::DecoderVisitor*,std::__ndk1::allocator<v8::internal::DecoderVisitor*>>::remove
            (this_00,&local_38);
  plVar2 = *(list<v8::internal::DecoderVisitor*,std::__ndk1::allocator<v8::internal::DecoderVisitor*>>
             **)(this + 0x10);
  do {
    if (this_00 == plVar2) {
      puVar1 = operator_new(0x18);
      *puVar1 = 0;
LAB_01604314:
      puVar1[2] = local_38;
      *(undefined8 **)(*(long *)this_00 + 8) = puVar1;
      *puVar1 = *(undefined8 *)plVar2;
      *(undefined8 **)plVar2 = puVar1;
      puVar1[1] = this_00;
      *(long *)(this + 0x18) = *(long *)(this + 0x18) + 1;
      return;
    }
    if (*(DecoderVisitor **)(plVar2 + 0x10) == param_2) {
      puVar1 = operator_new(0x18);
      *puVar1 = 0;
      this_00 = plVar2;
      goto LAB_01604314;
    }
    plVar2 = *(list<v8::internal::DecoderVisitor*,std::__ndk1::allocator<v8::internal::DecoderVisitor*>>
               **)(plVar2 + 8);
  } while( true );
}

