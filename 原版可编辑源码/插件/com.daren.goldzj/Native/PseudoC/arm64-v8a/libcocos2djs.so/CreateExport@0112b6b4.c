
/* v8::internal::SourceTextModule::CreateExport(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::SourceTextModule>, int,
   v8::internal::Handle<v8::internal::FixedArray>) */

void v8::internal::SourceTextModule::CreateExport
               (Isolate *param_1,ulong *param_2,int param_3,ulong *param_4)

{
  long lVar1;
  Isolate *pIVar2;
  uint uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  
  pIVar2 = param_1 + 0x95a0;
  puVar4 = (ulong *)Factory::NewCell((Factory *)param_1,param_1 + 0xa0);
  uVar10 = *puVar4;
  uVar8 = (ulong)*(uint *)(*param_2 + 0x1b);
  uVar7 = *param_2 & 0xffffffff00000000;
  uVar11 = uVar7 | uVar8;
  lVar1 = uVar11 + (long)(param_3 * 4 + -4);
  *(int *)(lVar1 + 7) = (int)uVar10;
  if ((uVar10 & 1) != 0) {
    uVar9 = *(ulong *)((uVar10 & 0xfffffffffffc0000) + 8);
    lVar1 = lVar1 + 7;
    if (((uint)uVar9 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar11,lVar1,uVar10);
      uVar9 = *(ulong *)(uVar10 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar9 & 0x18) != 0) && ((*(byte *)((uVar7 | uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)
       ) {
      Heap_GenerationalBarrierSlow(uVar11,lVar1,uVar10);
    }
  }
  uVar7 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 3);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)pIVar2;
    if (puVar5 == *(ulong **)(param_1 + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar2 = puVar5 + 1;
    *puVar5 = uVar7;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar7);
  }
  uVar7 = *param_4;
  uVar3 = *(uint *)(uVar7 + 3);
  if (1 < (int)uVar3) {
    iVar12 = 0;
    uVar8 = 1;
    while( true ) {
      uVar7 = uVar7 & 0xffffffff00000000 | (ulong)*(uint *)(uVar7 + (long)iVar12 + 7);
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar6 = *(ulong **)pIVar2;
        if (puVar6 == *(ulong **)(param_1 + 0x95a8)) {
          puVar6 = (ulong *)HandleScope::Extend(param_1);
        }
        *(ulong **)pIVar2 = puVar6 + 1;
        *puVar6 = uVar7;
      }
      else {
        puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar7);
      }
      puVar5 = (ulong *)ObjectHashTableBase<v8::internal::ObjectHashTable,v8::internal::ObjectHashTableShape>
                        ::Put(puVar5,puVar6,puVar4);
      if (uVar3 >> 1 <= uVar8) break;
      uVar7 = *param_4;
      iVar12 = iVar12 + 4;
      uVar8 = uVar8 + 1;
    }
  }
  uVar8 = *param_2;
  uVar7 = *puVar5;
  *(int *)(uVar8 + 3) = (int)uVar7;
  if ((uVar7 & 1) != 0) {
    uVar10 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar10 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar8,uVar8 + 3,uVar7);
      uVar10 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar10 & 0x18) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar8,uVar8 + 3,uVar7);
      return;
    }
  }
  return;
}

