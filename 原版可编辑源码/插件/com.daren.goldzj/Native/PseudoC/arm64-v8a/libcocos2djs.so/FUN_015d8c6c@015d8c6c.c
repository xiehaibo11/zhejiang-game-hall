
void FUN_015d8c6c(long param_1,long param_2,uint *param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  Zone *pZVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  puVar4 = (undefined8 *)(*(long *)(param_1 + 0xb0) + (ulong)*(uint *)(param_2 + 4) * 0x18);
  if (puVar4 != *(undefined8 **)(param_1 + 0xb8)) {
    *(undefined8 **)(param_1 + 0xb8) = puVar4;
  }
  if (*param_3 != 0) {
    if (*param_3 == 1) {
      if (puVar4 == *(undefined8 **)(param_1 + 0xc0)) {
        lVar6 = (long)*(undefined8 **)(param_1 + 0xc0) - *(long *)(param_1 + 0xb0) >> 3;
        uVar10 = lVar6 * -0x5555555555555555 + 1;
        if (0x5555555 < uVar10) {
LAB_015d8f24:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if (uVar10 <= (ulong)(lVar6 * 0x5555555555555556)) {
          uVar10 = lVar6 * 0x5555555555555556;
        }
        if (0x2aaaaa9 < (ulong)(lVar6 * -0x5555555555555555)) {
          uVar10 = 0x5555555;
        }
        if (uVar10 == 0) {
          lVar1 = 0;
        }
        else {
          pZVar5 = *(Zone **)(param_1 + 200);
          uVar3 = uVar10 * 0x18;
          lVar1 = *(long *)(pZVar5 + 0x10);
          if (uVar3 < (ulong)(*(long *)(pZVar5 + 0x18) - lVar1) ||
              uVar3 - (*(long *)(pZVar5 + 0x18) - lVar1) == 0) {
            *(ulong *)(pZVar5 + 0x10) = lVar1 + uVar3;
          }
          else {
            lVar1 = v8::internal::Zone::NewExpand(pZVar5,uVar3);
          }
        }
        uVar12 = *(undefined8 *)(param_3 + 4);
        uVar11 = *(undefined8 *)(param_3 + 2);
        puVar7 = (undefined8 *)(lVar1 + lVar6 * 8);
        puVar7[2] = *(undefined8 *)(param_3 + 6);
        puVar7[1] = uVar12;
        *puVar7 = uVar11;
        lVar6 = *(long *)(param_1 + 0xb0);
        puVar4 = puVar7;
        for (lVar9 = *(long *)(param_1 + 0xb8); lVar9 != lVar6; lVar9 = lVar9 + -0x18) {
          uVar12 = *(undefined8 *)(lVar9 + -0x10);
          uVar11 = *(undefined8 *)(lVar9 + -0x18);
          puVar4[-1] = *(undefined8 *)(lVar9 + -8);
          puVar4[-2] = uVar12;
          puVar4[-3] = uVar11;
          puVar4 = puVar4 + -3;
        }
        *(undefined8 **)(param_1 + 0xb0) = puVar4;
        *(undefined8 **)(param_1 + 0xb8) = puVar7 + 3;
        *(ulong *)(param_1 + 0xc0) = lVar1 + uVar10 * 0x18;
      }
      else {
        uVar12 = *(undefined8 *)(param_3 + 4);
        uVar11 = *(undefined8 *)(param_3 + 2);
        puVar4[2] = *(undefined8 *)(param_3 + 6);
        puVar4[1] = uVar12;
        *puVar4 = uVar11;
        *(long *)(param_1 + 0xb8) = *(long *)(param_1 + 0xb8) + 0x18;
      }
    }
    else {
      uVar10 = 0;
      do {
        puVar7 = (undefined8 *)(*(long *)(param_3 + 2) + uVar10 * 0x18);
        if (puVar4 == *(undefined8 **)(param_1 + 0xc0)) {
          lVar6 = (long)*(undefined8 **)(param_1 + 0xc0) - *(long *)(param_1 + 0xb0) >> 3;
          uVar3 = lVar6 * -0x5555555555555555 + 1;
          if (0x5555555 < uVar3) goto LAB_015d8f24;
          if (uVar3 <= (ulong)(lVar6 * 0x5555555555555556)) {
            uVar3 = lVar6 * 0x5555555555555556;
          }
          if (0x2aaaaa9 < (ulong)(lVar6 * -0x5555555555555555)) {
            uVar3 = 0x5555555;
          }
          if (uVar3 == 0) {
            lVar1 = 0;
          }
          else {
            pZVar5 = *(Zone **)(param_1 + 200);
            uVar2 = uVar3 * 0x18;
            lVar1 = *(long *)(pZVar5 + 0x10);
            if (uVar2 < (ulong)(*(long *)(pZVar5 + 0x18) - lVar1) ||
                uVar2 - (*(long *)(pZVar5 + 0x18) - lVar1) == 0) {
              *(ulong *)(pZVar5 + 0x10) = lVar1 + uVar2;
            }
            else {
              lVar1 = v8::internal::Zone::NewExpand(pZVar5,uVar2);
            }
          }
          uVar12 = puVar7[1];
          uVar11 = *puVar7;
          puVar8 = (undefined8 *)(lVar1 + lVar6 * 8);
          puVar8[2] = puVar7[2];
          puVar8[1] = uVar12;
          *puVar8 = uVar11;
          lVar6 = *(long *)(param_1 + 0xb0);
          puVar4 = puVar8 + 3;
          for (lVar9 = *(long *)(param_1 + 0xb8); lVar9 != lVar6; lVar9 = lVar9 + -0x18) {
            uVar12 = *(undefined8 *)(lVar9 + -0x10);
            uVar11 = *(undefined8 *)(lVar9 + -0x18);
            puVar8[-1] = *(undefined8 *)(lVar9 + -8);
            puVar8[-2] = uVar12;
            puVar8[-3] = uVar11;
            puVar8 = puVar8 + -3;
          }
          *(undefined8 **)(param_1 + 0xb0) = puVar8;
          *(undefined8 **)(param_1 + 0xb8) = puVar4;
          *(ulong *)(param_1 + 0xc0) = lVar1 + uVar3 * 0x18;
        }
        else {
          uVar12 = puVar7[1];
          uVar11 = *puVar7;
          puVar4[2] = puVar7[2];
          puVar4[1] = uVar12;
          *puVar4 = uVar11;
          puVar4 = (undefined8 *)(*(long *)(param_1 + 0xb8) + 0x18);
          *(undefined8 **)(param_1 + 0xb8) = puVar4;
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < *param_3);
    }
  }
  return;
}

