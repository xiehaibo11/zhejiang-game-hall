
/* v8::internal::SourceTextModule::ResolveImport(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::SourceTextModule>, v8::internal::Handle<v8::internal::String>,
   int, v8::internal::MessageLocation, bool, v8::internal::Module::ResolveSet*) */

void v8::internal::SourceTextModule::ResolveImport
               (Isolate *param_1,ulong *param_2,undefined8 param_3,int param_4,undefined8 *param_5,
               uint param_6,undefined8 param_7)

{
  long lVar1;
  Isolate *pIVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong local_68;
  
  lVar1 = (long)(param_4 << 2) + 7;
  uVar5 = *param_2 & 0xffffffff00000000;
  uVar5 = uVar5 | *(uint *)((uVar5 | *(uint *)(*param_2 + 0x23)) + lVar1);
  pIVar2 = param_1 + 0x95a0;
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)pIVar2;
    if (puVar3 == *(ulong **)(param_1 + 0x95a8)) {
      puVar3 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar2 = puVar3 + 1;
    *puVar3 = uVar5;
  }
  else {
    puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar5);
  }
  local_68 = *param_2;
  uVar5 = info((SourceTextModule *)&local_68);
  uVar5 = uVar5 & 0xffffffff00000000 |
          (ulong)*(uint *)((uVar5 & 0xffffffff00000000 | (ulong)*(uint *)(uVar5 + 7)) + lVar1);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)pIVar2;
    if (puVar4 == *(ulong **)(param_1 + 0x95a8)) {
      puVar4 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar2 = puVar4 + 1;
    *puVar4 = uVar5;
  }
  else {
    puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar5);
  }
  uStack_88 = param_5[1];
  local_90 = *param_5;
  uStack_78 = param_5[3];
  uStack_80 = param_5[2];
  Module::ResolveExport(param_1,puVar3,puVar4,param_3,&local_90,param_6 & 1,param_7);
  return;
}

