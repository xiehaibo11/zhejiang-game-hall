
undefined8 FT_Remove_Module(long param_1,long *param_2)

{
  long *plVar1;
  ulong *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  
  if (param_1 == 0) {
    uVar5 = 0x21;
  }
  else {
    if (param_2 != (long *)0x0) {
      uVar6 = *(uint *)(param_1 + 0x14);
      if (uVar6 != 0) {
        lVar14 = param_1 + (ulong)uVar6 * 8;
                    /* catch() { ... } // from try @ 01060518 with catch @ 01060584 */
        puVar7 = (undefined8 *)(param_1 + 0x18);
        while ((long *)*puVar7 != param_2) {
          puVar7 = puVar7 + 1;
          if ((undefined8 *)(lVar14 + 0x18) <= puVar7) goto LAB_010605a0;
        }
        puVar9 = (undefined8 *)(lVar14 + 0x10);
        *(uint *)(param_1 + 0x14) = uVar6 - 1;
        if (puVar9 <= puVar7) goto LAB_01060638;
        uVar8 = (param_1 + (((ulong)uVar6 * 8 + 0xf) - (long)puVar7) >> 3) + 1;
        if ((uVar8 < 4) || (uVar11 = uVar8 & 0x3ffffffffffffffc, uVar11 == 0)) goto LAB_01060624;
        puVar12 = puVar7 + 3;
        puVar7 = puVar7 + (uVar8 & 0x1ffffffffffffffc);
        uVar13 = uVar11;
        do {
          uVar5 = puVar12[-2];
          uVar19 = *puVar12;
          uVar13 = uVar13 - 4;
          puVar12[-2] = puVar12[-1];
          puVar12[-3] = uVar5;
          *puVar12 = puVar12[1];
          puVar12[-1] = uVar19;
          puVar12 = puVar12 + 4;
        } while (uVar13 != 0);
        if (uVar8 != uVar11) {
LAB_01060624:
          do {
            puVar12 = puVar7 + 1;
            *puVar7 = *puVar12;
            puVar7 = puVar12;
          } while (puVar12 < puVar9);
        }
LAB_01060638:
        *puVar9 = 0;
        puVar2 = (ulong *)*param_2;
        plVar16 = (long *)param_2[1];
        lVar14 = param_2[2];
        puVar10 = puVar2;
        if (plVar16 == (long *)0x0) {
          uVar8 = *puVar2;
          uVar6 = (uint)uVar8;
        }
        else {
          if ((long *)plVar16[0x26] == param_2) {
            plVar16[0x26] = 0;
          }
          uVar8 = *puVar2;
          uVar6 = (uint)uVar8;
          if (((uVar6 >> 1 & 1) != 0) && (plVar15 = (long *)plVar16[0x23], plVar15 != (long *)0x0))
          {
            lVar17 = *plVar16;
            do {
              if ((long *)plVar15[2] == param_2) {
                if ((*(int *)(param_2[3] + 0x48) == 0x6f75746c) && (param_2[0xd] != 0)) {
                  (**(code **)(*(long *)(param_2[3] + 0x70) + 0x28))();
                }
                lVar18 = *plVar15;
                plVar4 = (long *)plVar15[1];
                plVar1 = (long *)(lVar18 + 8);
                if (lVar18 == 0) {
                  plVar1 = plVar16 + 0x23;
                }
                *plVar1 = (long)plVar4;
                if (plVar4 == (long *)0x0) {
                  plVar4 = plVar16 + 0x24;
                }
                *plVar4 = lVar18;
                (**(code **)(lVar17 + 0x10))(lVar17,plVar15);
                lVar17 = plVar16[0x23];
                goto joined_r0x01060704;
              }
              plVar15 = (long *)plVar15[1];
            } while (plVar15 != (long *)0x0);
          }
        }
        goto joined_r0x01060730;
      }
    }
LAB_010605a0:
                    /* try { // try from 010605a0 to 0116070b has its CatchHandler @ 010605a0
                       catch() { ... } // from try @ 010605a0 with catch @ 010605a0
                       catch() { ... } // from try @ 01060724 with catch @ 010605a0 */
    uVar5 = 0x22;
  }
  return uVar5;
joined_r0x01060704:
  if (lVar17 == 0) goto LAB_01060720;
  lVar18 = *(long *)(lVar17 + 0x10);
                    /* try { // try from 0106070c to 01160723 has its CatchHandler @ 010607b4 */
  if (*(int *)(lVar18 + 0x20) == 0x6f75746c) goto LAB_01060724;
  lVar17 = *(long *)(lVar17 + 8);
  goto joined_r0x01060704;
LAB_01060720:
  lVar18 = 0;
LAB_01060724:
                    /* try { // try from 01060724 to 011607ef has its CatchHandler @ 010605a0 */
  plVar16[0x25] = lVar18;
  uVar8 = *(ulong *)*param_2;
  uVar6 = (uint)uVar8;
  puVar10 = (ulong *)*param_2;
joined_r0x01060730:
  if ((uVar8 & 1) != 0) {
    lVar17 = param_2[2];
    if (lVar17 != 0) {
      lVar18 = param_2[4];
      if (lVar18 != 0) {
        do {
          lVar3 = *(long *)(lVar18 + 8);
          FUN_0105db48(lVar17,*(undefined8 *)(lVar18 + 0x10),param_2);
          (**(code **)(lVar17 + 0x10))(lVar17,lVar18);
          lVar18 = lVar3;
        } while (lVar3 != 0);
        puVar10 = (ulong *)*param_2;
      }
      param_2[4] = 0;
      param_2[5] = 0;
      uVar6 = (uint)*puVar10;
    }
    if (((uVar6 >> 9 & 1) == 0) && (plVar16 = (long *)param_2[6], plVar16 != (long *)0x0)) {
      lVar17 = *plVar16;
      if (plVar16[4] != 0) {
        (**(code **)(lVar17 + 0x10))(lVar17);
      }
      plVar16[4] = 0;
      if (plVar16[5] != 0) {
                    /* catch() { ... } // from try @ 0106070c with catch @ 010607b4 */
        (**(code **)(lVar17 + 0x10))(lVar17);
      }
      plVar16[5] = 0;
      if (plVar16[6] != 0) {
        (**(code **)(lVar17 + 0x10))(lVar17);
      }
      plVar16[6] = 0;
      if (plVar16[8] != 0) {
        (**(code **)(lVar17 + 0x10))(lVar17);
      }
      plVar16[8] = 0;
      if (plVar16[0xb] != 0) {
        (**(code **)(lVar17 + 0x10))(lVar17);
      }
      plVar16[0xb] = 0;
      plVar16[9] = 0;
      plVar16[1] = 0;
      *(undefined4 *)(plVar16 + 2) = 0;
      *(undefined4 *)(plVar16 + 3) = 0;
      *(undefined4 *)(plVar16 + 10) = 0;
      memcpy(plVar16 + 0xc,plVar16 + 3,0x48);
      (**(code **)(lVar17 + 0x10))(lVar17,plVar16);
    }
  }
  if ((code *)puVar2[7] != (code *)0x0) {
    (*(code *)puVar2[7])(param_2);
  }
  (**(code **)(lVar14 + 0x10))(lVar14,param_2);
  return 0;
}

