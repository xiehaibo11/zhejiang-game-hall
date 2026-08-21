
/* WARNING: Removing unreachable block (ram,0x00adc750) */
/* WARNING: Removing unreachable block (ram,0x00adc770) */
/* WARNING: Removing unreachable block (ram,0x00adc700) */
/* WARNING: Removing unreachable block (ram,0x00adc710) */
/* WARNING: Removing unreachable block (ram,0x00adc730) */
/* WARNING: Removing unreachable block (ram,0x00adc7c0) */
/* WARNING: Removing unreachable block (ram,0x00adc780) */
/* WARNING: Removing unreachable block (ram,0x00adc7a0) */
/* WARNING: Removing unreachable block (ram,0x00adc6f0) */
/* WARNING: Removing unreachable block (ram,0x00adc7ec) */
/* WARNING: Removing unreachable block (ram,0x00adc818) */
/* WARNING: Removing unreachable block (ram,0x00adc7b0) */
/* WARNING: Removing unreachable block (ram,0x00adc790) */
/* WARNING: Removing unreachable block (ram,0x00adc6a0) */
/* WARNING: Removing unreachable block (ram,0x00adc720) */
/* WARNING: Removing unreachable block (ram,0x00adc6c8) */
/* WARNING: Removing unreachable block (ram,0x00adc760) */
/* WARNING: Removing unreachable block (ram,0x00adc740) */

void ssl_set_sig_mask(uint *param_1,long param_2,undefined4 param_3)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  ulong uVar12;
  ulong uVar13;
  
  lVar9 = *(long *)(param_2 + 0x148);
  puVar11 = &DAT_018a5306;
  uVar2 = *(uint *)(lVar9 + 0x1c) & 0x30000;
  if (uVar2 == 0x30000) {
    uVar12 = 4;
                    /* try { // try from 00adc490 to 00bdc5ab has its CatchHandler @ 00adc5c8 */
    goto LAB_00adc49c;
  }
  if (uVar2 == 0x20000) {
    puVar11 = &DAT_018a5308;
LAB_00adc498:
    uVar12 = 2;
LAB_00adc49c:
    bVar5 = false;
    bVar6 = false;
    bVar4 = false;
    uVar13 = 0;
    do {
      pbVar1 = puVar11 + uVar13;
      bVar3 = pbVar1[1];
      if (bVar3 != 3) {
        if (bVar3 == 2) {
          if (bVar6) goto LAB_00adc834;
          bVar3 = *pbVar1;
          iVar7 = 0;
          if (0xec < bVar3) {
            if (bVar3 == 0xed) {
              lVar9 = 6;
              puVar10 = (undefined4 *)&UNK_018a5460;
            }
            else if (bVar3 == 0xee) {
              lVar9 = 7;
              puVar10 = (undefined4 *)&UNK_018a5470;
            }
            else {
              if (bVar3 != 0xef) goto switchD_00adc624_default;
              lVar9 = 8;
              puVar10 = (undefined4 *)&UNK_018a5480;
            }
            goto LAB_00adc634;
          }
          lVar9 = 0;
          switch(bVar3) {
          case 1:
            goto switchD_00adc624_caseD_1;
          case 2:
            lVar9 = 1;
switchD_00adc624_caseD_1:
            puVar10 = (undefined4 *)(&UNK_018a5400 + lVar9 * 0x10);
            if (puVar10 != (undefined4 *)0x0) break;
            goto LAB_00adc828;
          case 3:
            lVar9 = 2;
            puVar10 = (undefined4 *)&UNK_018a5420;
            break;
          case 4:
            lVar9 = 3;
            puVar10 = (undefined4 *)&UNK_018a5430;
            break;
          case 5:
            lVar9 = 4;
            puVar10 = (undefined4 *)&UNK_018a5440;
            break;
          case 6:
            lVar9 = 5;
            puVar10 = &DAT_018a5450;
            break;
          default:
            goto switchD_00adc624_default;
          }
LAB_00adc634:
          lVar8 = ssl_md(puVar10[2]);
          iVar7 = 0;
          if (lVar8 != 0) {
            if ((pbVar1[1] - 0xed < 3) || (pbVar1[1] - 1 < 3)) {
              iVar7 = ssl_security(param_2,param_3,*(undefined4 *)(&UNK_018a5404 + lVar9 * 0x10),
                                   *puVar10,pbVar1);
            }
            else {
LAB_00adc828:
              iVar7 = 0;
            }
          }
switchD_00adc624_default:
          bVar6 = iVar7 != 0;
          goto LAB_00adc834;
        }
        if ((bVar3 != 1) || (bVar4)) goto LAB_00adc834;
        bVar3 = *pbVar1;
        iVar7 = 0;
        if (0xec < bVar3) {
          if (bVar3 == 0xed) {
            lVar9 = 6;
            puVar10 = (undefined4 *)&UNK_018a5460;
                    /* try { // try from 00adc7bc to 00bdc887 has its CatchHandler @ 00adc8d0 */
          }
          else if (bVar3 == 0xee) {
            lVar9 = 7;
            puVar10 = (undefined4 *)&UNK_018a5470;
          }
          else {
            if (bVar3 != 0xef) goto switchD_00adc50c_default;
            lVar9 = 8;
            puVar10 = (undefined4 *)&UNK_018a5480;
          }
          goto LAB_00adc51c;
        }
        lVar9 = 0;
        switch(bVar3) {
        case 1:
          goto switchD_00adc50c_caseD_1;
        case 2:
          lVar9 = 1;
switchD_00adc50c_caseD_1:
          puVar10 = (undefined4 *)(&UNK_018a5400 + lVar9 * 0x10);
          if (puVar10 != (undefined4 *)0x0) break;
          goto LAB_00adc7d0;
        case 3:
          lVar9 = 2;
          puVar10 = (undefined4 *)&UNK_018a5420;
                    /* try { // try from 00adc6fc to 00bdc7bb has its CatchHandler @ 00adc6fc
                       catch() { ... } // from try @ 00adc6fc with catch @ 00adc6fc
                       catch() { ... } // from try @ 00adc888 with catch @ 00adc6fc */
          break;
        case 4:
          lVar9 = 3;
          puVar10 = (undefined4 *)&UNK_018a5430;
          break;
        case 5:
          lVar9 = 4;
          puVar10 = (undefined4 *)&UNK_018a5440;
          break;
        case 6:
          lVar9 = 5;
          puVar10 = &DAT_018a5450;
          break;
        default:
          goto switchD_00adc50c_default;
        }
LAB_00adc51c:
        lVar8 = ssl_md(puVar10[2]);
        iVar7 = 0;
        if (lVar8 != 0) {
          if ((pbVar1[1] - 0xed < 3) || (pbVar1[1] - 1 < 3)) {
            iVar7 = ssl_security(param_2,param_3,*(undefined4 *)(&UNK_018a5404 + lVar9 * 0x10),
                                 *puVar10,pbVar1);
          }
          else {
LAB_00adc7d0:
            iVar7 = 0;
          }
        }
switchD_00adc50c_default:
        bVar4 = iVar7 != 0;
        goto LAB_00adc834;
      }
      if (bVar5) goto LAB_00adc834;
      bVar3 = *pbVar1;
      iVar7 = 0;
      if (0xec < bVar3) {
        if (bVar3 == 0xed) {
          lVar9 = 6;
          puVar10 = (undefined4 *)&UNK_018a5460;
        }
        else if (bVar3 == 0xee) {
          lVar9 = 7;
          puVar10 = (undefined4 *)&UNK_018a5470;
        }
        else {
          if (bVar3 != 0xef) goto switchD_00adc598_default;
          lVar9 = 8;
          puVar10 = (undefined4 *)&UNK_018a5480;
        }
        goto LAB_00adc5a8;
      }
      lVar9 = 0;
      switch(bVar3) {
      case 1:
        goto switchD_00adc598_caseD_1;
      case 2:
        lVar9 = 1;
switchD_00adc598_caseD_1:
        puVar10 = (undefined4 *)(&UNK_018a5400 + lVar9 * 0x10);
        if (puVar10 != (undefined4 *)0x0) break;
        goto LAB_00adc7fc;
      case 3:
        lVar9 = 2;
        puVar10 = (undefined4 *)&UNK_018a5420;
        break;
      case 4:
        lVar9 = 3;
        puVar10 = (undefined4 *)&UNK_018a5430;
        break;
      case 5:
        lVar9 = 4;
        puVar10 = (undefined4 *)&UNK_018a5440;
        break;
      case 6:
        lVar9 = 5;
        puVar10 = &DAT_018a5450;
        break;
      default:
        goto switchD_00adc598_default;
      }
LAB_00adc5a8:
                    /* try { // try from 00adc5ac to 00bdc5e3 has its CatchHandler @ 00adc3d0 */
      lVar8 = ssl_md(puVar10[2]);
      iVar7 = 0;
      if (lVar8 != 0) {
                    /* catch() { ... } // from try @ 00adc490 with catch @ 00adc5c8 */
        if ((pbVar1[1] - 0xed < 3) || (pbVar1[1] - 1 < 3)) {
          iVar7 = ssl_security(param_2,param_3,*(undefined4 *)(&UNK_018a5404 + lVar9 * 0x10),
                               *puVar10,pbVar1);
        }
        else {
LAB_00adc7fc:
          iVar7 = 0;
        }
      }
switchD_00adc598_default:
      bVar5 = iVar7 != 0;
LAB_00adc834:
      uVar13 = uVar13 + 2;
    } while (uVar13 < uVar12);
    if (!bVar4) goto LAB_00adc8ac;
    if (bVar6) goto LAB_00adc84c;
  }
  else {
    if (uVar2 == 0x10000) {
      puVar11 = &DAT_018a5306;
      goto LAB_00adc498;
    }
    if ((*(int *)(param_2 + 0x38) == 0) ||
       (puVar11 = *(undefined1 **)(lVar9 + 0x158), puVar11 == (undefined1 *)0x0)) {
      puVar11 = *(undefined1 **)(lVar9 + 0x148);
      if (puVar11 == (undefined1 *)0x0) {
        puVar11 = &DAT_018a530a;
        uVar12 = 0x24;
      }
      else {
        uVar12 = *(ulong *)(lVar9 + 0x150);
        if (uVar12 == 0) goto LAB_00adc8a4;
      }
      goto LAB_00adc49c;
    }
    uVar12 = *(ulong *)(lVar9 + 0x160);
                    /* try { // try from 00adc888 to 00bdc8eb has its CatchHandler @ 00adc6fc */
    if (uVar12 != 0) goto LAB_00adc49c;
LAB_00adc8a4:
    bVar5 = false;
    bVar6 = false;
LAB_00adc8ac:
    *param_1 = *param_1 | 1;
    if (bVar6) {
LAB_00adc84c:
      if (bVar5) {
        return;
      }
      goto LAB_00adc8cc;
    }
  }
  *param_1 = *param_1 | 2;
  if (bVar5) {
    return;
  }
LAB_00adc8cc:
                    /* catch() { ... } // from try @ 00adc7bc with catch @ 00adc8d0 */
  *param_1 = *param_1 | 8;
  return;
}

