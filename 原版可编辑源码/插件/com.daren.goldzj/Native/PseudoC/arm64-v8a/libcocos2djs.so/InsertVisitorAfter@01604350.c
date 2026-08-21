
/* v8::internal::DispatchingDecoderVisitor::InsertVisitorAfter(v8::internal::DecoderVisitor*,
   v8::internal::DecoderVisitor*) */

void __thiscall
v8::internal::DispatchingDecoderVisitor::InsertVisitorAfter
          (DispatchingDecoderVisitor *this,DecoderVisitor *param_1,DecoderVisitor *param_2)

{
  list<v8::internal::DecoderVisitor*,std::__ndk1::allocator<v8::internal::DecoderVisitor*>> *this_00
  ;
  list<v8::internal::DecoderVisitor*,std::__ndk1::allocator<v8::internal::DecoderVisitor*>> *plVar1;
  list<v8::internal::DecoderVisitor*,std::__ndk1::allocator<v8::internal::DecoderVisitor*>> *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  list<v8::internal::DecoderVisitor*,std::__ndk1::allocator<v8::internal::DecoderVisitor*>> *plVar6;
  DecoderVisitor *local_38;
  
  this_00 = (list<v8::internal::DecoderVisitor*,std::__ndk1::allocator<v8::internal::DecoderVisitor*>>
             *)(this + 8);
  local_38 = param_1;
  std::__ndk1::
  list<v8::internal::DecoderVisitor*,std::__ndk1::allocator<v8::internal::DecoderVisitor*>>::remove
            (this_00,&local_38);
  plVar6 = *(list<v8::internal::DecoderVisitor*,std::__ndk1::allocator<v8::internal::DecoderVisitor*>>
             **)(this + 0x10);
  do {
    if (this_00 == plVar6) {
      plVar4 = operator_new(0x18);
      plVar4[1] = (long)this_00;
      plVar4[2] = (long)local_38;
      lVar5 = *(long *)this_00;
      *plVar4 = lVar5;
      *(long **)(lVar5 + 8) = plVar4;
      *(long **)this_00 = plVar4;
      goto LAB_016043e8;
    }
    plVar1 = *(list<v8::internal::DecoderVisitor*,std::__ndk1::allocator<v8::internal::DecoderVisitor*>>
               **)(plVar6 + 8);
    plVar2 = plVar6 + 0x10;
    plVar6 = plVar1;
  } while (*(DecoderVisitor **)plVar2 != param_2);
  puVar3 = operator_new(0x18);
  *puVar3 = 0;
  puVar3[2] = local_38;
  *(undefined8 **)(*(long *)plVar1 + 8) = puVar3;
  *puVar3 = *(undefined8 *)plVar1;
  *(undefined8 **)plVar1 = puVar3;
  puVar3[1] = plVar1;
LAB_016043e8:
  *(long *)(this + 0x18) = *(long *)(this + 0x18) + 1;
  return;
}

