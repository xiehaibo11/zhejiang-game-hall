
/* v8::internal::V8HeapExplorer::SetWeakReference(v8::internal::HeapEntry*, char const*,
   v8::internal::Object, int) */

void __thiscall
v8::internal::V8HeapExplorer::SetWeakReference
          (V8HeapExplorer *this,uint *param_1,undefined8 param_2,void *param_4,uint param_5)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  
  iVar8 = (int)param_4;
  if ((((ulong)param_4 & 1) != 0) &&
     (lVar2 = HeapSnapshotGenerator::FindOrAddEntry
                        (*(HeapSnapshotGenerator **)(this + 0x30),param_4,
                         (HeapEntriesAllocator *)this), lVar2 != 0)) {
    lVar3 = *(long *)(this + 8);
    if (((*(short *)(((ulong)param_4 & 0xffffffff00000000 | 7) +
                    (ulong)*(uint *)((long)param_4 + -1)) != 0x43) &&
        ((((iVar8 != *(int *)(lVar3 + -0x8490) && (iVar8 != *(int *)(lVar3 + -0x86e8))) &&
          (iVar8 != *(int *)(lVar3 + -0x8430))) &&
         ((iVar8 != *(int *)(lVar3 + -0x86e0) && (iVar8 != *(int *)(lVar3 + -0x8770))))))) &&
       ((iVar8 != *(int *)(lVar3 + -0x8728) &&
        (((iVar8 != *(int *)(lVar3 + -0x8720) && (iVar8 != *(int *)(lVar3 + -0x8738))) &&
         ((iVar8 != *(int *)(lVar3 + -0x87d0) &&
          ((iVar8 != *(int *)(lVar3 + -0x87c8) && (iVar8 != *(int *)(lVar3 + -0x87c0))))))))))) {
      lVar9 = *(long *)(param_1 + 4);
      param_1[1] = param_1[1] + 1;
      lVar3 = *(long *)(lVar9 + 0x108);
      lVar5 = *(long *)(lVar9 + 0x110);
      uVar7 = 0;
      if (lVar5 - lVar3 != 0) {
        uVar7 = (lVar5 - lVar3 >> 3) * 0xaa - 1;
      }
      uVar6 = *(long *)(lVar9 + 0x128) + *(long *)(lVar9 + 0x120);
      if (uVar7 == uVar6) {
        std::__ndk1::
        deque<v8::internal::HeapGraphEdge,std::__ndk1::allocator<v8::internal::HeapGraphEdge>>::
        __add_back_capacity((deque<v8::internal::HeapGraphEdge,std::__ndk1::allocator<v8::internal::HeapGraphEdge>>
                             *)(lVar9 + 0x100));
        lVar3 = *(long *)(lVar9 + 0x108);
        lVar5 = *(long *)(lVar9 + 0x110);
        uVar6 = *(long *)(lVar9 + 0x120) + *(long *)(lVar9 + 0x128);
      }
      if (lVar5 == lVar3) {
        puVar4 = (uint *)0x0;
      }
      else {
        puVar4 = (uint *)(*(long *)(lVar3 + (uVar6 / 0xaa) * 8) + (uVar6 % 0xaa) * 0x18);
      }
      uVar1 = *param_1;
      *(long *)(puVar4 + 2) = lVar2;
      *(undefined8 *)(puVar4 + 4) = param_2;
      *puVar4 = uVar1 >> 1 & 0x7ffffff8 | 6;
      *(long *)(lVar9 + 0x128) = *(long *)(lVar9 + 0x128) + 1;
    }
    if (-1 < (int)param_5) {
      uVar7 = (ulong)(param_5 >> 5) & 0x7fffff8;
      *(ulong *)(*(long *)(this + 0xb8) + uVar7) =
           *(ulong *)(*(long *)(this + 0xb8) + uVar7) | 1L << ((ulong)(param_5 >> 2) & 0x3f);
    }
  }
  return;
}

