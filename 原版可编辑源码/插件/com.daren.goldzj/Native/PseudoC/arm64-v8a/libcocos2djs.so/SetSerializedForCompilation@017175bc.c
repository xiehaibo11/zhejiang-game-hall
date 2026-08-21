
/* v8::internal::compiler::JSHeapBroker::SetSerializedForCompilation(v8::internal::compiler::SharedFunctionInfoRef
   const&, v8::internal::compiler::FeedbackVectorRef const&,
   v8::internal::ZoneVector<v8::internal::compiler::Hints> const&) */

void __thiscall
v8::internal::compiler::JSHeapBroker::SetSerializedForCompilation
          (JSHeapBroker *this,SharedFunctionInfoRef *param_1,FeedbackVectorRef *param_2,
          ZoneVector *param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  basic_ostream *pbVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  Zone *pZStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_98 = *(undefined8 *)(param_1 + 8);
  local_a0 = *(undefined8 *)param_1;
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_90 = *(undefined8 *)param_2;
  pZStack_68 = *(Zone **)(param_3 + 0x18);
  local_80 = (undefined8 *)0x0;
  local_78 = (undefined8 *)0x0;
  local_70 = (undefined8 *)0x0;
  uVar2 = *(long *)(param_3 + 8) - *(long *)param_3;
  local_60 = local_a0;
  uStack_58 = uStack_98;
  uStack_50 = uStack_90;
  uStack_48 = uStack_88;
  if (uVar2 != 0) {
    if ((ulong)((long)uVar2 >> 3) >> 0x1c != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    puVar4 = *(undefined8 **)(pZStack_68 + 0x10);
    if ((ulong)(*(long *)(pZStack_68 + 0x18) - (long)puVar4) < uVar2) {
      puVar4 = (undefined8 *)Zone::NewExpand(pZStack_68,uVar2);
    }
    else {
      *(ulong *)(pZStack_68 + 0x10) = (long)puVar4 + uVar2;
    }
    local_70 = puVar4 + ((long)uVar2 >> 3);
    puVar1 = *(undefined8 **)(param_3 + 8);
    local_78 = puVar4;
    for (puVar5 = *(undefined8 **)param_3; local_80 = puVar4, puVar5 != puVar1; puVar5 = puVar5 + 1)
    {
      *local_78 = *puVar5;
      local_78 = local_78 + 1;
    }
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<v8::internal::compiler::JSHeapBroker::SerializedFunction,v8::internal::ZoneVector<v8::internal::compiler::Hints>>,std::__ndk1::__map_value_compare<v8::internal::compiler::JSHeapBroker::SerializedFunction,std::__ndk1::__value_type<v8::internal::compiler::JSHeapBroker::SerializedFunction,v8::internal::ZoneVector<v8::internal::compiler::Hints>>,std::__ndk1::less<v8::internal::compiler::JSHeapBroker::SerializedFunction>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::JSHeapBroker::SerializedFunction,v8::internal::ZoneVector<v8::internal::compiler::Hints>>>>
  ::
  __emplace_multi<std::__ndk1::pair<v8::internal::compiler::JSHeapBroker::SerializedFunction_const,v8::internal::ZoneVector<v8::internal::compiler::Hints>>>
            ((__tree<std::__ndk1::__value_type<v8::internal::compiler::JSHeapBroker::SerializedFunction,v8::internal::ZoneVector<v8::internal::compiler::Hints>>,std::__ndk1::__map_value_compare<v8::internal::compiler::JSHeapBroker::SerializedFunction,std::__ndk1::__value_type<v8::internal::compiler::JSHeapBroker::SerializedFunction,v8::internal::ZoneVector<v8::internal::compiler::Hints>>,std::__ndk1::less<v8::internal::compiler::JSHeapBroker::SerializedFunction>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::JSHeapBroker::SerializedFunction,v8::internal::ZoneVector<v8::internal::compiler::Hints>>>>
              *)(this + 0x248),(pair *)&local_a0);
  if (local_80 != (undefined8 *)0x0) {
    local_78 = local_80;
  }
  if ((this[0x74] != (JSHeapBroker)0x0) && (FLAG_trace_heap_broker_verbose != '\0')) {
    pbVar3 = (basic_ostream *)Trace(this);
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar3,"Set function ",0xd);
    pbVar3 = (basic_ostream *)compiler::operator<<(pbVar3,(ObjectRef *)param_1);
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar3," with ",6);
    pbVar3 = (basic_ostream *)compiler::operator<<(pbVar3,(ObjectRef *)param_2);
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar3," as serialized for compilation",0x1e);
    local_a0 = CONCAT71(local_a0._1_7_,10);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (pbVar3,(char *)&local_a0,1);
  }
  return;
}

