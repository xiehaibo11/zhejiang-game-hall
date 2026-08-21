
/* WARNING: Removing unreachable block (ram,0x00aeb604) */
/* WARNING: Removing unreachable block (ram,0x00aeb624) */
/* WARNING: Removing unreachable block (ram,0x00aeb5b4) */
/* WARNING: Removing unreachable block (ram,0x00aeb5c4) */
/* WARNING: Removing unreachable block (ram,0x00aeb5e4) */
/* WARNING: Removing unreachable block (ram,0x00aeb674) */
/* WARNING: Removing unreachable block (ram,0x00aeb634) */
/* WARNING: Removing unreachable block (ram,0x00aeb654) */
/* WARNING: Removing unreachable block (ram,0x00aeb5a4) */
/* WARNING: Removing unreachable block (ram,0x00aeb6a0) */
/* WARNING: Removing unreachable block (ram,0x00aeb6cc) */
/* WARNING: Removing unreachable block (ram,0x00aeb664) */
/* WARNING: Removing unreachable block (ram,0x00aeb644) */
/* WARNING: Removing unreachable block (ram,0x00aeb554) */
/* WARNING: Removing unreachable block (ram,0x00aeb5d4) */
/* WARNING: Removing unreachable block (ram,0x00aeb57c) */
/* WARNING: Removing unreachable block (ram,0x00aeb614) */
/* WARNING: Removing unreachable block (ram,0x00aeb5f4) */

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
  puVar11 = &DAT_013d3786;
  uVar2 = *(uint *)(lVar9 + 0x1c) & 0x30000;
  if (uVar2 == 0x30000) {
    uVar12 = 4;
    goto LAB_00aeb350;
  }
  if (uVar2 == 0x20000) {
    puVar11 = &DAT_013d3788;
LAB_00aeb34c:
    uVar12 = 2;
LAB_00aeb350:
    bVar5 = false;
    bVar6 = false;
    bVar4 = false;
    uVar13 = 0;
    do {
      pbVar1 = puVar11 + uVar13;
      bVar3 = pbVar1[1];
      if (bVar3 != 3) {
        if (bVar3 == 2) {
          if (bVar6) goto LAB_00aeb6e8;
          bVar3 = *pbVar1;
          iVar7 = 0;
          if (0xec < bVar3) {
            if (bVar3 == 0xed) {
              lVar9 = 6;
              puVar10 = (undefined4 *)&UNK_013d38e0;
            }
            else if (bVar3 == 0xee) {
              lVar9 = 7;
              puVar10 = (undefined4 *)&UNK_013d38f0;
            }
            else {
              if (bVar3 != 0xef) goto switchD_00aeb4d8_default;
              lVar9 = 8;
              puVar10 = (undefined4 *)&UNK_013d3900;
            }
            goto LAB_00aeb4e8;
          }
          lVar9 = 0;
          switch(bVar3) {
          case 1:
            goto switchD_00aeb4d8_caseD_1;
          case 2:
            lVar9 = 1;
switchD_00aeb4d8_caseD_1:
            puVar10 = (undefined4 *)(&UNK_013d3880 + lVar9 * 0x10);
            if (puVar10 != (undefined4 *)0x0) break;
            goto LAB_00aeb6dc;
          case 3:
            lVar9 = 2;
            puVar10 = (undefined4 *)&UNK_013d38a0;
            break;
          case 4:
            lVar9 = 3;
            puVar10 = (undefined4 *)&UNK_013d38b0;
            break;
          case 5:
            lVar9 = 4;
            puVar10 = (undefined4 *)&UNK_013d38c0;
            break;
          case 6:
            lVar9 = 5;
            puVar10 = &DAT_013d38d0;
            break;
          default:
            goto switchD_00aeb4d8_default;
          }
LAB_00aeb4e8:
          lVar8 = ssl_md(puVar10[2]);
          iVar7 = 0;
          if (lVar8 != 0) {
            if ((pbVar1[1] - 0xed < 3) || (pbVar1[1] - 1 < 3)) {
              iVar7 = ssl_security(param_2,param_3,*(undefined4 *)(&UNK_013d3884 + lVar9 * 0x10),
                                   *puVar10,pbVar1);
            }
            else {
LAB_00aeb6dc:
              iVar7 = 0;
            }
          }
switchD_00aeb4d8_default:
          bVar6 = iVar7 != 0;
          goto LAB_00aeb6e8;
        }
        if ((bVar3 != 1) || (bVar4)) goto LAB_00aeb6e8;
        bVar3 = *pbVar1;
        iVar7 = 0;
        if (0xec < bVar3) {
          if (bVar3 == 0xed) {
            lVar9 = 6;
            puVar10 = (undefined4 *)&UNK_013d38e0;
          }
          else if (bVar3 == 0xee) {
            lVar9 = 7;
            puVar10 = (undefined4 *)&UNK_013d38f0;
          }
          else {
            if (bVar3 != 0xef) goto switchD_00aeb3c0_default;
            lVar9 = 8;
            puVar10 = (undefined4 *)&UNK_013d3900;
          }
          goto LAB_00aeb3d0;
        }
        lVar9 = 0;
        switch(bVar3) {
        case 1:
          goto switchD_00aeb3c0_caseD_1;
        case 2:
          lVar9 = 1;
switchD_00aeb3c0_caseD_1:
          puVar10 = (undefined4 *)(&UNK_013d3880 + lVar9 * 0x10);
          if (puVar10 != (undefined4 *)0x0) break;
          goto LAB_00aeb684;
        case 3:
          lVar9 = 2;
          puVar10 = (undefined4 *)&UNK_013d38a0;
          break;
        case 4:
          lVar9 = 3;
          puVar10 = (undefined4 *)&UNK_013d38b0;
          break;
        case 5:
          lVar9 = 4;
          puVar10 = (undefined4 *)&UNK_013d38c0;
          break;
        case 6:
          lVar9 = 5;
          puVar10 = &DAT_013d38d0;
          break;
        default:
          goto switchD_00aeb3c0_default;
        }
LAB_00aeb3d0:
        lVar8 = ssl_md(puVar10[2]);
        iVar7 = 0;
        if (lVar8 != 0) {
          if ((pbVar1[1] - 0xed < 3) || (pbVar1[1] - 1 < 3)) {
            iVar7 = ssl_security(param_2,param_3,*(undefined4 *)(&UNK_013d3884 + lVar9 * 0x10),
                                 *puVar10,pbVar1);
          }
          else {
LAB_00aeb684:
            iVar7 = 0;
          }
        }
switchD_00aeb3c0_default:
        bVar4 = iVar7 != 0;
        goto LAB_00aeb6e8;
      }
      if (bVar5) goto LAB_00aeb6e8;
      bVar3 = *pbVar1;
      iVar7 = 0;
      if (0xec < bVar3) {
        if (bVar3 == 0xed) {
          lVar9 = 6;
          puVar10 = (undefined4 *)&UNK_013d38e0;
        }
        else if (bVar3 == 0xee) {
          lVar9 = 7;
          puVar10 = (undefined4 *)&UNK_013d38f0;
        }
        else {
          if (bVar3 != 0xef) goto switchD_00aeb44c_default;
          lVar9 = 8;
          puVar10 = (undefined4 *)&UNK_013d3900;
        }
        goto LAB_00aeb45c;
      }
      lVar9 = 0;
      switch(bVar3) {
      case 1:
        goto switchD_00aeb44c_caseD_1;
      case 2:
        lVar9 = 1;
switchD_00aeb44c_caseD_1:
        puVar10 = (undefined4 *)(&UNK_013d3880 + lVar9 * 0x10);
        if (puVar10 != (undefined4 *)0x0) break;
        goto LAB_00aeb6b0;
      case 3:
        lVar9 = 2;
        puVar10 = (undefined4 *)&UNK_013d38a0;
        break;
      case 4:
        lVar9 = 3;
        puVar10 = (undefined4 *)&UNK_013d38b0;
        break;
      case 5:
        lVar9 = 4;
        puVar10 = (undefined4 *)&UNK_013d38c0;
        break;
      case 6:
        lVar9 = 5;
        puVar10 = &DAT_013d38d0;
        break;
      default:
        goto switchD_00aeb44c_default;
      }
LAB_00aeb45c:
      lVar8 = ssl_md(puVar10[2]);
      iVar7 = 0;
      if (lVar8 != 0) {
        if ((pbVar1[1] - 0xed < 3) || (pbVar1[1] - 1 < 3)) {
          iVar7 = ssl_security(param_2,param_3,*(undefined4 *)(&UNK_013d3884 + lVar9 * 0x10),
                               *puVar10,pbVar1);
        }
        else {
LAB_00aeb6b0:
          iVar7 = 0;
        }
      }
switchD_00aeb44c_default:
      bVar5 = iVar7 != 0;
LAB_00aeb6e8:
      uVar13 = uVar13 + 2;
    } while (uVar13 < uVar12);
    if (!bVar4) goto LAB_00aeb760;
    if (bVar6) goto LAB_00aeb700;
  }
  else {
    if (uVar2 == 0x10000) {
      puVar11 = &DAT_013d3786;
      goto LAB_00aeb34c;
    }
    if ((*(int *)(param_2 + 0x38) == 0) ||
       (puVar11 = *(undefined1 **)(lVar9 + 0x158), puVar11 == (undefined1 *)0x0)) {
      puVar11 = *(undefined1 **)(lVar9 + 0x148);
      if (puVar11 == (undefined1 *)0x0) {
        puVar11 = &DAT_013d378a;
        uVar12 = 0x24;
      }
      else {
        uVar12 = *(ulong *)(lVar9 + 0x150);
        if (uVar12 == 0) goto LAB_00aeb758;
      }
      goto LAB_00aeb350;
    }
    uVar12 = *(ulong *)(lVar9 + 0x160);
    if (uVar12 != 0) goto LAB_00aeb350;
LAB_00aeb758:
    bVar5 = false;
    bVar6 = false;
LAB_00aeb760:
    *param_1 = *param_1 | 1;
    if (bVar6) {
LAB_00aeb700:
      if (bVar5) {
        return;
      }
      goto LAB_00aeb780;
    }
  }
  *param_1 = *param_1 | 2;
  if (bVar5) {
    return;
  }
LAB_00aeb780:
  *param_1 = *param_1 | 8;
  return;
}

