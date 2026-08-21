
/* v8::internal::IC::IC(v8::internal::Isolate*, v8::internal::Handle<v8::internal::FeedbackVector>,
   v8::internal::FeedbackSlot, v8::internal::FeedbackSlotKind) */

void __thiscall
v8::internal::IC::IC
          (IC *this,undefined8 param_1,undefined8 *param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  undefined8 local_28;
  
  this[0x10] = (IC)0x0;
  *(undefined4 *)(this + 0x1c) = param_5;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined ***)this = &PTR__IC_01cc6ed8;
  *(undefined8 *)(this + 8) = param_1;
  *(undefined8 **)(this + 0x50) = param_3;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  this[0x40] = (IC)0x0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x60) = param_4;
  if (param_3 == (undefined8 *)0x0) {
    uVar1 = 0;
    *(undefined4 *)(this + 100) = 0;
  }
  else {
    local_28 = *param_3;
    uVar1 = FeedbackVector::GetKind((FeedbackVector *)&local_28,param_4);
    *(undefined4 *)(this + 100) = uVar1;
    uVar1 = FeedbackNexus::ic_state((FeedbackNexus *)(this + 0x50));
  }
  *(undefined4 *)(this + 0x14) = uVar1;
  *(undefined4 *)(this + 0x18) = uVar1;
  return;
}

