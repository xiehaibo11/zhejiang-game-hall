
/* v8::internal::Isolate::LoadStartTimeMs() */

undefined1  [16] __thiscall v8::internal::Isolate::LoadStartTimeMs(Isolate *this)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  
  base::Mutex::Lock((Mutex *)(this + 0xb688));
  uVar2 = *(undefined8 *)(this + 0xb6b0);
  uVar3 = 0;
  base::Mutex::Unlock((Mutex *)(this + 0xb688));
  auVar1._8_8_ = uVar3;
  auVar1._0_8_ = uVar2;
  return auVar1;
}

