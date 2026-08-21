
/* v8::internal::EmbedderGraphEntriesAllocator::AllocateEntry(void*) */

long __thiscall
v8::internal::EmbedderGraphEntriesAllocator::AllocateEntry
          (EmbedderGraphEntriesAllocator *this,void *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  char *pcVar6;
  undefined8 uVar7;
  uint *puVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  StringsStorage *this_00;
  long lVar12;
  
  iVar2 = (**(code **)(*(long *)param_1 + 0x18))(param_1);
  uVar4 = (**(code **)(*(long *)param_1 + 0x40))(param_1);
  if (uVar4 == 0) {
    uVar3 = (int)param_1 << 1;
  }
  else {
    uVar3 = HeapObjectsMap::FindOrAddEntry(*(HeapObjectsMap **)(this + 0x18),uVar4,0,true);
  }
  lVar12 = *(long *)(this + 8);
  uVar4 = (**(code **)(*(long *)param_1 + 0x28))(param_1);
  this_00 = *(StringsStorage **)(this + 0x10);
  uVar9 = 8;
  if ((uVar4 & 1) != 0) {
    uVar9 = 9;
  }
  lVar5 = (**(code **)(*(long *)param_1 + 0x38))(param_1);
  pcVar6 = (char *)(**(code **)(*(long *)param_1 + 0x10))(param_1);
  if (lVar5 == 0) {
    uVar7 = StringsStorage::GetCopy(this_00,pcVar6);
  }
  else {
    uVar7 = StringsStorage::GetFormatted((char *)this_00,"%s %s",lVar5);
  }
  lVar5 = *(long *)(lVar12 + 0xd8);
  lVar10 = *(long *)(lVar12 + 0xe0);
  lVar1 = *(long *)(lVar12 + 0xf8);
  uVar4 = 0;
  if (lVar10 - lVar5 != 0) {
    uVar4 = (lVar10 - lVar5 >> 3) * 0x66 - 1;
  }
  uVar11 = *(long *)(lVar12 + 0xf0) + lVar1;
  if (uVar4 == uVar11) {
    std::__ndk1::deque<v8::internal::HeapEntry,std::__ndk1::allocator<v8::internal::HeapEntry>>::
    __add_back_capacity((deque<v8::internal::HeapEntry,std::__ndk1::allocator<v8::internal::HeapEntry>>
                         *)(lVar12 + 0xd0));
    lVar5 = *(long *)(lVar12 + 0xd8);
    lVar10 = *(long *)(lVar12 + 0xe0);
    uVar11 = *(long *)(lVar12 + 0xf0) + *(long *)(lVar12 + 0xf8);
  }
  if (lVar10 == lVar5) {
    puVar8 = (uint *)0x0;
  }
  else {
    puVar8 = (uint *)(*(long *)(lVar5 + (uVar11 / 0x66) * 8) + (uVar11 % 0x66) * 0x28);
  }
  *(long *)(puVar8 + 2) = (long)iVar2;
  *(long *)(puVar8 + 4) = lVar12;
  *(undefined8 *)(puVar8 + 6) = uVar7;
  puVar8[8] = uVar3;
  puVar8[9] = 0;
  *puVar8 = uVar9 | (int)lVar1 << 4;
  puVar8[1] = 0;
  uVar4 = *(long *)(lVar12 + 0xf0) + *(long *)(lVar12 + 0xf8);
  *(long *)(lVar12 + 0xf8) = *(long *)(lVar12 + 0xf8) + 1;
  return *(long *)(*(long *)(lVar12 + 0xd8) + (uVar4 / 0x66) * 8) + (uVar4 % 0x66) * 0x28;
}

