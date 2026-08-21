
uint FUN_00a1055c(long param_1,uint *param_2,byte *param_3,ulong param_4)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  
  uVar4 = *(uint *)(param_1 + 0x28);
  uVar5 = 0;
  pbVar2 = param_3;
  uVar8 = 0;
  if ((uVar4 & 3) != 0) goto LAB_00a105e4;
LAB_00a10578:
  uVar8 = uVar5 + 1;
  if (param_4 < (ulong)(long)(int)uVar8) {
LAB_00a1075c:
    *(uint *)(param_1 + 0x28) = uVar4;
    return uVar5 * -2 - 2;
  }
  bVar1 = *param_3;
  if ((char)bVar1 < '\0') goto LAB_00a107f0;
  if ((1 << (ulong)(bVar1 & 7) & (uint)(byte)(&DAT_012fc594)[bVar1 >> 3]) != 0) {
    *param_2 = (uint)bVar1;
    *(uint *)(param_1 + 0x28) = uVar4;
    return uVar8;
  }
  if (bVar1 == 0x2b) {
    if ((ulong)(long)(int)(uVar5 + 2) <= param_4) {
      pbVar2 = param_3 + 1;
      if (*pbVar2 == 0x2d) {
        *param_2 = 0x2b;
        *(uint *)(param_1 + 0x28) = uVar4;
        return uVar5 + 2;
      }
      uVar4 = 1;
LAB_00a105e4:
      uVar5 = uVar8;
      lVar7 = 0;
      uVar8 = 0;
      iVar9 = 0;
      iVar10 = 2;
      uVar11 = uVar4;
      do {
        bVar1 = pbVar2[lVar7];
        uVar3 = bVar1 - 0x41;
        iVar6 = (int)lVar7;
        if (uVar3 < 0x1a) {
          switch(uVar11 & 3) {
          case 1:
            goto switchD_00a10640_caseD_1;
          case 2:
            goto switchD_00a10640_caseD_2;
          case 3:
            goto switchD_00a10640_caseD_3;
          }
switchD_00a10640_caseD_0:
          uVar8 = uVar11 & 0xfffffffc | uVar8 << 8 | uVar3 >> 4;
          uVar11 = (uVar3 & 0xf) << 4 | 2;
          goto joined_r0x00a10724;
        }
        if (bVar1 - 0x61 < 0x1a) {
          uVar3 = bVar1 - 0x47;
          switch(uVar11 & 3) {
          case 1:
            goto switchD_00a10640_caseD_1;
          case 2:
            goto switchD_00a10640_caseD_2;
          case 3:
            goto switchD_00a10640_caseD_3;
          }
          goto switchD_00a10640_caseD_0;
        }
        uVar3 = (uint)bVar1;
        if (uVar3 - 0x30 < 10) {
          uVar3 = bVar1 + 4;
          switch(uVar11 & 3) {
          case 1:
            goto switchD_00a10640_caseD_1;
          case 2:
            goto switchD_00a10640_caseD_2;
          case 3:
            goto switchD_00a10640_caseD_3;
          }
          goto switchD_00a10640_caseD_0;
        }
        if (uVar3 == 0x2b) {
          uVar3 = 0x3e;
          switch(uVar11 & 3) {
          case 1:
            goto switchD_00a10640_caseD_1;
          case 2:
            goto switchD_00a10640_caseD_2;
          case 3:
            goto switchD_00a10640_caseD_3;
          }
          goto switchD_00a10640_caseD_0;
        }
        if (uVar3 != 0x2f) goto LAB_00a107c4;
        uVar3 = 0x3f;
        switch(uVar11 & 3) {
        case 0:
          goto switchD_00a10640_caseD_0;
        case 1:
switchD_00a10640_caseD_1:
          uVar11 = uVar3 << 2;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a10614 with catch @ 00a10750
                        */
          goto joined_r0x00a10754;
        case 2:
switchD_00a10640_caseD_2:
          uVar8 = uVar11 & 0xfffffffc | uVar8 << 8 | uVar3 >> 2;
          uVar11 = (uVar3 & 3) << 6 | 3;
          break;
        case 3:
switchD_00a10640_caseD_3:
          uVar8 = uVar11 & 0xfffffffc | uVar8 << 8 | uVar3;
          uVar11 = 1;
        }
joined_r0x00a10724:
        iVar9 = iVar9 + 1;
joined_r0x00a10754:
        if (iVar9 == iVar10) {
          if ((iVar10 != 2) || ((uVar8 & 0xfffffc00) != 0xd800)) {
            if ((uVar11 & 3) == 0) {
LAB_00a10828:
                    /* WARNING: Subroutine does not return */
              abort();
            }
            if (iVar10 == 4) {
              if (uVar8 >> 0x1a != 0x36) goto LAB_00a10828;
              if ((uVar8 & 0xfc00) != 0xdc00) goto LAB_00a107f0;
              uVar8 = (uVar8 & 0xffff) + (uVar8 >> 0x10) * 0x400 + 0xfca02400;
            }
            *param_2 = uVar8;
            *(uint *)(param_1 + 0x28) = uVar11;
            return uVar5 + iVar6 + 1;
                    /* catch() { ... } // from try @ 00a10d54 with catch @ 00a107c0
                       catch() { ... } // from try @ 00a10e04 with catch @ 00a107c0
                       catch() { ... } // from try @ 00a10f28 with catch @ 00a107c0
                       catch() { ... } // from try @ 00a10fac with catch @ 00a107c0 */
          }
          iVar10 = 4;
        }
                    /* try { // try from 00a10614 to 00b10617 has its CatchHandler @ 00a10750 */
        lVar7 = lVar7 + 1;
        if (param_4 < uVar5 + iVar6 + 2) break;
      } while( true );
    }
    goto LAB_00a1075c;
  }
  goto LAB_00a107f0;
LAB_00a107c4:
  if ((uVar11 < 4) && (iVar6 == 0)) {
    param_3 = pbVar2 + lVar7;
    uVar4 = 0;
    if (uVar3 == 0x2d) {
      uVar5 = uVar5 + 1;
      param_3 = pbVar2 + lVar7 + 1;
    }
    goto LAB_00a10578;
  }
LAB_00a107f0:
  *(uint *)(param_1 + 0x28) = uVar4;
  return uVar5 << 1 ^ 0xffffffff;
}

