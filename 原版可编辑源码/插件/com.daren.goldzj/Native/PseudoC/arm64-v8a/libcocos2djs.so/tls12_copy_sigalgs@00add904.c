
/* WARNING: Removing unreachable block (ram,0x00adda38) */
/* WARNING: Removing unreachable block (ram,0x00adda58) */
/* WARNING: Removing unreachable block (ram,0x00adda68) */
/* WARNING: Removing unreachable block (ram,0x00adda18) */
/* WARNING: Removing unreachable block (ram,0x00adda48) */
/* WARNING: Removing unreachable block (ram,0x00adda28) */

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
  
                    /* try { // try from 00add928 to 00bdda4b has its CatchHandler @ 00add928
                       catch() { ... } // from try @ 00add928 with catch @ 00add928
                       catch() { ... } // from try @ 00adda54 with catch @ 00add928
                       catch() { ... } // from try @ 00addc54 with catch @ 00add928
                       catch() { ... } // from try @ 00addca8 with catch @ 00add928 */
  pbVar8 = param_2;
  if (param_4 != 0) {
    uVar7 = 0;
    do {
      pbVar1 = (byte *)(param_3 + uVar7);
      bVar2 = *pbVar1;
      if (0xec < bVar2) {
        if (bVar2 == 0xed) {
          lVar9 = 6;
          puVar6 = (undefined4 *)&UNK_018a5460;
        }
        else if (bVar2 == 0xee) {
          lVar9 = 7;
          puVar6 = (undefined4 *)&UNK_018a5470;
        }
        else {
          if (bVar2 != 0xef) goto switchD_00add978_default;
          lVar9 = 8;
          puVar6 = (undefined4 *)&UNK_018a5480;
        }
        goto LAB_00add988;
      }
      lVar9 = 0;
      switch(bVar2) {
      case 1:
        goto switchD_00add978_caseD_1;
      case 2:
        lVar9 = 1;
switchD_00add978_caseD_1:
        puVar6 = (undefined4 *)(&UNK_018a5400 + lVar9 * 0x10);
        if (puVar6 != (undefined4 *)0x0) break;
        goto switchD_00add978_default;
      case 3:
        lVar9 = 2;
        puVar6 = (undefined4 *)&UNK_018a5420;
        break;
      case 4:
        lVar9 = 3;
        puVar6 = (undefined4 *)&UNK_018a5430;
        break;
      case 5:
        lVar9 = 4;
        puVar6 = (undefined4 *)&UNK_018a5440;
        break;
      case 6:
                    /* try { // try from 00adda4c to 00bdda53 has its CatchHandler @ 00addca8 */
        lVar9 = 5;
        puVar6 = &DAT_018a5450;
                    /* try { // try from 00adda54 to 00bdda77 has its CatchHandler @ 00add928 */
        break;
      default:
        goto switchD_00add978_default;
      }
LAB_00add988:
      lVar4 = ssl_md(puVar6[2]);
      if (lVar4 != 0) {
        uVar5 = (uint)*(byte *)(param_3 + uVar7 + 1);
        if (((uVar5 - 0xed < 3) || (uVar5 - 1 < 3)) &&
           (iVar3 = ssl_security(param_1,0x5000b,*(undefined4 *)(&UNK_018a5404 + lVar9 * 0x10),
                                 *puVar6,pbVar1), iVar3 != 0)) {
          *pbVar8 = *pbVar1;
          pbVar8[1] = *(byte *)(param_3 + uVar7 + 1);
          pbVar8 = pbVar8 + 2;
        }
      }
switchD_00add978_default:
                    /* try { // try from 00adda78 to 00bdda8b has its CatchHandler @ 00addd14 */
      uVar7 = uVar7 + 2;
    } while (uVar7 < param_4);
  }
                    /* try { // try from 00adda8c to 00bddaa3 has its CatchHandler @ 00addcf4 */
  return (long)pbVar8 - (long)param_2;
}

