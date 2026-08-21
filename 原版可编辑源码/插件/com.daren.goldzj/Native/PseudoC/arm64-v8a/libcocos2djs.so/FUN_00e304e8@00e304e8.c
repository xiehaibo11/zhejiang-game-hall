
void FUN_00e304e8(long param_1,uint param_2,long param_3,long param_4)

{
  long lVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ushort *puVar8;
  uint *puVar9;
  uint uVar10;
  ulong uVar11;
  long *plVar12;
  
  puVar9 = *(uint **)(param_1 + 0x18);
  uVar3 = *puVar9;
  uVar4 = uVar3;
  if (param_2 <= uVar3) {
    uVar4 = param_2;
  }
  if (uVar4 == 0) {
    uVar10 = 0;
    if (uVar3 == 0) goto LAB_00e305e0;
  }
  else {
    uVar11 = 0;
    uVar10 = uVar3;
    if (param_2 <= uVar3) {
      uVar10 = param_2;
    }
    plVar12 = (long *)(*(long *)(puVar9 + 4) + 0x10);
    do {
      lVar6 = *(long *)(param_3 + uVar11 * 8);
      lVar5 = plVar12[1];
      if (lVar5 < lVar6) {
        lVar7 = *plVar12;
        bVar2 = SBORROW8(lVar5,lVar7);
        lVar6 = lVar5 - lVar7;
        if (lVar5 < lVar7) goto LAB_00e30558;
LAB_00e30584:
        if (lVar6 == 0 || lVar6 < 0 != bVar2) {
          lVar5 = 0;
        }
        else {
          lVar5 = FT_DivFix(lVar6,lVar5 - lVar7);
        }
      }
      else {
        lVar1 = plVar12[-1];
        if (plVar12[-1] <= lVar6) {
          lVar1 = lVar6;
        }
        lVar7 = *plVar12;
        bVar2 = SBORROW8(lVar1,lVar7);
        lVar6 = lVar1 - lVar7;
        if (lVar7 <= lVar1) goto LAB_00e30584;
LAB_00e30558:
        lVar5 = FT_DivFix(lVar6,plVar12[-1] - lVar7);
        lVar5 = -lVar5;
      }
      *(long *)(param_4 + uVar11 * 8) = lVar5;
      uVar11 = uVar11 + 1;
      plVar12 = plVar12 + 6;
    } while (uVar11 < uVar4);
    uVar3 = *puVar9;
    if (uVar3 <= uVar10) goto LAB_00e305e0;
  }
  if (uVar3 <= uVar10 + 1) {
    uVar3 = uVar10 + 1;
  }
  memset((void *)(param_4 + (ulong)uVar10 * 8),0,(ulong)(uVar3 + ~uVar10) * 8 + 8);
LAB_00e305e0:
  puVar8 = *(ushort **)(param_1 + 0x38);
  if ((puVar8 != (ushort *)0x0) && (uVar4 = *puVar9, uVar4 != 0)) {
    uVar11 = 0;
LAB_00e305f4:
    do {
      if (1 < *puVar8) {
        lVar6 = *(long *)(param_4 + uVar11 * 8);
        lVar5 = 0;
        uVar3 = 1;
        do {
          plVar12 = (long *)(*(long *)(puVar8 + 4) + lVar5);
          if (lVar6 < plVar12[2]) {
            lVar6 = FT_MulDiv(lVar6 - *plVar12,plVar12[3] - plVar12[1],plVar12[2] - *plVar12);
            *(long *)(param_4 + uVar11 * 8) = *(long *)(*(long *)(puVar8 + 4) + lVar5 + 8) + lVar6;
            uVar4 = *puVar9;
            uVar11 = uVar11 + 1;
            puVar8 = puVar8 + 8;
            if (uVar4 <= uVar11) {
              return;
            }
            goto LAB_00e305f4;
          }
          uVar3 = uVar3 + 1;
          lVar5 = lVar5 + 0x10;
        } while (uVar3 < *puVar8);
      }
      uVar11 = uVar11 + 1;
      puVar8 = puVar8 + 8;
    } while (uVar11 < uVar4);
  }
  return;
}

