
/* v8::internal::wasm::GetTypeForTable(v8::internal::Isolate*, v8::internal::wasm::ValueType,
   unsigned int, v8::base::Optional<unsigned int>) */

undefined8
v8::internal::wasm::GetTypeForTable(Factory *param_1,char param_2,uint param_3,ulong param_4)

{
  ulong *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  char *pcVar8;
  char *local_60;
  undefined8 uStack_58;
  
  if (param_2 == '\a') {
    pcVar8 = "anyfunc";
    uVar6 = 8;
  }
  else {
    pcVar8 = "anyref";
    uVar6 = 7;
  }
  uStack_58 = __strlen_chk(pcVar8,uVar6);
  local_60 = pcVar8;
  uVar6 = Factory::InternalizeUtf8String(param_1,(Vector *)&local_60);
  uVar7 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
  uVar7 = uVar7 | *(uint *)((uVar7 | *(uint *)((uVar7 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) - 1))
                                              + 0x13)) + 499);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar1 = *(ulong **)(param_1 + 0x95a0);
    if (puVar1 == *(ulong **)(param_1 + 0x95a8)) {
      puVar1 = (ulong *)HandleScope::Extend((Isolate *)param_1);
    }
    *(ulong **)(param_1 + 0x95a0) = puVar1 + 1;
    *puVar1 = uVar7;
  }
  else {
    puVar1 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar7);
  }
  uVar2 = Factory::NewJSObject(param_1,puVar1,0);
  uStack_58 = __strlen_chk("element",8);
  local_60 = "element";
  uVar3 = Factory::InternalizeUtf8String(param_1,(Vector *)&local_60);
  uStack_58 = __strlen_chk("minimum",8);
  local_60 = "minimum";
  uVar4 = Factory::InternalizeUtf8String(param_1,(Vector *)&local_60);
  uStack_58 = __strlen_chk("maximum",8);
  local_60 = "maximum";
  uVar5 = Factory::InternalizeUtf8String(param_1,(Vector *)&local_60);
  JSObject::AddProperty(param_1,uVar2,uVar3,uVar6,0);
  uVar6 = Factory::NewNumberFromUint(param_1,param_3);
  JSObject::AddProperty(param_1,uVar2,uVar4,uVar6,0);
  if ((param_4 & 0xff) != 0) {
    if (((uint)param_4 & 0xff) != 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","storage_.is_populated_");
    }
    uVar6 = Factory::NewNumberFromUint(param_1,(uint)(param_4 >> 0x20));
    JSObject::AddProperty(param_1,uVar2,uVar5,uVar6,0);
  }
  return uVar2;
}

