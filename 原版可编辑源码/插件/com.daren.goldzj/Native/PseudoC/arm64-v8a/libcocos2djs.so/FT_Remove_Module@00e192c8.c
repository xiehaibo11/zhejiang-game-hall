
undefined8 FT_Remove_Module(long param_1,long *param_2)

{
  long *plVar1;
  ulong *puVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  undefined8 uVar17;
  
  if (param_1 == 0) {
    uVar7 = 0x21;
  }
  else {
    if (param_2 != (long *)0x0) {
      uVar6 = *(uint *)(param_1 + 0x14);
      if (uVar6 != 0) {
        lVar14 = param_1 + (ulong)uVar6 * 8;
        puVar8 = (undefined8 *)(param_1 + 0x18);
        while ((long *)*puVar8 != param_2) {
          puVar8 = puVar8 + 1;
          if ((undefined8 *)(lVar14 + 0x18) <= puVar8) goto LAB_00e19318;
        }
        puVar10 = (undefined8 *)(lVar14 + 0x10);
        *(uint *)(param_1 + 0x14) = uVar6 - 1;
        if (puVar10 <= puVar8) goto LAB_00e193ac;
        uVar9 = (param_1 + (((ulong)uVar6 * 8 + 0xf) - (long)puVar8) >> 3) + 1;
        if (uVar9 < 4) goto LAB_00e19398;
        puVar12 = puVar8 + 3;
        puVar8 = puVar8 + (uVar9 & 0x1ffffffffffffffc);
        uVar13 = uVar9 & 0x3ffffffffffffffc;
        do {
          uVar7 = puVar12[-2];
          uVar17 = *puVar12;
          uVar13 = uVar13 - 4;
          puVar12[-2] = puVar12[-1];
          puVar12[-3] = uVar7;
          *puVar12 = puVar12[1];
          puVar12[-1] = uVar17;
          puVar12 = puVar12 + 4;
        } while (uVar13 != 0);
        if (uVar9 != (uVar9 & 0x3ffffffffffffffc)) {
LAB_00e19398:
          do {
            puVar12 = puVar8 + 1;
            *puVar8 = *puVar12;
            puVar8 = puVar12;
          } while (puVar12 < puVar10);
        }
LAB_00e193ac:
        *puVar10 = 0;
        puVar2 = (ulong *)*param_2;
        plVar4 = (long *)param_2[1];
        lVar14 = param_2[2];
        if (plVar4 == (long *)0x0) {
          uVar9 = *puVar2;
        }
        else {
          if ((long *)plVar4[0x26] == param_2) {
            plVar4[0x26] = 0;
          }
          uVar9 = *puVar2;
          if ((((uint)uVar9 >> 1 & 1) != 0) &&
             (plVar15 = (long *)plVar4[0x23], plVar15 != (long *)0x0)) {
            lVar16 = *plVar4;
            do {
              if ((long *)plVar15[2] == param_2) {
                if ((*(int *)(param_2[3] + 0x48) == 0x6f75746c) && (param_2[0xd] != 0)) {
                  (**(code **)(*(long *)(param_2[3] + 0x70) + 0x28))();
                }
                lVar11 = *plVar15;
                plVar5 = (long *)plVar15[1];
                plVar1 = plVar4 + 0x23;
                if (lVar11 != 0) {
                  plVar1 = (long *)(lVar11 + 8);
                }
                *plVar1 = (long)plVar5;
                plVar1 = plVar4 + 0x24;
                if (plVar5 != (long *)0x0) {
                  plVar1 = plVar5;
                }
                *plVar1 = lVar11;
                (**(code **)(lVar16 + 0x10))(lVar16,plVar15);
                lVar16 = plVar4[0x23];
                goto joined_r0x00e194e4;
              }
              plVar15 = (long *)plVar15[1];
            } while (plVar15 != (long *)0x0);
          }
        }
        goto joined_r0x00e19400;
      }
    }
LAB_00e19318:
    uVar7 = 0x22;
  }
  return uVar7;
joined_r0x00e194e4:
  if (lVar16 == 0) goto LAB_00e19500;
  lVar11 = *(long *)(lVar16 + 0x10);
  if (*(int *)(lVar11 + 0x20) == 0x6f75746c) goto LAB_00e19504;
  lVar16 = *(long *)(lVar16 + 8);
  goto joined_r0x00e194e4;
LAB_00e19500:
  lVar11 = 0;
LAB_00e19504:
  plVar4[0x25] = lVar11;
  uVar9 = *(ulong *)*param_2;
joined_r0x00e19400:
  if (((uVar9 & 1) != 0) && (lVar16 = param_2[2], lVar16 != 0)) {
    lVar11 = param_2[4];
    while (lVar11 != 0) {
      lVar3 = *(long *)(lVar11 + 8);
      FUN_00e166c8(lVar16,*(undefined8 *)(lVar11 + 0x10),param_2);
      (**(code **)(lVar16 + 0x10))(lVar16,lVar11);
      lVar11 = lVar3;
    }
    param_2[4] = 0;
    param_2[5] = 0;
  }
  if ((code *)puVar2[7] != (code *)0x0) {
    (*(code *)puVar2[7])(param_2);
  }
  (**(code **)(lVar14 + 0x10))(lVar14,param_2);
  return 0;
}

