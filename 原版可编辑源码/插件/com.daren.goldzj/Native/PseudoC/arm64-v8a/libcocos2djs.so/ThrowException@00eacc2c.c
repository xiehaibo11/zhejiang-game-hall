
/* v8::Isolate::ThrowException(v8::Local<v8::Value>) */

Isolate * __thiscall v8::Isolate::ThrowException(Isolate *this,Isolate *param_2)

{
  Isolate *pIVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(this + 0x2c60);
  *(undefined4 *)(this + 0x2c60) = 5;
  pIVar1 = this + 0xa0;
  if (param_2 != (Isolate *)0x0) {
    pIVar1 = param_2;
  }
  internal::Isolate::ScheduleThrow((Isolate *)this,*(undefined8 *)pIVar1);
  *(undefined4 *)(this + 0x2c60) = uVar2;
  return this + 0xa0;
}

