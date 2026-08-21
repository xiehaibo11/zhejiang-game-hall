
/* v8::internal::MarkCompactCollector::MarkStringTable(v8::internal::ObjectVisitor*) */

void __thiscall
v8::internal::MarkCompactCollector::MarkStringTable
          (MarkCompactCollector *this,ObjectVisitor *param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  ulong local_30;
  ulong local_28;
  
  local_30 = *(ulong *)(*(long *)(this + 8) + -0x7880);
  uVar9 = local_30 & 0xfffffffffffc0000;
  puVar1 = (uint *)(*(long *)(uVar9 + 0x10) + (local_30 - uVar9 >> 7 & 0x1ffffff) * 4);
  do {
    uVar3 = *puVar1;
    uVar8 = (uint)(1L << (local_30 - uVar9 >> 2 & 0x1f));
    if ((uVar8 & (uVar3 ^ 0xffffffff)) == 0) {
      return;
    }
    while (*puVar1 == uVar3) {
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar6) {
        *puVar1 = uVar3 | uVar8;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') {
        puVar1 = (uint *)(*(long *)(uVar9 + 0x10) + (local_30 + ~uVar9 >> 7 & 0x1ffffff) * 4);
        uVar3 = 1 << (ulong)((uint)(local_30 + ~uVar9 >> 2) & 0x1f);
        if ((*puVar1 & uVar3) == 0) {
          return;
        }
        uVar3 = uVar3 << 1;
        bVar6 = uVar3 == 0;
        puVar2 = puVar1;
        if (bVar6) {
          uVar3 = 1;
          puVar2 = puVar1 + 1;
        }
        do {
          uVar8 = puVar1[bVar6];
          if ((uVar3 & (uVar8 ^ 0xffffffff)) == 0) {
            return;
          }
          while (*puVar2 == uVar8) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar5) {
              *puVar2 = uVar8 | uVar3;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') {
              local_28 = local_30;
              iVar7 = HeapObject::SizeFromMap
                                ((HeapObject *)&local_28,
                                 local_30 & 0xffffffff00000000 | (ulong)*(uint *)(local_30 - 1));
              *(long *)(uVar9 + 0x68) = *(long *)(uVar9 + 0x68) + (long)iVar7;
              HashTable<v8::internal::StringTable,v8::internal::StringTableShape>::IteratePrefix
                        ((HashTable<v8::internal::StringTable,v8::internal::StringTableShape> *)
                         &local_30,param_1);
              return;
            }
          }
          ClearExclusiveLocal();
        } while( true );
      }
    }
    ClearExclusiveLocal();
  } while( true );
}

