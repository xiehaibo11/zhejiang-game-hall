
/* v8::internal::V8HeapExplorer::SetGcRootsReference(v8::internal::Root) */

void __thiscall v8::internal::V8HeapExplorer::SetGcRootsReference(V8HeapExplorer *this,int param_2)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  uint *puVar9;
  undefined8 uVar10;
  
  puVar9 = *(uint **)(*(long *)(this + 0x10) + 0x10);
  uVar10 = *(undefined8 *)(*(long *)(this + 0x10) + (long)param_2 * 8 + 0x18);
  uVar2 = puVar9[1];
  lVar8 = *(long *)(puVar9 + 4);
  puVar9[1] = uVar2 + 1;
  lVar4 = *(long *)(lVar8 + 0x108);
  lVar6 = *(long *)(lVar8 + 0x110);
  uVar1 = 0;
  if (lVar6 - lVar4 != 0) {
    uVar1 = (lVar6 - lVar4 >> 3) * 0xaa - 1;
  }
  uVar7 = *(long *)(lVar8 + 0x128) + *(long *)(lVar8 + 0x120);
  if (uVar1 == uVar7) {
    std::__ndk1::
    deque<v8::internal::HeapGraphEdge,std::__ndk1::allocator<v8::internal::HeapGraphEdge>>::
    __add_back_capacity((deque<v8::internal::HeapGraphEdge,std::__ndk1::allocator<v8::internal::HeapGraphEdge>>
                         *)(lVar8 + 0x100));
    lVar4 = *(long *)(lVar8 + 0x108);
    lVar6 = *(long *)(lVar8 + 0x110);
    uVar7 = *(long *)(lVar8 + 0x120) + *(long *)(lVar8 + 0x128);
  }
  if (lVar6 == lVar4) {
    puVar5 = (uint *)0x0;
  }
  else {
    puVar5 = (uint *)(*(long *)(lVar4 + (uVar7 / 0xaa) * 8) + (uVar7 % 0xaa) * 0x18);
  }
  uVar3 = *puVar9;
  *(undefined8 *)(puVar5 + 2) = uVar10;
  puVar5[4] = uVar2 + 1;
  *puVar5 = uVar3 >> 1 & 0x7ffffff8 | 1;
  *(long *)(lVar8 + 0x128) = *(long *)(lVar8 + 0x128) + 1;
  return;
}

