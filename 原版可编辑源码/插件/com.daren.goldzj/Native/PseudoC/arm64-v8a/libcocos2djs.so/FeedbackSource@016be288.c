
/* v8::internal::compiler::FeedbackSource::FeedbackSource(v8::internal::compiler::FeedbackVectorRef,
   v8::internal::FeedbackSlot) */

void __thiscall
v8::internal::compiler::FeedbackSource::FeedbackSource
          (FeedbackSource *this,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = param_2;
  uStack_28 = param_3;
  uVar1 = FeedbackVectorRef::object((FeedbackVectorRef *)&local_30);
  *(undefined8 *)this = uVar1;
  *(undefined4 *)(this + 8) = param_4;
  return;
}

