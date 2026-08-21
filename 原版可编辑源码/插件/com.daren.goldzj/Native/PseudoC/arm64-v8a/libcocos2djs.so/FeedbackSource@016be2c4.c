
/* v8::internal::compiler::FeedbackSource::FeedbackSource(v8::internal::FeedbackNexus const&) */

void __thiscall
v8::internal::compiler::FeedbackSource::FeedbackSource(FeedbackSource *this,FeedbackNexus *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined4 *)(this + 8) = uVar1;
  return;
}

