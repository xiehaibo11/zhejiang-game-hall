
/* v8::internal::compiler::JSHeapBroker::FeedbackIsInsufficient(v8::internal::compiler::FeedbackSource
   const&) const */

bool __thiscall
v8::internal::compiler::JSHeapBroker::FeedbackIsInsufficient
          (JSHeapBroker *this,FeedbackSource *param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  undefined8 *local_30;
  undefined8 uStack_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined8 local_18;
  
  if (FLAG_concurrent_inlining == '\0') {
    local_30 = *(undefined8 **)param_1;
    local_20 = *(undefined4 *)(param_1 + 8);
    uStack_28 = 0;
    if (local_30 == (undefined8 *)0x0) {
      local_1c = 0;
    }
    else {
      local_18 = *local_30;
      local_1c = FeedbackVector::GetKind((FeedbackVector *)&local_18);
    }
    iVar2 = FeedbackNexus::ic_state((FeedbackNexus *)&local_30);
    bVar1 = iVar2 == 1;
  }
  else {
    lVar3 = std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>,std::__ndk1::__unordered_map_hasher<v8::internal::compiler::FeedbackSource,std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>,v8::internal::compiler::FeedbackSource::Hash,true>,std::__ndk1::__unordered_map_equal<v8::internal::compiler::FeedbackSource,std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>,v8::internal::compiler::FeedbackSource::Equal,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>>>
            ::find<v8::internal::compiler::FeedbackSource>
                      ((__hash_table<std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>,std::__ndk1::__unordered_map_hasher<v8::internal::compiler::FeedbackSource,std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>,v8::internal::compiler::FeedbackSource::Hash,true>,std::__ndk1::__unordered_map_equal<v8::internal::compiler::FeedbackSource,std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>,v8::internal::compiler::FeedbackSource::Equal,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>>>
                        *)(this + 0x180),param_1);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","it != feedback_.end()");
    }
    bVar1 = **(int **)(lVar3 + 0x20) == 0;
  }
  return bVar1;
}

