
/* v8::internal::V8HeapExplorer::SetRootGcRootsReference() */

void __thiscall v8::internal::V8HeapExplorer::SetRootGcRootsReference(V8HeapExplorer *this)

{
  ulong uVar1;
  uint *puVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  
  puVar2 = *(uint **)(*(long *)(this + 0x10) + 8);
  uVar3 = *(undefined8 *)(*(long *)(this + 0x10) + 0x10);
  uVar4 = puVar2[1];
  lVar10 = *(long *)(puVar2 + 4);
  puVar2[1] = uVar4 + 1;
  lVar6 = *(long *)(lVar10 + 0x108);
  lVar8 = *(long *)(lVar10 + 0x110);
  uVar1 = 0;
  if (lVar8 - lVar6 != 0) {
    uVar1 = (lVar8 - lVar6 >> 3) * 0xaa - 1;
  }
  uVar9 = *(long *)(lVar10 + 0x128) + *(long *)(lVar10 + 0x120);
  if (uVar1 == uVar9) {
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
  uVar5 = *puVar2;
  *(undefined8 *)(puVar7 + 2) = uVar3;
  puVar7[4] = uVar4 + 1;
  *puVar7 = uVar5 >> 1 & 0x7ffffff8 | 1;
  *(long *)(lVar10 + 0x128) = *(long *)(lVar10 + 0x128) + 1;
  return;
}

