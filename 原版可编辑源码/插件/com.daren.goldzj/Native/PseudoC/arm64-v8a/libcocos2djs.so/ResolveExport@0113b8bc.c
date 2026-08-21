
/* v8::internal::SyntheticModule::ResolveExport(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::SyntheticModule>, v8::internal::Handle<v8::internal::String>,
   v8::internal::Handle<v8::internal::String>, v8::internal::MessageLocation, bool) */

ulong * v8::internal::SyntheticModule::ResolveExport
                  (Isolate *param_1,ulong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,uint param_6)

{
  ulong uVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  ulong local_38;
  
  local_38 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 3);
  uVar1 = ObjectHashTableBase<v8::internal::ObjectHashTable,v8::internal::ObjectHashTableShape>::
          Lookup((ObjectHashTableBase<v8::internal::ObjectHashTable,v8::internal::ObjectHashTableShape>
                  *)&local_38,param_4);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)(param_1 + 0x95a0);
    if (puVar2 == *(ulong **)(param_1 + 0x95a8)) {
      puVar2 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)(param_1 + 0x95a0) = puVar2 + 1;
    *puVar2 = uVar1;
    uVar1 = *puVar2;
  }
  else {
    puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar1);
    uVar1 = *puVar2;
  }
  if ((uVar1 & 1) == 0) {
    if ((param_6 & 1) == 0) {
      return (ulong *)0x0;
    }
  }
  else {
    if (*(short *)((uVar1 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar1 - 1)) == 0x99) {
      return puVar2;
    }
    if ((param_6 & 1) == 0) {
      return (ulong *)0x0;
    }
  }
  puVar3 = (undefined8 *)Factory::NewSyntaxError((Factory *)param_1,0x148,param_3,param_4,0);
  Isolate::Throw(param_1,*puVar3,param_5);
  return (ulong *)0x0;
}

