
/* v8::internal::ApiNatives::AddDataProperty(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::TemplateInfo>, v8::internal::Handle<v8::internal::Name>,
   v8::Intrinsic, v8::internal::PropertyAttributes) */

void v8::internal::ApiNatives::AddDataProperty
               (Isolate *param_1,undefined8 param_2,undefined8 param_3,ulong param_4,uint param_5)

{
  Isolate *pIVar1;
  uint uVar2;
  ulong *puVar3;
  ulong uVar4;
  undefined8 local_70;
  Isolate *pIStack_68;
  ulong *local_60;
  ulong *puStack_58;
  
  pIVar1 = param_1 + 0x95a0;
  uVar4 = -(param_4 >> 0x1f & 1) & 0xfffffffe00000000 | (param_4 & 0xffffffff) << 1;
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)pIVar1;
    if (puVar3 == *(ulong **)(param_1 + 0x95a8)) {
      puVar3 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar3 + 1;
    *puVar3 = uVar4;
  }
  else {
    puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar4);
  }
  uVar2 = -(param_5 >> 0x1b & 1);
  uVar4 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 |
          (ulong)(uVar2 & 0x80000000 | (param_5 & 0xfffffff) << 3 | 0xc0) << 1;
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    local_60 = *(ulong **)pIVar1;
    if (local_60 == *(ulong **)(param_1 + 0x95a8)) {
      local_60 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = local_60 + 1;
    *local_60 = uVar4;
  }
  else {
    local_60 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar4);
  }
  local_70 = param_3;
  pIStack_68 = param_1 + 0xb8;
  puStack_58 = puVar3;
  FUN_0147e534(param_1,param_2,4,&local_70);
  return;
}

