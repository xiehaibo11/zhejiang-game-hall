
/* v8::internal::V8HeapExplorer::SetWeakReference(v8::internal::HeapEntry*, int,
   v8::internal::Object, int) */

void __thiscall
v8::internal::V8HeapExplorer::SetWeakReference
          (V8HeapExplorer *this,uint *param_1,uint param_2,void *param_4,uint param_5)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  uint *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  long lVar10;
  
  iVar9 = (int)param_4;
  if (((ulong)param_4 & 1) != 0) {
    lVar2 = HeapSnapshotGenerator::FindOrAddEntry
                      (*(HeapSnapshotGenerator **)(this + 0x30),param_4,(HeapEntriesAllocator *)this
                      );
    if (lVar2 != 0) {
      lVar4 = *(long *)(this + 8);
      if (((((*(short *)(((ulong)param_4 & 0xffffffff00000000 | 7) +
                        (ulong)*(uint *)((long)param_4 + -1)) != 0x43) &&
            (iVar9 != *(int *)(lVar4 + -0x8490))) && (iVar9 != *(int *)(lVar4 + -0x86e8))) &&
          ((((iVar9 != *(int *)(lVar4 + -0x8430) && (iVar9 != *(int *)(lVar4 + -0x86e0))) &&
            ((iVar9 != *(int *)(lVar4 + -0x8770) &&
             ((iVar9 != *(int *)(lVar4 + -0x8728) && (iVar9 != *(int *)(lVar4 + -0x8720))))))) &&
           (iVar9 != *(int *)(lVar4 + -0x8738))))) &&
         (((iVar9 != *(int *)(lVar4 + -0x87d0) && (iVar9 != *(int *)(lVar4 + -0x87c8))) &&
          (iVar9 != *(int *)(lVar4 + -0x87c0))))) {
        uVar3 = StringsStorage::GetFormatted(*(char **)(this + 0x18),"%d",(ulong)param_2);
        lVar10 = *(long *)(param_1 + 4);
        param_1[1] = param_1[1] + 1;
        lVar4 = *(long *)(lVar10 + 0x108);
        lVar6 = *(long *)(lVar10 + 0x110);
        uVar8 = 0;
        if (lVar6 - lVar4 != 0) {
          uVar8 = (lVar6 - lVar4 >> 3) * 0xaa - 1;
        }
        uVar7 = *(long *)(lVar10 + 0x128) + *(long *)(lVar10 + 0x120);
        if (uVar8 == uVar7) {
          std::__ndk1::
          deque<v8::internal::HeapGraphEdge,std::__ndk1::allocator<v8::internal::HeapGraphEdge>>::
          __add_back_capacity((deque<v8::internal::HeapGraphEdge,std::__ndk1::allocator<v8::internal::HeapGraphEdge>>
                               *)(lVar10 + 0x100));
          lVar4 = *(long *)(lVar10 + 0x108);
          lVar6 = *(long *)(lVar10 + 0x110);
          uVar7 = *(long *)(lVar10 + 0x120) + *(long *)(lVar10 + 0x128);
        }
        if (lVar6 == lVar4) {
          puVar5 = (uint *)0x0;
        }
        else {
          puVar5 = (uint *)(*(long *)(lVar4 + (uVar7 / 0xaa) * 8) + (uVar7 % 0xaa) * 0x18);
        }
        uVar1 = *param_1;
        *(long *)(puVar5 + 2) = lVar2;
        *(undefined8 *)(puVar5 + 4) = uVar3;
        *puVar5 = uVar1 >> 1 & 0x7ffffff8 | 6;
        *(long *)(lVar10 + 0x128) = *(long *)(lVar10 + 0x128) + 1;
      }
      if (-1 < (int)param_5) {
        uVar8 = (ulong)(param_5 >> 5) & 0x7fffff8;
        *(ulong *)(*(long *)(this + 0xb8) + uVar8) =
             *(ulong *)(*(long *)(this + 0xb8) + uVar8) | 1L << ((ulong)(param_5 >> 2) & 0x3f);
      }
    }
  }
  return;
}

