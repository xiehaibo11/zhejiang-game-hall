
/* v8::internal::V8HeapExplorer::SetPropertyReference(v8::internal::HeapEntry*, v8::internal::Name,
   v8::internal::Object, char const*, int) */

void __thiscall
v8::internal::V8HeapExplorer::SetPropertyReference
          (V8HeapExplorer *this,uint *param_1,ulong param_3,void *param_4,long param_5,uint param_6)

{
  uint uVar1;
  void *pvVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  uint *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  char *pcVar11;
  uint uVar12;
  ulong local_60;
  void *local_58;
  
  if ((((ulong)param_4 & 1) != 0) &&
     (lVar3 = HeapSnapshotGenerator::FindOrAddEntry
                        (*(HeapSnapshotGenerator **)(this + 0x30),param_4,
                         (HeapEntriesAllocator *)this), lVar3 != 0)) {
    uVar5 = param_3 & 0xffffffff00000000 | 7;
    uVar12 = 2;
    if ((*(short *)(uVar5 + *(uint *)(param_3 - 1)) != 0x40) &&
       (uVar12 = 2, *(int *)(param_3 + 7) < 1)) {
      uVar12 = 3;
    }
    if ((param_5 == 0) || (0x3f < *(ushort *)(uVar5 + *(uint *)(param_3 - 1)))) {
      uVar4 = StringsStorage::GetName(*(StringsStorage **)(this + 0x18),param_3);
    }
    else {
      pcVar11 = *(char **)(this + 0x18);
      local_60 = param_3;
      String::ToCString(&local_58,&local_60,1,0,0);
      uVar4 = StringsStorage::GetFormatted(pcVar11,param_5,local_58);
      pvVar2 = local_58;
      local_58 = (void *)0x0;
      if (pvVar2 != (void *)0x0) {
        operator_delete__(pvVar2);
      }
    }
    lVar10 = *(long *)(param_1 + 4);
    param_1[1] = param_1[1] + 1;
    lVar6 = *(long *)(lVar10 + 0x108);
    lVar8 = *(long *)(lVar10 + 0x110);
    uVar5 = 0;
    if (lVar8 - lVar6 != 0) {
      uVar5 = (lVar8 - lVar6 >> 3) * 0xaa - 1;
    }
    uVar9 = *(long *)(lVar10 + 0x128) + *(long *)(lVar10 + 0x120);
    if (uVar5 == uVar9) {
      std::__ndk1::
      deque<v8::internal::HeapGraphEdge,std::__ndk1::allocator<v8::internal::HeapGraphEdge>>::
      __add_back_capacity((deque<v8::internal::HeapGraphEdge,std::__ndk1::allocator<v8::internal::HeapGraphEdge>>
                           *)(lVar10 + 0x100));
      lVar6 = *(long *)(lVar10 + 0x108);
      lVar8 = *(long *)(lVar10 + 0x110);
      uVar9 = *(long *)(lVar10 + 0x120) + *(long *)(lVar10 + 0x128);
    }
    if (lVar8 == lVar6) {
      puVar7 = (uint *)0x0;
    }
    else {
      puVar7 = (uint *)(*(long *)(lVar6 + (uVar9 / 0xaa) * 8) + (uVar9 % 0xaa) * 0x18);
    }
    uVar1 = *param_1;
    *(long *)(puVar7 + 2) = lVar3;
    *(undefined8 *)(puVar7 + 4) = uVar4;
    *puVar7 = uVar1 >> 1 & 0x7ffffff8 | uVar12;
    *(long *)(lVar10 + 0x128) = *(long *)(lVar10 + 0x128) + 1;
    if (-1 < (int)param_6) {
      uVar5 = (ulong)(param_6 >> 5) & 0x7fffff8;
      *(ulong *)(*(long *)(this + 0xb8) + uVar5) =
           *(ulong *)(*(long *)(this + 0xb8) + uVar5) | 1L << ((ulong)(param_6 >> 2) & 0x3f);
    }
  }
  return;
}

