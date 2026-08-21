
/* v8::internal::Heap::ExternalStringTable::TearDown() */

void __thiscall v8::internal::Heap::ExternalStringTable::TearDown(ExternalStringTable *this)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulong *puVar5;
  long lVar6;
  ulong *puVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong local_38;
  
  puVar1 = *(ulong **)(this + 8);
  puVar5 = *(ulong **)(this + 0x10);
  if (puVar5 != puVar1) {
    uVar11 = 0;
    local_38 = *puVar1;
    puVar7 = puVar5;
    while( true ) {
      puVar5 = puVar1;
      if ((((local_38 & 1) == 0) ||
          (uVar10 = local_38 & 0xffffffff00000000 | 7,
          0x3f < *(ushort *)(uVar10 + *(uint *)(local_38 - 1)))) ||
         ((*(ushort *)(uVar10 + *(uint *)(local_38 - 1)) & 7) != 5)) {
        uVar10 = local_38 & 0xfffffffffffc0000;
        iVar4 = ExternalString::ExternalPayloadSize((ExternalString *)&local_38);
        lVar6 = (long)iVar4;
        plVar8 = (long *)(uVar10 | 0xd0);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = *plVar8 - lVar6;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        lVar9 = *(long *)(uVar10 + 0x58);
        plVar8 = (long *)(*(long *)(lVar9 + 0x30) + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = *plVar8 - lVar6;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        plVar8 = (long *)(*(long *)(lVar9 + 0x40) + 0xa0);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = *plVar8 - lVar6;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (*(long **)(local_38 + 0xb) != (long *)0x0) {
          (**(code **)(**(long **)(local_38 + 0xb) + 0x18))();
          *(undefined8 *)(local_38 + 0xb) = 0;
        }
        puVar5 = *(ulong **)(this + 8);
        puVar7 = *(ulong **)(this + 0x10);
      }
      uVar11 = uVar11 + 1;
      if ((ulong)((long)puVar7 - (long)puVar5 >> 3) <= uVar11) break;
      local_38 = puVar5[uVar11];
      puVar1 = puVar5;
    }
  }
  puVar1 = *(ulong **)(this + 0x20);
  puVar7 = *(ulong **)(this + 0x28);
  *(ulong **)(this + 0x10) = puVar5;
  if (puVar7 != puVar1) {
    uVar11 = 0;
    local_38 = *puVar1;
    puVar5 = puVar7;
    while( true ) {
      puVar7 = puVar1;
      if ((((local_38 & 1) == 0) ||
          (uVar10 = local_38 & 0xffffffff00000000 | 7,
          0x3f < *(ushort *)(uVar10 + *(uint *)(local_38 - 1)))) ||
         ((*(ushort *)(uVar10 + *(uint *)(local_38 - 1)) & 7) != 5)) {
        uVar10 = local_38 & 0xfffffffffffc0000;
        iVar4 = ExternalString::ExternalPayloadSize((ExternalString *)&local_38);
        lVar6 = (long)iVar4;
        plVar8 = (long *)(uVar10 | 0xd0);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = *plVar8 - lVar6;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        lVar9 = *(long *)(uVar10 + 0x58);
        plVar8 = (long *)(*(long *)(lVar9 + 0x30) + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = *plVar8 - lVar6;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        plVar8 = (long *)(*(long *)(lVar9 + 0x40) + 0xa0);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = *plVar8 - lVar6;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (*(long **)(local_38 + 0xb) != (long *)0x0) {
          (**(code **)(**(long **)(local_38 + 0xb) + 0x18))();
          *(undefined8 *)(local_38 + 0xb) = 0;
        }
        puVar7 = *(ulong **)(this + 0x20);
        puVar5 = *(ulong **)(this + 0x28);
      }
      uVar11 = uVar11 + 1;
      if ((ulong)((long)puVar5 - (long)puVar7 >> 3) <= uVar11) break;
      local_38 = puVar7[uVar11];
      puVar1 = puVar7;
    }
  }
  *(ulong **)(this + 0x28) = puVar7;
  return;
}

