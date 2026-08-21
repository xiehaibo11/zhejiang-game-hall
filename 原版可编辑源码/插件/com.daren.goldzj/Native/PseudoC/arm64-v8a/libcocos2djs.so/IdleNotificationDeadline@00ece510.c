
/* v8::Isolate::IdleNotificationDeadline(double) */

undefined8 __thiscall v8::Isolate::IdleNotificationDeadline(Isolate *this,double param_1)

{
  undefined8 uVar1;
  
  if (internal::FLAG_use_idle_notification != '\0') {
    uVar1 = internal::Heap::IdleNotification((Heap *)(this + 0x8850),param_1);
    return uVar1;
  }
  return 1;
}

