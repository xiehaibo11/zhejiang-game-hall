
/* v8::internal::wasm::GetTypeForMemory(v8::internal::Isolate*, unsigned int,
   v8::base::Optional<unsigned int>) */

undefined8 v8::internal::wasm::GetTypeForMemory(Isolate *param_1,uint param_2,ulong param_3)

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
  uStack_48 = __strlen_chk("minimum",8);
  local_50 = "minimum";
  uVar3 = Factory::InternalizeUtf8String((Factory *)param_1,(Vector *)&local_50);
  uStack_48 = __strlen_chk("maximum",8);
  local_50 = "maximum";
  uVar4 = Factory::InternalizeUtf8String((Factory *)param_1,(Vector *)&local_50);
  uVar5 = Factory::NewNumberFromUint((Factory *)param_1,param_2);
  JSObject::AddProperty(param_1,uVar2,uVar3,uVar5,0);
  if ((param_3 & 0xff) != 0) {
    if (((uint)param_3 & 0xff) != 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","storage_.is_populated_");
    }
    uVar3 = Factory::NewNumberFromUint((Factory *)param_1,(uint)(param_3 >> 0x20));
    JSObject::AddProperty(param_1,uVar2,uVar4,uVar3,0);
  }
  return uVar2;
}

