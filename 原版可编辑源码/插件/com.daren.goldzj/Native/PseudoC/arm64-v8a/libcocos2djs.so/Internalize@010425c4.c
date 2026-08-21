
/* v8::internal::JsonParseInternalizer::Internalize(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Object>, v8::internal::Handle<v8::internal::Object>) */

void v8::internal::JsonParseInternalizer::Internalize
               (Isolate *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  Isolate *local_40;
  undefined8 uStack_38;
  
  uVar3 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
  uVar3 = uVar3 | *(uint *)((uVar3 | *(uint *)((uVar3 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) - 1))
                                              + 0x13)) + 499);
  local_40 = param_1;
  uStack_38 = param_3;
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar1 = *(ulong **)(param_1 + 0x95a0);
    if (puVar1 == *(ulong **)(param_1 + 0x95a8)) {
      puVar1 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)(param_1 + 0x95a0) = puVar1 + 1;
    *puVar1 = uVar3;
  }
  else {
    puVar1 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar3);
  }
  uVar2 = Factory::NewJSObject((Factory *)param_1,puVar1,0);
  JSObject::AddProperty(param_1,uVar2,param_1 + 200,param_2,0);
  InternalizeJsonProperty((JsonParseInternalizer *)&local_40,uVar2,param_1 + 200);
  return;
}

