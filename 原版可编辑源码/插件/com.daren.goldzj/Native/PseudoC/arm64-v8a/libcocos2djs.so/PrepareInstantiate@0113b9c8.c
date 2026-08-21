
/* v8::internal::SyntheticModule::PrepareInstantiate(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::SyntheticModule>, v8::Local<v8::Context>,
   v8::MaybeLocal<v8::Module> (*)(v8::Local<v8::Context>, v8::Local<v8::String>,
   v8::Local<v8::Module>)) */

undefined8 v8::internal::SyntheticModule::PrepareInstantiate(Isolate *param_1,ulong *param_2)

{
  Isolate *pIVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  ulong *puVar5;
  undefined8 uVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  ulong local_68;
  
  pIVar1 = param_1 + 0x95a0;
  uVar9 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 3);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)pIVar1;
    if (puVar4 == *(ulong **)(param_1 + 0x95a8)) {
      puVar4 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar4 + 1;
    *puVar4 = uVar9;
  }
  else {
    puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar9);
  }
  uVar9 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0x1b);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)pIVar1;
    if (puVar5 == *(ulong **)(param_1 + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar5 + 1;
    *puVar5 = uVar9;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar9);
    uVar9 = *puVar5;
  }
  uVar2 = *(uint *)(uVar9 + 3);
  if (1 < (int)uVar2) {
    iVar11 = 0;
    uVar9 = 0;
    do {
      uVar6 = Factory::NewCell((Factory *)param_1,param_1 + 0xa0);
      uVar10 = *puVar5 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar5 + (long)iVar11 + 7);
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar7 = *(ulong **)pIVar1;
        if (puVar7 == *(ulong **)(param_1 + 0x95a8)) {
          puVar7 = (ulong *)HandleScope::Extend(param_1);
        }
        *(ulong **)pIVar1 = puVar7 + 1;
        *puVar7 = uVar10;
      }
      else {
        puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar10);
      }
      local_68 = *puVar4;
      uVar3 = ObjectHashTableBase<v8::internal::ObjectHashTable,v8::internal::ObjectHashTableShape>
              ::Lookup((ObjectHashTableBase<v8::internal::ObjectHashTable,v8::internal::ObjectHashTableShape>
                        *)&local_68,puVar7);
      if (((uVar3 & 1) == 0) || (uVar3 != *(uint *)(param_1 + 0xa8))) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","exports->Lookup(name).IsTheHole(isolate)");
      }
      puVar4 = (ulong *)ObjectHashTableBase<v8::internal::ObjectHashTable,v8::internal::ObjectHashTableShape>
                        ::Put(puVar4,puVar7,uVar6);
      uVar9 = uVar9 + 1;
      iVar11 = iVar11 + 4;
    } while (uVar9 < uVar2 >> 1);
  }
  uVar9 = *puVar4;
  uVar10 = *param_2;
  *(int *)(uVar10 + 3) = (int)uVar9;
  if ((uVar9 & 1) != 0) {
    uVar8 = *(ulong *)((uVar9 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar8 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar10,uVar10 + 3,uVar9);
      uVar8 = *(ulong *)(uVar9 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar8 & 0x18) != 0) && ((*(byte *)((uVar10 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar10,uVar10 + 3,uVar9);
    }
  }
  return 1;
}

