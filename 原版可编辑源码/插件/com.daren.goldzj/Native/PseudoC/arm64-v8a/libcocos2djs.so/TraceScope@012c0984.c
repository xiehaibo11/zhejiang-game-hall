
/* v8::internal::compiler::TraceScope::TraceScope(v8::internal::compiler::JSHeapBroker*, void*, char
   const*) */

void __thiscall
v8::internal::compiler::TraceScope::TraceScope
          (TraceScope *this,JSHeapBroker *param_1,void *param_2,char *param_3)

{
  basic_ostream *pbVar1;
  size_t sVar2;
  char local_34 [4];
  
  *(JSHeapBroker **)this = param_1;
  if ((param_1[0x74] != (JSHeapBroker)0x0) && (FLAG_trace_heap_broker_verbose != '\0')) {
    pbVar1 = (basic_ostream *)JSHeapBroker::Trace(param_1);
    pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar1,"Running ",8);
    sVar2 = strlen(param_3);
    pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar1,param_3,sVar2);
    pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar1," on ",4);
    pbVar1 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar1,param_2);
    local_34[0] = '\n';
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1,local_34,1);
    param_1 = *(JSHeapBroker **)this;
  }
  JSHeapBroker::IncrementTracingIndentation(param_1);
  return;
}

