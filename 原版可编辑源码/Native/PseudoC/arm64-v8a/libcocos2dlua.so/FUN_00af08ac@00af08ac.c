
/* WARNING: Removing unreachable block (ram,0x00af0c10) */
/* WARNING: Removing unreachable block (ram,0x00af0c30) */
/* WARNING: Removing unreachable block (ram,0x00af0c50) */
/* WARNING: Removing unreachable block (ram,0x00af09f0) */
/* WARNING: Removing unreachable block (ram,0x00af0a10) */
/* WARNING: Removing unreachable block (ram,0x00af09e0) */
/* WARNING: Removing unreachable block (ram,0x00af0a40) */
/* WARNING: Removing unreachable block (ram,0x00af0a20) */
/* WARNING: Removing unreachable block (ram,0x00af0a00) */
/* WARNING: Removing unreachable block (ram,0x00af0c40) */
/* WARNING: Removing unreachable block (ram,0x00af0bf0) */
/* WARNING: Removing unreachable block (ram,0x00af0c20) */
/* WARNING: Removing unreachable block (ram,0x00af0c00) */
/* WARNING: Removing unreachable block (ram,0x00af0a30) */

long FUN_00af08ac(undefined8 param_1,int *param_2,byte *param_3,ulong param_4,long param_5,
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
            puVar5 = (undefined4 *)&UNK_013d38e0;
          }
          else if (bVar1 == 0xef) {
            lVar6 = 8;
            puVar5 = (undefined4 *)&UNK_013d3900;
          }
          else {
            if (bVar1 != 0xee) goto switchD_00af0928_default;
            lVar6 = 7;
            puVar5 = (undefined4 *)&UNK_013d38f0;
          }
          goto LAB_00af0938;
        }
        lVar6 = 0;
        switch(bVar1) {
        case 1:
          goto switchD_00af0928_caseD_1;
        case 2:
          lVar6 = 1;
switchD_00af0928_caseD_1:
          puVar5 = (undefined4 *)(&UNK_013d3880 + lVar6 * 0x10);
          if (puVar5 != (undefined4 *)0x0) break;
          goto switchD_00af0928_default;
        case 3:
          lVar6 = 2;
          puVar5 = (undefined4 *)&UNK_013d38a0;
          break;
        case 4:
          lVar6 = 3;
          puVar5 = (undefined4 *)&UNK_013d38b0;
          break;
        case 5:
          lVar6 = 4;
          puVar5 = (undefined4 *)&UNK_013d38c0;
          break;
        case 6:
          lVar6 = 5;
          puVar5 = &DAT_013d38d0;
          break;
        default:
          goto switchD_00af0928_default;
        }
LAB_00af0938:
        lVar3 = ssl_md(puVar5[2]);
        if ((lVar3 != 0) &&
           (((param_3[1] - 0xed < 3 || (param_3[1] - 1 < 3)) &&
            (iVar2 = ssl_security(param_1,0x5000c,*(undefined4 *)(&UNK_013d3884 + lVar6 * 0x10),
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
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00af0b6c with catch @ 00af0ad8
                       catch(type#1 @ 00000000) { ... } // from try @ 00af0c10 with catch @ 00af0ad8
                        */
                  }
                  else if (bVar1 == 0xee) {
                    lVar6 = 7;
                  }
                  else {
                    if (bVar1 != 0xef) goto switchD_00af0a90_default;
                    lVar6 = 8;
                  }
                  goto switchD_00af0a90_caseD_1;
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
                  goto switchD_00af0a90_default;
                }
switchD_00af0a90_caseD_1:
                iVar2 = (&DAT_013d37d4)[lVar6 * 2];
switchD_00af0a90_default:
                *param_2 = iVar2;
                bVar1 = param_3[1];
                if (bVar1 < 0xed) {
                  if (bVar1 == 1) {
                    lVar6 = 0;
                    goto LAB_00af0b68;
                  }
                  if (bVar1 == 2) {
                    lVar6 = 1;
                    goto LAB_00af0b68;
                  }
                  if (bVar1 == 3) {
                    lVar6 = 2;
                    /* try { // try from 00af0b28 to 00bf0b2b has its CatchHandler @ 00af0c14 */
                    goto LAB_00af0b68;
                  }
LAB_00af0b94:
                  param_2[1] = 0;
LAB_00af0b98:
                  param_2[2] = 0;
                }
                else {
                  if (bVar1 == 0xed) {
                    lVar6 = 3;
                  }
                  else if (bVar1 == 0xee) {
                    /* try { // try from 00af0b64 to 00bf0b6b has its CatchHandler @ 00af0c18 */
                    lVar6 = 4;
                  }
                  else {
                    if (bVar1 != 0xef) goto LAB_00af0b94;
                    lVar6 = 5;
                  }
LAB_00af0b68:
                    /* try { // try from 00af0b6c to 00bf0c0b has its CatchHandler @ 00af0ad8 */
                  pkey_nid = (&DAT_013d381c)[lVar6 * 2];
                  param_2[1] = pkey_nid;
                  if ((iVar2 == 0) ||
                     (iVar2 = OBJ_find_sigid_by_algs(param_2 + 2,iVar2,pkey_nid), iVar2 < 1))
                  goto LAB_00af0b98;
                }
                param_2 = param_2 + 4;
              }
              break;
            }
            uVar4 = uVar4 + 2;
          } while (uVar4 < param_6);
        }
switchD_00af0928_default:
        uVar7 = uVar7 + 2;
        param_3 = param_3 + 2;
        if (param_4 <= uVar7) {
          return local_70;
        }
      } while( true );
    }
    uVar7 = 0;
    do {
      bVar1 = param_3[uVar7];
      if (0xec < bVar1) {
        if (bVar1 == 0xed) {
          lVar6 = 6;
          puVar5 = (undefined4 *)&UNK_013d38e0;
        }
        else if (bVar1 == 0xee) {
          lVar6 = 7;
          puVar5 = (undefined4 *)&UNK_013d38f0;
        }
        else {
          if (bVar1 != 0xef) goto switchD_00af0c7c_default;
          lVar6 = 8;
          puVar5 = (undefined4 *)&UNK_013d3900;
        }
        goto LAB_00af0c8c;
      }
      lVar6 = 0;
      switch(bVar1) {
      case 1:
        goto switchD_00af0c7c_caseD_1;
      case 2:
        lVar6 = 1;
switchD_00af0c7c_caseD_1:
        puVar5 = (undefined4 *)(&UNK_013d3880 + lVar6 * 0x10);
        if (puVar5 != (undefined4 *)0x0) break;
        goto switchD_00af0c7c_default;
      case 3:
        lVar6 = 2;
        puVar5 = (undefined4 *)&UNK_013d38a0;
        break;
      case 4:
        lVar6 = 3;
        puVar5 = (undefined4 *)&UNK_013d38b0;
                    /* try { // try from 00af0c0c to 00bf0c0f has its CatchHandler @ 00af0c14 */
        break;
      case 5:
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00af0b28 with catch @ 00af0c14
                       catch(type#1 @ 00000000) { ... } // from try @ 00af0c0c with catch @ 00af0c14
                        */
        lVar6 = 4;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00af0b64 with catch @ 00af0c18
                        */
        puVar5 = (undefined4 *)&UNK_013d38c0;
        break;
      case 6:
        lVar6 = 5;
        puVar5 = &DAT_013d38d0;
        break;
      default:
        goto switchD_00af0c7c_default;
      }
LAB_00af0c8c:
                    /* try { // try from 00af0c8c to 00bf0ce7 has its CatchHandler @ 00af0c8c
                       catch() { ... } // from try @ 00af0c8c with catch @ 00af0c8c
                       catch() { ... } // from try @ 00af0db4 with catch @ 00af0c8c */
      lVar3 = ssl_md(puVar5[2]);
      if ((lVar3 != 0) && ((param_3[uVar7 + 1] - 0xed < 3 || (param_3[uVar7 + 1] - 1 < 3)))) {
        ssl_security(param_1,0x5000c,*(undefined4 *)(&UNK_013d3884 + lVar6 * 0x10),*puVar5,
                     param_3 + uVar7);
      }
switchD_00af0c7c_default:
      uVar7 = uVar7 + 2;
    } while (uVar7 < param_4);
  }
                    /* try { // try from 00af0ce8 to 00bf0ceb has its CatchHandler @ 00af0e10 */
  return 0;
}

