
void FUN_00d624f4(float *param_1,long *param_2,long param_3,int param_4)

{
  ulong uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  void *pvVar5;
  undefined8 uVar6;
  int iVar7;
  char *pcVar8;
  byte *pbVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  byte *pbVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  void *local_88;
  void *local_78;
  ulong local_70;
  void *local_68;
  
                    /* try { // try from 00d62514 to 00e6251f has its CatchHandler @ 00d62c24 */
  *(int *)(param_3 + 0x40) = param_4 << 1;
  pcVar8 = (char *)*param_2;
  *param_2 = (long)(pcVar8 + 1);
  if (*pcVar8 == '\0') {
    *(int *)(param_3 + 0x30) = param_4 << 1;
                    /* try { // try from 00d62a48 to 00e62a53 has its CatchHandler @ 00d62bc4 */
    uVar6 = FUN_00d62b24(*param_1,param_2);
    *(undefined8 *)(param_3 + 0x38) = uVar6;
    *(undefined4 *)(param_3 + 0x20) = 0;
    *(undefined8 *)(param_3 + 0x28) = 0;
  }
  else {
                    /* try { // try from 00d62544 to 00e6254f has its CatchHandler @ 00d62c20 */
    uVar15 = (ulong)(param_4 * 0x12);
    pvVar5 = (void *)_spMalloc(-(ulong)((param_4 * 9 & 0x7fffffffU) >> 0x1e) & 0xfffffffc00000000 |
                               (ulong)(uint)(param_4 * 0x12) << 2,
                               "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonBinary.c"
                               ,0x289);
                    /* try { // try from 00d62574 to 00e6257f has its CatchHandler @ 00d62c1c */
    _spFree((void *)0x0);
    local_70 = (ulong)(param_4 * 6);
    local_88 = (void *)_spMalloc(-(ulong)((param_4 * 3 & 0x7fffffffU) >> 0x1e) & 0xfffffffc00000000
                                 | (ulong)(uint)(param_4 * 6) << 2,
                                 "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonBinary.c"
                                 ,0x28c);
    _spFree((void *)0x0);
    local_78 = local_88;
    local_68 = pvVar5;
    if (param_4 < 1) {
      uVar14 = 0;
      uVar16 = 0;
    }
    else {
      iVar7 = 0;
      uVar16 = 0;
      uVar10 = 0;
                    /* try { // try from 00d625c4 to 00e625db has its CatchHandler @ 00d62c98 */
      do {
        pbVar9 = (byte *)*param_2;
        *param_2 = (long)(pbVar9 + 1);
                    /* try { // try from 00d62600 to 00e62617 has its CatchHandler @ 00d62c5c */
        uVar12 = *pbVar9 & 0x7f;
        if ((char)*pbVar9 < '\0') {
          *param_2 = (long)(pbVar9 + 2);
          uVar12 = uVar12 | (pbVar9[1] & 0x7f) << 7;
                    /* try { // try from 00d6261c to 00e62633 has its CatchHandler @ 00d62c58 */
          if ((char)pbVar9[1] < '\0') {
            *param_2 = (long)(pbVar9 + 3);
            uVar12 = uVar12 | (pbVar9[2] & 0x7f) << 0xe;
            if ((char)pbVar9[2] < '\0') {
                    /* try { // try from 00d62638 to 00e6264f has its CatchHandler @ 00d62c54 */
              *param_2 = (long)(pbVar9 + 4);
              uVar12 = uVar12 | (pbVar9[3] & 0x7f) << 0x15;
              if ((char)pbVar9[3] < '\0') {
                *param_2 = (long)(pbVar9 + 5);
                uVar12 = uVar12 | (uint)pbVar9[4] << 0x1c;
              }
            }
          }
        }
                    /* try { // try from 00d62658 to 00e62663 has its CatchHandler @ 00d62bc0 */
        if (uVar10 == local_70) {
                    /* try { // try from 00d62664 to 00e6266f has its CatchHandler @ 00d62bb0 */
          uVar14 = 2;
          if (local_70 != 0) {
            uVar14 = local_70 << 1;
          }
                    /* try { // try from 00d62670 to 00e6267b has its CatchHandler @ 00d62b90 */
                    /* try { // try from 00d6267c to 00e62693 has its CatchHandler @ 00d62b5c */
          local_88 = (void *)_spMalloc(uVar14 << 2,
                                       "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonBinary.c"
                                       ,0x290);
          if ((local_70 != 0) && (uVar14 != 0)) {
                    /* try { // try from 00d6269c to 00e626a7 has its CatchHandler @ 00d62b58 */
            uVar17 = uVar14;
            if (local_70 <= local_70 << 1) {
              uVar17 = local_70;
            }
                    /* try { // try from 00d626a8 to 00e626b3 has its CatchHandler @ 00d62b54 */
            memcpy(local_88,local_78,uVar17 << 2);
          }
                    /* try { // try from 00d626b4 to 00e626bf has its CatchHandler @ 00d62b50 */
          _spFree(local_78);
          local_78 = local_88;
          local_70 = uVar14;
                    /* try { // try from 00d626c0 to 00e626d7 has its CatchHandler @ 00d62b4c */
        }
                    /* try { // try from 00d626dc to 00e626e7 has its CatchHandler @ 00d62b48 */
        uVar14 = uVar10 + 1;
        *(uint *)((long)local_88 + uVar10 * 4) = uVar12;
                    /* try { // try from 00d626e8 to 00e626f3 has its CatchHandler @ 00d62b44 */
        if (0 < (int)uVar12) {
          uVar10 = uVar10 * 2;
                    /* try { // try from 00d626f4 to 00e626ff has its CatchHandler @ 00d62b40 */
          do {
            uVar17 = uVar16;
            uVar10 = uVar10 + 2;
                    /* try { // try from 00d6276c to 00e62777 has its CatchHandler @ 00d62b34 */
            if (uVar14 == local_70) {
                    /* try { // try from 00d62778 to 00e62783 has its CatchHandler @ 00d62b30 */
              local_70 = 2;
              if (uVar14 != 0) {
                local_70 = uVar10;
              }
                    /* try { // try from 00d62784 to 00e6279b has its CatchHandler @ 00d62b2c */
              local_88 = (void *)_spMalloc(local_70 << 2,
                                           "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonBinary.c"
                                           ,0x292);
              if ((uVar14 != 0) && (local_70 != 0)) {
                uVar16 = local_70;
                if (uVar14 <= uVar10) {
                  uVar16 = uVar14;
                }
                    /* try { // try from 00d627bc to 00e627df has its CatchHandler @ 00d62c50 */
                memcpy(local_88,local_78,uVar16 << 2);
              }
              _spFree(local_78);
              local_78 = local_88;
            }
            pbVar13 = (byte *)*param_2;
            pbVar9 = pbVar13 + 1;
            *param_2 = (long)pbVar9;
            uVar11 = *pbVar13 & 0x7f;
                    /* try { // try from 00d627f8 to 00e6280b has its CatchHandler @ 00d62c48 */
            if ((char)*pbVar13 < '\0') {
              pbVar9 = pbVar13 + 2;
              *param_2 = (long)pbVar9;
              uVar11 = uVar11 | (pbVar13[1] & 0x7f) << 7;
              if ((char)pbVar13[1] < '\0') {
                pbVar9 = pbVar13 + 3;
                    /* try { // try from 00d62814 to 00e6282b has its CatchHandler @ 00d62c30 */
                *param_2 = (long)pbVar9;
                uVar11 = uVar11 | (pbVar13[2] & 0x7f) << 0xe;
                if ((char)pbVar13[2] < '\0') {
                  pbVar9 = pbVar13 + 4;
                  *param_2 = (long)pbVar9;
                    /* try { // try from 00d62830 to 00e62847 has its CatchHandler @ 00d62c2c */
                  uVar11 = uVar11 | (pbVar13[3] & 0x7f) << 0x15;
                  if ((char)pbVar13[3] < '\0') {
                    pbVar9 = pbVar13 + 5;
                    *param_2 = (long)pbVar9;
                    uVar11 = uVar11 | (uint)pbVar13[4] << 0x1c;
                  }
                }
              }
            }
                    /* try { // try from 00d6284c to 00e6286b has its CatchHandler @ 00d62c28 */
            *(uint *)((long)local_88 + uVar14 * 4) = uVar11;
            if (uVar17 == uVar15) {
              uVar16 = 2;
              if (uVar15 != 0) {
                uVar16 = uVar15 << 1;
              }
                    /* try { // try from 00d6286c to 00e6287f has its CatchHandler @ 00d62c94 */
              pvVar5 = (void *)_spMalloc(uVar16 << 2,
                                         "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonBinary.c"
                                         ,0x293);
                    /* try { // try from 00d62884 to 00e6289f has its CatchHandler @ 00d62c44 */
              if ((uVar15 != 0) && (uVar16 != 0)) {
                uVar1 = uVar16;
                if (uVar15 <= uVar15 << 1) {
                  uVar1 = uVar15;
                }
                memcpy(pvVar5,local_68,uVar1 << 2);
              }
                    /* try { // try from 00d628a4 to 00e628ab has its CatchHandler @ 00d62c18 */
              _spFree(local_68);
              pbVar9 = (byte *)*param_2;
              uVar15 = uVar16;
              local_68 = pvVar5;
                    /* try { // try from 00d628ac to 00e628b7 has its CatchHandler @ 00d62bcc */
            }
            *param_2 = (long)(pbVar9 + 1);
                    /* try { // try from 00d628c8 to 00e628db has its CatchHandler @ 00d62c90 */
            pbVar13 = pbVar9 + 4;
            bVar2 = *pbVar9;
            *param_2 = (long)(pbVar9 + 2);
            bVar3 = pbVar9[1];
            *param_2 = (long)(pbVar9 + 3);
                    /* try { // try from 00d628e0 to 00e628f3 has its CatchHandler @ 00d62c8c */
            bVar4 = pbVar9[2];
            *param_2 = (long)pbVar13;
                    /* try { // try from 00d628f8 to 00e6290b has its CatchHandler @ 00d62c88 */
            *(float *)((long)pvVar5 + uVar17 * 4) =
                 *param_1 * (float)CONCAT31(CONCAT21(CONCAT11(bVar2,bVar3),bVar4),pbVar9[3]);
                    /* try { // try from 00d62914 to 00e6292b has its CatchHandler @ 00d62c40 */
            if (uVar17 + 1 == uVar15) {
              uVar16 = 2;
              if (uVar15 != 0) {
                uVar16 = uVar15 << 1;
              }
              pvVar5 = (void *)_spMalloc(uVar16 << 2,
                                         "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonBinary.c"
                                         ,0x294);
                    /* try { // try from 00d6293c to 00e62953 has its CatchHandler @ 00d62c3c */
              if ((uVar15 != 0) && (uVar16 != 0)) {
                uVar1 = uVar16;
                if (uVar15 <= uVar15 << 1) {
                  uVar1 = uVar15;
                }
                memcpy(pvVar5,local_68,uVar1 << 2);
              }
                    /* try { // try from 00d62964 to 00e6297b has its CatchHandler @ 00d62c38 */
              _spFree(local_68);
              pbVar13 = (byte *)*param_2;
              uVar15 = uVar16;
              local_68 = pvVar5;
            }
                    /* try { // try from 00d62988 to 00e629a3 has its CatchHandler @ 00d62c84 */
            *param_2 = (long)(pbVar13 + 1);
            pbVar9 = pbVar13 + 4;
            bVar2 = *pbVar13;
            *param_2 = (long)(pbVar13 + 2);
            bVar3 = pbVar13[1];
            *param_2 = (long)(pbVar13 + 3);
                    /* try { // try from 00d629a4 to 00e629df has its CatchHandler @ 00d62cac */
            bVar4 = pbVar13[2];
            *param_2 = (long)pbVar9;
            *(float *)((long)pvVar5 + uVar17 * 4 + 4) =
                 *param_1 * (float)CONCAT31(CONCAT21(CONCAT11(bVar2,bVar3),bVar4),pbVar13[3]);
            if (uVar17 + 2 == uVar15) {
                    /* try { // try from 00d629e0 to 00e629f3 has its CatchHandler @ 00d62ca8 */
              uVar16 = 2;
              if (uVar15 != 0) {
                uVar16 = uVar15 << 1;
              }
                    /* try { // try from 00d629f8 to 00e62a13 has its CatchHandler @ 00d62c34 */
              pvVar5 = (void *)_spMalloc(uVar16 << 2,
                                         "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonBinary.c"
                                         ,0x295);
              if ((uVar15 != 0) && (uVar16 != 0)) {
                uVar1 = uVar16;
                if (uVar15 <= uVar15 << 1) {
                  uVar1 = uVar15;
                }
                    /* try { // try from 00d62a20 to 00e62a27 has its CatchHandler @ 00d62b28 */
                memcpy(pvVar5,local_68,uVar1 << 2);
              }
                    /* try { // try from 00d62a28 to 00e62a33 has its CatchHandler @ 00d62b24 */
              _spFree(local_68);
              pbVar9 = (byte *)*param_2;
              uVar15 = uVar16;
              local_68 = pvVar5;
                    /* try { // try from 00d62a38 to 00e62a47 has its CatchHandler @ 00d62bc8 */
            }
                    /* try { // try from 00d62700 to 00e62717 has its CatchHandler @ 00d62b3c */
            *param_2 = (long)(pbVar9 + 1);
            bVar2 = *pbVar9;
            *param_2 = (long)(pbVar9 + 2);
            bVar3 = pbVar9[1];
            *param_2 = (long)(pbVar9 + 3);
            bVar4 = pbVar9[2];
            *param_2 = (long)(pbVar9 + 4);
            *(uint *)((long)pvVar5 + uVar17 * 4 + 8) =
                 CONCAT31(CONCAT21(CONCAT11(bVar2,bVar3),bVar4),pbVar9[3]);
            uVar14 = uVar14 + 1;
            uVar12 = uVar12 - 1;
            uVar16 = uVar17 + 3;
                    /* try { // try from 00d62760 to 00e6276b has its CatchHandler @ 00d62b38 */
          } while (uVar12 != 0);
          uVar16 = uVar17 + 3;
        }
        iVar7 = iVar7 + 1;
                    /* try { // try from 00d625e4 to 00e625fb has its CatchHandler @ 00d62c60 */
        uVar10 = uVar14;
      } while (iVar7 != param_4);
    }
                    /* try { // try from 00d62a70 to 00e62a7b has its CatchHandler @ 00d62ca8 */
                    /* try { // try from 00d62a7c to 00e62ccf has its CatchHandler @ 00d62400 */
    pvVar5 = (void *)_spMalloc(uVar16 << 2,
                               "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonBinary.c"
                               ,0x299);
    if ((uVar16 != 0) && (uVar15 != 0)) {
      uVar10 = uVar16;
      if (uVar15 <= uVar16) {
        uVar10 = uVar15;
      }
      memcpy(pvVar5,local_68,uVar10 << 2);
    }
    _spFree(local_68);
    *(int *)(param_3 + 0x30) = (int)uVar16;
    *(void **)(param_3 + 0x38) = pvVar5;
    pvVar5 = (void *)_spMalloc(uVar14 << 2,
                               "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonBinary.c"
                               ,0x29d);
    if ((uVar14 != 0) && (local_70 != 0)) {
      uVar15 = uVar14;
      if (local_70 <= uVar14) {
        uVar15 = local_70;
      }
      memcpy(pvVar5,local_78,uVar15 << 2);
    }
    _spFree(local_78);
    *(int *)(param_3 + 0x20) = (int)uVar14;
    *(void **)(param_3 + 0x28) = pvVar5;
  }
  return;
}

