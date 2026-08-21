
/* v8::internal::HeapSnapshot::AddGcSubrootEntry(v8::internal::Root, unsigned int) */

void __thiscall
v8::internal::HeapSnapshot::AddGcSubrootEntry(HeapSnapshot *this,int param_2,uint param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  uint *puVar5;
  long lVar6;
  ulong uVar7;
  
  uVar3 = RootVisitor::RootName(param_2);
  lVar4 = *(long *)(this + 0xd8);
  lVar6 = *(long *)(this + 0xe0);
  lVar2 = *(long *)(this + 0xf8);
  uVar1 = 0;
  if (lVar6 - lVar4 != 0) {
    uVar1 = (lVar6 - lVar4 >> 3) * 0x66 - 1;
  }
  uVar7 = *(long *)(this + 0xf0) + lVar2;
  if (uVar1 == uVar7) {
    std::__ndk1::deque<v8::internal::HeapEntry,std::__ndk1::allocator<v8::internal::HeapEntry>>::
    __add_back_capacity((deque<v8::internal::HeapEntry,std::__ndk1::allocator<v8::internal::HeapEntry>>
                         *)(this + 0xd0));
    lVar4 = *(long *)(this + 0xd8);
    lVar6 = *(long *)(this + 0xe0);
    uVar7 = *(long *)(this + 0xf0) + *(long *)(this + 0xf8);
  }
  if (lVar6 == lVar4) {
    puVar5 = (uint *)0x0;
  }
  else {
    puVar5 = (uint *)(*(long *)(lVar4 + (uVar7 / 0x66) * 8) + (uVar7 % 0x66) * 0x28);
  }
  puVar5[2] = 0;
  puVar5[3] = 0;
  *(HeapSnapshot **)(puVar5 + 4) = this;
  *(undefined8 *)(puVar5 + 6) = uVar3;
  puVar5[8] = param_3;
  puVar5[9] = 0;
  *puVar5 = (int)lVar2 << 4 | 9;
  puVar5[1] = 0;
  uVar1 = *(long *)(this + 0xf0) + *(long *)(this + 0xf8);
  *(long *)(this + 0xf8) = *(long *)(this + 0xf8) + 1;
  *(ulong *)(this + (long)param_2 * 8 + 0x18) =
       *(long *)(*(long *)(this + 0xd8) + (uVar1 / 0x66) * 8) + (uVar1 % 0x66) * 0x28;
  return;
}

