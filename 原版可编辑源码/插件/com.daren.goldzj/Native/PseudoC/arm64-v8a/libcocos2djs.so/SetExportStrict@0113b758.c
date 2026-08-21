
/* v8::internal::SyntheticModule::SetExportStrict(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::SyntheticModule>, v8::internal::Handle<v8::internal::String>,
   v8::internal::Handle<v8::internal::Object>) */

void v8::internal::SyntheticModule::SetExportStrict
               (Isolate *param_1,ulong *param_2,undefined8 param_3,undefined8 param_4)

{
  Isolate *pIVar1;
  ushort uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong local_48;
  
  pIVar1 = param_1 + 0x95a0;
  uVar4 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 3);
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
    uVar4 = *puVar3;
  }
  local_48 = uVar4;
  uVar4 = ObjectHashTableBase<v8::internal::ObjectHashTable,v8::internal::ObjectHashTableShape>::
          Lookup((ObjectHashTableBase<v8::internal::ObjectHashTable,v8::internal::ObjectHashTableShape>
                  *)&local_48,param_3);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)pIVar1;
    if (puVar3 == *(ulong **)(param_1 + 0x95a8)) {
      puVar3 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar3 + 1;
    *puVar3 = uVar4;
    uVar4 = *puVar3;
  }
  else {
    puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar4);
    uVar4 = *puVar3;
  }
  if (((uVar4 & 1) != 0) &&
     (*(short *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)) == 0x99)) {
    uVar2 = SetExport(param_1,param_2,param_3,param_4);
    if ((uVar2 & 0xff) == 0) {
      v8::V8::FromJustIsNothing();
    }
    if (0xff < uVar2) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","set_export_result.FromJust()");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","export_object->IsCell()");
}

