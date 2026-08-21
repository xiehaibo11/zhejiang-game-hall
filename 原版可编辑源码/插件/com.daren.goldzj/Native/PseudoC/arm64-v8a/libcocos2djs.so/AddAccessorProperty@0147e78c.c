
/* v8::internal::ApiNatives::AddAccessorProperty(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::TemplateInfo>, v8::internal::Handle<v8::internal::Name>,
   v8::internal::Handle<v8::internal::FunctionTemplateInfo>,
   v8::internal::Handle<v8::internal::FunctionTemplateInfo>, v8::internal::PropertyAttributes) */

void v8::internal::ApiNatives::AddAccessorProperty
               (Isolate *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,int param_6)

{
  uint uVar1;
  ulong uVar2;
  undefined8 local_70;
  ulong *puStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  uVar1 = (param_6 << 4) >> 1;
  uVar2 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffe00000000 | (ulong)(uVar1 | 0xc1) << 1;
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puStack_68 = *(ulong **)(param_1 + 0x95a0);
    if (puStack_68 == *(ulong **)(param_1 + 0x95a8)) {
      puStack_68 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)(param_1 + 0x95a0) = puStack_68 + 1;
    *puStack_68 = uVar2;
  }
  else {
    puStack_68 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar2);
  }
  local_70 = param_3;
  local_60 = param_4;
  uStack_58 = param_5;
  FUN_0147e534(param_1,param_2,4,&local_70);
  return;
}

