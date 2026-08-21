
void FUN_00fdfd94(long param_1,undefined8 param_2,undefined8 param_3,ulong *param_4,ulong *param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong local_28;
  
  if (param_4 < param_5) {
    local_28 = *param_4;
    while( true ) {
      if (((local_28 & 1) != 0) &&
         (uVar8 = local_28 & 0xfffffffffffc0000,
         (*(uint *)(*(long *)(uVar8 + 0x108) + (local_28 - uVar8 >> 7 & 0x1ffffff) * 4) >>
          (ulong)((uint)(local_28 - uVar8 >> 2) & 0x1f) & 1) == 0)) {
        uVar6 = local_28 & 0xffffffff00000000 | 7;
        if ((*(ushort *)(uVar6 + *(uint *)(local_28 - 1)) < 0x40) &&
           ((*(ushort *)(uVar6 + *(uint *)(local_28 - 1)) & 7) == 2)) {
          iVar4 = v8::internal::ExternalString::ExternalPayloadSize((ExternalString *)&local_28);
          lVar5 = (long)iVar4;
          plVar1 = (long *)(uVar8 + 0xd0);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = *plVar1 - lVar5;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          lVar7 = *(long *)(uVar8 + 0x58);
          plVar1 = (long *)(*(long *)(lVar7 + 0x30) + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = *plVar1 - lVar5;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          plVar1 = (long *)(*(long *)(lVar7 + 0x40) + 0xa0);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = *plVar1 - lVar5;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (*(long **)(local_28 + 0xb) != (long *)0x0) {
            (**(code **)(**(long **)(local_28 + 0xb) + 0x18))();
            *(undefined8 *)(local_28 + 0xb) = 0;
          }
        }
        *param_4 = *(ulong *)(*(long *)(param_1 + 8) + -0x87a8);
      }
      param_4 = param_4 + 1;
      if (param_5 <= param_4) break;
      local_28 = *param_4;
    }
  }
  return;
}

