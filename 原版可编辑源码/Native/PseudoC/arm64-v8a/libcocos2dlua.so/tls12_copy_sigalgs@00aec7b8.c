
/* WARNING: Removing unreachable block (ram,0x00aec8ec) */
/* WARNING: Removing unreachable block (ram,0x00aec90c) */
/* WARNING: Removing unreachable block (ram,0x00aec91c) */
/* WARNING: Removing unreachable block (ram,0x00aec8cc) */
/* WARNING: Removing unreachable block (ram,0x00aec8fc) */
/* WARNING: Removing unreachable block (ram,0x00aec8dc) */

long tls12_copy_sigalgs(undefined8 param_1,byte *param_2,long param_3,ulong param_4)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  undefined4 *puVar6;
  ulong uVar7;
  byte *pbVar8;
  long lVar9;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00aec83c with catch @ 00aec7cc
                       catch(type#1 @ 00000000) { ... } // from try @ 00aec86c with catch @ 00aec7cc
                       catch(type#1 @ 00000000) { ... } // from try @ 00aec89c with catch @ 00aec7cc
                       catch(type#1 @ 00000000) { ... } // from try @ 00aec8c4 with catch @ 00aec7cc
                       catch(type#1 @ 00000000) { ... } // from try @ 00aec8f0 with catch @ 00aec7cc
                        */
  pbVar8 = param_2;
  if (param_4 != 0) {
    uVar7 = 0;
    do {
      pbVar1 = (byte *)(param_3 + uVar7);
      bVar2 = *pbVar1;
      if (0xec < bVar2) {
        if (bVar2 == 0xed) {
          lVar9 = 6;
          puVar6 = (undefined4 *)&UNK_013d38e0;
        }
        else if (bVar2 == 0xee) {
          lVar9 = 7;
          puVar6 = (undefined4 *)&UNK_013d38f0;
        }
        else {
                    /* try { // try from 00aec8bc to 00bec8c3 has its CatchHandler @ 00aec92c */
          if (bVar2 != 0xef) goto switchD_00aec82c_default;
          lVar9 = 8;
                    /* try { // try from 00aec8c4 to 00bec8e3 has its CatchHandler @ 00aec7cc */
          puVar6 = (undefined4 *)&UNK_013d3900;
        }
        goto LAB_00aec83c;
      }
      lVar9 = 0;
      switch(bVar2) {
      case 1:
        goto switchD_00aec82c_caseD_1;
      case 2:
        lVar9 = 1;
switchD_00aec82c_caseD_1:
                    /* try { // try from 00aec834 to 00bec83b has its CatchHandler @ 00aec930 */
        puVar6 = (undefined4 *)(&UNK_013d3880 + lVar9 * 0x10);
        if (puVar6 != (undefined4 *)0x0) break;
        goto switchD_00aec82c_default;
      case 3:
        lVar9 = 2;
        puVar6 = (undefined4 *)&UNK_013d38a0;
        break;
      case 4:
        lVar9 = 3;
                    /* try { // try from 00aec8e4 to 00bec8ef has its CatchHandler @ 00aec92c */
        puVar6 = (undefined4 *)&UNK_013d38b0;
        break;
      case 5:
                    /* try { // try from 00aec8f0 to 00bec933 has its CatchHandler @ 00aec7cc */
        lVar9 = 4;
        puVar6 = (undefined4 *)&UNK_013d38c0;
        break;
      case 6:
        lVar9 = 5;
        puVar6 = &DAT_013d38d0;
        break;
      default:
        goto switchD_00aec82c_default;
      }
LAB_00aec83c:
                    /* try { // try from 00aec83c to 00bec85f has its CatchHandler @ 00aec7cc */
      lVar4 = ssl_md(puVar6[2]);
      if (lVar4 != 0) {
        uVar5 = (uint)*(byte *)(param_3 + uVar7 + 1);
                    /* try { // try from 00aec860 to 00bec86b has its CatchHandler @ 00aec930 */
                    /* try { // try from 00aec86c to 00bec893 has its CatchHandler @ 00aec7cc */
        if (((uVar5 - 0xed < 3) || (uVar5 - 1 < 3)) &&
           (iVar3 = ssl_security(param_1,0x5000b,*(undefined4 *)(&UNK_013d3884 + lVar9 * 0x10),
                                 *puVar6,pbVar1), iVar3 != 0)) {
                    /* try { // try from 00aec894 to 00bec89b has its CatchHandler @ 00aec92c */
          *pbVar8 = *pbVar1;
                    /* try { // try from 00aec89c to 00bec8bb has its CatchHandler @ 00aec7cc */
          pbVar8[1] = *(byte *)(param_3 + uVar7 + 1);
          pbVar8 = pbVar8 + 2;
        }
      }
switchD_00aec82c_default:
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00aec894 with catch @ 00aec92c
                       catch(type#1 @ 00000000) { ... } // from try @ 00aec8bc with catch @ 00aec92c
                       catch(type#1 @ 00000000) { ... } // from try @ 00aec8e4 with catch @ 00aec92c
                        */
      uVar7 = uVar7 + 2;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00aec834 with catch @ 00aec930
                       catch(type#1 @ 00000000) { ... } // from try @ 00aec860 with catch @ 00aec930
                        */
                    /* try { // try from 00aec934 to 00beca6f has its CatchHandler @ 00aec934
                       catch() { ... } // from try @ 00aec934 with catch @ 00aec934
                       catch() { ... } // from try @ 00aeca78 with catch @ 00aec934 */
    } while (uVar7 < param_4);
  }
  return (long)pbVar8 - (long)param_2;
}

