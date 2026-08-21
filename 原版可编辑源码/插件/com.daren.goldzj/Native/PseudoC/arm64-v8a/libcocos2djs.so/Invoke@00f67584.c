
/* v8::internal::GlobalHandles::PendingPhantomCallback::Invoke(v8::internal::Isolate*,
   v8::internal::GlobalHandles::PendingPhantomCallback::InvocationType) */

void __thiscall
v8::internal::GlobalHandles::PendingPhantomCallback::Invoke
          (PendingPhantomCallback *this,undefined8 param_1,int param_3)

{
  code *pcVar1;
  undefined8 local_38;
  undefined8 uStack_30;
  PendingPhantomCallback *local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  uStack_30 = *(undefined8 *)(this + 8);
  local_28 = this;
  if (param_3 != 0) {
    local_28 = (PendingPhantomCallback *)0x0;
  }
  uStack_18 = *(undefined8 *)(this + 0x18);
  local_20 = *(undefined8 *)(this + 0x10);
  pcVar1 = *(code **)this;
  *(undefined8 *)this = 0;
  local_38 = param_1;
  (*pcVar1)(&local_38);
  return;
}

