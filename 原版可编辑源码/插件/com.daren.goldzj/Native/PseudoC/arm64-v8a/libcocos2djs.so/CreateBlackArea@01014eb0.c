
/* v8::internal::Page::CreateBlackArea(unsigned long, unsigned long) */

void __thiscall v8::internal::Page::CreateBlackArea(Page *this,ulong param_1,ulong param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  undefined4 *puVar13;
  
  uVar7 = (int)param_1 - (int)this;
  uVar10 = (uint)((int)param_2 - (int)this) >> 2;
  if (uVar7 >> 2 < uVar10) {
    lVar9 = *(long *)(this + 0x10);
    uVar10 = uVar10 - 1;
    uVar4 = uVar7 >> 7;
    uVar8 = uVar10 >> 5;
    iVar3 = 1 << (ulong)(uVar7 >> 2 & 0x1f);
    uVar10 = (uint)(1L << (uVar10 & 0x1f));
    if (uVar4 == uVar8) {
      uVar10 = uVar10 - iVar3 | uVar10;
      puVar1 = (uint *)(lVar9 + (ulong)uVar4 * 4);
      while (uVar7 = *puVar1, (uVar10 & (uVar7 ^ 0xffffffff)) != 0) {
        while (*puVar1 == uVar7) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = uVar7 | uVar10;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_01014fd4;
        }
        ClearExclusiveLocal();
      }
    }
    else {
      uVar7 = -iVar3;
      puVar1 = (uint *)(lVar9 + (ulong)uVar4 * 4);
      while (uVar2 = *puVar1, (uVar7 & (uVar2 ^ 0xffffffff)) != 0) {
        while (*puVar1 == uVar2) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = uVar2 | uVar7;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_01014f68;
        }
        ClearExclusiveLocal();
      }
LAB_01014f68:
      if (uVar4 + 1 < uVar8) {
        uVar11 = (ulong)(uVar4 + 1) - 1;
        puVar13 = (undefined4 *)(lVar9 + uVar11 * 4);
        lVar12 = ~uVar11 + (ulong)uVar8;
        do {
          puVar13 = puVar13 + 1;
          *puVar13 = 0xffffffff;
          lVar12 = lVar12 + -1;
        } while (lVar12 != 0);
      }
      uVar10 = uVar10 - 1 | uVar10;
      puVar1 = (uint *)(lVar9 + (ulong)uVar8 * 4);
      while (uVar7 = *puVar1, (uVar10 & (uVar7 ^ 0xffffffff)) != 0) {
        while (*puVar1 == uVar7) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = uVar7 | uVar10;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_01014fd4;
        }
        ClearExclusiveLocal();
      }
    }
LAB_01014fd4:
    DataMemoryBarrier(2,3);
  }
  *(ulong *)(this + 0x68) = (param_2 - param_1) + *(long *)(this + 0x68);
  return;
}

