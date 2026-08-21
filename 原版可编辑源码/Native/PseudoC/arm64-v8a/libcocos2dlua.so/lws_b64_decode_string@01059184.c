
/* WARNING: Removing unreachable block (ram,0x010591dc) */

int lws_b64_decode_string(byte *param_1,byte *param_2,int param_3)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  char cVar8;
  uint uVar9;
  char local_4;
  byte local_3;
  byte local_2;
  byte local_1;
  
  if (*param_1 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = 0;
    uVar9 = (uint)*param_1;
LAB_010591a8:
    do {
      uVar5 = uVar9;
      pbVar7 = param_1;
      if (((uVar5 - 0x2b & 0xff) < 0x50) && (uVar5 != 0x7b)) {
        cVar8 = '\0';
        if ((&UNK_0145c9b8)[(int)uVar5] != '$') {
          cVar8 = (&UNK_0145c9b8)[(int)uVar5] + -0x3d;
        }
        if (cVar8 == '\0') goto LAB_010591fc;
      }
      else {
        cVar8 = '\0';
LAB_010591fc:
        param_1 = pbVar7 + 1;
        uVar9 = (uint)*param_1;
        if (uVar9 != 0) goto LAB_010591a8;
      }
      param_1 = pbVar7 + 1;
      if (uVar5 == 0) {
        iVar6 = 0;
        local_4 = '\0';
        bVar3 = *param_1;
joined_r0x01059244:
        uVar9 = (uint)bVar3;
        if (bVar3 == 0) goto LAB_01059404;
LAB_01059258:
        do {
          uVar5 = uVar9;
          pbVar7 = param_1;
          if (((uVar5 - 0x2b & 0xff) < 0x50) && (uVar5 != 0x7b)) {
            cVar8 = '\0';
            if ((&UNK_0145c9b8)[(int)uVar5] != '$') {
              cVar8 = (&UNK_0145c9b8)[(int)uVar5] + -0x3d;
            }
                    /* try { // try from 010592b4 to 0115934b has its CatchHandler @ 010590bc */
            if (cVar8 != '\0') break;
          }
          else {
            cVar8 = '\0';
                    /* try { // try from 01059284 to 011592b3 has its CatchHandler @ 01059314 */
          }
          param_1 = pbVar7 + 1;
          uVar9 = (uint)*param_1;
        } while (uVar9 != 0);
        param_1 = pbVar7 + 1;
        if (uVar5 == 0) {
          local_3 = 0;
        }
        else {
          iVar6 = iVar6 + 1;
          if (cVar8 != '\0') {
            local_3 = cVar8 - 1;
          }
        }
        uVar9 = (uint)*param_1;
        if (*param_1 == 0) {
          iVar2 = iVar4 + -1 + iVar6;
        }
        else {
          do {
            uVar5 = uVar9;
            pbVar7 = param_1;
            if (((uVar5 - 0x2b & 0xff) < 0x50) && (uVar5 != 0x7b)) {
              cVar8 = '\0';
              if ((&UNK_0145c9b8)[(int)uVar5] != '$') {
                cVar8 = (&UNK_0145c9b8)[(int)uVar5] + -0x3d;
              }
              if (cVar8 != '\0') break;
            }
            else {
              cVar8 = '\0';
                    /* catch() { ... } // from try @ 01059284 with catch @ 01059314 */
            }
            param_1 = pbVar7 + 1;
            uVar9 = (uint)*param_1;
          } while (uVar9 != 0);
          param_1 = pbVar7 + 1;
          if (uVar5 == 0) {
            local_2 = 0;
          }
          else {
            iVar6 = iVar6 + 1;
            if (cVar8 != '\0') {
              local_2 = cVar8 - 1;
            }
          }
          pbVar7 = param_1;
          uVar9 = (uint)*param_1;
          if (*param_1 == 0) goto LAB_01059404;
          do {
            uVar5 = uVar9;
            param_1 = pbVar7 + 1;
            if (((uVar5 - 0x2b & 0xff) < 0x50) && (uVar5 != 0x7b)) {
              cVar8 = '\0';
              if ((&UNK_0145c9b8)[(int)uVar5] != '$') {
                cVar8 = (&UNK_0145c9b8)[(int)uVar5] + -0x3d;
              }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010593bc with catch @ 010593dc
                        */
              if (cVar8 != '\0') break;
            }
            else {
              cVar8 = '\0';
            }
                    /* try { // try from 010593bc to 011593cb has its CatchHandler @ 010593dc */
            pbVar1 = pbVar7 + 1;
            pbVar7 = param_1;
            uVar9 = (uint)*pbVar1;
          } while (*pbVar1 != 0);
          if (uVar5 == 0) {
            local_1 = 0;
          }
          else {
            iVar6 = iVar6 + 1;
            if (cVar8 == '\0') goto LAB_01059404;
            local_1 = cVar8 - 1;
          }
          iVar2 = iVar4 + -1 + iVar6;
                    /* try { // try from 010594d8 to 011594e7 has its CatchHandler @ 01059500 */
        }
      }
      else {
        if (cVar8 == '\0') {
          iVar6 = 1;
          bVar3 = *param_1;
          goto joined_r0x01059244;
        }
        local_4 = cVar8 + -1;
        iVar6 = 1;
        uVar9 = (uint)*param_1;
        if (*param_1 != 0) goto LAB_01059258;
LAB_01059404:
        iVar2 = iVar4 + -1 + iVar6;
      }
      if (param_3 < iVar2) {
        return -1;
      }
                    /* try { // try from 01059418 to 01159427 has its CatchHandler @ 01059438 */
      iVar6 = iVar6 - (uint)(uVar5 == 0x3d && *param_1 == 0);
      pbVar7 = param_2;
      if (iVar6 < 2) {
LAB_0105945c:
        bVar3 = *param_1;
        param_2 = pbVar7;
joined_r0x010594a8:
        iVar4 = iVar4 + -1 + iVar6;
        uVar9 = (uint)bVar3;
        if (bVar3 == 0) break;
        goto LAB_010591a8;
      }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01059418 with catch @ 01059438
                        */
      pbVar7 = param_2 + 1;
      *param_2 = local_3 >> 4 | local_4 << 2;
      if (iVar6 == 2) goto LAB_0105945c;
                    /* try { // try from 01059474 to 01159483 has its CatchHandler @ 0105949c */
      param_2[1] = local_2 >> 2 | local_3 << 4;
      if (3 < iVar6) {
        param_2[2] = local_1 | local_2 << 6;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01059474 with catch @ 0105949c
                        */
        bVar3 = *param_1;
        param_2 = param_2 + 3;
        goto joined_r0x010594a8;
      }
      param_2 = param_2 + 2;
      iVar4 = iVar4 + -1 + iVar6;
      uVar9 = (uint)*param_1;
    } while (*param_1 != 0);
  }
  if (iVar4 + 1 < param_3) {
    *param_2 = 0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010594d8 with catch @ 01059500
                        */
    return iVar4;
  }
  return -1;
}

