
/* v8::internal::YoungGenerationMigrationObserver::Move(v8::internal::AllocationSpace,
   v8::internal::HeapObject, v8::internal::HeapObject, int) */

void v8::internal::YoungGenerationMigrationObserver::Move
               (long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  long *plVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong local_8;
  
  if (1 < *(int *)(*(long *)(*(long *)(param_1 + 8) + 0x828) + 0x58)) {
    uVar15 = param_4 & 0xfffffffffffc0000;
    uVar12 = param_4 - uVar15 >> 7 & 0x1ffffff;
    puVar2 = (uint *)(*(long *)(uVar15 + 0x10) + uVar12 * 4);
    uVar11 = (uint)(1L << (param_4 - uVar15 >> 2 & 0x1f));
    if ((*puVar2 & uVar11) != 0) {
      uVar6 = uVar11 << 1;
      bVar9 = uVar6 == 0;
      if (bVar9) {
        uVar6 = 1;
      }
      if ((puVar2[bVar9] & uVar6) != 0) {
        return;
      }
    }
    uVar13 = param_3 & 0xfffffffffffc0000;
    uVar14 = param_3 - uVar13 >> 7 & 0x1ffffff;
    puVar2 = (uint *)(*(long *)(uVar13 + 0x10) + uVar14 * 4);
    uVar5 = 1 << (ulong)((uint)(param_3 - uVar13 >> 2) & 0x1f);
    uVar6 = uVar5 << 1;
    if ((*puVar2 & uVar5) != 0) {
      uVar4 = uVar6;
      if (uVar6 == 0) {
        uVar4 = 1;
      }
      if ((puVar2[uVar6 == 0] & uVar4) == 0) {
        puVar2 = (uint *)(*(long *)(uVar15 + 0x10) + uVar12 * 4);
        do {
          uVar6 = *puVar2;
          if ((uVar11 & (uVar6 ^ 0xffffffff)) == 0) {
            return;
          }
          while (*puVar2 == uVar6) {
            cVar7 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar9) {
              *puVar2 = uVar6 | uVar11;
              cVar7 = ExclusiveMonitorsStatus();
            }
            if (cVar7 == '\0') {
              return;
            }
          }
          ClearExclusiveLocal();
        } while( true );
      }
    }
    puVar2 = (uint *)(*(long *)(uVar13 + 0x10) + uVar14 * 4);
    if ((*puVar2 & uVar5) != 0) {
      bVar9 = uVar6 == 0;
      if (bVar9) {
        uVar6 = 1;
      }
      if ((puVar2[bVar9] & uVar6) != 0) {
        puVar2 = (uint *)(*(long *)(uVar15 + 0x10) + uVar12 * 4);
        while (uVar6 = *puVar2, (uVar11 & (uVar6 ^ 0xffffffff)) != 0) {
          while (*puVar2 == uVar6) {
            cVar7 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar9) {
              *puVar2 = uVar6 | uVar11;
              cVar7 = ExclusiveMonitorsStatus();
            }
            if (cVar7 == '\0') {
              puVar2 = (uint *)(*(long *)(uVar15 + 0x10) + (~uVar15 + param_4 >> 7 & 0x1ffffff) * 4)
              ;
              uVar11 = 1 << (ulong)((uint)(~uVar15 + param_4 >> 2) & 0x1f);
              if ((*puVar2 & uVar11) == 0) {
                return;
              }
              uVar11 = uVar11 << 1;
              bVar9 = uVar11 == 0;
              puVar3 = puVar2;
              if (bVar9) {
                uVar11 = 1;
                puVar3 = puVar2 + 1;
              }
              do {
                uVar6 = puVar2[bVar9];
                if ((uVar11 & (uVar6 ^ 0xffffffff)) == 0) {
                  return;
                }
                while (*puVar3 == uVar6) {
                  cVar7 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(puVar3,0x10);
                  if (bVar8) {
                    *puVar3 = uVar6 | uVar11;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                  if (cVar7 == '\0') {
                    local_8 = param_4;
                    iVar10 = HeapObject::SizeFromMap
                                       ((HeapObject *)&local_8,
                                        param_4 & 0xffffffff00000000 | (ulong)*(uint *)(param_4 - 1)
                                       );
                    plVar1 = (long *)(uVar15 + 0x68);
                    do {
                      cVar7 = '\x01';
                      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                      if (bVar9) {
                        *plVar1 = *plVar1 + (long)iVar10;
                        cVar7 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar7 != '\0');
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
  }
  return;
}

