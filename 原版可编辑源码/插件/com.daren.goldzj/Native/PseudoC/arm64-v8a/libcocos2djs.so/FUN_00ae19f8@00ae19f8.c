
/* WARNING: Removing unreachable block (ram,0x00ae1d5c) */
/* WARNING: Removing unreachable block (ram,0x00ae1d7c) */
/* WARNING: Removing unreachable block (ram,0x00ae1d9c) */
/* WARNING: Removing unreachable block (ram,0x00ae1b3c) */
/* WARNING: Removing unreachable block (ram,0x00ae1b5c) */
/* WARNING: Removing unreachable block (ram,0x00ae1b2c) */
/* WARNING: Removing unreachable block (ram,0x00ae1b8c) */
/* WARNING: Removing unreachable block (ram,0x00ae1b6c) */
/* WARNING: Removing unreachable block (ram,0x00ae1b4c) */
/* WARNING: Removing unreachable block (ram,0x00ae1d8c) */
/* WARNING: Removing unreachable block (ram,0x00ae1d3c) */
/* WARNING: Removing unreachable block (ram,0x00ae1d6c) */
/* WARNING: Removing unreachable block (ram,0x00ae1d4c) */
/* WARNING: Removing unreachable block (ram,0x00ae1b7c) */

long FUN_00ae19f8(undefined8 param_1,int *param_2,byte *param_3,ulong param_4,long param_5,
                 ulong param_6)

{
  int pkey_nid;
  byte bVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined4 *puVar5;
  long lVar6;
  ulong uVar7;
  long local_70;
  
  if (param_4 != 0) {
    if (param_6 != 0) {
      uVar7 = 0;
      local_70 = 0;
      do {
        bVar1 = *param_3;
        if (0xec < bVar1) {
          if (bVar1 == 0xed) {
            lVar6 = 6;
            puVar5 = (undefined4 *)&UNK_018a5460;
          }
          else if (bVar1 == 0xef) {
            lVar6 = 8;
            puVar5 = (undefined4 *)&UNK_018a5480;
          }
          else {
                    /* catch() { ... } // from try @ 00ae18d4 with catch @ 00ae1b1c
                       catch() { ... } // from try @ 00ae19d4 with catch @ 00ae1b1c */
            if (bVar1 != 0xee) goto switchD_00ae1a74_default;
                    /* catch() { ... } // from try @ 00ae1958 with catch @ 00ae1b20 */
            lVar6 = 7;
            puVar5 = (undefined4 *)&UNK_018a5470;
          }
          goto LAB_00ae1a84;
        }
        lVar6 = 0;
        switch(bVar1) {
        case 1:
          goto switchD_00ae1a74_caseD_1;
        case 2:
          lVar6 = 1;
switchD_00ae1a74_caseD_1:
          puVar5 = (undefined4 *)(&UNK_018a5400 + lVar6 * 0x10);
          if (puVar5 != (undefined4 *)0x0) break;
          goto switchD_00ae1a74_default;
        case 3:
          lVar6 = 2;
          puVar5 = (undefined4 *)&UNK_018a5420;
          break;
        case 4:
          lVar6 = 3;
          puVar5 = (undefined4 *)&UNK_018a5430;
          break;
        case 5:
          lVar6 = 4;
          puVar5 = (undefined4 *)&UNK_018a5440;
          break;
        case 6:
          lVar6 = 5;
          puVar5 = &DAT_018a5450;
          break;
        default:
          goto switchD_00ae1a74_default;
        }
LAB_00ae1a84:
        lVar3 = ssl_md(puVar5[2]);
                    /* try { // try from 00ae1aac to 00be1b73 has its CatchHandler @ 00ae1870 */
        if ((lVar3 != 0) &&
           (((param_3[1] - 0xed < 3 || (param_3[1] - 1 < 3)) &&
            (iVar2 = ssl_security(param_1,0x5000c,*(undefined4 *)(&UNK_018a5404 + lVar6 * 0x10),
                                  *puVar5,param_3), iVar2 != 0)))) {
          uVar4 = 0;
          do {
            if ((*param_3 == *(byte *)(param_5 + uVar4)) &&
               (param_3[1] == *(byte *)(param_5 + uVar4 + 1))) {
              local_70 = local_70 + 1;
              if (param_2 != (int *)0x0) {
                *(byte *)((long)param_2 + 0xd) = *param_3;
                iVar2 = 0;
                *(byte *)(param_2 + 3) = param_3[1];
                bVar1 = *param_3;
                if (0xec < bVar1) {
                  if (bVar1 == 0xed) {
                    lVar6 = 6;
                  }
                  else if (bVar1 == 0xee) {
                    lVar6 = 7;
                  }
                  else {
                    if (bVar1 != 0xef) goto switchD_00ae1bdc_default;
                    lVar6 = 8;
                    /* try { // try from 00ae1c04 to 00be1c63 has its CatchHandler @ 00ae1cc0 */
                  }
                  goto switchD_00ae1bdc_caseD_1;
                }
                lVar6 = 0;
                switch(bVar1) {
                case 1:
                  break;
                case 2:
                  lVar6 = 1;
                  break;
                case 3:
                  lVar6 = 2;
                  break;
                case 4:
                  lVar6 = 3;
                  break;
                case 5:
                  lVar6 = 4;
                  break;
                case 6:
                  lVar6 = 5;
                  break;
                default:
                  goto switchD_00ae1bdc_default;
                }
switchD_00ae1bdc_caseD_1:
                iVar2 = (&DAT_018a5354)[lVar6 * 2];
switchD_00ae1bdc_default:
                *param_2 = iVar2;
                bVar1 = param_3[1];
                if (bVar1 < 0xed) {
                  if (bVar1 == 1) {
                    lVar6 = 0;
                    goto LAB_00ae1cb4;
                  }
                  if (bVar1 == 2) {
                    lVar6 = 1;
                    goto LAB_00ae1cb4;
                  }
                  if (bVar1 == 3) {
                    lVar6 = 2;
                    goto LAB_00ae1cb4;
                  }
LAB_00ae1ce0:
                  param_2[1] = 0;
LAB_00ae1ce4:
                  param_2[2] = 0;
                }
                else {
                  if (bVar1 == 0xed) {
                    lVar6 = 3;
                  }
                  else if (bVar1 == 0xee) {
                    lVar6 = 4;
                  }
                  else {
                    if (bVar1 != 0xef) goto LAB_00ae1ce0;
                    lVar6 = 5;
                  }
LAB_00ae1cb4:
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ae1c04 with catch @ 00ae1cc0
                        */
                  pkey_nid = (&DAT_018a539c)[lVar6 * 2];
                  param_2[1] = pkey_nid;
                  if ((iVar2 == 0) ||
                     (iVar2 = OBJ_find_sigid_by_algs(param_2 + 2,iVar2,pkey_nid), iVar2 < 1))
                  goto LAB_00ae1ce4;
                }
                param_2 = param_2 + 4;
              }
              break;
            }
            uVar4 = uVar4 + 2;
          } while (uVar4 < param_6);
        }
switchD_00ae1a74_default:
        uVar7 = uVar7 + 2;
        param_3 = param_3 + 2;
        if (param_4 <= uVar7) {
          return local_70;
        }
      } while( true );
    }
                    /* catch() { ... } // from try @ 00ae1d60 with catch @ 00ae1d00 */
    uVar7 = 0;
    do {
      bVar1 = param_3[uVar7];
      if (0xec < bVar1) {
        if (bVar1 == 0xed) {
          lVar6 = 6;
          puVar5 = (undefined4 *)&UNK_018a5460;
        }
        else if (bVar1 == 0xee) {
          lVar6 = 7;
          puVar5 = (undefined4 *)&UNK_018a5470;
                    /* catch() { ... } // from try @ 00ae1d58 with catch @ 00ae1d98 */
        }
        else {
          if (bVar1 != 0xef) goto switchD_00ae1dc8_default;
          lVar6 = 8;
                    /* try { // try from 00ae1d34 to 00be1d3b has its CatchHandler @ 00ae1d9c */
          puVar5 = (undefined4 *)&UNK_018a5480;
        }
        goto LAB_00ae1dd8;
      }
                    /* catch() { ... } // from try @ 00ae1df4 with catch @ 00ae1db8
                       catch() { ... } // from try @ 00ae1e80 with catch @ 00ae1db8 */
      lVar6 = 0;
      switch(bVar1) {
      case 1:
        goto switchD_00ae1dc8_caseD_1;
      case 2:
        lVar6 = 1;
switchD_00ae1dc8_caseD_1:
        puVar5 = (undefined4 *)(&UNK_018a5400 + lVar6 * 0x10);
        if (puVar5 != (undefined4 *)0x0) break;
        goto switchD_00ae1dc8_default;
      case 3:
        lVar6 = 2;
        puVar5 = (undefined4 *)&UNK_018a5420;
        break;
      case 4:
        lVar6 = 3;
        puVar5 = (undefined4 *)&UNK_018a5430;
                    /* try { // try from 00ae1d58 to 00be1d5f has its CatchHandler @ 00ae1d98 */
        break;
      case 5:
                    /* try { // try from 00ae1d60 to 00be1db7 has its CatchHandler @ 00ae1d00 */
        lVar6 = 4;
        puVar5 = (undefined4 *)&UNK_018a5440;
        break;
      case 6:
        lVar6 = 5;
        puVar5 = &DAT_018a5450;
        break;
      default:
        goto switchD_00ae1dc8_default;
      }
LAB_00ae1dd8:
      lVar3 = ssl_md(puVar5[2]);
                    /* try { // try from 00ae1dec to 00be1df3 has its CatchHandler @ 00ae1e98 */
                    /* try { // try from 00ae1df4 to 00be1e77 has its CatchHandler @ 00ae1db8 */
      if ((lVar3 != 0) && ((param_3[uVar7 + 1] - 0xed < 3 || (param_3[uVar7 + 1] - 1 < 3)))) {
        ssl_security(param_1,0x5000c,*(undefined4 *)(&UNK_018a5404 + lVar6 * 0x10),*puVar5,
                     param_3 + uVar7);
      }
switchD_00ae1dc8_default:
      uVar7 = uVar7 + 2;
    } while (uVar7 < param_4);
  }
  return 0;
}

