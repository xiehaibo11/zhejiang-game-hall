
/* v8::internal::compiler::JSHeapBroker::SetFeedback(v8::internal::compiler::FeedbackSource const&,
   v8::internal::compiler::ProcessedFeedback const*) */

void __thiscall
v8::internal::compiler::JSHeapBroker::SetFeedback
          (JSHeapBroker *this,FeedbackSource *param_1,ProcessedFeedback *param_2)

{
  long lVar1;
  ulong extraout_x1;
  undefined8 local_40;
  undefined8 uStack_38;
  ProcessedFeedback *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if ((*(long *)param_1 == 0) || (*(int *)(param_1 + 8) == -1)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","source.IsValid()");
  }
  uStack_38 = *(undefined8 *)(param_1 + 8);
  local_40 = *(undefined8 *)param_1;
  local_30 = param_2;
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>,std::__ndk1::__unordered_map_hasher<v8::internal::compiler::FeedbackSource,std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>,v8::internal::compiler::FeedbackSource::Hash,true>,std::__ndk1::__unordered_map_equal<v8::internal::compiler::FeedbackSource,std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>,v8::internal::compiler::FeedbackSource::Equal,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>>>
  ::
  __emplace_unique_key_args<v8::internal::compiler::FeedbackSource,std::__ndk1::pair<v8::internal::compiler::FeedbackSource_const,v8::internal::compiler::ProcessedFeedback_const*>>
            ((__hash_table<std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>,std::__ndk1::__unordered_map_hasher<v8::internal::compiler::FeedbackSource,std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>,v8::internal::compiler::FeedbackSource::Hash,true>,std::__ndk1::__unordered_map_equal<v8::internal::compiler::FeedbackSource,std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>,v8::internal::compiler::FeedbackSource::Equal,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>>>
              *)(this + 0x180),(FeedbackSource *)&local_40,(pair *)&local_40);
  if ((extraout_x1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","insertion.second");
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

