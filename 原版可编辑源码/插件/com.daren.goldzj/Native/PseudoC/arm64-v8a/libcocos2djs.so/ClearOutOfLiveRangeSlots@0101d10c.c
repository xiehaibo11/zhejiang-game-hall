
/* v8::internal::LargePage::ClearOutOfLiveRangeSlots(unsigned long) */

void __thiscall v8::internal::LargePage::ClearOutOfLiveRangeSlots(LargePage *this,ulong param_1)

{
  ulong uVar1;
  long *plVar2;
  uint *puVar3;
  bool bVar4;
  bool bVar5;
  void *pvVar6;
  uint *puVar7;
  int iVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  
  iVar8 = (int)this;
  if (*(SlotSet **)(this + 0x30) != (SlotSet *)0x0) {
    SlotSet::RemoveRange
              (*(SlotSet **)(this + 0x30),(long)((int)param_1 - iVar8),
               (long)((int)*(undefined8 *)(this + 0x28) - iVar8),*(long *)this + 0xfffU >> 0xc,0);
  }
  if (*(SlotSet **)(this + 0x38) != (SlotSet *)0x0) {
    SlotSet::RemoveRange
              (*(SlotSet **)(this + 0x38),(long)((int)param_1 - iVar8),
               (long)((int)*(undefined8 *)(this + 0x28) - iVar8),*(long *)this + 0xfffU >> 0xc,0);
  }
  uVar11 = *(ulong *)(this + 0x28);
  lVar12 = *(long *)(this + 0x78);
  if (lVar12 != 0) {
    plVar10 = *(long **)(lVar12 + 8);
    if (plVar10 != (long *)0x0) {
      plVar13 = (long *)0x0;
      do {
        while( true ) {
          plVar9 = plVar10;
          puVar7 = (uint *)plVar9[1];
          puVar3 = (uint *)plVar9[2];
          if (puVar7 != puVar3) break;
          plVar10 = (long *)*plVar9;
LAB_0101d23c:
          plVar2 = (long *)(lVar12 + 8);
          if (plVar13 != (long *)0x0) {
            plVar2 = plVar13;
          }
          *plVar2 = (long)plVar10;
          pvVar6 = (void *)plVar9[1];
          if (pvVar6 != (void *)0x0) {
            plVar9[2] = (long)pvVar6;
            operator_delete(pvVar6);
          }
          operator_delete(plVar9);
          if (plVar10 == (long *)0x0) goto LAB_0101d268;
        }
        bVar5 = true;
        do {
          bVar4 = bVar5;
          if ((*puVar7 & 0xe0000000) != 0xa0000000) {
            uVar1 = *(long *)(lVar12 + 0x18) + ((ulong)*puVar7 & 0x1fffffff);
            bVar4 = false;
            if ((param_1 <= uVar1) && (uVar1 < uVar11)) {
              *puVar7 = 0xa0000000;
              bVar4 = bVar5;
            }
          }
          puVar7 = puVar7 + 1;
          bVar5 = bVar4;
        } while (puVar3 != puVar7);
        plVar10 = (long *)*plVar9;
        if (bVar4) goto LAB_0101d23c;
        plVar13 = plVar9;
      } while (plVar10 != (long *)0x0);
    }
  }
LAB_0101d268:
  uVar11 = *(ulong *)(this + 0x28);
  lVar12 = *(long *)(this + 0x80);
  if (lVar12 != 0) {
    plVar10 = *(long **)(lVar12 + 8);
    if (plVar10 != (long *)0x0) {
      plVar13 = (long *)0x0;
      do {
        while( true ) {
          plVar9 = plVar10;
          puVar7 = (uint *)plVar9[1];
          puVar3 = (uint *)plVar9[2];
          if (puVar7 != puVar3) break;
          plVar10 = (long *)*plVar9;
LAB_0101d30c:
          plVar2 = (long *)(lVar12 + 8);
          if (plVar13 != (long *)0x0) {
            plVar2 = plVar13;
          }
          *plVar2 = (long)plVar10;
          pvVar6 = (void *)plVar9[1];
          if (pvVar6 != (void *)0x0) {
            plVar9[2] = (long)pvVar6;
            operator_delete(pvVar6);
          }
          operator_delete(plVar9);
          if (plVar10 == (long *)0x0) {
            return;
          }
        }
        bVar5 = true;
        do {
          bVar4 = bVar5;
          if ((*puVar7 & 0xe0000000) != 0xa0000000) {
            uVar1 = *(long *)(lVar12 + 0x18) + ((ulong)*puVar7 & 0x1fffffff);
            bVar4 = false;
            if ((param_1 <= uVar1) && (uVar1 < uVar11)) {
              *puVar7 = 0xa0000000;
              bVar4 = bVar5;
            }
          }
          puVar7 = puVar7 + 1;
          bVar5 = bVar4;
        } while (puVar3 != puVar7);
        plVar10 = (long *)*plVar9;
        if (bVar4) goto LAB_0101d30c;
        plVar13 = plVar9;
      } while (plVar10 != (long *)0x0);
    }
  }
  return;
}

