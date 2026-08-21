
/* v8::internal::compiler::ObjectData::ObjectData(v8::internal::compiler::JSHeapBroker*,
   v8::internal::compiler::ObjectData**, v8::internal::Handle<v8::internal::Object>,
   v8::internal::compiler::ObjectDataKind) */

void __thiscall
v8::internal::compiler::ObjectData::ObjectData
          (ObjectData *this,JSHeapBroker *param_1,undefined8 *param_2,undefined8 *param_4,
          undefined4 param_5)

{
  basic_ostream *pbVar1;
  undefined8 local_38;
  char local_14 [4];
  
  *(undefined8 **)this = param_4;
  *(undefined4 *)(this + 8) = param_5;
  *param_2 = this;
  if ((param_1[0x74] != (JSHeapBroker)0x0) && (FLAG_trace_heap_broker_verbose != '\0')) {
    pbVar1 = (basic_ostream *)JSHeapBroker::Trace(param_1);
    pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar1,"Creating data ",0xe);
    pbVar1 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar1,this);
    pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar1," for handle ",0xc);
    pbVar1 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar1,(ulong)param_4)
    ;
    pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar1," (",2);
    local_38 = *param_4;
    pbVar1 = (basic_ostream *)internal::operator<<(pbVar1,(Brief *)&local_38);
    pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar1,")",1);
    local_14[0] = '\n';
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1,local_14,1);
  }
  if (*(long *)(*(long *)param_1 + 0x95b8) != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.",
           "(broker->isolate()->handle_scope_data()->canonical_scope) != nullptr");
}

