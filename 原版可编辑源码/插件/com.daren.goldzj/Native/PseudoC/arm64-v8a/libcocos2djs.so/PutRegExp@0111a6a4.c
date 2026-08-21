
/* v8::internal::CompilationCacheTable::PutRegExp(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::CompilationCacheTable>,
   v8::internal::Handle<v8::internal::String>, v8::base::Flags<v8::internal::JSRegExp::Flag, int>,
   v8::internal::Handle<v8::internal::FixedArray>) */

ulong * v8::internal::CompilationCacheTable::PutRegExp
                  (undefined8 param_1,undefined8 param_2,long *param_3,int param_4,ulong *param_5)

{
  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  long local_38;
  
  uVar5 = *(uint *)(*param_3 + 3);
  if ((uVar5 & 1) == 0) {
    uVar5 = uVar5 >> 3;
  }
  else {
    local_38 = *param_3;
    uVar5 = String::ComputeAndSetHash((String *)&local_38);
  }
  puVar6 = (ulong *)HashTable<v8::internal::CompilationCacheTable,v8::internal::CompilationCacheShape>
                    ::EnsureCapacity(param_1,param_2,1,0);
  uVar11 = *puVar6;
  lVar2 = uVar11 + 7;
  uVar4 = (*(int *)(uVar11 + 0xf) >> 1) - 1;
  uVar5 = uVar4 & uVar5 + ((param_4 << 1) >> 1);
  uVar8 = (ulong)uVar5;
  iVar9 = *(int *)(((long)(uVar8 * 0xc00000000 + 0xc00000000) >> 0x20) + lVar2);
  iVar3 = *(int *)((uVar11 & 0xffffffff00000000) + 0xa8);
  if (iVar9 != iVar3) {
    iVar10 = 1;
    do {
      uVar5 = (uint)uVar8;
      if (iVar9 == *(int *)((uVar11 & 0xffffffff00000000) + 0xa0)) break;
      uVar5 = uVar5 + iVar10 & uVar4;
      uVar8 = (ulong)uVar5;
      iVar9 = *(int *)(((long)(uVar8 * 0xc00000000 + 0xc00000000) >> 0x20) + lVar2);
      iVar10 = iVar10 + 1;
    } while (iVar9 != iVar3);
  }
  uVar8 = *param_5;
  puVar1 = (undefined4 *)(lVar2 + (int)(uVar5 * 0xc + 0xc));
  *puVar1 = (int)uVar8;
  if ((uVar8 & 1) != 0) {
    uVar7 = *(ulong *)((uVar8 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar7 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar11,puVar1,uVar8);
      uVar7 = *(ulong *)(uVar8 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar7 & 0x18) != 0) && ((*(byte *)((uVar11 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar11,puVar1,uVar8);
    }
  }
  uVar11 = *puVar6;
  uVar8 = *param_5;
  lVar2 = uVar11 + (long)(int)(uVar5 * 0xc + 0x10);
  *(int *)(lVar2 + 7) = (int)uVar8;
  if ((uVar8 & 1) != 0) {
    uVar7 = *(ulong *)((uVar8 & 0xfffffffffffc0000) + 8);
    lVar2 = lVar2 + 7;
    if (((uint)uVar7 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar11,lVar2,uVar8);
      uVar7 = *(ulong *)(uVar8 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar7 & 0x18) != 0) && ((*(byte *)((uVar11 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar11,lVar2,uVar8);
    }
  }
  *(uint *)(*puVar6 + 7) = *(uint *)(*puVar6 + 7) + 2 & 0xfffffffe;
  return puVar6;
}

