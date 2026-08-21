
/* v8::internal::CompilationCacheTable::PutScript(v8::internal::Handle<v8::internal::CompilationCacheTable>,
   v8::internal::Handle<v8::internal::String>, v8::internal::Handle<v8::internal::Context>,
   v8::internal::LanguageMode, v8::internal::Handle<v8::internal::SharedFunctionInfo>) */

ulong * v8::internal::CompilationCacheTable::PutScript
                  (undefined8 param_1,undefined8 param_2,ulong *param_3,byte param_4,ulong *param_5)

{
  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  ulong *puVar7;
  ulong uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  Isolate *pIVar12;
  ulong uVar13;
  ulong uVar14;
  undefined **local_78;
  uint local_70;
  undefined8 *local_68;
  ulong *puStack_60;
  byte local_58;
  undefined4 local_54;
  
  pIVar12 = (Isolate *)(*param_3 & 0xffffffff00000000);
  uVar14 = (ulong)pIVar12 |
           (ulong)*(uint *)(((ulong)pIVar12 | (ulong)*(uint *)(*param_3 + 0xaf)) + 0xb);
  if (*(CanonicalHandleScope **)((ulong)pIVar12 | 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(pIVar12 + 0x95a0);
    if (puVar5 == *(ulong **)(pIVar12 + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend(pIVar12);
    }
    *(ulong **)(pIVar12 + 0x95a0) = puVar5 + 1;
    *puVar5 = uVar14;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)((ulong)pIVar12 | 0x95b8),uVar14);
  }
  puVar6 = (undefined8 *)String::Flatten(pIVar12,param_2,0);
  local_70 = CompilationCacheShape::StringSharedHash(*puVar6,*puVar5,param_4 & 1,0xffffffff);
  local_78 = &PTR_IsMatch_01cb4d88;
  local_54 = 0xffffffff;
  local_68 = puVar6;
  puStack_60 = puVar5;
  local_58 = param_4 & 1;
  puVar5 = (ulong *)StringSharedKey::AsHandle((StringSharedKey *)&local_78,pIVar12);
  puVar7 = (ulong *)HashTable<v8::internal::CompilationCacheTable,v8::internal::CompilationCacheShape>
                    ::EnsureCapacity(pIVar12,param_1,1,0);
  uVar13 = *puVar7;
  lVar2 = uVar13 + 7;
  uVar4 = (*(int *)(uVar13 + 0xf) >> 1) - 1;
  uVar9 = uVar4 & local_70;
  uVar14 = (ulong)uVar9;
  iVar10 = *(int *)(((long)(uVar14 * 0xc00000000 + 0xc00000000) >> 0x20) + lVar2);
  iVar3 = *(int *)((uVar13 & 0xffffffff00000000) + 0xa8);
  if (iVar10 != iVar3) {
    iVar11 = 1;
    do {
      uVar9 = (uint)uVar14;
      if (iVar10 == *(int *)((uVar13 & 0xffffffff00000000) + 0xa0)) break;
      uVar9 = uVar9 + iVar11 & uVar4;
      uVar14 = (ulong)uVar9;
      iVar10 = *(int *)(((long)(uVar14 * 0xc00000000 + 0xc00000000) >> 0x20) + lVar2);
      iVar11 = iVar11 + 1;
    } while (iVar10 != iVar3);
  }
  uVar14 = *puVar5;
  puVar1 = (undefined4 *)(lVar2 + (int)(uVar9 * 0xc + 0xc));
  *puVar1 = (int)uVar14;
  if ((uVar14 & 1) != 0) {
    uVar8 = *(ulong *)((uVar14 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar8 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar13,puVar1,uVar14);
      uVar8 = *(ulong *)(uVar14 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar8 & 0x18) != 0) && ((*(byte *)((uVar13 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar13,puVar1,uVar14);
    }
  }
  uVar13 = *puVar7;
  uVar14 = *param_5;
  lVar2 = uVar13 + (long)(int)(uVar9 * 0xc + 0x10);
  *(int *)(lVar2 + 7) = (int)uVar14;
  if ((uVar14 & 1) != 0) {
    uVar8 = *(ulong *)((uVar14 & 0xfffffffffffc0000) + 8);
    lVar2 = lVar2 + 7;
    if (((uint)uVar8 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar13,lVar2,uVar14);
      uVar8 = *(ulong *)(uVar14 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar8 & 0x18) != 0) && ((*(byte *)((uVar13 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar13,lVar2,uVar14);
    }
  }
  *(uint *)(*puVar7 + 7) = *(uint *)(*puVar7 + 7) + 2 & 0xfffffffe;
  return puVar7;
}

