
/* v8::internal::IncrementalMarking::EnsureBlackAllocated(unsigned long, unsigned long) */

void __thiscall
v8::internal::IncrementalMarking::EnsureBlackAllocated
          (IncrementalMarking *this,ulong param_1,ulong param_2)

{
  ulong uVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  ulong local_48;
  
  if ((param_1 != 0) && (this[0x5f] != (IncrementalMarking)0x0)) {
    uVar1 = param_1 + 1;
    uVar10 = uVar1 & 0xfffffffffffc0000;
    uVar12 = uVar1 - uVar10 >> 7 & 0x1ffffff;
    uVar11 = (uint)(1L << (uVar1 - uVar10 >> 2 & 0x1f));
    if (((*(uint *)(*(long *)(uVar10 + 0x10) + uVar12 * 4) & uVar11) == 0) &&
       ((*(byte *)(uVar10 + 8) & 0x18) == 0)) {
      uVar9 = Heap::IsLargeObject(uVar1);
      if ((uVar9 & 1) == 0) {
        Page::CreateBlackArea((Page *)(param_1 & 0xfffffffffffc0000),param_1,param_2 + param_1);
        return;
      }
      puVar2 = (uint *)(*(long *)(uVar10 + 0x10) + uVar12 * 4);
      while (uVar4 = *puVar2, (uVar11 & (uVar4 ^ 0xffffffff)) != 0) {
        while (*puVar2 == uVar4) {
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar7) {
            *puVar2 = uVar4 | uVar11;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') {
            puVar2 = (uint *)(*(long *)(uVar10 + 0x10) + (param_1 - uVar10 >> 7 & 0x1ffffff) * 4);
            uVar11 = 1 << (ulong)((uint)(param_1 - uVar10 >> 2) & 0x1f);
            if ((*puVar2 & uVar11) == 0) {
              return;
            }
            uVar11 = uVar11 << 1;
            bVar7 = uVar11 == 0;
            puVar3 = puVar2;
            if (bVar7) {
              uVar11 = 1;
              puVar3 = puVar2 + 1;
            }
            do {
              uVar4 = puVar2[bVar7];
              if ((uVar11 & (uVar4 ^ 0xffffffff)) == 0) {
                return;
              }
              while (*puVar3 == uVar4) {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
                if (bVar6) {
                  *puVar3 = uVar4 | uVar11;
                  cVar5 = ExclusiveMonitorsStatus();
                }
                if (cVar5 == '\0') {
                  local_48 = uVar1;
                  iVar8 = HeapObject::SizeFromMap
                                    ((HeapObject *)&local_48,
                                     uVar1 & 0xffffffff00000000 | (ulong)*(uint *)param_1);
                  *(long *)(uVar10 + 0x68) = *(long *)(uVar10 + 0x68) + (long)iVar8;
                  return;
                }
              }
              ClearExclusiveLocal();
            } while( true );
          }
        }
        ClearExclusiveLocal();
      }
    }
  }
  return;
}

