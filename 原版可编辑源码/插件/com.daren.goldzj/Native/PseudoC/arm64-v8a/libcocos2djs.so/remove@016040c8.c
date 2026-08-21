
/* std::__ndk1::list<v8::internal::DecoderVisitor*,
   std::__ndk1::allocator<v8::internal::DecoderVisitor*> >::remove(v8::internal::DecoderVisitor*
   const&) */

void __thiscall
std::__ndk1::
list<v8::internal::DecoderVisitor*,std::__ndk1::allocator<v8::internal::DecoderVisitor*>>::remove
          (list<v8::internal::DecoderVisitor*,std::__ndk1::allocator<v8::internal::DecoderVisitor*>>
           *this,DecoderVisitor **param_1)

{
  bool bVar1;
  list<v8::internal::DecoderVisitor*,std::__ndk1::allocator<v8::internal::DecoderVisitor*>> *plVar2;
  list<v8::internal::DecoderVisitor*,std::__ndk1::allocator<v8::internal::DecoderVisitor*>> *plVar3;
  list<v8::internal::DecoderVisitor*,std::__ndk1::allocator<v8::internal::DecoderVisitor*>> *plVar4;
  long lVar5;
  list<v8::internal::DecoderVisitor*,std::__ndk1::allocator<v8::internal::DecoderVisitor*>> *plVar6;
  list<v8::internal::DecoderVisitor*,std::__ndk1::allocator<v8::internal::DecoderVisitor*>> *plVar7;
  list<v8::internal::DecoderVisitor*,std::__ndk1::allocator<v8::internal::DecoderVisitor*>>
  *local_38;
  list<v8::internal::DecoderVisitor*,std::__ndk1::allocator<v8::internal::DecoderVisitor*>>
  *local_30;
  long local_28;
  
  local_38 = (list<v8::internal::DecoderVisitor*,std::__ndk1::allocator<v8::internal::DecoderVisitor*>>
              *)&local_38;
  local_30 = (list<v8::internal::DecoderVisitor*,std::__ndk1::allocator<v8::internal::DecoderVisitor*>>
              *)&local_38;
  local_28 = 0;
  plVar2 = *(list<v8::internal::DecoderVisitor*,std::__ndk1::allocator<v8::internal::DecoderVisitor*>>
             **)(this + 8);
  if (this != plVar2) {
    plVar7 = (list<v8::internal::DecoderVisitor*,std::__ndk1::allocator<v8::internal::DecoderVisitor*>>
              *)&local_38;
    do {
      plVar4 = plVar2;
      if (*(DecoderVisitor **)(plVar2 + 0x10) == *param_1) {
        for (plVar3 = *(list<v8::internal::DecoderVisitor*,std::__ndk1::allocator<v8::internal::DecoderVisitor*>>
                        **)(plVar2 + 8); this != plVar3;
            plVar3 = *(list<v8::internal::DecoderVisitor*,std::__ndk1::allocator<v8::internal::DecoderVisitor*>>
                       **)(plVar3 + 8)) {
          if (*(DecoderVisitor **)(plVar3 + 0x10) != *(DecoderVisitor **)(plVar2 + 0x10)) {
            bVar1 = true;
            plVar4 = plVar3;
            goto joined_r0x01604164;
          }
        }
        bVar1 = false;
        plVar4 = this;
joined_r0x01604164:
        if (plVar2 != plVar4) {
          plVar7 = *(list<v8::internal::DecoderVisitor*,std::__ndk1::allocator<v8::internal::DecoderVisitor*>>
                     **)plVar3;
          if ((list<v8::internal::DecoderVisitor*,std::__ndk1::allocator<v8::internal::DecoderVisitor*>>
               *)&local_38 != this) {
            lVar5 = 1;
            for (plVar6 = plVar2; plVar7 != plVar6;
                plVar6 = *(list<v8::internal::DecoderVisitor*,std::__ndk1::allocator<v8::internal::DecoderVisitor*>>
                           **)(plVar6 + 8)) {
              lVar5 = lVar5 + 1;
            }
            *(long *)(this + 0x10) = *(long *)(this + 0x10) - lVar5;
            local_28 = local_28 + lVar5;
          }
          *(list<v8::internal::DecoderVisitor*,std::__ndk1::allocator<v8::internal::DecoderVisitor*>>
            **)(*(long *)plVar2 + 8) =
               *(list<v8::internal::DecoderVisitor*,std::__ndk1::allocator<v8::internal::DecoderVisitor*>>
                 **)(plVar7 + 8);
          *(undefined8 *)
           *(list<v8::internal::DecoderVisitor*,std::__ndk1::allocator<v8::internal::DecoderVisitor*>>
             **)(plVar7 + 8) = *(undefined8 *)plVar2;
          *(list<v8::internal::DecoderVisitor*,std::__ndk1::allocator<v8::internal::DecoderVisitor*>>
            **)(local_38 + 8) = plVar2;
          *(list<v8::internal::DecoderVisitor*,std::__ndk1::allocator<v8::internal::DecoderVisitor*>>
            **)plVar2 = local_38;
          local_38 = plVar7;
          *(list<v8::internal::DecoderVisitor*,std::__ndk1::allocator<v8::internal::DecoderVisitor*>>
            **)(plVar7 + 8) =
               (list<v8::internal::DecoderVisitor*,std::__ndk1::allocator<v8::internal::DecoderVisitor*>>
                *)&local_38;
        }
        plVar2 = plVar3;
        if (bVar1) goto LAB_016040fc;
      }
      else {
LAB_016040fc:
        plVar2 = *(list<v8::internal::DecoderVisitor*,std::__ndk1::allocator<v8::internal::DecoderVisitor*>>
                   **)(plVar4 + 8);
      }
    } while (this != plVar2);
    if (local_28 != 0) {
      *(list<v8::internal::DecoderVisitor*,std::__ndk1::allocator<v8::internal::DecoderVisitor*>> **
       )(*(long *)local_30 + 8) =
           *(list<v8::internal::DecoderVisitor*,std::__ndk1::allocator<v8::internal::DecoderVisitor*>>
             **)(plVar7 + 8);
      *(undefined8 *)
       *(list<v8::internal::DecoderVisitor*,std::__ndk1::allocator<v8::internal::DecoderVisitor*>>
         **)(plVar7 + 8) = *(undefined8 *)local_30;
      local_28 = 0;
      plVar2 = local_30;
      while (plVar2 != (list<v8::internal::DecoderVisitor*,std::__ndk1::allocator<v8::internal::DecoderVisitor*>>
                        *)&local_38) {
        plVar7 = *(list<v8::internal::DecoderVisitor*,std::__ndk1::allocator<v8::internal::DecoderVisitor*>>
                   **)(plVar2 + 8);
        operator_delete(plVar2);
        plVar2 = plVar7;
      }
    }
  }
  return;
}

