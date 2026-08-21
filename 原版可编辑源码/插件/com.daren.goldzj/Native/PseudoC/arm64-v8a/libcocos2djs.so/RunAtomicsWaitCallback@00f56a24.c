
/* v8::internal::Isolate::RunAtomicsWaitCallback(v8::Isolate::AtomicsWaitEvent,
   v8::internal::Handle<v8::internal::JSArrayBuffer>, unsigned long, long, double,
   v8::internal::AtomicsWaitWakeHandle*) */

void v8::internal::Isolate::RunAtomicsWaitCallback
               (Isolate *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  
  if (*(code **)(param_1 + 0xb658) != (code *)0x0) {
    uVar1 = *(undefined8 *)(param_1 + 0x95a0);
    lVar2 = *(long *)(param_1 + 0x95a8);
    *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + 1;
    (**(code **)(param_1 + 0xb658))
              (param_2,param_3,param_4,param_5,param_6,*(undefined8 *)(param_1 + 0xb660));
    *(undefined8 *)(param_1 + 0x95a0) = uVar1;
    *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + -1;
    if (*(long *)(param_1 + 0x95a8) != lVar2) {
      *(long *)(param_1 + 0x95a8) = lVar2;
      HandleScope::DeleteExtensions(param_1);
      return;
    }
  }
  return;
}

