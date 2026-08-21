
/* v8::internal::compiler::JSHeapBroker::GetFeedbackForForIn(v8::internal::compiler::FeedbackSource
   const&) */

undefined1 __thiscall
v8::internal::compiler::JSHeapBroker::GetFeedbackForForIn
          (JSHeapBroker *this,FeedbackSource *param_1)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  
  if (FLAG_concurrent_inlining == '\0') {
    piVar3 = (int *)ProcessFeedbackForForIn(this,param_1);
    iVar1 = *piVar3;
  }
  else {
    lVar2 = std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>,std::__ndk1::__unordered_map_hasher<v8::internal::compiler::FeedbackSource,std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>,v8::internal::compiler::FeedbackSource::Hash,true>,std::__ndk1::__unordered_map_equal<v8::internal::compiler::FeedbackSource,std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>,v8::internal::compiler::FeedbackSource::Equal,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>>>
            ::find<v8::internal::compiler::FeedbackSource>
                      ((__hash_table<std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>,std::__ndk1::__unordered_map_hasher<v8::internal::compiler::FeedbackSource,std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>,v8::internal::compiler::FeedbackSource::Hash,true>,std::__ndk1::__unordered_map_equal<v8::internal::compiler::FeedbackSource,std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>,v8::internal::compiler::FeedbackSource::Equal,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>>>
                        *)(this + 0x180),param_1);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","it != feedback_.end()");
    }
    piVar3 = *(int **)(lVar2 + 0x20);
    iVar1 = *piVar3;
  }
  if (iVar1 == 0) {
    return 0;
  }
  if (iVar1 != 5) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","kForIn == kind()");
  }
  return (char)piVar3[2];
}

