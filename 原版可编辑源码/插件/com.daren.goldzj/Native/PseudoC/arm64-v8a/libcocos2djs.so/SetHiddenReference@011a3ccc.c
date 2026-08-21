
/* v8::internal::V8HeapExplorer::SetHiddenReference(v8::internal::HeapObject,
   v8::internal::HeapEntry*, int, v8::internal::Object, int) */

void __thiscall
v8::internal::V8HeapExplorer::SetHiddenReference
          (V8HeapExplorer *this,ulong param_2,uint *param_3,uint param_4,void *param_5,int param_6)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  
  iVar9 = (int)param_5;
  if ((((((((ulong)param_5 & 1) != 0) &&
         (lVar2 = HeapSnapshotGenerator::FindOrAddEntry
                            (*(HeapSnapshotGenerator **)(this + 0x30),param_5,
                             (HeapEntriesAllocator *)this), lVar2 != 0)) &&
        (lVar3 = *(long *)(this + 8),
        *(short *)(((ulong)param_5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)((long)param_5 + -1))
        != 0x43)) && ((iVar9 != *(int *)(lVar3 + -0x8490) && (iVar9 != *(int *)(lVar3 + -0x86e8)))))
      && ((iVar9 != *(int *)(lVar3 + -0x8430) &&
          ((iVar9 != *(int *)(lVar3 + -0x86e0) && (iVar9 != *(int *)(lVar3 + -0x8770))))))) &&
     ((iVar9 != *(int *)(lVar3 + -0x8728) &&
      ((((iVar9 != *(int *)(lVar3 + -0x8720) && (iVar9 != *(int *)(lVar3 + -0x8738))) &&
        (iVar9 != *(int *)(lVar3 + -0x87d0))) &&
       ((iVar9 != *(int *)(lVar3 + -0x87c8) && (iVar9 != *(int *)(lVar3 + -0x87c0))))))))) {
    if ((param_2 & 1) != 0) {
      uVar5 = param_2 & 0xffffffff00000000 | 7;
      if ((param_6 == 0x18) && (*(short *)(uVar5 + *(uint *)(param_2 - 1)) == 0x55)) {
        return;
      }
      if ((param_6 == 4) && (*(short *)(uVar5 + *(uint *)(param_2 - 1)) == 0x9b)) {
        return;
      }
      if ((param_6 == 0x420) && ((ushort)(*(short *)(uVar5 + *(uint *)(param_2 - 1)) - 0x88U) < 10))
      {
        return;
      }
    }
    lVar8 = *(long *)(param_3 + 4);
    param_3[1] = param_3[1] + 1;
    lVar3 = *(long *)(lVar8 + 0x108);
    lVar6 = *(long *)(lVar8 + 0x110);
    uVar5 = 0;
    if (lVar6 - lVar3 != 0) {
      uVar5 = (lVar6 - lVar3 >> 3) * 0xaa - 1;
    }
    uVar7 = *(long *)(lVar8 + 0x128) + *(long *)(lVar8 + 0x120);
    if (uVar5 == uVar7) {
      std::__ndk1::
      deque<v8::internal::HeapGraphEdge,std::__ndk1::allocator<v8::internal::HeapGraphEdge>>::
      __add_back_capacity((deque<v8::internal::HeapGraphEdge,std::__ndk1::allocator<v8::internal::HeapGraphEdge>>
                           *)(lVar8 + 0x100));
      lVar3 = *(long *)(lVar8 + 0x108);
      lVar6 = *(long *)(lVar8 + 0x110);
      uVar7 = *(long *)(lVar8 + 0x120) + *(long *)(lVar8 + 0x128);
    }
    if (lVar6 == lVar3) {
      puVar4 = (uint *)0x0;
    }
    else {
      puVar4 = (uint *)(*(long *)(lVar3 + (uVar7 / 0xaa) * 8) + (uVar7 % 0xaa) * 0x18);
    }
    uVar1 = *param_3;
    *(long *)(puVar4 + 2) = lVar2;
    puVar4[4] = param_4;
    *puVar4 = uVar1 >> 1 & 0x7ffffff8 | 4;
    *(long *)(lVar8 + 0x128) = *(long *)(lVar8 + 0x128) + 1;
  }
  return;
}

