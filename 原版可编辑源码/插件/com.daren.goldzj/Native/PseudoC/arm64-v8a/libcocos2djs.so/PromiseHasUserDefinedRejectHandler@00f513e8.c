
/* v8::internal::Isolate::PromiseHasUserDefinedRejectHandler(v8::internal::Handle<v8::internal::Object>)
    */

undefined8 __thiscall
v8::internal::Isolate::PromiseHasUserDefinedRejectHandler(undefined8 param_1,ulong *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  if (((uVar2 & 1) != 0) &&
     (*(short *)((uVar2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar2 - 1)) == 0x42d)) {
    uVar1 = FUN_00f51414();
    return uVar1;
  }
  return 0;
}

