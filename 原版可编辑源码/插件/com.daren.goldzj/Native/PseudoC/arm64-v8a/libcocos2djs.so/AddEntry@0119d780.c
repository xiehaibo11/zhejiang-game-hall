
/* v8::internal::HeapSnapshot::AddEntry(v8::internal::HeapEntry::Type, char const*, unsigned int,
   unsigned long, unsigned int) */

long __thiscall
v8::internal::HeapSnapshot::AddEntry
          (HeapSnapshot *this,uint param_2,undefined8 param_3,uint param_4,undefined8 param_5,
          uint param_6)

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
  *(undefined8 *)(puVar4 + 2) = param_5;
  *(HeapSnapshot **)(puVar4 + 4) = this;
  *(undefined8 *)(puVar4 + 6) = param_3;
  puVar4[8] = param_4;
  puVar4[9] = param_6;
  *puVar4 = param_2 & 0xf | (int)lVar2 << 4;
  puVar4[1] = 0;
  uVar1 = *(long *)(this + 0xf0) + *(long *)(this + 0xf8);
  *(long *)(this + 0xf8) = *(long *)(this + 0xf8) + 1;
  return *(long *)(*(long *)(this + 0xd8) + (uVar1 / 0x66) * 8) + (uVar1 % 0x66) * 0x28;
}

