
/* WARNING: Removing unreachable block (ram,0x00ab6a58) */

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
                    /* try { // try from 00ab6d64 to 00bb6d6b has its CatchHandler @ 00ab73b8 */
    iVar4 = 0;
  }
  else {
    iVar4 = 0;
    uVar9 = (uint)*param_1;
LAB_00ab6a24:
    do {
      uVar5 = uVar9;
      pbVar7 = param_1;
      if (((uVar5 - 0x2b & 0xff) < 0x50) && (uVar5 != 0x7b)) {
        cVar8 = '\0';
        if ("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
            [(long)(int)uVar5 + 0x16] != '$') {
          cVar8 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                  [(long)(int)uVar5 + 0x16] + -0x3d;
        }
        if (cVar8 == '\0') goto LAB_00ab6a78;
      }
      else {
        cVar8 = '\0';
LAB_00ab6a78:
        param_1 = pbVar7 + 1;
        uVar9 = (uint)*param_1;
        if (uVar9 != 0) goto LAB_00ab6a24;
      }
      param_1 = pbVar7 + 1;
      if (uVar5 == 0) {
        iVar6 = 0;
        local_4 = '\0';
        bVar3 = *param_1;
joined_r0x00ab6ac0:
        uVar9 = (uint)bVar3;
        if (bVar3 == 0) goto LAB_00ab6c80;
LAB_00ab6ad4:
        do {
          uVar5 = uVar9;
          pbVar7 = param_1;
          if (((uVar5 - 0x2b & 0xff) < 0x50) && (uVar5 != 0x7b)) {
            cVar8 = '\0';
            if ("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                [(long)(int)uVar5 + 0x16] != '$') {
              cVar8 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                      [(long)(int)uVar5 + 0x16] + -0x3d;
            }
            if (cVar8 != '\0') break;
          }
          else {
            cVar8 = '\0';
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
              if ("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                  [(long)(int)uVar5 + 0x16] != '$') {
                cVar8 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                        [(long)(int)uVar5 + 0x16] + -0x3d;
              }
              if (cVar8 != '\0') break;
            }
            else {
              cVar8 = '\0';
            }
                    /* try { // try from 00ab6b94 to 00bb6ce7 has its CatchHandler @ 00ab6b94
                       catch() { ... } // from try @ 00ab6b94 with catch @ 00ab6b94
                       catch() { ... } // from try @ 00ab6d6c with catch @ 00ab6b94
                       catch() { ... } // from try @ 00ab6e2c with catch @ 00ab6b94
                       catch() { ... } // from try @ 00ab6f94 with catch @ 00ab6b94
                       catch() { ... } // from try @ 00ab71c4 with catch @ 00ab6b94
                       catch() { ... } // from try @ 00ab7368 with catch @ 00ab6b94
                       catch() { ... } // from try @ 00ab7390 with catch @ 00ab6b94 */
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
          if (*param_1 == 0) goto LAB_00ab6c80;
          do {
            uVar5 = uVar9;
            param_1 = pbVar7 + 1;
            if (((uVar5 - 0x2b & 0xff) < 0x50) && (uVar5 != 0x7b)) {
              cVar8 = '\0';
              if ("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                  [(long)(int)uVar5 + 0x16] != '$') {
                cVar8 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                        [(long)(int)uVar5 + 0x16] + -0x3d;
              }
              if (cVar8 != '\0') break;
            }
            else {
              cVar8 = '\0';
            }
            pbVar1 = pbVar7 + 1;
            pbVar7 = param_1;
            uVar9 = (uint)*pbVar1;
          } while (*pbVar1 != 0);
          if (uVar5 == 0) {
            local_1 = 0;
          }
          else {
            iVar6 = iVar6 + 1;
            if (cVar8 == '\0') goto LAB_00ab6c80;
            local_1 = cVar8 - 1;
          }
          iVar2 = iVar4 + -1 + iVar6;
        }
      }
      else {
        if (cVar8 == '\0') {
          iVar6 = 1;
          bVar3 = *param_1;
          goto joined_r0x00ab6ac0;
        }
        local_4 = cVar8 + -1;
        iVar6 = 1;
        uVar9 = (uint)*param_1;
        if (*param_1 != 0) goto LAB_00ab6ad4;
LAB_00ab6c80:
        iVar2 = iVar4 + -1 + iVar6;
      }
      if (param_3 < iVar2) {
        return -1;
      }
      iVar6 = iVar6 - (uint)(uVar5 == 0x3d && *param_1 == 0);
      pbVar7 = param_2;
      if (iVar6 < 2) {
LAB_00ab6cd8:
        bVar3 = *param_1;
        param_2 = pbVar7;
joined_r0x00ab6d24:
        iVar4 = iVar4 + -1 + iVar6;
        uVar9 = (uint)bVar3;
        if (bVar3 == 0) break;
        goto LAB_00ab6a24;
      }
      pbVar7 = param_2 + 1;
      *param_2 = local_3 >> 4 | local_4 << 2;
      if (iVar6 == 2) goto LAB_00ab6cd8;
                    /* try { // try from 00ab6ce8 to 00bb6d23 has its CatchHandler @ 00ab73d0 */
      param_2[1] = local_2 >> 2 | local_3 << 4;
      if (3 < iVar6) {
        param_2[2] = local_1 | local_2 << 6;
        bVar3 = *param_1;
        param_2 = param_2 + 3;
        goto joined_r0x00ab6d24;
      }
      param_2 = param_2 + 2;
      iVar4 = iVar4 + -1 + iVar6;
      uVar9 = (uint)*param_1;
    } while (*param_1 != 0);
  }
                    /* try { // try from 00ab6d6c to 00bb6dab has its CatchHandler @ 00ab6b94 */
  if (iVar4 + 1 < param_3) {
    *param_2 = 0;
    return iVar4;
  }
  return -1;
}

