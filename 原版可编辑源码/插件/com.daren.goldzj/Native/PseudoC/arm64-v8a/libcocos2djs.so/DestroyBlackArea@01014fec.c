
/* v8::internal::Page::DestroyBlackArea(unsigned long, unsigned long) */

void __thiscall v8::internal::Page::DestroyBlackArea(Page *this,ulong param_1,ulong param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined4 *puVar12;
  
  uVar8 = (int)param_1 - (int)this;
  uVar3 = (uint)((int)param_2 - (int)this) >> 2;
  if (uVar8 >> 2 < uVar3) {
    lVar9 = *(long *)(this + 0x10);
    uVar3 = uVar3 - 1;
    uVar4 = uVar8 >> 7;
    uVar5 = uVar3 >> 5;
    iVar2 = 1 << (ulong)(uVar8 >> 2 & 0x1f);
    uVar3 = 1 << (ulong)(uVar3 & 0x1f);
    if (uVar4 == uVar5) {
      uVar3 = uVar3 - iVar2 | uVar3;
      puVar1 = (uint *)(lVar9 + (ulong)uVar4 * 4);
      while (uVar8 = *puVar1, (uVar8 & uVar3) != 0) {
        while (*puVar1 == uVar8) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar7) {
            *puVar1 = uVar8 & ~uVar3;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_0101511c;
        }
        ClearExclusiveLocal();
      }
    }
    else {
      puVar1 = (uint *)(lVar9 + (ulong)uVar4 * 4);
      while (uVar8 = *puVar1, (uVar8 & -iVar2) != 0) {
        while (*puVar1 == uVar8) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar7) {
            *puVar1 = uVar8 & iVar2 - 1U;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_010150ac;
        }
        ClearExclusiveLocal();
      }
LAB_010150ac:
      if (uVar4 + 1 < uVar5) {
        uVar10 = (ulong)(uVar4 + 1) - 1;
        puVar12 = (undefined4 *)(lVar9 + uVar10 * 4);
        lVar11 = ~uVar10 + (ulong)uVar5;
        do {
          puVar12 = puVar12 + 1;
          *puVar12 = 0;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
      }
      uVar3 = uVar3 - 1 | uVar3;
      puVar1 = (uint *)(lVar9 + (ulong)uVar5 * 4);
      while (uVar8 = *puVar1, (uVar8 & uVar3) != 0) {
        while (*puVar1 == uVar8) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar7) {
            *puVar1 = uVar8 & ~uVar3;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_0101511c;
        }
        ClearExclusiveLocal();
      }
    }
LAB_0101511c:
    DataMemoryBarrier(2,3);
  }
  *(ulong *)(this + 0x68) = (param_1 - param_2) + *(long *)(this + 0x68);
  return;
}

