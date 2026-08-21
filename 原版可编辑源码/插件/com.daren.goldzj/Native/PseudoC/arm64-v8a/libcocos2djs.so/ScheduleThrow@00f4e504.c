
/* v8::internal::Isolate::ScheduleThrow(v8::internal::Object) */

void __thiscall v8::internal::Isolate::ScheduleThrow(Isolate *this,undefined8 param_2)

{
  ulong uVar1;
  
  Throw(this,param_2,0);
  PropagatePendingExceptionToExternalTryCatch(this);
  uVar1 = *(ulong *)(this + 0x2bd8);
  if (((uVar1 & 1) == 0) || ((int)uVar1 != (int)*(undefined8 *)(this + 0xa8))) {
    *(ulong *)(this + 0x2c20) = uVar1;
    this[0x2c19] = (Isolate)0x0;
    *(undefined8 *)(this + 0x2bd8) = *(undefined8 *)(this + 0xa8);
  }
  return;
}

