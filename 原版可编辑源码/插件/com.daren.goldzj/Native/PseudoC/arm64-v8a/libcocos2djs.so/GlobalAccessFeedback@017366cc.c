
/* v8::internal::compiler::GlobalAccessFeedback::GlobalAccessFeedback(v8::internal::compiler::ContextRef,
   int, bool, v8::internal::FeedbackSlotKind) */

void __thiscall
v8::internal::compiler::GlobalAccessFeedback::GlobalAccessFeedback
          (GlobalAccessFeedback *this,undefined8 param_2,undefined8 param_3,int param_4,uint param_5
          ,undefined4 param_6)

{
  uint uVar1;
  
  *(undefined4 *)this = 6;
  *(undefined4 *)(this + 4) = param_6;
  uVar1 = 0x40000000;
  if ((param_5 & 1) == 0) {
    uVar1 = 0;
  }
  *(undefined8 *)(this + 0x10) = param_2;
  *(undefined8 *)(this + 0x18) = param_3;
  this[8] = (GlobalAccessFeedback)0x1;
  *(uint *)(this + 0x20) = uVar1 | param_4 << 0xc;
  return;
}

