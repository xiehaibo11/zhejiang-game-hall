
/* v8::internal::compiler::JSHeapBroker::GetFeedbackForPropertyAccess(v8::internal::compiler::FeedbackSource
   const&, v8::internal::compiler::AccessMode, v8::base::Optional<v8::internal::compiler::NameRef>)
    */

undefined8
v8::internal::compiler::JSHeapBroker::GetFeedbackForPropertyAccess
          (long param_1,FeedbackSource *param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if (FLAG_concurrent_inlining == '\0') {
    uVar2 = ProcessFeedbackForPropertyAccess();
  }
  else {
    lVar1 = std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>,std::__ndk1::__unordered_map_hasher<v8::internal::compiler::FeedbackSource,std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>,v8::internal::compiler::FeedbackSource::Hash,true>,std::__ndk1::__unordered_map_equal<v8::internal::compiler::FeedbackSource,std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>,v8::internal::compiler::FeedbackSource::Equal,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>>>
            ::find<v8::internal::compiler::FeedbackSource>
                      ((__hash_table<std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>,std::__ndk1::__unordered_map_hasher<v8::internal::compiler::FeedbackSource,std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>,v8::internal::compiler::FeedbackSource::Hash,true>,std::__ndk1::__unordered_map_equal<v8::internal::compiler::FeedbackSource,std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>,v8::internal::compiler::FeedbackSource::Equal,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>>>
                        *)(param_1 + 0x180),param_2);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","it != feedback_.end()");
    }
    uVar2 = *(undefined8 *)(lVar1 + 0x20);
  }
  return uVar2;
}

