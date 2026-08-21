
/* v8::internal::V8HeapExplorer::AddEntry(unsigned long, v8::internal::HeapEntry::Type, char const*,
   unsigned long) */

long __thiscall
v8::internal::V8HeapExplorer::AddEntry
          (V8HeapExplorer *this,ulong param_1,uint param_3,undefined8 param_4,undefined8 param_5)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint *puVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  
  uVar3 = HeapObjectsMap::FindOrAddEntry
                    (*(HeapObjectsMap **)(this + 0x20),param_1,(uint)param_5,true);
  plVar9 = *(long **)(this + 0x10);
  if (*(long *)(*plVar9 + 0x30) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = AddressToTraceMap::GetTraceNodeId
                      ((AddressToTraceMap *)(*(long *)(*plVar9 + 0x30) + 0x198),param_1);
    plVar9 = *(long **)(this + 0x10);
  }
  lVar5 = plVar9[0x1b];
  lVar7 = plVar9[0x1c];
  lVar2 = plVar9[0x1f];
  uVar1 = 0;
  if (lVar7 - lVar5 != 0) {
    uVar1 = (lVar7 - lVar5 >> 3) * 0x66 - 1;
  }
  uVar8 = plVar9[0x1e] + lVar2;
  if (uVar1 == uVar8) {
    std::__ndk1::deque<v8::internal::HeapEntry,std::__ndk1::allocator<v8::internal::HeapEntry>>::
    __add_back_capacity((deque<v8::internal::HeapEntry,std::__ndk1::allocator<v8::internal::HeapEntry>>
                         *)(plVar9 + 0x1a));
    lVar5 = plVar9[0x1b];
    lVar7 = plVar9[0x1c];
    uVar8 = plVar9[0x1e] + plVar9[0x1f];
  }
  if (lVar7 == lVar5) {
    puVar6 = (uint *)0x0;
  }
  else {
    puVar6 = (uint *)(*(long *)(lVar5 + (uVar8 / 0x66) * 8) + (uVar8 % 0x66) * 0x28);
  }
  *(undefined8 *)(puVar6 + 2) = param_5;
  *(long **)(puVar6 + 4) = plVar9;
  *(undefined8 *)(puVar6 + 6) = param_4;
  puVar6[8] = uVar3;
  puVar6[9] = uVar4;
  *puVar6 = param_3 & 0xf | (int)lVar2 << 4;
  puVar6[1] = 0;
  uVar1 = plVar9[0x1e] + plVar9[0x1f];
  plVar9[0x1f] = plVar9[0x1f] + 1;
  return *(long *)(plVar9[0x1b] + (uVar1 / 0x66) * 8) + (uVar1 % 0x66) * 0x28;
}

