
/* v8::internal::WasmModuleObject::GetModuleNameOrNull(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::WasmModuleObject>) */

undefined8 v8::internal::WasmModuleObject::GetModuleNameOrNull(Factory *param_1,ulong *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long local_20;
  long lStack_18;
  
  lVar2 = **(long **)(*(long *)((*param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0xb)) +
                               3) + 0x18);
  lVar3 = *(long *)(lVar2 + 200);
  if (*(int *)(lVar3 + 0x50) == 0) {
    uVar1 = 0;
  }
  else {
    uVar4 = *(ulong *)(lVar3 + 0x50);
    lStack_18 = (long)uVar4 >> 0x20;
    local_20 = **(long **)(lVar2 + 0xe0) + (uVar4 & 0xffffffff);
    uVar1 = Factory::NewStringFromUtf8(param_1,&local_20,0);
  }
  return uVar1;
}

