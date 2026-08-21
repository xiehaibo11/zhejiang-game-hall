
/* v8::internal::Heap::UpdateYoungReferenceInExternalStringTableEntry(v8::internal::Heap*,
   v8::internal::FullObjectSlot) */

ulong v8::internal::Heap::UpdateYoungReferenceInExternalStringTableEntry
                (undefined8 param_1,ulong *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  uint *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong local_18;
  
  uVar9 = *param_2;
  uVar10 = uVar9 & 0xfffffffffffc0000;
  uVar7 = uVar9 & 0xffffffff00000000;
  puVar5 = (uint *)(uVar9 - 1);
  if ((*(byte *)(uVar10 + 8) >> 3 & 1) != 0) {
    if ((*(uint *)(uVar9 - 1) & 1) != 0) {
      if (0x3f < *(ushort *)((uVar7 | 7) + (ulong)*puVar5)) {
        return 0;
      }
      if ((*(ushort *)((uVar7 | 7) + (ulong)*puVar5) & 7) != 2) {
        return 0;
      }
      local_18 = uVar9;
      iVar4 = ExternalString::ExternalPayloadSize((ExternalString *)&local_18);
      lVar6 = (long)iVar4;
      plVar1 = (long *)(uVar10 + 0xd0);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 - lVar6;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar8 = *(long *)(uVar10 + 0x58);
      plVar1 = (long *)(*(long *)(lVar8 + 0x30) + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 - lVar6;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = (long *)(*(long *)(lVar8 + 0x40) + 0xa0);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 - lVar6;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (*(long **)(local_18 + 0xb) == (long *)0x0) {
        return 0;
      }
      (**(code **)(**(long **)(local_18 + 0xb) + 0x18))();
      *(undefined8 *)(local_18 + 0xb) = 0;
      return 0;
    }
    puVar5 = (uint *)(uVar7 | *(uint *)(uVar9 - 1));
    uVar9 = (long)puVar5 + 1;
    uVar7 = uVar9 & 0xffffffff00000000;
  }
  uVar7 = uVar7 | 7;
  if ((0x3f < *(ushort *)(uVar7 + *puVar5)) || ((*(ushort *)(uVar7 + *puVar5) & 7) != 5)) {
    if ((*(ushort *)(uVar7 + *puVar5) < 0x40) && ((*(ushort *)(uVar7 + *puVar5) & 7) == 2)) {
      local_18 = uVar9;
      iVar4 = ExternalString::ExternalPayloadSize((ExternalString *)&local_18);
      lVar6 = (long)iVar4;
      plVar1 = (long *)(uVar10 + 0xd0);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 - lVar6;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = (long *)((uVar9 & 0xfffffffffffc0000) + 0xd0);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + lVar6;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar8 = *(long *)((uVar9 & 0xfffffffffffc0000) + 0x58);
      if (*(long *)(uVar10 + 0x58) != lVar8) {
        plVar1 = (long *)(*(long *)(*(long *)(uVar10 + 0x58) + 0x30) + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 - lVar6;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        plVar1 = (long *)(*(long *)(lVar8 + 0x30) + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + lVar6;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        return uVar9;
      }
      return uVar9;
    }
    if ((*(ushort *)(uVar7 + *puVar5) < 0x40) && ((*(ushort *)(uVar7 + *puVar5) & 7) == 2)) {
      return uVar9;
    }
  }
  return 0;
}

