
/* v8::internal::compiler::JSHeapBroker::ReadFeedbackForForIn(v8::internal::compiler::FeedbackSource
   const&) const */

void __thiscall
v8::internal::compiler::JSHeapBroker::ReadFeedbackForForIn
          (JSHeapBroker *this,FeedbackSource *param_1)

{
  undefined8 *local_30;
  undefined8 uStack_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined8 local_18;
  
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
  FeedbackNexus::GetForInFeedback((FeedbackNexus *)&local_30);
  return;
}

