
/* v8::internal::ApiNatives::AddDataProperty(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::TemplateInfo>, v8::internal::Handle<v8::internal::Name>,
   v8::internal::Handle<v8::internal::Object>, v8::internal::PropertyAttributes) */

void v8::internal::ApiNatives::AddDataProperty
               (Isolate *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               uint param_5)

{
  uint uVar1;
  ulong uVar2;
  undefined8 local_58;
  ulong *puStack_50;
  undefined8 local_48;
  
  uVar1 = -(param_5 >> 0x1b & 1);
  uVar2 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffe00000000 |
          (ulong)(uVar1 & 0x80000000 | (param_5 & 0xfffffff) << 3 | 0xc0) << 1;
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puStack_50 = *(ulong **)(param_1 + 0x95a0);
    if (puStack_50 == *(ulong **)(param_1 + 0x95a8)) {
      puStack_50 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)(param_1 + 0x95a0) = puStack_50 + 1;
    *puStack_50 = uVar2;
  }
  else {
    puStack_50 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar2);
  }
  local_58 = param_3;
  local_48 = param_4;
  FUN_0147e534(param_1,param_2,3,&local_58);
  return;
}

