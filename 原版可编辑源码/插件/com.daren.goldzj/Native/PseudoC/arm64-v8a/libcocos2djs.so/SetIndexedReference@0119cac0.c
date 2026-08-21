
/* v8::internal::HeapEntry::SetIndexedReference(v8::internal::HeapGraphEdge::Type, int,
   v8::internal::HeapEntry*) */

void __thiscall
v8::internal::HeapEntry::SetIndexedReference
          (HeapEntry *this,uint param_2,uint param_3,undefined8 param_4)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  uint *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  lVar7 = *(long *)(this + 0x10);
  *(int *)(this + 4) = *(int *)(this + 4) + 1;
  lVar3 = *(long *)(lVar7 + 0x108);
  lVar5 = *(long *)(lVar7 + 0x110);
  uVar1 = 0;
  if (lVar5 - lVar3 != 0) {
    uVar1 = (lVar5 - lVar3 >> 3) * 0xaa - 1;
  }
  uVar6 = *(long *)(lVar7 + 0x128) + *(long *)(lVar7 + 0x120);
  if (uVar1 == uVar6) {
    std::__ndk1::
    deque<v8::internal::HeapGraphEdge,std::__ndk1::allocator<v8::internal::HeapGraphEdge>>::
    __add_back_capacity((deque<v8::internal::HeapGraphEdge,std::__ndk1::allocator<v8::internal::HeapGraphEdge>>
                         *)(lVar7 + 0x100));
    lVar3 = *(long *)(lVar7 + 0x108);
    lVar5 = *(long *)(lVar7 + 0x110);
    uVar6 = *(long *)(lVar7 + 0x120) + *(long *)(lVar7 + 0x128);
  }
  if (lVar5 == lVar3) {
    puVar4 = (uint *)0x0;
  }
  else {
    puVar4 = (uint *)(*(long *)(lVar3 + (uVar6 / 0xaa) * 8) + (uVar6 % 0xaa) * 0x18);
  }
  uVar2 = *(uint *)this;
  *(undefined8 *)(puVar4 + 2) = param_4;
  puVar4[4] = param_3;
  *puVar4 = uVar2 >> 1 & 0x7ffffff8 | param_2;
  *(long *)(lVar7 + 0x128) = *(long *)(lVar7 + 0x128) + 1;
  return;
}

