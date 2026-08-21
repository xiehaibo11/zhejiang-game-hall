
/* v8::internal::Isolate::RegisterManagedPtrDestructor(v8::internal::ManagedPtrDestructor*) */

void __thiscall
v8::internal::Isolate::RegisterManagedPtrDestructor(Isolate *this,ManagedPtrDestructor *param_1)

{
  Isolate *pIVar1;
  undefined8 uVar2;
  
  base::Mutex::Lock((Mutex *)(this + 0xc72c));
  pIVar1 = this + 0xc758;
  uVar2 = 0;
  if (*(long *)pIVar1 != 0) {
    *(ManagedPtrDestructor **)(*(long *)pIVar1 + 8) = param_1;
    uVar2 = *(undefined8 *)pIVar1;
  }
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  *(ManagedPtrDestructor **)pIVar1 = param_1;
  base::Mutex::Unlock((Mutex *)(this + 0xc72c));
  return;
}

