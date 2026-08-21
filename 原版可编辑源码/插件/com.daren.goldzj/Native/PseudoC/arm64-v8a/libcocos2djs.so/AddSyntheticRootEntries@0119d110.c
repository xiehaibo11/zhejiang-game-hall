
/* v8::internal::HeapSnapshot::AddSyntheticRootEntries() */

void __thiscall v8::internal::HeapSnapshot::AddSyntheticRootEntries(HeapSnapshot *this)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  uint *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  lVar3 = *(long *)(this + 0xd8);
  lVar5 = *(long *)(this + 0xe0);
  lVar6 = *(long *)(this + 0xf8);
  uVar1 = 0;
  if (lVar5 - lVar3 != 0) {
    uVar1 = (lVar5 - lVar3 >> 3) * 0x66 - 1;
  }
  uVar7 = *(long *)(this + 0xf0) + lVar6;
  if (uVar1 == uVar7) {
    std::__ndk1::deque<v8::internal::HeapEntry,std::__ndk1::allocator<v8::internal::HeapEntry>>::
    __add_back_capacity((deque<v8::internal::HeapEntry,std::__ndk1::allocator<v8::internal::HeapEntry>>
                         *)(this + 0xd0));
    lVar3 = *(long *)(this + 0xd8);
    lVar5 = *(long *)(this + 0xe0);
    uVar7 = *(long *)(this + 0xf0) + *(long *)(this + 0xf8);
  }
  if (lVar5 == lVar3) {
    puVar4 = (uint *)0x0;
  }
  else {
    puVar4 = (uint *)(*(long *)(lVar3 + (uVar7 / 0x66) * 8) + (uVar7 % 0x66) * 0x28);
  }
  puVar4[2] = 0;
  puVar4[3] = 0;
  *(HeapSnapshot **)(puVar4 + 4) = this;
  *(undefined1 **)(puVar4 + 6) = &DAT_0189703a;
  *puVar4 = (int)lVar6 << 4 | 9;
  puVar4[1] = 0;
  puVar4[8] = 1;
  puVar4[9] = 0;
  lVar5 = *(long *)(this + 0xd8);
  lVar6 = *(long *)(this + 0xe0);
  lVar3 = *(long *)(this + 0xf8) + 1;
  uVar1 = *(long *)(this + 0xf0) + *(long *)(this + 0xf8);
  *(long *)(this + 0xf8) = lVar3;
  uVar7 = *(long *)(this + 0xf0) + lVar3;
  uVar2 = 0;
  if (lVar6 - lVar5 != 0) {
    uVar2 = (lVar6 - lVar5 >> 3) * 0x66 - 1;
  }
  *(ulong *)(this + 8) = *(long *)(lVar5 + (uVar1 / 0x66) * 8) + (uVar1 % 0x66) * 0x28;
  if (uVar2 == uVar7) {
    std::__ndk1::deque<v8::internal::HeapEntry,std::__ndk1::allocator<v8::internal::HeapEntry>>::
    __add_back_capacity((deque<v8::internal::HeapEntry,std::__ndk1::allocator<v8::internal::HeapEntry>>
                         *)(this + 0xd0));
    lVar5 = *(long *)(this + 0xd8);
    lVar6 = *(long *)(this + 0xe0);
    uVar7 = *(long *)(this + 0xf0) + *(long *)(this + 0xf8);
  }
  if (lVar6 == lVar5) {
    puVar4 = (uint *)0x0;
  }
  else {
    puVar4 = (uint *)(*(long *)(lVar5 + (uVar7 / 0x66) * 8) + (uVar7 % 0x66) * 0x28);
  }
  puVar4[2] = 0;
  puVar4[3] = 0;
  *(HeapSnapshot **)(puVar4 + 4) = this;
  *(char **)(puVar4 + 6) = "(GC roots)";
  *puVar4 = (int)lVar3 << 4 | 9;
  puVar4[1] = 0;
  puVar4[8] = 3;
  puVar4[9] = 0;
  uVar1 = *(long *)(this + 0xf0) + *(long *)(this + 0xf8);
  *(long *)(this + 0xf8) = *(long *)(this + 0xf8) + 1;
  *(ulong *)(this + 0x10) =
       *(long *)(*(long *)(this + 0xd8) + (uVar1 / 0x66) * 8) + (uVar1 % 0x66) * 0x28;
  AddGcSubrootEntry(this,0,5);
  AddGcSubrootEntry(this,1,7);
  AddGcSubrootEntry(this,2,9);
  AddGcSubrootEntry(this,3,0xb);
  AddGcSubrootEntry(this,4,0xd);
  AddGcSubrootEntry(this,5,0xf);
  AddGcSubrootEntry(this,6,0x11);
  AddGcSubrootEntry(this,7,0x13);
  AddGcSubrootEntry(this,8,0x15);
  AddGcSubrootEntry(this,9,0x17);
  AddGcSubrootEntry(this,10,0x19);
  AddGcSubrootEntry(this,0xb,0x1b);
  AddGcSubrootEntry(this,0xc,0x1d);
  AddGcSubrootEntry(this,0xd,0x1f);
  AddGcSubrootEntry(this,0xe,0x21);
  AddGcSubrootEntry(this,0xf,0x23);
  AddGcSubrootEntry(this,0x10,0x25);
  AddGcSubrootEntry(this,0x11,0x27);
  AddGcSubrootEntry(this,0x12,0x29);
  AddGcSubrootEntry(this,0x13,0x2b);
  AddGcSubrootEntry(this,0x14,0x2d);
  AddGcSubrootEntry(this,0x15,0x2f);
  AddGcSubrootEntry(this,0x16,0x31);
  return;
}

