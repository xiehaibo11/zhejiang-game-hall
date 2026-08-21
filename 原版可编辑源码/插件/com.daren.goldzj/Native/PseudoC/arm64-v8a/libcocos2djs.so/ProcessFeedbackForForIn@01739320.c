
/* v8::internal::compiler::JSHeapBroker::ProcessFeedbackForForIn(v8::internal::compiler::FeedbackSource
   const&) */

undefined4 * __thiscall
v8::internal::compiler::JSHeapBroker::ProcessFeedbackForForIn
          (JSHeapBroker *this,FeedbackSource *param_1)

{
  __hash_table<std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>,std::__ndk1::__unordered_map_hasher<v8::internal::compiler::FeedbackSource,std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>,v8::internal::compiler::FeedbackSource::Hash,true>,std::__ndk1::__unordered_map_equal<v8::internal::compiler::FeedbackSource,std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>,v8::internal::compiler::FeedbackSource::Equal,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>>>
  *this_00;
  long lVar1;
  char cVar2;
  undefined4 uVar3;
  long lVar4;
  ulong extraout_x1;
  Zone *this_01;
  undefined4 *puVar5;
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this_00 = (__hash_table<std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>,std::__ndk1::__unordered_map_hasher<v8::internal::compiler::FeedbackSource,std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>,v8::internal::compiler::FeedbackSource::Hash,true>,std::__ndk1::__unordered_map_equal<v8::internal::compiler::FeedbackSource,std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>,v8::internal::compiler::FeedbackSource::Equal,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>>>
             *)(this + 0x180);
  lVar4 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>,std::__ndk1::__unordered_map_hasher<v8::internal::compiler::FeedbackSource,std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>,v8::internal::compiler::FeedbackSource::Hash,true>,std::__ndk1::__unordered_map_equal<v8::internal::compiler::FeedbackSource,std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>,v8::internal::compiler::FeedbackSource::Equal,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>>>
          ::find<v8::internal::compiler::FeedbackSource>(this_00,param_1);
  if (lVar4 == 0) {
    local_60 = *(undefined8 **)param_1;
    uStack_58 = 0;
    local_50 = (undefined4 *)CONCAT44(local_50._4_4_,*(undefined4 *)(param_1 + 8));
    if (local_60 == (undefined8 *)0x0) {
      uVar3 = 0;
    }
    else {
      local_68 = *local_60;
      uVar3 = FeedbackVector::GetKind((FeedbackVector *)&local_68);
    }
    local_50 = (undefined4 *)CONCAT44(uVar3,(undefined4)local_50);
    cVar2 = FeedbackNexus::GetForInFeedback((FeedbackNexus *)&local_60);
    this_01 = *(Zone **)(this + 0x10);
    puVar5 = *(undefined4 **)(this_01 + 0x10);
    if (cVar2 == '\0') {
      if ((ulong)(*(long *)(this_01 + 0x18) - (long)puVar5) < 8) {
        puVar5 = (undefined4 *)Zone::NewExpand(this_01,8);
      }
      else {
        *(undefined4 **)(this_01 + 0x10) = puVar5 + 2;
      }
      local_60 = (undefined8 *)**(undefined8 **)param_1;
      uVar3 = FeedbackVector::GetKind((FeedbackVector *)&local_60,*(undefined4 *)(param_1 + 8));
      *puVar5 = 0;
      puVar5[1] = uVar3;
      lVar4 = *(long *)param_1;
    }
    else {
      if ((ulong)(*(long *)(this_01 + 0x18) - (long)puVar5) < 0x10) {
        puVar5 = (undefined4 *)Zone::NewExpand(this_01,0x10);
      }
      else {
        *(undefined4 **)(this_01 + 0x10) = puVar5 + 4;
      }
      local_60 = (undefined8 *)**(undefined8 **)param_1;
      uVar3 = FeedbackVector::GetKind((FeedbackVector *)&local_60,*(undefined4 *)(param_1 + 8));
      *puVar5 = 5;
      puVar5[1] = uVar3;
      *(char *)(puVar5 + 2) = cVar2;
      lVar4 = *(long *)param_1;
    }
    if ((lVar4 == 0) || (*(int *)(param_1 + 8) == -1)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","source.IsValid()");
    }
    uStack_58 = *(undefined8 *)(param_1 + 8);
    local_60 = *(undefined8 **)param_1;
    local_50 = puVar5;
    std::__ndk1::
    __hash_table<std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>,std::__ndk1::__unordered_map_hasher<v8::internal::compiler::FeedbackSource,std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>,v8::internal::compiler::FeedbackSource::Hash,true>,std::__ndk1::__unordered_map_equal<v8::internal::compiler::FeedbackSource,std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>,v8::internal::compiler::FeedbackSource::Equal,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>>>
    ::
    __emplace_unique_key_args<v8::internal::compiler::FeedbackSource,std::__ndk1::pair<v8::internal::compiler::FeedbackSource_const,v8::internal::compiler::ProcessedFeedback_const*>>
              (this_00,(FeedbackSource *)&local_60,(pair *)&local_60);
    if ((extraout_x1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","insertion.second");
    }
  }
  else {
    lVar4 = std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>,std::__ndk1::__unordered_map_hasher<v8::internal::compiler::FeedbackSource,std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>,v8::internal::compiler::FeedbackSource::Hash,true>,std::__ndk1::__unordered_map_equal<v8::internal::compiler::FeedbackSource,std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>,v8::internal::compiler::FeedbackSource::Equal,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>>>
            ::find<v8::internal::compiler::FeedbackSource>(this_00,param_1);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","it != feedback_.end()");
    }
    puVar5 = *(undefined4 **)(lVar4 + 0x20);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

