
/* v8::internal::Runtime_WasmIsValidFuncRefValue(int, unsigned long*, v8::internal::Isolate*) */

undefined8
v8::internal::Runtime_WasmIsValidFuncRefValue(int param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (TracingFlags::runtime_stats == 0) {
    iVar2 = *(int *)(param_3 + 0x95b0);
    uVar4 = *(undefined8 *)(param_3 + 0x95a0);
    lVar1 = *(long *)(param_3 + 0x95a8);
    *(int *)(param_3 + 0x95b0) = iVar2 + 1;
    if (((*param_2 & 1) == 0) || ((int)*param_2 != *(int *)(param_3 + 0xb0))) {
      uVar3 = WasmExternalFunction::IsWasmExternalFunction();
      *(undefined8 *)(param_3 + 0x95a0) = uVar4;
      uVar4 = 2;
      if ((uVar3 & 1) == 0) {
        uVar4 = 0;
      }
      *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
      if (*(long *)(param_3 + 0x95a8) != lVar1) {
        *(long *)(param_3 + 0x95a8) = lVar1;
        HandleScope::DeleteExtensions(param_3);
      }
    }
    else {
      *(int *)(param_3 + 0x95b0) = iVar2;
      uVar4 = 2;
    }
    return uVar4;
  }
  uVar4 = FUN_015b6248(param_1,param_2,param_3);
  return uVar4;
}

