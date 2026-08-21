
/* v8::internal::compiler::ContextData::GetSlot(v8::internal::compiler::JSHeapBroker*, int,
   v8::internal::compiler::SerializationPolicy) */

undefined8 __thiscall
v8::internal::compiler::ContextData::GetSlot
          (ContextData *this,JSHeapBroker *param_1,uint param_2,int param_4)

{
  basic_ostream *pbVar1;
  Isolate *pIVar2;
  undefined8 uVar3;
  ContextData *pCVar4;
  ContextData *pCVar5;
  ulong uVar6;
  ContextData *pCVar7;
  ulong *puVar8;
  ulong local_50;
  undefined8 uStack_48;
  long local_28;
  
  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","index >= 0");
  }
  pCVar5 = this + 0x20;
  pCVar7 = *(ContextData **)pCVar5;
  pCVar4 = pCVar5;
  if (pCVar7 != (ContextData *)0x0) {
    do {
      if ((int)param_2 <= *(int *)(pCVar7 + 0x20)) {
        pCVar4 = pCVar7;
      }
      pCVar7 = *(ContextData **)(pCVar7 + (ulong)(*(int *)(pCVar7 + 0x20) < (int)param_2) * 8);
    } while (pCVar7 != (ContextData *)0x0);
    if ((pCVar4 != pCVar5) && (*(int *)(pCVar4 + 0x20) <= (int)param_2)) {
      return *(undefined8 *)(pCVar4 + 0x28);
    }
  }
  if ((param_4 == 1) && (puVar8 = *(ulong **)this, (int)param_2 < *(int *)(*puVar8 + 3) >> 1)) {
    TraceScope::TraceScope((TraceScope *)&local_28,param_1,this,"ContextData::GetSlot");
    if ((param_1[0x74] != (JSHeapBroker)0x0) && (FLAG_trace_heap_broker_verbose != '\0')) {
      pbVar1 = (basic_ostream *)JSHeapBroker::Trace(param_1);
      pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar1,"Serializing context slot ",0x19);
      pbVar1 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar1,param_2);
      local_50 = CONCAT71(local_50._1_7_,10);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                (pbVar1,(char *)&local_50,1);
    }
    uVar6 = *puVar8;
    pIVar2 = *(Isolate **)param_1;
    uVar6 = uVar6 & 0xffffffff00000000 | (ulong)*(uint *)(uVar6 + (long)(int)(param_2 << 2) + 7);
    if (*(CanonicalHandleScope **)(pIVar2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar8 = *(ulong **)(pIVar2 + 0x95a0);
      if (puVar8 == *(ulong **)(pIVar2 + 0x95a8)) {
        puVar8 = (ulong *)HandleScope::Extend(pIVar2);
      }
      *(ulong **)(pIVar2 + 0x95a0) = puVar8 + 1;
      *puVar8 = uVar6;
    }
    else {
      puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar2 + 0x95b8),uVar6);
    }
    uVar3 = JSHeapBroker::GetOrCreateData(param_1,puVar8);
    local_50 = (ulong)param_2;
    uStack_48 = uVar3;
    std::__ndk1::
    __tree<std::__ndk1::__value_type<int,v8::internal::compiler::ObjectData*>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,v8::internal::compiler::ObjectData*>,std::__ndk1::less<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<int,v8::internal::compiler::ObjectData*>>>
    ::__emplace_unique_key_args<int,std::__ndk1::pair<int,v8::internal::compiler::ObjectData*>>
              ((__tree<std::__ndk1::__value_type<int,v8::internal::compiler::ObjectData*>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,v8::internal::compiler::ObjectData*>,std::__ndk1::less<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<int,v8::internal::compiler::ObjectData*>>>
                *)(this + 0x18),(int *)&local_50,(pair *)&local_50);
    *(int *)(local_28 + 0x170) = *(int *)(local_28 + 0x170) + -1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

