
/* v8::internal::compiler::JSHeapBroker::Retire() */

void __thiscall v8::internal::compiler::JSHeapBroker::Retire(JSHeapBroker *this)

{
  basic_ostream *pbVar1;
  char local_4 [4];
  
  if (*(int *)(this + 0x70) == 2) {
    if ((this[0x74] != (JSHeapBroker)0x0) && (FLAG_trace_heap_broker_verbose != '\0')) {
      pbVar1 = (basic_ostream *)Trace(this);
      pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar1,"Retiring",8);
      local_4[0] = '\n';
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1,local_4,1);
    }
    *(undefined4 *)(this + 0x70) = 3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","mode_ == kSerialized");
}

