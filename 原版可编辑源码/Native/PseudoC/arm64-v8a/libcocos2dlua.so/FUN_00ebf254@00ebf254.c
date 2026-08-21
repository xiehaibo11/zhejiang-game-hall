
void FUN_00ebf254(byte *param_1,long param_2,undefined4 *param_3,long param_4,long param_5,
                 undefined8 param_6,int param_7)

{
  long lVar1;
  int iVar2;
  byte bVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  bool bVar10;
  uint *puVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  long lVar19;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 local_80;
  long local_70;
  
                    /* try { // try from 00ebf260 to 00fbf267 has its CatchHandler @ 00ebf35c */
                    /* try { // try from 00ebf268 to 00fbf28b has its CatchHandler @ 00ebf1f8 */
  lVar9 = tpidr_el0;
  local_70 = *(long *)(lVar9 + 0x28);
  if (param_2 < 1) {
LAB_00ebf5d0:
    uVar4 = 1;
  }
  else {
                    /* try { // try from 00ebf28c to 00fbf297 has its CatchHandler @ 00ebf35c */
    if (param_2 != 1) {
                    /* try { // try from 00ebf2e8 to 00fbf2ef has its CatchHandler @ 00ebf358 */
      lVar12 = 0;
      lVar19 = 0;
                    /* try { // try from 00ebf2f0 to 00fbf30f has its CatchHandler @ 00ebf1f8 */
      lVar13 = 0;
      local_80 = 0;
      uStack_98 = 0;
      local_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_b8 = 0;
      local_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
                    /* try { // try from 00ebf310 to 00fbf31b has its CatchHandler @ 00ebf358 */
      uStack_d8 = 0;
      local_e0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_f8 = 0;
      local_100 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      bVar3 = *param_1;
      do {
        uVar7 = (ulong)bVar3;
                    /* try { // try from 00ebf31c to 00fbf35f has its CatchHandler @ 00ebf1f8 */
        if (uVar7 != 0) {
          uVar18 = (uint)bVar3;
          if (0x20 < uVar18) goto LAB_00ebf5d0;
          uVar17 = *(uint *)((long)&local_100 + uVar7 * 4);
          if ((lVar13 != 0) && (uVar17 == 0)) {
            uVar4 = 0xffffffff;
            goto LAB_00ebf5d4;
          }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ebf2c0 with catch @ 00ebf358
                       catch(type#1 @ 00000000) { ... } // from try @ 00ebf2e8 with catch @ 00ebf358
                       catch(type#1 @ 00000000) { ... } // from try @ 00ebf310 with catch @ 00ebf358
                        */
          bVar10 = 0 < lVar19;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ebf260 with catch @ 00ebf35c
                       catch(type#1 @ 00000000) { ... } // from try @ 00ebf28c with catch @ 00ebf35c
                        */
                    /* try { // try from 00ebf360 to 00fbf3bb has its CatchHandler @ 00ebf360
                       catch(type#1 @ 00000000) { ... } // from try @ 00ebf360 with catch @ 00ebf360
                       catch(type#1 @ 00000000) { ... } // from try @ 00ebf3c4 with catch @ 00ebf360
                       catch(type#1 @ 00000000) { ... } // from try @ 00ebf454 with catch @ 00ebf360
                        */
          uVar14 = (ulong)(uVar17 >> (ulong)(uVar18 - 1 & 0x1f) & 1);
          uVar15 = 0;
          if (0 < (long)(uVar7 - 1)) {
            uVar8 = 1;
            do {
              if (bVar10) {
                if ((param_2 <= (long)uVar15) ||
                   (uVar14 = uVar14 | uVar15 << 1, (long)(param_2 << 1 | 1U) < (long)uVar14))
                goto LAB_00ebf5d0;
                uVar6 = param_3[uVar14];
              }
              else {
                if (param_2 <= (long)uVar15) goto LAB_00ebf5d0;
                lVar19 = lVar19 + 1;
                param_3[uVar15 * 2] = (int)lVar19;
                *(undefined4 *)((long)param_3 + (uVar15 << 3 | 4)) = 0;
                uVar14 = uVar14 | uVar15 << 1;
                uVar6 = param_3[uVar14];
              }
              if (uVar6 == 0) {
                uVar6 = (uint)lVar19;
                param_3[uVar14] = uVar6;
              }
              uVar15 = (ulong)uVar6;
              if (param_2 <= (long)uVar15) goto LAB_00ebf5d0;
              uVar6 = (uint)uVar8;
              uVar8 = uVar8 + 1;
              bVar10 = (long)uVar15 < lVar19;
                    /* try { // try from 00ebf3bc to 00fbf3c3 has its CatchHandler @ 00ebf430 */
              uVar14 = (ulong)(uVar17 >> (ulong)(~uVar6 + uVar18 & 0x1f) & 1);
            } while (uVar7 != uVar8);
          }
          if (!bVar10) {
            lVar19 = lVar19 + 1;
            *(undefined4 *)((long)param_3 + (uVar15 << 3 | 4)) = 0;
          }
          uStack_108 = lVar9;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ebf3bc with catch @ 00ebf430
                        */
          switch(*(undefined4 *)(param_5 + 0x14)) {
          case 0:
                    /* try { // try from 00ebf448 to 00fbf44b has its CatchHandler @ 00ebf44c */
            uVar18 = (uint)lVar12;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ebf448 with catch @ 00ebf44c
                        */
            break;
          case 1:
            lVar9 = *(long *)(param_5 + 0x20);
            if (param_7 == 1) {
              if (lVar9 < 1) goto switchD_00ebf444_default;
              uVar6 = 0;
              uVar18 = 0;
              lVar5 = lVar12;
              do {
                lVar1 = 0;
                if (param_4 != 0) {
                  lVar1 = lVar5 / param_4;
                }
                    /* try { // try from 00ebf4bc to 00fbf4c3 has its CatchHandler @ 00ebf530 */
                    /* try { // try from 00ebf4c4 to 00fbf547 has its CatchHandler @ 00ebf460 */
                lVar9 = lVar9 + -1;
                uVar18 = (uint)*(ushort *)
                                (*(long *)(param_5 + 0x40) +
                                (ulong)(uint)((int)lVar5 - (int)lVar1 * (int)param_4) * 2) <<
                         (ulong)(uVar6 & 0x1f) | uVar18;
                uVar6 = uVar6 + *(int *)(param_5 + 0x18);
                lVar5 = lVar1;
              } while (lVar9 != 0);
            }
            else {
              if (lVar9 < 1) goto switchD_00ebf444_default;
              iVar2 = *(int *)(param_5 + 0x18);
              lVar9 = 0;
              uVar18 = 0;
              do {
                lVar5 = oggpack_read(param_6,iVar2);
                iVar2 = *(int *)(param_5 + 0x18);
                iVar16 = (int)lVar9;
                lVar9 = lVar9 + 1;
                uVar18 = uVar18 | (uint)(lVar5 << ((ulong)(uint)(iVar2 * iVar16) & 0x3f));
              } while (lVar9 < *(long *)(param_5 + 0x20));
            }
            break;
          case 2:
                    /* try { // try from 00ebf450 to 00fbf453 has its CatchHandler @ 00ebf45c */
            lVar9 = *(long *)(param_5 + 0x20);
                    /* try { // try from 00ebf454 to 00fbf45f has its CatchHandler @ 00ebf360 */
            if (lVar9 < 1) goto switchD_00ebf444_default;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ebf450 with catch @ 00ebf45c
                        */
                    /* try { // try from 00ebf460 to 00fbf4bb has its CatchHandler @ 00ebf460
                       catch(type#1 @ 00000000) { ... } // from try @ 00ebf460 with catch @ 00ebf460
                       catch(type#1 @ 00000000) { ... } // from try @ 00ebf4c4 with catch @ 00ebf460
                       catch(type#1 @ 00000000) { ... } // from try @ 00ebf554 with catch @ 00ebf460
                        */
            uVar6 = 0;
            uVar18 = 0;
            lVar5 = lVar12;
            do {
              lVar1 = 0;
              if (param_4 != 0) {
                lVar1 = lVar5 / param_4;
              }
              lVar9 = lVar9 + -1;
              uVar18 = (int)lVar5 - (int)lVar1 * (int)param_4 << (ulong)(uVar6 & 0x1f) | uVar18;
              uVar6 = uVar6 + *(int *)(param_5 + 0x3c);
              lVar5 = lVar1;
            } while (lVar9 != 0);
            break;
          case 3:
            uVar18 = (uint)lVar13;
            break;
          default:
switchD_00ebf444_default:
            uVar18 = 0;
          }
          lVar9 = uStack_108;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ebf4bc with catch @ 00ebf530
                        */
          param_3[uVar14 | uVar15 << 1] = uVar18 | 0x80000000;
                    /* try { // try from 00ebf548 to 00fbf54b has its CatchHandler @ 00ebf54c */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ebf548 with catch @ 00ebf54c
                        */
          lVar13 = lVar13 + 1;
                    /* try { // try from 00ebf550 to 00fbf553 has its CatchHandler @ 00ebf55c */
          puVar11 = (uint *)((long)&local_100 + uVar7 * 4);
          uVar18 = uVar17;
          uVar14 = uVar7;
                    /* try { // try from 00ebf554 to 00fbf55f has its CatchHandler @ 00ebf460 */
          while ((uVar18 & 1) == 0) {
            uVar14 = uVar14 - 1;
            *puVar11 = uVar18 + 1;
            if ((long)uVar14 < 1) goto LAB_00ebf590;
            puVar11 = puVar11 + -1;
            uVar18 = *puVar11;
          }
          *puVar11 = *(int *)((long)&uStack_108 + uVar14 * 4 + 4) << 1;
LAB_00ebf590:
          if (uVar7 + 1 < 0x21) {
            lVar5 = uVar7 << 2;
            do {
              uVar18 = *(uint *)((long)&local_100 + lVar5 + 4);
              if (uVar17 != uVar18 >> 1) break;
              lVar1 = lVar5 + 4;
              *(int *)((long)&local_100 + lVar5 + 4) = *(int *)((long)&local_100 + lVar5) << 1;
              lVar5 = lVar1;
              uVar17 = uVar18;
            } while (lVar1 != 0x80);
          }
        }
        lVar12 = lVar12 + 1;
        if (lVar12 == param_2) goto LAB_00ebf298;
        bVar3 = param_1[lVar12];
      } while( true );
    }
    *param_3 = 0x80000000;
LAB_00ebf298:
                    /* try { // try from 00ebf298 to 00fbf2bf has its CatchHandler @ 00ebf1f8 */
    if (*(long *)(param_5 + 0x48) != 1) {
      uVar7 = 0x1f;
      puVar11 = (uint *)((ulong)&local_100 | 4);
      do {
                    /* try { // try from 00ebf2c0 to 00fbf2c7 has its CatchHandler @ 00ebf358 */
        if ((0xffffffffUL >> (uVar7 & 0x3f) & (ulong)*puVar11) != 0) goto LAB_00ebf5d0;
        uVar7 = uVar7 - 1;
                    /* try { // try from 00ebf2c8 to 00fbf2e7 has its CatchHandler @ 00ebf1f8 */
        puVar11 = puVar11 + 1;
      } while (uVar7 != 0xffffffffffffffff);
    }
    uVar4 = 0;
  }
LAB_00ebf5d4:
  if (*(long *)(lVar9 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
                    /* try { // try from 00ebf5ec to 00fbf60f has its CatchHandler @ 00ebf560 */
                    /* catch() { ... } // from try @ 00ebf5cc with catch @ 00ebf5fc */
  return;
}

