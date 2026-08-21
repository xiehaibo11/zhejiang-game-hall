
/* v8::internal::FeedbackVector::FeedbackSlotPrint(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::FeedbackSlot) */

void __thiscall
v8::internal::FeedbackVector::FeedbackSlotPrint
          (FeedbackVector *this,basic_ostream *param_1,undefined4 param_3)

{
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_8;
  
  uStack_30 = *(undefined8 *)this;
  local_38 = 0;
  local_28 = param_3;
  local_8 = uStack_30;
  if ((int)uStack_30 == 0) {
    local_24 = 0;
  }
  else {
    local_24 = GetKind((FeedbackVector *)&local_8,param_3);
  }
  FeedbackNexus::Print((FeedbackNexus *)&local_38,param_1);
  return;
}

