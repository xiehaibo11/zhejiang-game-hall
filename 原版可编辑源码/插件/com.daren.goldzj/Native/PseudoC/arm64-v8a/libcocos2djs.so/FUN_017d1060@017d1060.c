
void FUN_017d1060(long param_1,long param_2,uint *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  Zone *pZVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  
  puVar3 = (undefined8 *)(*(long *)(param_1 + 0x4b8) + (ulong)*(uint *)(param_2 + 4) * 0x10);
  if (puVar3 != *(undefined8 **)(param_1 + 0x4c0)) {
    *(undefined8 **)(param_1 + 0x4c0) = puVar3;
  }
  if (*param_3 != 0) {
    if (*param_3 == 1) {
      if (puVar3 == *(undefined8 **)(param_1 + 0x4c8)) {
        lVar6 = (long)*(undefined8 **)(param_1 + 0x4c8) - *(long *)(param_1 + 0x4b8);
        uVar11 = lVar6 >> 4;
        uVar10 = uVar11 + 1;
        if (uVar10 >> 0x1b != 0) {
LAB_017d12b0:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        uVar7 = lVar6 >> 3;
        if (uVar10 <= uVar7) {
          uVar10 = uVar7;
        }
        if (0x3fffffe < uVar11) {
          uVar10 = 0x7ffffff;
        }
        if (uVar10 == 0) {
          lVar6 = 0;
        }
        else {
          pZVar5 = *(Zone **)(param_1 + 0x4d0);
          uVar7 = uVar10 * 0x10;
          lVar6 = *(long *)(pZVar5 + 0x10);
          if (uVar7 < (ulong)(*(long *)(pZVar5 + 0x18) - lVar6) ||
              uVar7 - (*(long *)(pZVar5 + 0x18) - lVar6) == 0) {
            *(ulong *)(pZVar5 + 0x10) = lVar6 + uVar7;
          }
          else {
            lVar6 = v8::internal::Zone::NewExpand(pZVar5,uVar7);
          }
        }
        uVar12 = *(undefined8 *)(param_3 + 2);
        puVar3 = (undefined8 *)(lVar6 + uVar11 * 0x10);
        puVar3[1] = *(undefined8 *)(param_3 + 4);
        *puVar3 = uVar12;
        lVar8 = *(long *)(param_1 + 0x4b8);
        puVar1 = puVar3;
        for (lVar9 = *(long *)(param_1 + 0x4c0); lVar9 != lVar8; lVar9 = lVar9 + -0x10) {
          uVar12 = *(undefined8 *)(lVar9 + -0x10);
          puVar1[-1] = *(undefined8 *)(lVar9 + -8);
          puVar1[-2] = uVar12;
          puVar1 = puVar1 + -2;
        }
        *(undefined8 **)(param_1 + 0x4b8) = puVar1;
        *(undefined8 **)(param_1 + 0x4c0) = puVar3 + 2;
        *(ulong *)(param_1 + 0x4c8) = lVar6 + uVar10 * 0x10;
      }
      else {
        uVar12 = *(undefined8 *)(param_3 + 2);
        puVar3[1] = *(undefined8 *)(param_3 + 4);
        *puVar3 = uVar12;
        *(long *)(param_1 + 0x4c0) = *(long *)(param_1 + 0x4c0) + 0x10;
      }
    }
    else {
      uVar10 = 0;
      do {
        puVar1 = (undefined8 *)(*(long *)(param_3 + 2) + uVar10 * 0x10);
        if (puVar3 == *(undefined8 **)(param_1 + 0x4c8)) {
          lVar6 = (long)*(undefined8 **)(param_1 + 0x4c8) - *(long *)(param_1 + 0x4b8);
          uVar7 = lVar6 >> 4;
          uVar11 = uVar7 + 1;
          if (uVar11 >> 0x1b != 0) goto LAB_017d12b0;
          uVar4 = lVar6 >> 3;
          if (uVar11 <= uVar4) {
            uVar11 = uVar4;
          }
          if (0x3fffffe < uVar7) {
            uVar11 = 0x7ffffff;
          }
          if (uVar11 == 0) {
            lVar6 = 0;
          }
          else {
            pZVar5 = *(Zone **)(param_1 + 0x4d0);
            uVar4 = uVar11 * 0x10;
            lVar6 = *(long *)(pZVar5 + 0x10);
            if (uVar4 < (ulong)(*(long *)(pZVar5 + 0x18) - lVar6) ||
                uVar4 - (*(long *)(pZVar5 + 0x18) - lVar6) == 0) {
              *(ulong *)(pZVar5 + 0x10) = lVar6 + uVar4;
            }
            else {
              lVar6 = v8::internal::Zone::NewExpand(pZVar5,uVar4);
            }
          }
          uVar12 = *puVar1;
          puVar2 = (undefined8 *)(lVar6 + uVar7 * 0x10);
          puVar3 = puVar2 + 2;
          puVar2[1] = puVar1[1];
          *puVar2 = uVar12;
          lVar8 = *(long *)(param_1 + 0x4b8);
          for (lVar9 = *(long *)(param_1 + 0x4c0); lVar9 != lVar8; lVar9 = lVar9 + -0x10) {
            uVar12 = *(undefined8 *)(lVar9 + -0x10);
            puVar2[-1] = *(undefined8 *)(lVar9 + -8);
            puVar2[-2] = uVar12;
            puVar2 = puVar2 + -2;
          }
          *(undefined8 **)(param_1 + 0x4b8) = puVar2;
          *(undefined8 **)(param_1 + 0x4c0) = puVar3;
          *(ulong *)(param_1 + 0x4c8) = lVar6 + uVar11 * 0x10;
        }
        else {
          uVar12 = *puVar1;
          puVar3[1] = puVar1[1];
          *puVar3 = uVar12;
          puVar3 = (undefined8 *)(*(long *)(param_1 + 0x4c0) + 0x10);
          *(undefined8 **)(param_1 + 0x4c0) = puVar3;
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < *param_3);
    }
  }
  return;
}

