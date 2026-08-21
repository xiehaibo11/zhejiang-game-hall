
/* v8::internal::compiler::SerializerForBackgroundCompilation::ProcessReceiverMapForApiCall(v8::internal::compiler::FunctionTemplateInfoRef,
   v8::internal::Handle<v8::internal::Map>) */

void v8::internal::compiler::SerializerForBackgroundCompilation::ProcessReceiverMapForApiCall
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  ulong uVar1;
  basic_ostream *pbVar2;
  char local_60 [32];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  if ((*(byte *)(*param_4 + 9) >> 5 & 1) == 0) {
    local_30 = param_2;
    uStack_28 = param_3;
    ObjectRef::ObjectRef((ObjectRef *)&local_40,*param_1,param_4,0);
    uVar1 = ObjectRef::IsMap((ObjectRef *)&local_40);
    if ((uVar1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsMap()");
    }
    if ((((JSHeapBroker *)*param_1)[0x74] != (JSHeapBroker)0x0) &&
       (FLAG_trace_heap_broker_verbose != '\0')) {
      pbVar2 = (basic_ostream *)JSHeapBroker::Trace((JSHeapBroker *)*param_1);
      pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar2,"Serializing holder for target: ",0x1f);
      pbVar2 = (basic_ostream *)compiler::operator<<(pbVar2,(ObjectRef *)&local_30);
      local_60[0] = '\n';
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,local_60,1);
    }
    FunctionTemplateInfoRef::LookupHolderOfExpectedType(local_60,&local_30,local_40,uStack_38,1);
  }
  return;
}

