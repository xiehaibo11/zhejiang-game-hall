
/* v8::internal::compiler::GlobalAccessFeedback::GlobalAccessFeedback(v8::internal::compiler::PropertyCellRef,
   v8::internal::FeedbackSlotKind) */

void __thiscall
v8::internal::compiler::GlobalAccessFeedback::GlobalAccessFeedback
          (GlobalAccessFeedback *this,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  *(undefined8 *)(this + 0x10) = param_2;
  *(undefined8 *)(this + 0x18) = param_3;
  *(undefined4 *)this = 6;
  *(undefined4 *)(this + 4) = param_4;
  this[8] = (GlobalAccessFeedback)0x1;
  *(undefined4 *)(this + 0x20) = 0;
  return;
}

