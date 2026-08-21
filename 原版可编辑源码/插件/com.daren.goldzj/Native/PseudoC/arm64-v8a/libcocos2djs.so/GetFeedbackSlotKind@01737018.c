
/* v8::internal::compiler::JSHeapBroker::GetFeedbackSlotKind(v8::internal::compiler::FeedbackSource
   const&) const */

ulong __thiscall
v8::internal::compiler::JSHeapBroker::GetFeedbackSlotKind
          (JSHeapBroker *this,FeedbackSource *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 local_18;
  
  if (FLAG_concurrent_inlining == '\0') {
    if (*(undefined8 **)param_1 == (undefined8 *)0x0) {
      uVar2 = 0;
    }
    else {
      local_18 = **(undefined8 **)param_1;
      uVar2 = FeedbackVector::GetKind((FeedbackVector *)&local_18,*(undefined4 *)(param_1 + 8));
    }
  }
  else {
    lVar1 = std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>,std::__ndk1::__unordered_map_hasher<v8::internal::compiler::FeedbackSource,std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>,v8::internal::compiler::FeedbackSource::Hash,true>,std::__ndk1::__unordered_map_equal<v8::internal::compiler::FeedbackSource,std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>,v8::internal::compiler::FeedbackSource::Equal,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>>>
            ::find<v8::internal::compiler::FeedbackSource>
                      ((__hash_table<std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>,std::__ndk1::__unordered_map_hasher<v8::internal::compiler::FeedbackSource,std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>,v8::internal::compiler::FeedbackSource::Hash,true>,std::__ndk1::__unordered_map_equal<v8::internal::compiler::FeedbackSource,std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>,v8::internal::compiler::FeedbackSource::Equal,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>>>
                        *)(this + 0x180),param_1);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","it != feedback_.end()");
    }
    uVar2 = (ulong)*(uint *)(*(long *)(lVar1 + 0x20) + 4);
  }
  return uVar2;
}

