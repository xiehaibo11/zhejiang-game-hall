
/* v8::internal::HeapSnapshot::AddRootEntry() */

void __thiscall v8::internal::HeapSnapshot::AddRootEntry(HeapSnapshot *this)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  uint *puVar4;
  long lVar5;
  ulong uVar6;
  
  lVar3 = *(long *)(this + 0xd8);
  lVar5 = *(long *)(this + 0xe0);
  lVar2 = *(long *)(this + 0xf8);
  uVar1 = 0;
  if (lVar5 - lVar3 != 0) {
    uVar1 = (lVar5 - lVar3 >> 3) * 0x66 - 1;
  }
  uVar6 = *(long *)(this + 0xf0) + lVar2;
  if (uVar1 == uVar6) {
    std::__ndk1::deque<v8::internal::HeapEntry,std::__ndk1::allocator<v8::internal::HeapEntry>>::
    __add_back_capacity((deque<v8::internal::HeapEntry,std::__ndk1::allocator<v8::internal::HeapEntry>>
                         *)(this + 0xd0));
    lVar3 = *(long *)(this + 0xd8);
    lVar5 = *(long *)(this + 0xe0);
    uVar6 = *(long *)(this + 0xf0) + *(long *)(this + 0xf8);
  }
  if (lVar5 == lVar3) {
    puVar4 = (uint *)0x0;
  }
  else {
    puVar4 = (uint *)(*(long *)(lVar3 + (uVar6 / 0x66) * 8) + (uVar6 % 0x66) * 0x28);
  }
  puVar4[2] = 0;
  puVar4[3] = 0;
  *(HeapSnapshot **)(puVar4 + 4) = this;
  *(undefined1 **)(puVar4 + 6) = &DAT_0189703a;
  *puVar4 = (int)lVar2 << 4 | 9;
  puVar4[1] = 0;
  puVar4[8] = 1;
  puVar4[9] = 0;
  uVar1 = *(long *)(this + 0xf0) + *(long *)(this + 0xf8);
  *(long *)(this + 0xf8) = *(long *)(this + 0xf8) + 1;
  *(ulong *)(this + 8) =
       *(long *)(*(long *)(this + 0xd8) + (uVar1 / 0x66) * 8) + (uVar1 % 0x66) * 0x28;
  return;
}

