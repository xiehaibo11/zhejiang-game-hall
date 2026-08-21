
/* v8::internal::Isolate::UnregisterManagedPtrDestructor(v8::internal::ManagedPtrDestructor*) */

void __thiscall
v8::internal::Isolate::UnregisterManagedPtrDestructor(Isolate *this,ManagedPtrDestructor *param_1)

{
  Isolate *pIVar1;
  ManagedPtrDestructor *pMVar2;
  
  base::Mutex::Lock((Mutex *)(this + 0xc72c));
  pMVar2 = param_1 + 8;
  pIVar1 = this + 0xc758;
  if (*(long *)pMVar2 != 0) {
    pIVar1 = (Isolate *)(*(long *)pMVar2 + 0x10);
  }
  *(undefined8 *)pIVar1 = *(undefined8 *)(param_1 + 0x10);
  if (*(long *)(param_1 + 0x10) != 0) {
    *(undefined8 *)(*(long *)(param_1 + 0x10) + 8) = *(undefined8 *)pMVar2;
  }
  *(undefined8 *)pMVar2 = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  base::Mutex::Unlock((Mutex *)(this + 0xc72c));
  return;
}

