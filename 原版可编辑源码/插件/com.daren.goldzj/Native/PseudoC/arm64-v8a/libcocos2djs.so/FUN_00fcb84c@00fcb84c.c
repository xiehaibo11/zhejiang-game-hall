
ulong FUN_00fcb84c(undefined8 param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  uint *puVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong local_18;
  
  uVar4 = *param_2;
  uVar11 = uVar4;
  if ((*(uint *)(uVar4 - 1) & 1) == 0) {
    puVar6 = (uint *)(uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 - 1));
    uVar11 = (long)puVar6 + 1;
    uVar9 = uVar11 & 0xffffffff00000000 | 7;
    if ((*(ushort *)(uVar9 + *puVar6) < 0x40) && ((*(ushort *)(uVar9 + *puVar6) & 7) == 2)) {
      local_18 = uVar11;
      iVar3 = v8::internal::ExternalString::ExternalPayloadSize((ExternalString *)&local_18);
      lVar5 = (long)iVar3;
      plVar7 = (long *)(uVar4 & 0xfffffffffffc0000 | 0xd0);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *plVar7 = *plVar7 - lVar5;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar7 = (long *)((uVar11 & 0xfffffffffffc0000) + 0xd0);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *plVar7 = *plVar7 + lVar5;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      lVar10 = *(long *)((uVar4 & 0xfffffffffffc0000) + 0x58);
      lVar8 = *(long *)((uVar11 & 0xfffffffffffc0000) + 0x58);
      if (lVar10 != lVar8) {
        plVar7 = (long *)(*(long *)(lVar10 + 0x30) + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar2) {
            *plVar7 = *plVar7 - lVar5;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        plVar7 = (long *)(*(long *)(lVar8 + 0x30) + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar2) {
            *plVar7 = *plVar7 + lVar5;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
    }
  }
  return uVar11;
}

