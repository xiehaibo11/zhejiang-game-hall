
/* v8::internal::compiler::ElementAccessFeedback::ElementAccessFeedback(v8::internal::Zone*,
   v8::internal::compiler::KeyedAccessMode const&, v8::internal::FeedbackSlotKind) */

void __thiscall
v8::internal::compiler::ElementAccessFeedback::ElementAccessFeedback
          (ElementAccessFeedback *this,undefined8 param_1,undefined8 *param_2,undefined4 param_4)

{
  undefined8 uVar1;
  
  *(undefined4 *)this = 4;
  *(undefined4 *)(this + 4) = param_4;
  uVar1 = *param_2;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = param_1;
  *(undefined8 *)(this + 8) = uVar1;
  *(undefined8 *)(this + 0x10) = 0;
  return;
}

