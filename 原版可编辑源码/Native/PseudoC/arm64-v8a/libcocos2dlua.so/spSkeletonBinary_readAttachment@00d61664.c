
long spSkeletonBinary_readAttachment
               (float *param_1,long *param_2,undefined8 param_3,undefined4 param_4,char *param_5,
               long param_6,int param_7)

{
  undefined8 *puVar1;
  float fVar2;
  char *__s;
  undefined1 uVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  byte bVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  int iVar10;
  undefined1 *puVar11;
  char *pcVar12;
  size_t sVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  void *__dest;
  long lVar16;
  long lVar17;
  short *psVar18;
  byte *pbVar19;
  char *pcVar20;
  undefined1 *puVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  byte *pbVar25;
  short *psVar26;
  uint uVar27;
  uint uVar28;
  float fVar29;
  
                    /* try { // try from 00d6166c to 00e6178f has its CatchHandler @ 00d6179c */
  pcVar12 = (char *)readString(param_2);
  puVar21 = (undefined1 *)*param_2;
  __s = pcVar12;
  if (pcVar12 == (char *)0x0) {
    __s = param_5;
  }
  *param_2 = (long)(puVar21 + 1);
  uVar3 = *puVar21;
  switch(uVar3) {
  case 0:
    pcVar20 = (char *)readString(param_2);
    if (pcVar20 == (char *)0x0) {
      sVar13 = strlen(__s);
      pcVar20 = (char *)_spMalloc(sVar13 + 1,
                                  "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonBinary.c"
                                  ,0x2b4);
      strcpy(pcVar20,__s);
    }
    lVar17 = spAttachmentLoader_createAttachment
                       (*(undefined8 *)(param_1 + 2),param_3,uVar3,__s,pcVar20);
    *(char **)(lVar17 + 0x20) = pcVar20;
    puVar21 = (undefined1 *)*param_2;
    *param_2 = (long)(puVar21 + 1);
    uVar3 = *puVar21;
    *param_2 = (long)(puVar21 + 2);
    uVar8 = puVar21[1];
    *param_2 = (long)(puVar21 + 3);
    uVar9 = puVar21[2];
    *param_2 = (long)(puVar21 + 4);
    *(uint *)(lVar17 + 0x38) = CONCAT31(CONCAT21(CONCAT11(uVar3,uVar8),uVar9),puVar21[3]);
    *param_2 = (long)(puVar21 + 5);
    uVar3 = puVar21[4];
    *param_2 = (long)(puVar21 + 6);
                    /* try { // try from 00d61790 to 00e617b7 has its CatchHandler @ 00d615e0 */
    uVar8 = puVar21[5];
                    /* catch() { ... } // from try @ 00d6166c with catch @ 00d6179c */
    *param_2 = (long)(puVar21 + 7);
    uVar9 = puVar21[6];
    *param_2 = (long)(puVar21 + 8);
    fVar29 = *param_1;
    *(float *)(lVar17 + 0x28) =
         fVar29 * (float)CONCAT31(CONCAT21(CONCAT11(uVar3,uVar8),uVar9),puVar21[7]);
    *param_2 = (long)(puVar21 + 9);
    uVar3 = puVar21[8];
    *param_2 = (long)(puVar21 + 10);
    uVar8 = puVar21[9];
    *param_2 = (long)(puVar21 + 0xb);
    uVar9 = puVar21[10];
    *param_2 = (long)(puVar21 + 0xc);
    *(float *)(lVar17 + 0x2c) =
         fVar29 * (float)CONCAT31(CONCAT21(CONCAT11(uVar3,uVar8),uVar9),puVar21[0xb]);
    *param_2 = (long)(puVar21 + 0xd);
    uVar3 = puVar21[0xc];
    *param_2 = (long)(puVar21 + 0xe);
    uVar8 = puVar21[0xd];
    *param_2 = (long)(puVar21 + 0xf);
    uVar9 = puVar21[0xe];
    *param_2 = (long)(puVar21 + 0x10);
    *(uint *)(lVar17 + 0x30) = CONCAT31(CONCAT21(CONCAT11(uVar3,uVar8),uVar9),puVar21[0xf]);
    *param_2 = (long)(puVar21 + 0x11);
    uVar3 = puVar21[0x10];
    *param_2 = (long)(puVar21 + 0x12);
    uVar8 = puVar21[0x11];
    *param_2 = (long)(puVar21 + 0x13);
    uVar9 = puVar21[0x12];
    *param_2 = (long)(puVar21 + 0x14);
    *(uint *)(lVar17 + 0x34) = CONCAT31(CONCAT21(CONCAT11(uVar3,uVar8),uVar9),puVar21[0x13]);
    *param_2 = (long)(puVar21 + 0x15);
    uVar3 = puVar21[0x14];
    *param_2 = (long)(puVar21 + 0x16);
    uVar8 = puVar21[0x15];
    *param_2 = (long)(puVar21 + 0x17);
    uVar9 = puVar21[0x16];
    *param_2 = (long)(puVar21 + 0x18);
                    /* try { // try from 00d618c4 to 00e61997 has its CatchHandler @ 00d618c4
                       catch() { ... } // from try @ 00d618c4 with catch @ 00d618c4
                       catch() { ... } // from try @ 00d619b0 with catch @ 00d618c4
                       catch() { ... } // from try @ 00d61a34 with catch @ 00d618c4
                       catch() { ... } // from try @ 00d61a8c with catch @ 00d618c4 */
    *(float *)(lVar17 + 0x3c) =
         fVar29 * (float)CONCAT31(CONCAT21(CONCAT11(uVar3,uVar8),uVar9),puVar21[0x17]);
    *param_2 = (long)(puVar21 + 0x19);
    uVar3 = puVar21[0x18];
    *param_2 = (long)(puVar21 + 0x1a);
    uVar8 = puVar21[0x19];
    *param_2 = (long)(puVar21 + 0x1b);
    uVar9 = puVar21[0x1a];
    *param_2 = (long)(puVar21 + 0x1c);
    *(float *)(lVar17 + 0x40) =
         fVar29 * (float)CONCAT31(CONCAT21(CONCAT11(uVar3,uVar8),uVar9),puVar21[0x1b]);
    *param_2 = (long)(puVar21 + 0x1d);
    fVar29 = (float)NEON_ucvtf((uint)(byte)puVar21[0x1c]);
    *(float *)(lVar17 + 0x44) = fVar29 / 255.0;
    *param_2 = (long)(puVar21 + 0x1e);
    fVar29 = (float)NEON_ucvtf((uint)(byte)puVar21[0x1d]);
    *(float *)(lVar17 + 0x48) = fVar29 / 255.0;
    *param_2 = (long)(puVar21 + 0x1f);
    fVar29 = (float)NEON_ucvtf((uint)(byte)puVar21[0x1e]);
    *(float *)(lVar17 + 0x4c) = fVar29 / 255.0;
    *param_2 = (long)(puVar21 + 0x20);
    fVar29 = (float)NEON_ucvtf((uint)(byte)puVar21[0x1f]);
    *(float *)(lVar17 + 0x50) = fVar29 / 255.0;
    spRegionAttachment_updateOffset();
    break;
  case 1:
    *param_2 = (long)(puVar21 + 2);
                    /* try { // try from 00d619b0 to 00e61a2b has its CatchHandler @ 00d618c4 */
    uVar27 = (byte)puVar21[1] & 0x7f;
    if ((char)puVar21[1] < '\0') {
      *param_2 = (long)(puVar21 + 3);
      uVar27 = uVar27 | ((byte)puVar21[2] & 0x7f) << 7;
      if ((char)puVar21[2] < '\0') {
        *param_2 = (long)(puVar21 + 4);
        uVar27 = uVar27 | ((byte)puVar21[3] & 0x7f) << 0xe;
        if ((char)puVar21[3] < '\0') {
          *param_2 = (long)(puVar21 + 5);
          uVar27 = uVar27 | ((byte)puVar21[4] & 0x7f) << 0x15;
          if ((char)puVar21[4] < '\0') {
            *param_2 = (long)(puVar21 + 6);
            uVar27 = uVar27 | (uint)(byte)puVar21[5] << 0x1c;
          }
        }
      }
    }
    lVar17 = spAttachmentLoader_createAttachment(*(undefined8 *)(param_1 + 2),param_3,uVar3,__s,0);
                    /* try { // try from 00d61a2c to 00e61a33 has its CatchHandler @ 00d61ba8 */
    FUN_00d624f4(param_1,param_2,lVar17,uVar27);
                    /* try { // try from 00d61a34 to 00e61a83 has its CatchHandler @ 00d618c4 */
    if (param_7 != 0) {
      *param_2 = *param_2 + 4;
    }
    break;
  case 2:
    pcVar20 = (char *)readString(param_2);
    if (pcVar20 == (char *)0x0) {
      sVar13 = strlen(__s);
      pcVar20 = (char *)_spMalloc(sVar13 + 1,
                                  "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonBinary.c"
                                  ,0x2d3);
      strcpy(pcVar20,__s);
    }
                    /* try { // try from 00d61a84 to 00e61a8b has its CatchHandler @ 00d61ba4 */
                    /* try { // try from 00d61a8c to 00e61be7 has its CatchHandler @ 00d618c4 */
    lVar17 = spAttachmentLoader_createAttachment
                       (*(undefined8 *)(param_1 + 2),param_3,uVar3,__s,pcVar20);
    *(char **)(lVar17 + 0x80) = pcVar20;
    pbVar19 = (byte *)*param_2;
    *param_2 = (long)(pbVar19 + 1);
    *(float *)(lVar17 + 0xa8) = (float)*pbVar19 / 255.0;
    *param_2 = (long)(pbVar19 + 2);
    fVar29 = (float)NEON_ucvtf((uint)pbVar19[1]);
    *(float *)(lVar17 + 0xac) = fVar29 / 255.0;
    *param_2 = (long)(pbVar19 + 3);
    fVar29 = (float)NEON_ucvtf((uint)pbVar19[2]);
    *(float *)(lVar17 + 0xb0) = fVar29 / 255.0;
    *param_2 = (long)(pbVar19 + 4);
    fVar29 = (float)NEON_ucvtf((uint)pbVar19[3]);
    *(float *)(lVar17 + 0xb4) = fVar29 / 255.0;
    *param_2 = (long)(pbVar19 + 5);
    uVar27 = pbVar19[4] & 0x7f;
    if ((char)pbVar19[4] < '\0') {
      *param_2 = (long)(pbVar19 + 6);
      uVar27 = uVar27 | (pbVar19[5] & 0x7f) << 7;
      if ((char)pbVar19[5] < '\0') {
        *param_2 = (long)(pbVar19 + 7);
        uVar27 = uVar27 | (pbVar19[6] & 0x7f) << 0xe;
        if ((char)pbVar19[6] < '\0') {
          *param_2 = (long)(pbVar19 + 8);
          uVar27 = uVar27 | (pbVar19[7] & 0x7f) << 0x15;
          if ((char)pbVar19[7] < '\0') {
            *param_2 = (long)(pbVar19 + 9);
            uVar27 = uVar27 | (uint)pbVar19[8] << 0x1c;
          }
        }
      }
    }
    uVar28 = uVar27 * 2;
    lVar16 = _spMalloc(-(ulong)((uVar27 & 0x7fffffff) >> 0x1e) & 0xfffffffc00000000 |
                       (ulong)uVar28 << 2,
                       "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonBinary.c"
                       ,0x260);
    if ((int)uVar28 < 1) {
                    /* catch() { ... } // from try @ 00d62034 with catch @ 00d621f8 */
      pbVar19 = (byte *)*param_2;
    }
    else {
      lVar22 = *param_2;
      lVar23 = 0;
      uVar24 = (ulong)uVar28;
      do {
        puVar21 = (undefined1 *)(lVar22 + lVar23);
                    /* catch() { ... } // from try @ 00d61a84 with catch @ 00d61ba4 */
        *param_2 = (long)(puVar21 + 1);
                    /* catch() { ... } // from try @ 00d61a2c with catch @ 00d61ba8 */
        uVar3 = *puVar21;
        *param_2 = (long)(puVar21 + 2);
        uVar8 = puVar21[1];
        *param_2 = (long)(puVar21 + 3);
        uVar9 = puVar21[2];
                    /* catch() { ... } // from try @ 00d61998 with catch @ 00d61bc4 */
        *param_2 = (long)(puVar21 + 4);
        uVar24 = uVar24 - 1;
        *(uint *)(lVar16 + lVar23) = CONCAT31(CONCAT21(CONCAT11(uVar3,uVar8),uVar9),puVar21[3]);
        lVar23 = lVar23 + 4;
      } while (uVar24 != 0);
      pbVar19 = (byte *)(lVar22 + lVar23);
    }
    *(long *)(lVar17 + 0x88) = lVar16;
    *param_2 = (long)(pbVar19 + 1);
    uVar28 = *pbVar19 & 0x7f;
    uVar24 = (ulong)uVar28;
    if ((char)*pbVar19 < '\0') {
      *param_2 = (long)(pbVar19 + 2);
      uVar28 = uVar28 | (pbVar19[1] & 0x7f) << 7;
      uVar24 = (ulong)uVar28;
      if ((char)pbVar19[1] < '\0') {
        *param_2 = (long)(pbVar19 + 3);
        uVar28 = uVar28 | (pbVar19[2] & 0x7f) << 0xe;
        uVar24 = (ulong)uVar28;
        if ((char)pbVar19[2] < '\0') {
          *param_2 = (long)(pbVar19 + 4);
          uVar28 = uVar28 | (pbVar19[3] & 0x7f) << 0x15;
          uVar24 = (ulong)uVar28;
          if ((char)pbVar19[3] < '\0') {
            *param_2 = (long)(pbVar19 + 5);
            uVar24 = (ulong)(uVar28 | (uint)pbVar19[4] << 0x1c);
          }
        }
      }
    }
    psVar18 = (short *)_spMalloc(-(uVar24 >> 0x1f) & 0xfffffffe00000000 | uVar24 << 1,
                                 "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonBinary.c"
                                 ,0x26d);
    *(int *)(lVar17 + 0x98) = (int)uVar24;
    if (0 < (int)uVar24) {
      puVar21 = (undefined1 *)(*param_2 + 1);
      psVar26 = psVar18;
      do {
        *param_2 = (long)puVar21;
        bVar7 = puVar21[-1];
        uVar24 = uVar24 - 1;
        *psVar26 = (ushort)bVar7 << 8;
        *param_2 = (long)(puVar21 + 1);
        *psVar26 = CONCAT11(bVar7,*puVar21);
        puVar21 = puVar21 + 2;
        psVar26 = psVar26 + 1;
      } while (uVar24 != 0);
    }
    *(short **)(lVar17 + 0xa0) = psVar18;
    FUN_00d624f4(param_1,param_2,lVar17,uVar27);
    spMeshAttachment_updateUVs(lVar17);
    pbVar25 = (byte *)*param_2;
    pbVar19 = pbVar25 + 1;
    *param_2 = (long)pbVar19;
    uVar27 = *pbVar25 & 0x7f;
    if ((char)*pbVar25 < '\0') {
      pbVar19 = pbVar25 + 2;
      *param_2 = (long)pbVar19;
      uVar27 = uVar27 | (pbVar25[1] & 0x7f) << 7;
      if ((char)pbVar25[1] < '\0') {
        pbVar19 = pbVar25 + 3;
        *param_2 = (long)pbVar19;
        uVar27 = uVar27 | (pbVar25[2] & 0x7f) << 0xe;
        if ((char)pbVar25[2] < '\0') {
          pbVar19 = pbVar25 + 4;
          *param_2 = (long)pbVar19;
          uVar27 = uVar27 | (pbVar25[3] & 0x7f) << 0x15;
          if ((char)pbVar25[3] < '\0') {
            pbVar19 = pbVar25 + 5;
            *param_2 = (long)pbVar19;
            uVar27 = uVar27 | (uint)pbVar25[4] << 0x1c;
          }
        }
      }
    }
    *(uint *)(lVar17 + 0xb8) = uVar27 << 1;
    if (param_7 == 0) {
      fVar29 = 0.0;
      *(undefined8 *)(lVar17 + 0xd0) = 0;
      *(undefined4 *)(lVar17 + 0xd8) = 0;
    }
    else {
      *param_2 = (long)(pbVar19 + 1);
      uVar27 = *pbVar19 & 0x7f;
      uVar24 = (ulong)uVar27;
      if ((char)*pbVar19 < '\0') {
        *param_2 = (long)(pbVar19 + 2);
        uVar27 = uVar27 | (pbVar19[1] & 0x7f) << 7;
        uVar24 = (ulong)uVar27;
        if ((char)pbVar19[1] < '\0') {
          *param_2 = (long)(pbVar19 + 3);
          uVar27 = uVar27 | (pbVar19[2] & 0x7f) << 0xe;
          uVar24 = (ulong)uVar27;
          if ((char)pbVar19[2] < '\0') {
            *param_2 = (long)(pbVar19 + 4);
            uVar27 = uVar27 | (pbVar19[3] & 0x7f) << 0x15;
            uVar24 = (ulong)uVar27;
            if ((char)pbVar19[3] < '\0') {
              *param_2 = (long)(pbVar19 + 5);
              uVar24 = (ulong)(uVar27 | (uint)pbVar19[4] << 0x1c);
            }
          }
        }
      }
      psVar18 = (short *)_spMalloc(-(uVar24 >> 0x1f) & 0xfffffffe00000000 | uVar24 << 1,
                                   "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonBinary.c"
                                   ,0x26d);
      *(int *)(lVar17 + 0xcc) = (int)uVar24;
      if ((int)uVar24 < 1) {
        puVar21 = (undefined1 *)*param_2;
      }
      else {
        puVar11 = (undefined1 *)(*param_2 + 1);
        psVar26 = psVar18;
        do {
          puVar21 = puVar11;
          *param_2 = (long)puVar21;
          bVar7 = puVar21[-1];
          uVar24 = uVar24 - 1;
          *psVar26 = (ushort)bVar7 << 8;
          *param_2 = (long)(puVar21 + 1);
                    /* try { // try from 00d62400 to 00e6248f has its CatchHandler @ 00d62400
                       catch() { ... } // from try @ 00d62400 with catch @ 00d62400
                       catch() { ... } // from try @ 00d62a7c with catch @ 00d62400 */
          *psVar26 = CONCAT11(bVar7,*puVar21);
          puVar11 = puVar21 + 2;
          psVar26 = psVar26 + 1;
        } while (uVar24 != 0);
        puVar21 = puVar21 + 1;
      }
      *(short **)(lVar17 + 0xd0) = psVar18;
      *param_2 = (long)(puVar21 + 1);
      uVar3 = *puVar21;
      *param_2 = (long)(puVar21 + 2);
      uVar8 = puVar21[1];
      *param_2 = (long)(puVar21 + 3);
      uVar9 = puVar21[2];
      *param_2 = (long)(puVar21 + 4);
      fVar29 = *param_1;
      *(float *)(lVar17 + 0xd8) =
           fVar29 * (float)CONCAT31(CONCAT21(CONCAT11(uVar3,uVar8),uVar9),puVar21[3]);
      *param_2 = (long)(puVar21 + 5);
      uVar3 = puVar21[4];
      *param_2 = (long)(puVar21 + 6);
                    /* try { // try from 00d62490 to 00e6249b has its CatchHandler @ 00d62c74 */
      uVar8 = puVar21[5];
      *param_2 = (long)(puVar21 + 7);
      uVar9 = puVar21[6];
                    /* try { // try from 00d6249c to 00e624a7 has its CatchHandler @ 00d62c64 */
      *param_2 = (long)(puVar21 + 8);
                    /* try { // try from 00d624a8 to 00e624bf has its CatchHandler @ 00d62ca4 */
      fVar29 = fVar29 * (float)CONCAT31(CONCAT21(CONCAT11(uVar3,uVar8),uVar9),puVar21[7]);
    }
    *(float *)(lVar17 + 0xdc) = fVar29;
    break;
  case 3:
    pcVar20 = (char *)readString(param_2);
    if (pcVar20 == (char *)0x0) {
      sVar13 = strlen(__s);
      pcVar20 = (char *)_spMalloc(sVar13 + 1,
                                  "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonBinary.c"
                                  ,0x2f1);
      strcpy(pcVar20,__s);
    }
    lVar17 = spAttachmentLoader_createAttachment
                       (*(undefined8 *)(param_1 + 2),param_3,uVar3,__s,pcVar20);
    *(char **)(lVar17 + 0x80) = pcVar20;
    pbVar19 = (byte *)*param_2;
    *param_2 = (long)(pbVar19 + 1);
    *(float *)(lVar17 + 0xa8) = (float)*pbVar19 / 255.0;
    *param_2 = (long)(pbVar19 + 2);
    fVar29 = (float)NEON_ucvtf((uint)pbVar19[1]);
    *(float *)(lVar17 + 0xac) = fVar29 / 255.0;
    *param_2 = (long)(pbVar19 + 3);
    fVar29 = (float)NEON_ucvtf((uint)pbVar19[2]);
    *(float *)(lVar17 + 0xb0) = fVar29 / 255.0;
    *param_2 = (long)(pbVar19 + 4);
    fVar29 = (float)NEON_ucvtf((uint)pbVar19[3]);
    *(float *)(lVar17 + 0xb4) = fVar29 / 255.0;
    uVar14 = readString(param_2);
    uVar15 = readString(param_2);
    pcVar20 = (char *)*param_2;
    *param_2 = (long)(pcVar20 + 1);
    *(uint *)(lVar17 + 200) = (uint)(*pcVar20 != '\0');
    if (param_7 != 0) {
      *param_2 = (long)(pcVar20 + 2);
      cVar4 = pcVar20[1];
      *param_2 = (long)(pcVar20 + 3);
      cVar5 = pcVar20[2];
      *param_2 = (long)(pcVar20 + 4);
      cVar6 = pcVar20[3];
      *param_2 = (long)(pcVar20 + 5);
      fVar29 = *param_1;
      *(float *)(lVar17 + 0xd8) =
           fVar29 * (float)CONCAT31(CONCAT21(CONCAT11(cVar4,cVar5),cVar6),pcVar20[4]);
      *param_2 = (long)(pcVar20 + 6);
      cVar4 = pcVar20[5];
      *param_2 = (long)(pcVar20 + 7);
      cVar5 = pcVar20[6];
      *param_2 = (long)(pcVar20 + 8);
      cVar6 = pcVar20[7];
      *param_2 = (long)(pcVar20 + 9);
      *(float *)(lVar17 + 0xdc) =
           fVar29 * (float)CONCAT31(CONCAT21(CONCAT11(cVar4,cVar5),cVar6),pcVar20[8]);
    }
    fVar29 = param_1[7];
    if (fVar29 == param_1[8]) {
      fVar2 = 1.12104e-44;
      if (3 < (int)fVar29) {
        fVar2 = (float)((int)fVar29 << 1);
      }
      param_1[8] = fVar2;
      __dest = (void *)_spMalloc(-(ulong)((uint)fVar2 >> 0x1f) & 0xffffffe000000000 |
                                 (ulong)(uint)fVar2 << 5,
                                 "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonBinary.c"
                                 ,0xea);
      memcpy(__dest,*(void **)(param_1 + 10),(long)(int)param_1[7] << 5);
      _spFree(*(void **)(param_1 + 10));
      fVar29 = param_1[7];
      *(void **)(param_1 + 10) = __dest;
    }
    else {
      __dest = *(void **)(param_1 + 10);
    }
    puVar1 = (undefined8 *)((long)__dest + (long)(int)fVar29 * 0x20);
    param_1[7] = (float)((int)fVar29 + 1);
    puVar1[3] = lVar17;
    *puVar1 = uVar15;
    puVar1[1] = uVar14;
    *(undefined4 *)(puVar1 + 2) = param_4;
    goto joined_r0x00d61f54;
  case 4:
    lVar17 = spAttachmentLoader_createAttachment(*(undefined8 *)(param_1 + 2),param_3,uVar3,__s,0);
    pcVar20 = (char *)*param_2;
    *param_2 = (long)(pcVar20 + 1);
    *(uint *)(lVar17 + 0x58) = (uint)(*pcVar20 != '\0');
    *param_2 = (long)(pcVar20 + 2);
    *(uint *)(lVar17 + 0x5c) = (uint)(pcVar20[1] != '\0');
    *param_2 = (long)(pcVar20 + 3);
    bVar7 = pcVar20[2];
    uVar27 = bVar7 & 0x7f;
    if ((char)bVar7 < '\0') {
      *param_2 = (long)(pcVar20 + 4);
      uVar27 = uVar27 | ((byte)pcVar20[3] & 0x7f) << 7;
      if (pcVar20[3] < '\0') {
        *param_2 = (long)(pcVar20 + 5);
        uVar27 = uVar27 | ((byte)pcVar20[4] & 0x7f) << 0xe;
        if (pcVar20[4] < '\0') {
          *param_2 = (long)(pcVar20 + 6);
          uVar27 = uVar27 | ((byte)pcVar20[5] & 0x7f) << 0x15;
          if (pcVar20[5] < '\0') {
            *param_2 = (long)(pcVar20 + 7);
            uVar27 = uVar27 | (uint)(byte)pcVar20[6] << 0x1c;
          }
        }
      }
    }
    FUN_00d624f4(param_1,param_2,lVar17,uVar27);
    uVar27 = (int)uVar27 / 3;
                    /* try { // try from 00d61eb8 to 00e62033 has its CatchHandler @ 00d61eb8
                       catch() { ... } // from try @ 00d61eb8 with catch @ 00d61eb8
                       catch() { ... } // from try @ 00d62040 with catch @ 00d61eb8 */
    *(uint *)(lVar17 + 0x48) = uVar27;
    lVar16 = _spMalloc(-(ulong)(uVar27 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar27 << 2,
                       "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonBinary.c"
                       ,0x30a);
    iVar10 = *(int *)(lVar17 + 0x48);
    *(long *)(lVar17 + 0x50) = lVar16;
    if (0 < iVar10) {
      lVar23 = 0;
      puVar21 = (undefined1 *)(*param_2 + 2);
      do {
        *param_2 = (long)(puVar21 + -1);
        uVar8 = puVar21[-2];
        *param_2 = (long)puVar21;
        uVar9 = puVar21[-1];
        *param_2 = (long)(puVar21 + 1);
        uVar3 = *puVar21;
        *param_2 = (long)(puVar21 + 2);
        *(float *)(lVar16 + lVar23 * 4) =
             *param_1 * (float)CONCAT31(CONCAT21(CONCAT11(uVar8,uVar9),uVar3),puVar21[1]);
        lVar23 = lVar23 + 1;
        puVar21 = puVar21 + 4;
      } while (lVar23 < iVar10);
    }
    if (param_7 != 0) {
      *param_2 = *param_2 + 4;
    }
joined_r0x00d61f54:
    if (pcVar12 == (char *)0x0) {
      return lVar17;
    }
    goto LAB_00d624cc;
  case 5:
    lVar17 = spAttachmentLoader_createAttachment(*(undefined8 *)(param_1 + 2),param_3,uVar3,__s,0);
    puVar21 = (undefined1 *)*param_2;
    *param_2 = (long)(puVar21 + 1);
    uVar3 = *puVar21;
    *param_2 = (long)(puVar21 + 2);
    uVar8 = puVar21[1];
    *param_2 = (long)(puVar21 + 3);
    uVar9 = puVar21[2];
    *param_2 = (long)(puVar21 + 4);
    *(uint *)(lVar17 + 0x50) = CONCAT31(CONCAT21(CONCAT11(uVar3,uVar8),uVar9),puVar21[3]);
    *param_2 = (long)(puVar21 + 5);
    uVar3 = puVar21[4];
    *param_2 = (long)(puVar21 + 6);
    uVar8 = puVar21[5];
    *param_2 = (long)(puVar21 + 7);
    uVar9 = puVar21[6];
    *param_2 = (long)(puVar21 + 8);
    fVar29 = *param_1;
    *(float *)(lVar17 + 0x48) =
         fVar29 * (float)CONCAT31(CONCAT21(CONCAT11(uVar3,uVar8),uVar9),puVar21[7]);
    *param_2 = (long)(puVar21 + 9);
    uVar3 = puVar21[8];
    *param_2 = (long)(puVar21 + 10);
    uVar8 = puVar21[9];
    *param_2 = (long)(puVar21 + 0xb);
    uVar9 = puVar21[10];
    *param_2 = (long)(puVar21 + 0xc);
                    /* try { // try from 00d62034 to 00e6203f has its CatchHandler @ 00d621f8 */
                    /* try { // try from 00d62040 to 00e62213 has its CatchHandler @ 00d61eb8 */
    *(float *)(lVar17 + 0x4c) =
         fVar29 * (float)CONCAT31(CONCAT21(CONCAT11(uVar3,uVar8),uVar9),puVar21[0xb]);
    if (param_7 == 0) {
      return lVar17;
    }
    *param_2 = (long)(puVar21 + 0xd);
    fVar29 = (float)NEON_ucvtf((uint)(byte)puVar21[0xc]);
    *(float *)(lVar17 + 0x54) = fVar29 / 255.0;
    *param_2 = (long)(puVar21 + 0xe);
    fVar29 = (float)NEON_ucvtf((uint)(byte)puVar21[0xd]);
    *(float *)(lVar17 + 0x58) = fVar29 / 255.0;
    *param_2 = (long)(puVar21 + 0xf);
    fVar29 = (float)NEON_ucvtf((uint)(byte)puVar21[0xe]);
    *(float *)(lVar17 + 0x5c) = fVar29 / 255.0;
    *param_2 = (long)(puVar21 + 0x10);
    fVar29 = (float)NEON_ucvtf((uint)(byte)puVar21[0xf]);
    *(float *)(lVar17 + 0x60) = fVar29 / 255.0;
    return lVar17;
  case 6:
    pbVar19 = puVar21 + 2;
    *param_2 = (long)pbVar19;
    uVar27 = (byte)puVar21[1] & 0x7f;
    if ((char)puVar21[1] < '\0') {
      pbVar19 = puVar21 + 3;
      *param_2 = (long)pbVar19;
      uVar27 = uVar27 | ((byte)puVar21[2] & 0x7f) << 7;
      if ((char)puVar21[2] < '\0') {
        pbVar19 = puVar21 + 4;
        *param_2 = (long)pbVar19;
        uVar27 = uVar27 | ((byte)puVar21[3] & 0x7f) << 0xe;
        if ((char)puVar21[3] < '\0') {
          pbVar19 = puVar21 + 5;
          *param_2 = (long)pbVar19;
          uVar27 = uVar27 | ((byte)puVar21[4] & 0x7f) << 0x15;
          if ((char)puVar21[4] < '\0') {
            pbVar19 = puVar21 + 6;
            *param_2 = (long)pbVar19;
            uVar27 = uVar27 | (uint)(byte)puVar21[5] << 0x1c;
          }
        }
      }
    }
    *param_2 = (long)(pbVar19 + 1);
    uVar28 = *pbVar19 & 0x7f;
    if ((char)*pbVar19 < '\0') {
      *param_2 = (long)(pbVar19 + 2);
      uVar28 = uVar28 | (pbVar19[1] & 0x7f) << 7;
      if ((char)pbVar19[1] < '\0') {
        *param_2 = (long)(pbVar19 + 3);
        uVar28 = uVar28 | (pbVar19[2] & 0x7f) << 0xe;
        if ((char)pbVar19[2] < '\0') {
          *param_2 = (long)(pbVar19 + 4);
          uVar28 = uVar28 | (pbVar19[3] & 0x7f) << 0x15;
          if ((char)pbVar19[3] < '\0') {
            *param_2 = (long)(pbVar19 + 5);
            uVar28 = uVar28 | (uint)pbVar19[4] << 0x1c;
          }
        }
      }
    }
    lVar17 = spAttachmentLoader_createAttachment(*(undefined8 *)(param_1 + 2),param_3,uVar3,__s,0);
    FUN_00d624f4(param_1,param_2,lVar17,uVar28);
    if (param_7 != 0) {
      *param_2 = *param_2 + 4;
    }
    *(undefined8 *)(lVar17 + 0x48) =
         *(undefined8 *)(*(long *)(param_6 + 0x30) + (long)(int)uVar27 * 8);
    break;
  default:
    if (pcVar12 != (char *)0x0) {
                    /* try { // try from 00d61998 to 00e619af has its CatchHandler @ 00d61bc4 */
      _spFree(__s);
    }
    return 0;
  }
                    /* try { // try from 00d624c4 to 00e624db has its CatchHandler @ 00d62ca0 */
  spAttachmentLoader_configureAttachment(*(undefined8 *)(param_1 + 2),lVar17);
  if (pcVar12 != (char *)0x0) {
LAB_00d624cc:
    _spFree(__s);
  }
                    /* try { // try from 00d624e0 to 00e624f7 has its CatchHandler @ 00d62c9c */
  return lVar17;
}

