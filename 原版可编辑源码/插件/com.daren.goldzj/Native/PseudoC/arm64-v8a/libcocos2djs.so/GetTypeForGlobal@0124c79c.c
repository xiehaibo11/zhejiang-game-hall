
/* v8::internal::wasm::GetTypeForGlobal(v8::internal::Isolate*, bool, v8::internal::wasm::ValueType)
    */

undefined8 v8::internal::wasm::GetTypeForGlobal(Isolate *param_1,byte param_2,undefined4 param_3)

{
  ulong *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  char *local_50;
  undefined8 uStack_48;
  
  uVar6 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
  uVar6 = uVar6 | *(uint *)((uVar6 | *(uint *)((uVar6 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) - 1))
                                              + 0x13)) + 499);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar1 = *(ulong **)(param_1 + 0x95a0);
    if (puVar1 == *(ulong **)(param_1 + 0x95a8)) {
      puVar1 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)(param_1 + 0x95a0) = puVar1 + 1;
    *puVar1 = uVar6;
  }
  else {
    puVar1 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar6);
  }
  uVar2 = Factory::NewJSObject((Factory *)param_1,puVar1,0);
  uStack_48 = __strlen_chk("mutable",8);
  local_50 = "mutable";
  uVar3 = Factory::InternalizeUtf8String((Factory *)param_1,(Vector *)&local_50);
  uStack_48 = __strlen_chk("value",6);
  local_50 = "value";
  uVar4 = Factory::InternalizeUtf8String((Factory *)param_1,(Vector *)&local_50);
  uVar5 = Factory::ToBoolean((Factory *)param_1,(bool)(param_2 & 1));
  JSObject::AddProperty(param_1,uVar2,uVar3,uVar5,0);
  uVar3 = FUN_0124c6cc(param_1,param_3);
  JSObject::AddProperty(param_1,uVar2,uVar4,uVar3,0);
  return uVar2;
}

