
undefined8 * spSkeletonBinary_readSkeletonData(float *param_1,long param_2,int param_3)

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  char cVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined8 *puVar22;
  long *__ptr;
  undefined8 *puVar23;
  char *pcVar24;
  size_t sVar25;
  void *pvVar26;
  undefined8 uVar27;
  long lVar28;
  long *plVar29;
  void *pvVar30;
  void *pvVar31;
  byte *pbVar32;
  long lVar33;
  ulong uVar34;
  long lVar35;
  void *pvVar36;
  float *pfVar37;
  uint uVar38;
  uint uVar39;
  undefined1 *puVar40;
  ulong uVar41;
  undefined1 *puVar42;
  long lVar43;
  long lVar44;
  undefined8 *puVar45;
  float *pfVar46;
  uint *puVar47;
  uint uVar48;
  long lVar49;
  undefined8 *puVar50;
  uint uVar51;
  byte *pbVar52;
  void *pvVar53;
  ulong uVar54;
  ulong uVar55;
  uint uVar56;
  uint uVar57;
  int iVar58;
  uint uVar59;
  ulong uVar60;
  ulong uVar61;
  uint uVar62;
  uint uVar63;
  uint uVar64;
  int iVar65;
  float fVar66;
  undefined8 uVar67;
  int iVar68;
  byte bVar69;
  float fVar70;
  undefined8 uVar71;
  undefined8 uVar72;
  byte bVar73;
  float fVar74;
  byte bVar75;
  float fVar76;
  byte bVar77;
  float fVar78;
  byte bVar79;
  float fVar80;
  byte bVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  uint local_128;
  long local_d0;
  void *local_98;
  void *local_90;
  void *local_78;
  
  __ptr = (long *)_spCalloc(1,0x10,
                            "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonBinary.c"
                            ,0x357);
  *__ptr = param_2;
  __ptr[1] = param_2 + param_3;
                    /* try { // try from 00d62f3c to 00e62f53 has its CatchHandler @ 00d632d8 */
  _spFree(*(void **)(param_1 + 4));
  param_1[4] = 0.0;
  param_1[5] = 0.0;
  param_1[7] = 0.0;
  puVar23 = (undefined8 *)spSkeletonData_create();
                    /* try { // try from 00d62f58 to 00e62f63 has its CatchHandler @ 00d63294 */
  pcVar24 = (char *)readString(__ptr);
  puVar23[1] = pcVar24;
                    /* try { // try from 00d62f64 to 00e62f6f has its CatchHandler @ 00d63284 */
  sVar25 = strlen(pcVar24);
  if (sVar25 == 0) {
                    /* try { // try from 00d62f70 to 00e62f7b has its CatchHandler @ 00d63274 */
    _spFree((void *)puVar23[1]);
    puVar23[1] = 0;
  }
                    /* try { // try from 00d62f7c to 00e62f87 has its CatchHandler @ 00d63264 */
  pcVar24 = (char *)readString(__ptr);
  *puVar23 = pcVar24;
  sVar25 = strlen(pcVar24);
                    /* try { // try from 00d62f88 to 00e62f93 has its CatchHandler @ 00d63214 */
  if (sVar25 == 0) {
    _spFree((void *)*puVar23);
                    /* try { // try from 00d62f94 to 00e62fb3 has its CatchHandler @ 00d631a4 */
    *puVar23 = 0;
  }
  puVar40 = (undefined1 *)*__ptr;
  *__ptr = (long)(puVar40 + 1);
  pbVar32 = puVar40 + 9;
  uVar2 = *puVar40;
  *__ptr = (long)(puVar40 + 2);
                    /* try { // try from 00d62fb8 to 00e62fc3 has its CatchHandler @ 00d631a0 */
  uVar3 = puVar40[1];
  *__ptr = (long)(puVar40 + 3);
                    /* try { // try from 00d62fc4 to 00e62fcf has its CatchHandler @ 00d6319c */
  uVar4 = puVar40[2];
  *__ptr = (long)(puVar40 + 4);
                    /* try { // try from 00d62fd0 to 00e62fdb has its CatchHandler @ 00d63198 */
                    /* try { // try from 00d62fdc to 00e62fe7 has its CatchHandler @ 00d63194 */
  *(uint *)(puVar23 + 2) = CONCAT31(CONCAT21(CONCAT11(uVar2,uVar3),uVar4),puVar40[3]);
                    /* try { // try from 00d62fe8 to 00e62ff3 has its CatchHandler @ 00d63190 */
  *__ptr = (long)(puVar40 + 5);
  uVar2 = puVar40[4];
                    /* try { // try from 00d62ff4 to 00e63013 has its CatchHandler @ 00d6318c */
  *__ptr = (long)(puVar40 + 6);
  uVar3 = puVar40[5];
  *__ptr = (long)(puVar40 + 7);
  uVar4 = puVar40[6];
  *__ptr = (long)(puVar40 + 8);
  *(uint *)((long)puVar23 + 0x14) = CONCAT31(CONCAT21(CONCAT11(uVar2,uVar3),uVar4),puVar40[7]);
  *__ptr = (long)pbVar32;
  cVar5 = puVar40[8];
  if (cVar5 != '\0') {
    *__ptr = (long)(puVar40 + 0xd);
    pvVar26 = (void *)readString(__ptr);
                    /* try { // try from 00d63044 to 00e63087 has its CatchHandler @ 00d632d8 */
    _spFree(pvVar26);
    pbVar32 = (byte *)*__ptr;
  }
  *__ptr = (long)(pbVar32 + 1);
  uVar38 = *pbVar32 & 0x7f;
  uVar41 = (ulong)uVar38;
  if ((char)*pbVar32 < '\0') {
    *__ptr = (long)(pbVar32 + 2);
    uVar38 = uVar38 | (pbVar32[1] & 0x7f) << 7;
    uVar41 = (ulong)uVar38;
    if ((char)pbVar32[1] < '\0') {
      *__ptr = (long)(pbVar32 + 3);
      uVar38 = uVar38 | (pbVar32[2] & 0x7f) << 0xe;
      uVar41 = (ulong)uVar38;
      if ((char)pbVar32[2] < '\0') {
                    /* try { // try from 00d63088 to 00e63333 has its CatchHandler @ 00d62cd0 */
        *__ptr = (long)(pbVar32 + 4);
        uVar38 = uVar38 | (pbVar32[3] & 0x7f) << 0x15;
        uVar41 = (ulong)uVar38;
        if ((char)pbVar32[3] < '\0') {
          *__ptr = (long)(pbVar32 + 5);
          uVar41 = (ulong)(uVar38 | (uint)pbVar32[4] << 0x1c);
        }
      }
    }
  }
  *(int *)(puVar23 + 3) = (int)uVar41;
  uVar27 = _spMalloc(-(uVar41 >> 0x1f) & 0xfffffff800000000 | uVar41 << 3,
                     "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonBinary.c"
                     ,0x37a);
  puVar23[4] = uVar27;
  if (0 < *(int *)(puVar23 + 3)) {
    uVar41 = 0;
    do {
      pvVar26 = (void *)readString(__ptr);
      if (uVar41 == 0) {
        uVar27 = 0;
      }
      else {
        pbVar32 = (byte *)*__ptr;
        lVar33 = puVar23[4];
        *__ptr = (long)(pbVar32 + 1);
        uVar38 = *pbVar32 & 0x7f;
        if ((char)*pbVar32 < '\0') {
          *__ptr = (long)(pbVar32 + 2);
          uVar38 = uVar38 | (pbVar32[1] & 0x7f) << 7;
          if ((char)pbVar32[1] < '\0') {
            *__ptr = (long)(pbVar32 + 3);
            uVar38 = uVar38 | (pbVar32[2] & 0x7f) << 0xe;
            if ((char)pbVar32[2] < '\0') {
              *__ptr = (long)(pbVar32 + 4);
              uVar38 = uVar38 | (pbVar32[3] & 0x7f) << 0x15;
              if ((char)pbVar32[3] < '\0') {
                *__ptr = (long)(pbVar32 + 5);
                uVar38 = uVar38 | (uint)pbVar32[4] << 0x1c;
              }
            }
          }
        }
        uVar27 = *(undefined8 *)(lVar33 + (long)(int)uVar38 * 8);
      }
                    /* catch() { ... } // from try @ 00d62ebc with catch @ 00d63178 */
                    /* catch() { ... } // from try @ 00d62e88 with catch @ 00d6317c */
                    /* catch() { ... } // from try @ 00d62e58 with catch @ 00d63180 */
      lVar33 = spBoneData_create(uVar41 & 0xffffffff,pvVar26,uVar27);
                    /* catch() { ... } // from try @ 00d62e28 with catch @ 00d63184 */
                    /* catch() { ... } // from try @ 00d62df8 with catch @ 00d63188 */
                    /* catch() { ... } // from try @ 00d62ff4 with catch @ 00d6318c */
      _spFree(pvVar26);
                    /* catch() { ... } // from try @ 00d62fe8 with catch @ 00d63190 */
      puVar42 = (undefined1 *)*__ptr;
                    /* catch() { ... } // from try @ 00d62fdc with catch @ 00d63194 */
                    /* catch() { ... } // from try @ 00d62fd0 with catch @ 00d63198 */
                    /* catch() { ... } // from try @ 00d62fc4 with catch @ 00d6319c */
                    /* catch() { ... } // from try @ 00d62fb8 with catch @ 00d631a0 */
      *__ptr = (long)(puVar42 + 1);
                    /* catch() { ... } // from try @ 00d62f94 with catch @ 00d631a4 */
      puVar40 = puVar42 + 0x21;
      uVar2 = *puVar42;
      *__ptr = (long)(puVar42 + 2);
      uVar3 = puVar42[1];
      *__ptr = (long)(puVar42 + 3);
      uVar4 = puVar42[2];
      *__ptr = (long)(puVar42 + 4);
      *(uint *)(lVar33 + 0x24) = CONCAT31(CONCAT21(CONCAT11(uVar2,uVar3),uVar4),puVar42[3]);
      *__ptr = (long)(puVar42 + 5);
      uVar2 = puVar42[4];
      *__ptr = (long)(puVar42 + 6);
      uVar3 = puVar42[5];
      *__ptr = (long)(puVar42 + 7);
      uVar4 = puVar42[6];
      *__ptr = (long)(puVar42 + 8);
      fVar66 = *param_1;
                    /* catch() { ... } // from try @ 00d62f88 with catch @ 00d63214 */
      *(float *)(lVar33 + 0x1c) =
           fVar66 * (float)CONCAT31(CONCAT21(CONCAT11(uVar2,uVar3),uVar4),puVar42[7]);
      *__ptr = (long)(puVar42 + 9);
      uVar2 = puVar42[8];
      *__ptr = (long)(puVar42 + 10);
      uVar3 = puVar42[9];
      *__ptr = (long)(puVar42 + 0xb);
      uVar4 = puVar42[10];
      *__ptr = (long)(puVar42 + 0xc);
                    /* catch() { ... } // from try @ 00d62f7c with catch @ 00d63264 */
      *(float *)(lVar33 + 0x20) =
           fVar66 * (float)CONCAT31(CONCAT21(CONCAT11(uVar2,uVar3),uVar4),puVar42[0xb]);
                    /* catch() { ... } // from try @ 00d62f70 with catch @ 00d63274 */
      *__ptr = (long)(puVar42 + 0xd);
      uVar2 = puVar42[0xc];
      *__ptr = (long)(puVar42 + 0xe);
                    /* catch() { ... } // from try @ 00d62f64 with catch @ 00d63284 */
      uVar3 = puVar42[0xd];
      *__ptr = (long)(puVar42 + 0xf);
      uVar4 = puVar42[0xe];
                    /* catch() { ... } // from try @ 00d62f58 with catch @ 00d63294 */
      *__ptr = (long)(puVar42 + 0x10);
                    /* catch() { ... } // from try @ 00d62dd4 with catch @ 00d63298 */
                    /* catch() { ... } // from try @ 00d62dc8 with catch @ 00d632a8 */
      *(uint *)(lVar33 + 0x28) = CONCAT31(CONCAT21(CONCAT11(uVar2,uVar3),uVar4),puVar42[0xf]);
      *__ptr = (long)(puVar42 + 0x11);
                    /* catch() { ... } // from try @ 00d62dbc with catch @ 00d632b8 */
      uVar2 = puVar42[0x10];
      *__ptr = (long)(puVar42 + 0x12);
                    /* catch() { ... } // from try @ 00d62db0 with catch @ 00d632c8 */
      uVar3 = puVar42[0x11];
      *__ptr = (long)(puVar42 + 0x13);
      uVar4 = puVar42[0x12];
      *__ptr = (long)(puVar42 + 0x14);
                    /* catch() { ... } // from try @ 00d62f3c with catch @ 00d632d8
                       catch() { ... } // from try @ 00d63044 with catch @ 00d632d8 */
      *(uint *)(lVar33 + 0x2c) = CONCAT31(CONCAT21(CONCAT11(uVar2,uVar3),uVar4),puVar42[0x13]);
      *__ptr = (long)(puVar42 + 0x15);
      uVar2 = puVar42[0x14];
      *__ptr = (long)(puVar42 + 0x16);
      uVar3 = puVar42[0x15];
      *__ptr = (long)(puVar42 + 0x17);
      uVar4 = puVar42[0x16];
      *__ptr = (long)(puVar42 + 0x18);
      *(uint *)(lVar33 + 0x30) = CONCAT31(CONCAT21(CONCAT11(uVar2,uVar3),uVar4),puVar42[0x17]);
                    /* try { // try from 00d63334 to 00e63403 has its CatchHandler @ 00d63334
                       catch() { ... } // from try @ 00d63334 with catch @ 00d63334
                       catch() { ... } // from try @ 00d63620 with catch @ 00d63334 */
      *__ptr = (long)(puVar42 + 0x19);
      uVar2 = puVar42[0x18];
      *__ptr = (long)(puVar42 + 0x1a);
      uVar3 = puVar42[0x19];
      *__ptr = (long)(puVar42 + 0x1b);
      uVar4 = puVar42[0x1a];
      *__ptr = (long)(puVar42 + 0x1c);
      *(uint *)(lVar33 + 0x34) = CONCAT31(CONCAT21(CONCAT11(uVar2,uVar3),uVar4),puVar42[0x1b]);
      *__ptr = (long)(puVar42 + 0x1d);
      uVar2 = puVar42[0x1c];
      *__ptr = (long)(puVar42 + 0x1e);
      uVar3 = puVar42[0x1d];
      *__ptr = (long)(puVar42 + 0x1f);
      uVar4 = puVar42[0x1e];
      *__ptr = (long)(puVar42 + 0x20);
      *(float *)(lVar33 + 0x18) =
           fVar66 * (float)CONCAT31(CONCAT21(CONCAT11(uVar2,uVar3),uVar4),puVar42[0x1f]);
      *__ptr = (long)puVar40;
      uVar38 = (byte)puVar42[0x20] & 0x7f;
      if ((char)puVar42[0x20] < '\0') {
        puVar40 = puVar42 + 0x22;
        *__ptr = (long)puVar40;
        uVar38 = uVar38 | ((byte)puVar42[0x21] & 0x7f) << 7;
        if ((char)puVar42[0x21] < '\0') {
          puVar40 = puVar42 + 0x23;
          *__ptr = (long)puVar40;
          uVar38 = uVar38 | ((byte)puVar42[0x22] & 0x7f) << 0xe;
          if ((char)puVar42[0x22] < '\0') {
            puVar40 = puVar42 + 0x24;
            *__ptr = (long)puVar40;
            uVar38 = uVar38 | ((byte)puVar42[0x23] & 0x7f) << 0x15;
            if ((char)puVar42[0x23] < '\0') {
              puVar40 = puVar42 + 0x25;
                    /* try { // try from 00d63404 to 00e6340f has its CatchHandler @ 00d636b4 */
              *__ptr = (long)puVar40;
              uVar38 = uVar38 | (uint)(byte)puVar42[0x24] << 0x1c;
            }
          }
        }
      }
      if (uVar38 < 5) {
        *(uint *)(lVar33 + 0x38) = uVar38;
      }
      if (cVar5 != '\0') {
        *__ptr = (long)(puVar40 + 4);
      }
      *(long *)(puVar23[4] + uVar41 * 8) = lVar33;
      uVar41 = uVar41 + 1;
    } while ((long)uVar41 < (long)*(int *)(puVar23 + 3));
  }
                    /* try { // try from 00d6342c to 00e63443 has its CatchHandler @ 00d636e0 */
  pbVar32 = (byte *)*__ptr;
  *__ptr = (long)(pbVar32 + 1);
  uVar38 = *pbVar32 & 0x7f;
  uVar41 = (ulong)uVar38;
  if ((char)*pbVar32 < '\0') {
    *__ptr = (long)(pbVar32 + 2);
                    /* try { // try from 00d6344c to 00e63457 has its CatchHandler @ 00d636b0 */
    uVar38 = uVar38 | (pbVar32[1] & 0x7f) << 7;
    uVar41 = (ulong)uVar38;
    if ((char)pbVar32[1] < '\0') {
                    /* try { // try from 00d63458 to 00e63467 has its CatchHandler @ 00d63680 */
      *__ptr = (long)(pbVar32 + 3);
      uVar38 = uVar38 | (pbVar32[2] & 0x7f) << 0xe;
      uVar41 = (ulong)uVar38;
      if ((char)pbVar32[2] < '\0') {
                    /* try { // try from 00d63470 to 00e6347b has its CatchHandler @ 00d6367c */
        *__ptr = (long)(pbVar32 + 4);
        uVar38 = uVar38 | (pbVar32[3] & 0x7f) << 0x15;
        uVar41 = (ulong)uVar38;
                    /* try { // try from 00d6347c to 00e6348b has its CatchHandler @ 00d63678 */
        if ((char)pbVar32[3] < '\0') {
          *__ptr = (long)(pbVar32 + 5);
          uVar41 = (ulong)(uVar38 | (uint)pbVar32[4] << 0x1c);
        }
      }
    }
  }
                    /* try { // try from 00d63490 to 00e6349b has its CatchHandler @ 00d63674 */
                    /* try { // try from 00d6349c to 00e634ab has its CatchHandler @ 00d63670 */
  *(int *)(puVar23 + 5) = (int)uVar41;
  uVar27 = _spMalloc(-(uVar41 >> 0x1f) & 0xfffffff800000000 | uVar41 << 3,
                     "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonBinary.c"
                     ,0x399);
  puVar23[6] = uVar27;
  if (0 < *(int *)(puVar23 + 5)) {
    uVar41 = 0;
                    /* try { // try from 00d634bc to 00e634cf has its CatchHandler @ 00d636dc */
    do {
      pvVar26 = (void *)readString(__ptr);
      pbVar32 = (byte *)*__ptr;
                    /* try { // try from 00d634f0 to 00e63507 has its CatchHandler @ 00d636c0 */
      lVar33 = puVar23[4];
      *__ptr = (long)(pbVar32 + 1);
      uVar38 = *pbVar32 & 0x7f;
      if ((char)*pbVar32 < '\0') {
                    /* try { // try from 00d6350c to 00e63523 has its CatchHandler @ 00d636bc */
        *__ptr = (long)(pbVar32 + 2);
        uVar38 = uVar38 | (pbVar32[1] & 0x7f) << 7;
        if ((char)pbVar32[1] < '\0') {
          *__ptr = (long)(pbVar32 + 3);
                    /* try { // try from 00d63528 to 00e63547 has its CatchHandler @ 00d636b8 */
          uVar38 = uVar38 | (pbVar32[2] & 0x7f) << 0xe;
          if ((char)pbVar32[2] < '\0') {
            *__ptr = (long)(pbVar32 + 4);
            uVar38 = uVar38 | (pbVar32[3] & 0x7f) << 0x15;
            if ((char)pbVar32[3] < '\0') {
                    /* try { // try from 00d63548 to 00e6355f has its CatchHandler @ 00d636d4 */
              *__ptr = (long)(pbVar32 + 5);
              uVar38 = uVar38 | (uint)pbVar32[4] << 0x1c;
            }
          }
        }
      }
                    /* try { // try from 00d63564 to 00e6357b has its CatchHandler @ 00d636d0 */
      lVar33 = spSlotData_create(uVar41 & 0xffffffff,pvVar26,
                                 *(undefined8 *)(lVar33 + (long)(int)uVar38 * 8));
      _spFree(pvVar26);
      pbVar32 = (byte *)*__ptr;
                    /* try { // try from 00d63580 to 00e63597 has its CatchHandler @ 00d636cc */
      *__ptr = (long)(pbVar32 + 1);
      *(float *)(lVar33 + 0x20) = (float)*pbVar32 / 255.0;
                    /* try { // try from 00d6359c to 00e635b3 has its CatchHandler @ 00d636c8 */
      *__ptr = (long)(pbVar32 + 2);
      fVar66 = (float)NEON_ucvtf((uint)pbVar32[1]);
      *(float *)(lVar33 + 0x24) = fVar66 / 255.0;
                    /* try { // try from 00d635b8 to 00e635d7 has its CatchHandler @ 00d636c4 */
      *__ptr = (long)(pbVar32 + 3);
      fVar66 = (float)NEON_ucvtf((uint)pbVar32[2]);
      *(float *)(lVar33 + 0x28) = fVar66 / 255.0;
      *__ptr = (long)(pbVar32 + 4);
                    /* try { // try from 00d635dc to 00e635e7 has its CatchHandler @ 00d6366c */
      fVar66 = (float)NEON_ucvtf((uint)pbVar32[3]);
      *(float *)(lVar33 + 0x2c) = fVar66 / 255.0;
                    /* try { // try from 00d635e8 to 00e635f7 has its CatchHandler @ 00d63668 */
      *__ptr = (long)(pbVar32 + 5);
      bVar69 = pbVar32[4];
      *__ptr = (long)(pbVar32 + 6);
      bVar73 = pbVar32[5];
      *__ptr = (long)(pbVar32 + 7);
      bVar75 = pbVar32[6];
      *__ptr = (long)(pbVar32 + 8);
                    /* try { // try from 00d63610 to 00e6361f has its CatchHandler @ 00d636e0 */
                    /* try { // try from 00d63620 to 00e636fb has its CatchHandler @ 00d63334 */
      if (((bVar73 & bVar69) != 0xff) || ((pbVar32[7] & bVar75) != 0xff)) {
        uVar27 = spColor_create();
        *(undefined8 *)(lVar33 + 0x30) = uVar27;
        spColor_setFromFloats
                  ((float)bVar69 / 255.0,(float)bVar73 / 255.0,(float)bVar75 / 255.0,0x3f800000);
      }
      uVar27 = readString(__ptr);
      *(undefined8 *)(lVar33 + 0x18) = uVar27;
      pbVar32 = (byte *)*__ptr;
      *__ptr = (long)(pbVar32 + 1);
                    /* catch() { ... } // from try @ 00d635e8 with catch @ 00d63668 */
                    /* catch() { ... } // from try @ 00d635dc with catch @ 00d6366c */
      uVar38 = *pbVar32 & 0x7f;
                    /* catch() { ... } // from try @ 00d6349c with catch @ 00d63670 */
      if ((char)*pbVar32 < '\0') {
                    /* catch() { ... } // from try @ 00d63490 with catch @ 00d63674 */
                    /* catch() { ... } // from try @ 00d6347c with catch @ 00d63678 */
        *__ptr = (long)(pbVar32 + 2);
                    /* catch() { ... } // from try @ 00d63470 with catch @ 00d6367c */
                    /* catch() { ... } // from try @ 00d63458 with catch @ 00d63680 */
        uVar38 = uVar38 | (pbVar32[1] & 0x7f) << 7;
        if ((char)pbVar32[1] < '\0') {
          *__ptr = (long)(pbVar32 + 3);
          uVar38 = uVar38 | (pbVar32[2] & 0x7f) << 0xe;
          if ((char)pbVar32[2] < '\0') {
            *__ptr = (long)(pbVar32 + 4);
            uVar38 = uVar38 | (pbVar32[3] & 0x7f) << 0x15;
            if ((char)pbVar32[3] < '\0') {
                    /* catch() { ... } // from try @ 00d6344c with catch @ 00d636b0 */
                    /* catch() { ... } // from try @ 00d63404 with catch @ 00d636b4 */
              *__ptr = (long)(pbVar32 + 5);
                    /* catch() { ... } // from try @ 00d63528 with catch @ 00d636b8 */
                    /* catch() { ... } // from try @ 00d6350c with catch @ 00d636bc */
              uVar38 = uVar38 | (uint)pbVar32[4] << 0x1c;
                    /* catch() { ... } // from try @ 00d634f0 with catch @ 00d636c0 */
            }
          }
        }
      }
      *(uint *)(lVar33 + 0x38) = uVar38;
      *(long *)(puVar23[6] + uVar41 * 8) = lVar33;
                    /* try { // try from 00d634d4 to 00e634e7 has its CatchHandler @ 00d636d8 */
      uVar41 = uVar41 + 1;
    } while ((long)uVar41 < (long)*(int *)(puVar23 + 5));
  }
                    /* catch() { ... } // from try @ 00d635b8 with catch @ 00d636c4 */
  pbVar32 = (byte *)*__ptr;
                    /* catch() { ... } // from try @ 00d6359c with catch @ 00d636c8 */
                    /* catch() { ... } // from try @ 00d63580 with catch @ 00d636cc */
  *__ptr = (long)(pbVar32 + 1);
                    /* catch() { ... } // from try @ 00d63564 with catch @ 00d636d0 */
                    /* catch() { ... } // from try @ 00d63548 with catch @ 00d636d4 */
  uVar38 = *pbVar32 & 0x7f;
  uVar41 = (ulong)uVar38;
                    /* catch() { ... } // from try @ 00d634d4 with catch @ 00d636d8 */
  if ((char)*pbVar32 < '\0') {
                    /* catch() { ... } // from try @ 00d634bc with catch @ 00d636dc */
                    /* catch() { ... } // from try @ 00d6342c with catch @ 00d636e0
                       catch() { ... } // from try @ 00d63610 with catch @ 00d636e0 */
    *__ptr = (long)(pbVar32 + 2);
    uVar38 = uVar38 | (pbVar32[1] & 0x7f) << 7;
    uVar41 = (ulong)uVar38;
    if ((char)pbVar32[1] < '\0') {
      *__ptr = (long)(pbVar32 + 3);
                    /* try { // try from 00d636fc to 00e63783 has its CatchHandler @ 00d636fc
                       catch() { ... } // from try @ 00d636fc with catch @ 00d636fc
                       catch() { ... } // from try @ 00d63790 with catch @ 00d636fc
                       catch() { ... } // from try @ 00d63830 with catch @ 00d636fc
                       catch() { ... } // from try @ 00d63850 with catch @ 00d636fc */
      uVar38 = uVar38 | (pbVar32[2] & 0x7f) << 0xe;
      uVar41 = (ulong)uVar38;
      if ((char)pbVar32[2] < '\0') {
        *__ptr = (long)(pbVar32 + 4);
        uVar38 = uVar38 | (pbVar32[3] & 0x7f) << 0x15;
        uVar41 = (ulong)uVar38;
        if ((char)pbVar32[3] < '\0') {
          *__ptr = (long)(pbVar32 + 5);
          uVar41 = (ulong)(uVar38 | (uint)pbVar32[4] << 0x1c);
        }
      }
    }
  }
  *(int *)(puVar23 + 0xe) = (int)uVar41;
  uVar27 = _spMalloc(-(uVar41 >> 0x1f) & 0xfffffff800000000 | uVar41 << 3,
                     "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonBinary.c"
                     ,0x3b1);
  puVar23[0xf] = uVar27;
  if (0 < *(int *)(puVar23 + 0xe)) {
    lVar33 = 0;
    do {
      pvVar26 = (void *)readString(__ptr);
      lVar28 = spIkConstraintData_create();
      pbVar32 = (byte *)*__ptr;
      *__ptr = (long)(pbVar32 + 1);
      uVar38 = *pbVar32 & 0x7f;
      if ((char)*pbVar32 < '\0') {
        *__ptr = (long)(pbVar32 + 2);
        uVar38 = uVar38 | (pbVar32[1] & 0x7f) << 7;
        if ((char)pbVar32[1] < '\0') {
          *__ptr = (long)(pbVar32 + 3);
          uVar38 = uVar38 | (pbVar32[2] & 0x7f) << 0xe;
          if ((char)pbVar32[2] < '\0') {
                    /* try { // try from 00d63824 to 00e6382f has its CatchHandler @ 00d639a4 */
            *__ptr = (long)(pbVar32 + 4);
            uVar38 = uVar38 | (pbVar32[3] & 0x7f) << 0x15;
                    /* try { // try from 00d63830 to 00e63843 has its CatchHandler @ 00d636fc */
            if ((char)pbVar32[3] < '\0') {
              *__ptr = (long)(pbVar32 + 5);
              uVar38 = uVar38 | (uint)pbVar32[4] << 0x1c;
            }
          }
        }
      }
                    /* try { // try from 00d63844 to 00e6384f has its CatchHandler @ 00d639a8 */
      *(uint *)(lVar28 + 8) = uVar38;
      _spFree(pvVar26);
                    /* try { // try from 00d63850 to 00e639c7 has its CatchHandler @ 00d636fc */
      pbVar32 = (byte *)*__ptr;
      *__ptr = (long)(pbVar32 + 1);
      uVar38 = *pbVar32 & 0x7f;
      uVar41 = (ulong)uVar38;
      if ((char)*pbVar32 < '\0') {
        *__ptr = (long)(pbVar32 + 2);
        uVar38 = uVar38 | (pbVar32[1] & 0x7f) << 7;
        uVar41 = (ulong)uVar38;
        if ((char)pbVar32[1] < '\0') {
          *__ptr = (long)(pbVar32 + 3);
          uVar38 = uVar38 | (pbVar32[2] & 0x7f) << 0xe;
          uVar41 = (ulong)uVar38;
          if ((char)pbVar32[2] < '\0') {
            *__ptr = (long)(pbVar32 + 4);
            uVar38 = uVar38 | (pbVar32[3] & 0x7f) << 0x15;
            uVar41 = (ulong)uVar38;
            if ((char)pbVar32[3] < '\0') {
              *__ptr = (long)(pbVar32 + 5);
              uVar41 = (ulong)(uVar38 | (uint)pbVar32[4] << 0x1c);
            }
          }
        }
      }
      *(int *)(lVar28 + 0xc) = (int)uVar41;
      uVar27 = _spMalloc(-(uVar41 >> 0x1f) & 0xfffffff800000000 | uVar41 << 3,
                         "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonBinary.c"
                         ,0x3b9);
      iVar68 = *(int *)(lVar28 + 0xc);
      lVar43 = 0;
      *(undefined8 *)(lVar28 + 0x10) = uVar27;
      while( true ) {
        pbVar52 = (byte *)*__ptr;
        lVar49 = puVar23[4];
        pbVar32 = pbVar52 + 1;
        *__ptr = (long)pbVar32;
        uVar38 = *pbVar52 & 0x7f;
        if ((char)*pbVar52 < '\0') {
          pbVar32 = pbVar52 + 2;
          *__ptr = (long)pbVar32;
          uVar38 = uVar38 | (pbVar52[1] & 0x7f) << 7;
          if ((char)pbVar52[1] < '\0') {
            pbVar32 = pbVar52 + 3;
            *__ptr = (long)pbVar32;
            uVar38 = uVar38 | (pbVar52[2] & 0x7f) << 0xe;
            if ((char)pbVar52[2] < '\0') {
              pbVar32 = pbVar52 + 4;
              *__ptr = (long)pbVar32;
              uVar38 = uVar38 | (pbVar52[3] & 0x7f) << 0x15;
              if ((char)pbVar52[3] < '\0') {
                pbVar32 = pbVar52 + 5;
                *__ptr = (long)pbVar32;
                uVar38 = uVar38 | (uint)pbVar52[4] << 0x1c;
              }
            }
          }
        }
        uVar27 = *(undefined8 *)(lVar49 + (long)(int)uVar38 * 8);
        if (iVar68 <= lVar43) break;
        *(undefined8 *)(*(long *)(lVar28 + 0x10) + lVar43 * 8) = uVar27;
        lVar43 = lVar43 + 1;
      }
      *(undefined8 *)(lVar28 + 0x18) = uVar27;
      *__ptr = (long)(pbVar32 + 1);
      bVar69 = *pbVar32;
      *__ptr = (long)(pbVar32 + 2);
                    /* try { // try from 00d63784 to 00e6378f has its CatchHandler @ 00d639ac */
      bVar73 = pbVar32[1];
      *__ptr = (long)(pbVar32 + 3);
      bVar75 = pbVar32[2];
                    /* try { // try from 00d63790 to 00e63823 has its CatchHandler @ 00d636fc */
      *__ptr = (long)(pbVar32 + 4);
      *(uint *)(lVar28 + 0x24) = CONCAT31(CONCAT21(CONCAT11(bVar69,bVar73),bVar75),pbVar32[3]);
      *__ptr = (long)(pbVar32 + 5);
      *(int *)(lVar28 + 0x20) = (int)(char)pbVar32[4];
      *(long *)(puVar23[0xf] + lVar33 * 8) = lVar28;
      lVar33 = lVar33 + 1;
    } while (lVar33 < *(int *)(puVar23 + 0xe));
  }
  pbVar32 = (byte *)*__ptr;
  *__ptr = (long)(pbVar32 + 1);
  uVar38 = *pbVar32 & 0x7f;
  uVar41 = (ulong)uVar38;
  if ((char)*pbVar32 < '\0') {
    *__ptr = (long)(pbVar32 + 2);
    uVar38 = uVar38 | (pbVar32[1] & 0x7f) << 7;
    uVar41 = (ulong)uVar38;
    if ((char)pbVar32[1] < '\0') {
      *__ptr = (long)(pbVar32 + 3);
      uVar38 = uVar38 | (pbVar32[2] & 0x7f) << 0xe;
      uVar41 = (ulong)uVar38;
      if ((char)pbVar32[2] < '\0') {
        *__ptr = (long)(pbVar32 + 4);
                    /* catch() { ... } // from try @ 00d63824 with catch @ 00d639a4 */
        uVar38 = uVar38 | (pbVar32[3] & 0x7f) << 0x15;
        uVar41 = (ulong)uVar38;
                    /* catch() { ... } // from try @ 00d63844 with catch @ 00d639a8 */
        if ((char)pbVar32[3] < '\0') {
                    /* catch() { ... } // from try @ 00d63784 with catch @ 00d639ac */
          *__ptr = (long)(pbVar32 + 5);
          uVar41 = (ulong)(uVar38 | (uint)pbVar32[4] << 0x1c);
        }
      }
    }
  }
                    /* try { // try from 00d639c8 to 00e63abf has its CatchHandler @ 00d639c8
                       catch() { ... } // from try @ 00d639c8 with catch @ 00d639c8
                       catch() { ... } // from try @ 00d63c90 with catch @ 00d639c8 */
  *(int *)(puVar23 + 0x10) = (int)uVar41;
  uVar27 = _spMalloc(-(uVar41 >> 0x1f) & 0xfffffff800000000 | uVar41 << 3,
                     "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonBinary.c"
                     ,0x3c5);
  puVar23[0x11] = uVar27;
  if (0 < *(int *)(puVar23 + 0x10)) {
    lVar33 = 0;
    do {
      pvVar26 = (void *)readString(__ptr);
      lVar28 = spTransformConstraintData_create();
      pbVar32 = (byte *)*__ptr;
      *__ptr = (long)(pbVar32 + 1);
      uVar38 = *pbVar32 & 0x7f;
      if ((char)*pbVar32 < '\0') {
        *__ptr = (long)(pbVar32 + 2);
        uVar38 = uVar38 | (pbVar32[1] & 0x7f) << 7;
        if ((char)pbVar32[1] < '\0') {
          *__ptr = (long)(pbVar32 + 3);
          uVar38 = uVar38 | (pbVar32[2] & 0x7f) << 0xe;
          if ((char)pbVar32[2] < '\0') {
            *__ptr = (long)(pbVar32 + 4);
            uVar38 = uVar38 | (pbVar32[3] & 0x7f) << 0x15;
            if ((char)pbVar32[3] < '\0') {
              *__ptr = (long)(pbVar32 + 5);
              uVar38 = uVar38 | (uint)pbVar32[4] << 0x1c;
            }
          }
        }
      }
      *(uint *)(lVar28 + 8) = uVar38;
      _spFree(pvVar26);
      pbVar32 = (byte *)*__ptr;
                    /* catch() { ... } // from try @ 00d63c7c with catch @ 00d63d5c */
                    /* catch() { ... } // from try @ 00d63bec with catch @ 00d63d60 */
      *__ptr = (long)(pbVar32 + 1);
                    /* catch() { ... } // from try @ 00d63b8c with catch @ 00d63d64 */
      uVar38 = *pbVar32 & 0x7f;
      uVar41 = (ulong)uVar38;
      if ((char)*pbVar32 < '\0') {
        *__ptr = (long)(pbVar32 + 2);
        uVar38 = uVar38 | (pbVar32[1] & 0x7f) << 7;
        uVar41 = (ulong)uVar38;
        if ((char)pbVar32[1] < '\0') {
          *__ptr = (long)(pbVar32 + 3);
          uVar38 = uVar38 | (pbVar32[2] & 0x7f) << 0xe;
          uVar41 = (ulong)uVar38;
          if ((char)pbVar32[2] < '\0') {
            *__ptr = (long)(pbVar32 + 4);
                    /* catch() { ... } // from try @ 00d63b24 with catch @ 00d63da4 */
            uVar38 = uVar38 | (pbVar32[3] & 0x7f) << 0x15;
            uVar41 = (ulong)uVar38;
            if ((char)pbVar32[3] < '\0') {
              *__ptr = (long)(pbVar32 + 5);
                    /* catch() { ... } // from try @ 00d63ae4 with catch @ 00d63db4 */
                    /* catch() { ... } // from try @ 00d63ac0 with catch @ 00d63db8 */
              uVar41 = (ulong)(uVar38 | (uint)pbVar32[4] << 0x1c);
            }
          }
        }
      }
                    /* catch() { ... } // from try @ 00d63c40 with catch @ 00d63dbc */
                    /* catch() { ... } // from try @ 00d63bc8 with catch @ 00d63dc0 */
                    /* catch() { ... } // from try @ 00d63b68 with catch @ 00d63dc4 */
                    /* catch() { ... } // from try @ 00d63b00 with catch @ 00d63dc8 */
      *(int *)(lVar28 + 0xc) = (int)uVar41;
      uVar27 = _spMalloc(-(uVar41 >> 0x1f) & 0xfffffff800000000 | uVar41 << 3,
                         "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonBinary.c"
                         ,0x3cd);
      iVar68 = *(int *)(lVar28 + 0xc);
      lVar43 = 0;
                    /* catch() { ... } // from try @ 00d63b30 with catch @ 00d63dd8 */
      *(undefined8 *)(lVar28 + 0x10) = uVar27;
      while( true ) {
                    /* catch() { ... } // from try @ 00d63bf8 with catch @ 00d63ddc */
        pbVar52 = (byte *)*__ptr;
        lVar49 = puVar23[4];
        pbVar32 = pbVar52 + 1;
        *__ptr = (long)pbVar32;
        uVar38 = *pbVar52 & 0x7f;
        if ((char)*pbVar52 < '\0') {
          pbVar32 = pbVar52 + 2;
          *__ptr = (long)pbVar32;
          uVar38 = uVar38 | (pbVar52[1] & 0x7f) << 7;
          if ((char)pbVar52[1] < '\0') {
            pbVar32 = pbVar52 + 3;
            *__ptr = (long)pbVar32;
                    /* try { // try from 00d63e18 to 00e640ef has its CatchHandler @ 00d63e18
                       catch() { ... } // from try @ 00d63e18 with catch @ 00d63e18
                       catch() { ... } // from try @ 00d642c0 with catch @ 00d63e18 */
            uVar38 = uVar38 | (pbVar52[2] & 0x7f) << 0xe;
            if ((char)pbVar52[2] < '\0') {
              pbVar32 = pbVar52 + 4;
              *__ptr = (long)pbVar32;
              uVar38 = uVar38 | (pbVar52[3] & 0x7f) << 0x15;
              if ((char)pbVar52[3] < '\0') {
                pbVar32 = pbVar52 + 5;
                *__ptr = (long)pbVar32;
                uVar38 = uVar38 | (uint)pbVar52[4] << 0x1c;
              }
            }
          }
        }
        uVar27 = *(undefined8 *)(lVar49 + (long)(int)uVar38 * 8);
        if (iVar68 <= lVar43) break;
        *(undefined8 *)(*(long *)(lVar28 + 0x10) + lVar43 * 8) = uVar27;
        lVar43 = lVar43 + 1;
      }
      *(undefined8 *)(lVar28 + 0x18) = uVar27;
      *__ptr = (long)(pbVar32 + 1);
      *(uint *)(lVar28 + 0x4c) = (uint)(*pbVar32 != 0);
      *__ptr = (long)(pbVar32 + 2);
      *(uint *)(lVar28 + 0x48) = (uint)(pbVar32[1] != 0);
      *__ptr = (long)(pbVar32 + 3);
      bVar69 = pbVar32[2];
      *__ptr = (long)(pbVar32 + 4);
      bVar73 = pbVar32[3];
      *__ptr = (long)(pbVar32 + 5);
      bVar75 = pbVar32[4];
      *__ptr = (long)(pbVar32 + 6);
      *(uint *)(lVar28 + 0x30) = CONCAT31(CONCAT21(CONCAT11(bVar69,bVar73),bVar75),pbVar32[5]);
      *__ptr = (long)(pbVar32 + 7);
      bVar69 = pbVar32[6];
      *__ptr = (long)(pbVar32 + 8);
      bVar73 = pbVar32[7];
      *__ptr = (long)(pbVar32 + 9);
      bVar75 = pbVar32[8];
      *__ptr = (long)(pbVar32 + 10);
      fVar66 = *param_1;
      *(float *)(lVar28 + 0x34) =
           fVar66 * (float)CONCAT31(CONCAT21(CONCAT11(bVar69,bVar73),bVar75),pbVar32[9]);
                    /* try { // try from 00d63ac0 to 00e63ad7 has its CatchHandler @ 00d63db8 */
      *__ptr = (long)(pbVar32 + 0xb);
      bVar69 = pbVar32[10];
      *__ptr = (long)(pbVar32 + 0xc);
      bVar73 = pbVar32[0xb];
      *__ptr = (long)(pbVar32 + 0xd);
      bVar75 = pbVar32[0xc];
      *__ptr = (long)(pbVar32 + 0xe);
                    /* try { // try from 00d63ae4 to 00e63aef has its CatchHandler @ 00d63db4 */
                    /* try { // try from 00d63b00 to 00e63b23 has its CatchHandler @ 00d63dc8 */
      *(float *)(lVar28 + 0x38) =
           fVar66 * (float)CONCAT31(CONCAT21(CONCAT11(bVar69,bVar73),bVar75),pbVar32[0xd]);
      *__ptr = (long)(pbVar32 + 0xf);
      bVar69 = pbVar32[0xe];
      *__ptr = (long)(pbVar32 + 0x10);
      bVar73 = pbVar32[0xf];
      *__ptr = (long)(pbVar32 + 0x11);
                    /* try { // try from 00d63b24 to 00e63b2f has its CatchHandler @ 00d63da4 */
      bVar75 = pbVar32[0x10];
      *__ptr = (long)(pbVar32 + 0x12);
                    /* try { // try from 00d63b30 to 00e63b63 has its CatchHandler @ 00d63dd8 */
      *(uint *)(lVar28 + 0x3c) = CONCAT31(CONCAT21(CONCAT11(bVar69,bVar73),bVar75),pbVar32[0x11]);
      *__ptr = (long)(pbVar32 + 0x13);
      bVar69 = pbVar32[0x12];
      *__ptr = (long)(pbVar32 + 0x14);
      bVar73 = pbVar32[0x13];
      *__ptr = (long)(pbVar32 + 0x15);
      bVar75 = pbVar32[0x14];
                    /* try { // try from 00d63b68 to 00e63b8b has its CatchHandler @ 00d63dc4 */
      *__ptr = (long)(pbVar32 + 0x16);
      *(uint *)(lVar28 + 0x40) = CONCAT31(CONCAT21(CONCAT11(bVar69,bVar73),bVar75),pbVar32[0x15]);
      *__ptr = (long)(pbVar32 + 0x17);
                    /* try { // try from 00d63b8c to 00e63ba7 has its CatchHandler @ 00d63d64 */
      bVar69 = pbVar32[0x16];
      *__ptr = (long)(pbVar32 + 0x18);
      bVar73 = pbVar32[0x17];
      *__ptr = (long)(pbVar32 + 0x19);
      bVar75 = pbVar32[0x18];
      *__ptr = (long)(pbVar32 + 0x1a);
      *(uint *)(lVar28 + 0x44) = CONCAT31(CONCAT21(CONCAT11(bVar69,bVar73),bVar75),pbVar32[0x19]);
                    /* try { // try from 00d63bc8 to 00e63beb has its CatchHandler @ 00d63dc0 */
      *__ptr = (long)(pbVar32 + 0x1b);
      bVar69 = pbVar32[0x1a];
      *__ptr = (long)(pbVar32 + 0x1c);
      bVar73 = pbVar32[0x1b];
      *__ptr = (long)(pbVar32 + 0x1d);
      bVar75 = pbVar32[0x1c];
      *__ptr = (long)(pbVar32 + 0x1e);
                    /* try { // try from 00d63bec to 00e63bf7 has its CatchHandler @ 00d63d60 */
                    /* try { // try from 00d63bf8 to 00e63c3b has its CatchHandler @ 00d63ddc */
      *(uint *)(lVar28 + 0x20) = CONCAT31(CONCAT21(CONCAT11(bVar69,bVar73),bVar75),pbVar32[0x1d]);
      *__ptr = (long)(pbVar32 + 0x1f);
      bVar69 = pbVar32[0x1e];
      *__ptr = (long)(pbVar32 + 0x20);
      bVar73 = pbVar32[0x1f];
      *__ptr = (long)(pbVar32 + 0x21);
      bVar75 = pbVar32[0x20];
      *__ptr = (long)(pbVar32 + 0x22);
                    /* try { // try from 00d63c40 to 00e63c63 has its CatchHandler @ 00d63dbc */
      *(uint *)(lVar28 + 0x24) = CONCAT31(CONCAT21(CONCAT11(bVar69,bVar73),bVar75),pbVar32[0x21]);
      *__ptr = (long)(pbVar32 + 0x23);
      bVar69 = pbVar32[0x22];
      *__ptr = (long)(pbVar32 + 0x24);
      bVar73 = pbVar32[0x23];
      *__ptr = (long)(pbVar32 + 0x25);
      bVar75 = pbVar32[0x24];
      *__ptr = (long)(pbVar32 + 0x26);
                    /* try { // try from 00d63c7c to 00e63c8f has its CatchHandler @ 00d63d5c */
      *(uint *)(lVar28 + 0x28) = CONCAT31(CONCAT21(CONCAT11(bVar69,bVar73),bVar75),pbVar32[0x25]);
      *__ptr = (long)(pbVar32 + 0x27);
                    /* try { // try from 00d63c90 to 00e63e17 has its CatchHandler @ 00d639c8 */
      bVar69 = pbVar32[0x26];
      *__ptr = (long)(pbVar32 + 0x28);
      bVar73 = pbVar32[0x27];
      *__ptr = (long)(pbVar32 + 0x29);
      bVar75 = pbVar32[0x28];
      *__ptr = (long)(pbVar32 + 0x2a);
      *(uint *)(lVar28 + 0x2c) = CONCAT31(CONCAT21(CONCAT11(bVar69,bVar73),bVar75),pbVar32[0x29]);
      *(long *)(puVar23[0x11] + lVar33 * 8) = lVar28;
      lVar33 = lVar33 + 1;
    } while (lVar33 < *(int *)(puVar23 + 0x10));
  }
  pbVar32 = (byte *)*__ptr;
  *__ptr = (long)(pbVar32 + 1);
  uVar38 = *pbVar32 & 0x7f;
  uVar41 = (ulong)uVar38;
  if ((char)*pbVar32 < '\0') {
    *__ptr = (long)(pbVar32 + 2);
    uVar38 = uVar38 | (pbVar32[1] & 0x7f) << 7;
    uVar41 = (ulong)uVar38;
    if ((char)pbVar32[1] < '\0') {
      *__ptr = (long)(pbVar32 + 3);
      uVar38 = uVar38 | (pbVar32[2] & 0x7f) << 0xe;
      uVar41 = (ulong)uVar38;
      if ((char)pbVar32[2] < '\0') {
        *__ptr = (long)(pbVar32 + 4);
        uVar38 = uVar38 | (pbVar32[3] & 0x7f) << 0x15;
        uVar41 = (ulong)uVar38;
        if ((char)pbVar32[3] < '\0') {
          *__ptr = (long)(pbVar32 + 5);
          uVar41 = (ulong)(uVar38 | (uint)pbVar32[4] << 0x1c);
        }
      }
    }
  }
  *(int *)(puVar23 + 0x12) = (int)uVar41;
  uVar27 = _spMalloc(-(uVar41 >> 0x1f) & 0xfffffff800000000 | uVar41 << 3,
                     "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonBinary.c"
                     ,0x3e2);
  puVar23[0x13] = uVar27;
  if (0 < *(int *)(puVar23 + 0x12)) {
    lVar33 = 0;
    do {
      pvVar26 = (void *)readString(__ptr);
      lVar28 = spPathConstraintData_create();
      pbVar32 = (byte *)*__ptr;
      *__ptr = (long)(pbVar32 + 1);
      uVar38 = *pbVar32 & 0x7f;
      if ((char)*pbVar32 < '\0') {
        *__ptr = (long)(pbVar32 + 2);
        uVar38 = uVar38 | (pbVar32[1] & 0x7f) << 7;
        if ((char)pbVar32[1] < '\0') {
          *__ptr = (long)(pbVar32 + 3);
          uVar38 = uVar38 | (pbVar32[2] & 0x7f) << 0xe;
          if ((char)pbVar32[2] < '\0') {
            *__ptr = (long)(pbVar32 + 4);
            uVar38 = uVar38 | (pbVar32[3] & 0x7f) << 0x15;
            if ((char)pbVar32[3] < '\0') {
              *__ptr = (long)(pbVar32 + 5);
              uVar38 = uVar38 | (uint)pbVar32[4] << 0x1c;
            }
          }
        }
      }
      *(uint *)(lVar28 + 8) = uVar38;
      _spFree(pvVar26);
      pbVar32 = (byte *)*__ptr;
      *__ptr = (long)(pbVar32 + 1);
      uVar38 = *pbVar32 & 0x7f;
      uVar41 = (ulong)uVar38;
      if ((char)*pbVar32 < '\0') {
        *__ptr = (long)(pbVar32 + 2);
        uVar38 = uVar38 | (pbVar32[1] & 0x7f) << 7;
        uVar41 = (ulong)uVar38;
        if ((char)pbVar32[1] < '\0') {
          *__ptr = (long)(pbVar32 + 3);
          uVar38 = uVar38 | (pbVar32[2] & 0x7f) << 0xe;
          uVar41 = (ulong)uVar38;
          if ((char)pbVar32[2] < '\0') {
            *__ptr = (long)(pbVar32 + 4);
            uVar38 = uVar38 | (pbVar32[3] & 0x7f) << 0x15;
            uVar41 = (ulong)uVar38;
            if ((char)pbVar32[3] < '\0') {
              *__ptr = (long)(pbVar32 + 5);
              uVar41 = (ulong)(uVar38 | (uint)pbVar32[4] << 0x1c);
            }
          }
        }
      }
      *(int *)(lVar28 + 0xc) = (int)uVar41;
      uVar27 = _spMalloc(-(uVar41 >> 0x1f) & 0xfffffff800000000 | uVar41 << 3,
                         "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonBinary.c"
                         ,0x3ea);
      iVar68 = *(int *)(lVar28 + 0xc);
      *(undefined8 *)(lVar28 + 0x10) = uVar27;
      if (0 < iVar68) {
        lVar43 = 0;
        do {
          pbVar32 = (byte *)*__ptr;
          lVar49 = puVar23[4];
          *__ptr = (long)(pbVar32 + 1);
          uVar38 = *pbVar32 & 0x7f;
          if ((char)*pbVar32 < '\0') {
            *__ptr = (long)(pbVar32 + 2);
            uVar38 = uVar38 | (pbVar32[1] & 0x7f) << 7;
            if ((char)pbVar32[1] < '\0') {
                    /* try { // try from 00d640f0 to 00e64107 has its CatchHandler @ 00d64374 */
              *__ptr = (long)(pbVar32 + 3);
              uVar38 = uVar38 | (pbVar32[2] & 0x7f) << 0xe;
              if ((char)pbVar32[2] < '\0') {
                *__ptr = (long)(pbVar32 + 4);
                uVar38 = uVar38 | (pbVar32[3] & 0x7f) << 0x15;
                if ((char)pbVar32[3] < '\0') {
                  *__ptr = (long)(pbVar32 + 5);
                    /* try { // try from 00d64124 to 00e6412f has its CatchHandler @ 00d6435c */
                  uVar38 = uVar38 | (uint)pbVar32[4] << 0x1c;
                }
              }
            }
          }
          *(undefined8 *)(*(long *)(lVar28 + 0x10) + lVar43 * 8) =
               *(undefined8 *)(lVar49 + (long)(int)uVar38 * 8);
          lVar43 = lVar43 + 1;
        } while (lVar43 < iVar68);
      }
      pbVar52 = (byte *)*__ptr;
      lVar43 = puVar23[6];
      pbVar32 = pbVar52 + 1;
      *__ptr = (long)pbVar32;
      uVar38 = *pbVar52 & 0x7f;
      if ((char)*pbVar52 < '\0') {
        pbVar32 = pbVar52 + 2;
                    /* try { // try from 00d6414c to 00e64163 has its CatchHandler @ 00d64378 */
        *__ptr = (long)pbVar32;
        uVar38 = uVar38 | (pbVar52[1] & 0x7f) << 7;
        if ((char)pbVar52[1] < '\0') {
          pbVar32 = pbVar52 + 3;
          *__ptr = (long)pbVar32;
          uVar38 = uVar38 | (pbVar52[2] & 0x7f) << 0xe;
          if ((char)pbVar52[2] < '\0') {
                    /* try { // try from 00d64170 to 00e64187 has its CatchHandler @ 00d64370 */
            pbVar32 = pbVar52 + 4;
            *__ptr = (long)pbVar32;
            uVar38 = uVar38 | (pbVar52[3] & 0x7f) << 0x15;
            if ((char)pbVar52[3] < '\0') {
              pbVar32 = pbVar52 + 5;
              *__ptr = (long)pbVar32;
                    /* try { // try from 00d6418c to 00e641a3 has its CatchHandler @ 00d6436c */
              uVar38 = uVar38 | (uint)pbVar52[4] << 0x1c;
            }
          }
        }
      }
      pbVar52 = pbVar32 + 1;
      *(undefined8 *)(lVar28 + 0x18) = *(undefined8 *)(lVar43 + (long)(int)uVar38 * 8);
      *__ptr = (long)pbVar52;
                    /* try { // try from 00d641a8 to 00e641bf has its CatchHandler @ 00d64368 */
      uVar38 = *pbVar32 & 0x7f;
      if ((char)*pbVar32 < '\0') {
        pbVar52 = pbVar32 + 2;
        *__ptr = (long)pbVar52;
        uVar38 = uVar38 | (pbVar32[1] & 0x7f) << 7;
        if ((char)pbVar32[1] < '\0') {
                    /* try { // try from 00d641c4 to 00e641db has its CatchHandler @ 00d64364 */
          pbVar52 = pbVar32 + 3;
          *__ptr = (long)pbVar52;
          uVar38 = uVar38 | (pbVar32[2] & 0x7f) << 0xe;
          if ((char)pbVar32[2] < '\0') {
            pbVar52 = pbVar32 + 4;
            *__ptr = (long)pbVar52;
                    /* try { // try from 00d641e4 to 00e641ef has its CatchHandler @ 00d6431c */
            uVar38 = uVar38 | (pbVar32[3] & 0x7f) << 0x15;
            if ((char)pbVar32[3] < '\0') {
              pbVar52 = pbVar32 + 5;
                    /* try { // try from 00d641f0 to 00e641ff has its CatchHandler @ 00d64318 */
              *__ptr = (long)pbVar52;
              uVar38 = uVar38 | (uint)pbVar32[4] << 0x1c;
            }
          }
        }
      }
      pbVar32 = pbVar52 + 1;
      *(uint *)(lVar28 + 0x20) = uVar38;
      *__ptr = (long)pbVar32;
                    /* try { // try from 00d64208 to 00e64213 has its CatchHandler @ 00d64358 */
      uVar39 = *pbVar52 & 0x7f;
      if ((char)*pbVar52 < '\0') {
                    /* try { // try from 00d64214 to 00e64223 has its CatchHandler @ 00d64328 */
        pbVar32 = pbVar52 + 2;
        *__ptr = (long)pbVar32;
        uVar39 = uVar39 | (pbVar52[1] & 0x7f) << 7;
        if ((char)pbVar52[1] < '\0') {
                    /* try { // try from 00d64228 to 00e64233 has its CatchHandler @ 00d64324 */
          pbVar32 = pbVar52 + 3;
          *__ptr = (long)pbVar32;
                    /* try { // try from 00d64234 to 00e64243 has its CatchHandler @ 00d64320 */
          uVar39 = uVar39 | (pbVar52[2] & 0x7f) << 0xe;
          if ((char)pbVar52[2] < '\0') {
            pbVar32 = pbVar52 + 4;
            *__ptr = (long)pbVar32;
            uVar39 = uVar39 | (pbVar52[3] & 0x7f) << 0x15;
            if ((char)pbVar52[3] < '\0') {
              pbVar32 = pbVar52 + 5;
              *__ptr = (long)pbVar32;
                    /* try { // try from 00d64258 to 00e64263 has its CatchHandler @ 00d64314 */
              uVar39 = uVar39 | (uint)pbVar52[4] << 0x1c;
            }
          }
        }
      }
      pbVar52 = pbVar32 + 1;
                    /* try { // try from 00d64264 to 00e64273 has its CatchHandler @ 00d64310 */
      *(uint *)(lVar28 + 0x24) = uVar39;
      *__ptr = (long)pbVar52;
      uVar51 = *pbVar32 & 0x7f;
      if ((char)*pbVar32 < '\0') {
        pbVar52 = pbVar32 + 2;
        *__ptr = (long)pbVar52;
                    /* try { // try from 00d64284 to 00e642a7 has its CatchHandler @ 00d64360 */
        uVar51 = uVar51 | (pbVar32[1] & 0x7f) << 7;
        if ((char)pbVar32[1] < '\0') {
          pbVar52 = pbVar32 + 3;
          *__ptr = (long)pbVar52;
          uVar51 = uVar51 | (pbVar32[2] & 0x7f) << 0xe;
          if ((char)pbVar32[2] < '\0') {
            pbVar52 = pbVar32 + 4;
            *__ptr = (long)pbVar52;
            uVar51 = uVar51 | (pbVar32[3] & 0x7f) << 0x15;
                    /* try { // try from 00d642b0 to 00e642bf has its CatchHandler @ 00d64378 */
            if ((char)pbVar32[3] < '\0') {
              pbVar52 = pbVar32 + 5;
              *__ptr = (long)pbVar52;
                    /* try { // try from 00d642c0 to 00e64393 has its CatchHandler @ 00d63e18 */
              uVar51 = uVar51 | (uint)pbVar32[4] << 0x1c;
            }
          }
        }
      }
      *(uint *)(lVar28 + 0x28) = uVar51;
      *__ptr = (long)(pbVar52 + 1);
      bVar69 = *pbVar52;
      *__ptr = (long)(pbVar52 + 2);
      bVar73 = pbVar52[1];
      *__ptr = (long)(pbVar52 + 3);
      bVar75 = pbVar52[2];
      *__ptr = (long)(pbVar52 + 4);
                    /* catch() { ... } // from try @ 00d64264 with catch @ 00d64310 */
      *(uint *)(lVar28 + 0x2c) = CONCAT31(CONCAT21(CONCAT11(bVar69,bVar73),bVar75),pbVar52[3]);
                    /* catch() { ... } // from try @ 00d64258 with catch @ 00d64314 */
      *__ptr = (long)(pbVar52 + 5);
                    /* catch() { ... } // from try @ 00d641f0 with catch @ 00d64318 */
                    /* catch() { ... } // from try @ 00d641e4 with catch @ 00d6431c */
      bVar69 = pbVar52[4];
                    /* catch() { ... } // from try @ 00d64234 with catch @ 00d64320 */
      *__ptr = (long)(pbVar52 + 6);
                    /* catch() { ... } // from try @ 00d64228 with catch @ 00d64324 */
      bVar73 = pbVar52[5];
                    /* catch() { ... } // from try @ 00d64214 with catch @ 00d64328 */
      *__ptr = (long)(pbVar52 + 7);
      bVar75 = pbVar52[6];
      *__ptr = (long)(pbVar52 + 8);
      fVar66 = (float)CONCAT31(CONCAT21(CONCAT11(bVar69,bVar73),bVar75),pbVar52[7]);
      *(float *)(lVar28 + 0x30) = fVar66;
      if (uVar38 == 0) {
                    /* catch() { ... } // from try @ 00d64208 with catch @ 00d64358 */
        *(float *)(lVar28 + 0x30) = *param_1 * fVar66;
      }
                    /* catch() { ... } // from try @ 00d64124 with catch @ 00d6435c */
                    /* catch() { ... } // from try @ 00d64284 with catch @ 00d64360 */
                    /* catch() { ... } // from try @ 00d641c4 with catch @ 00d64364 */
      *__ptr = (long)(pbVar52 + 9);
                    /* catch() { ... } // from try @ 00d641a8 with catch @ 00d64368 */
                    /* catch() { ... } // from try @ 00d6418c with catch @ 00d6436c */
      bVar69 = pbVar52[8];
                    /* catch() { ... } // from try @ 00d64170 with catch @ 00d64370 */
      *__ptr = (long)(pbVar52 + 10);
                    /* catch() { ... } // from try @ 00d640f0 with catch @ 00d64374 */
                    /* catch() { ... } // from try @ 00d6414c with catch @ 00d64378
                       catch() { ... } // from try @ 00d642b0 with catch @ 00d64378 */
      bVar73 = pbVar52[9];
      *__ptr = (long)(pbVar52 + 0xb);
      bVar75 = pbVar52[10];
      *__ptr = (long)(pbVar52 + 0xc);
      fVar66 = (float)CONCAT31(CONCAT21(CONCAT11(bVar69,bVar73),bVar75),pbVar52[0xb]);
      *(float *)(lVar28 + 0x34) = fVar66;
      if (uVar39 < 2) {
        *(float *)(lVar28 + 0x34) = *param_1 * fVar66;
      }
      *__ptr = (long)(pbVar52 + 0xd);
      bVar69 = pbVar52[0xc];
      *__ptr = (long)(pbVar52 + 0xe);
      bVar73 = pbVar52[0xd];
      *__ptr = (long)(pbVar52 + 0xf);
      bVar75 = pbVar52[0xe];
      *__ptr = (long)(pbVar52 + 0x10);
      *(uint *)(lVar28 + 0x38) = CONCAT31(CONCAT21(CONCAT11(bVar69,bVar73),bVar75),pbVar52[0xf]);
      *__ptr = (long)(pbVar52 + 0x11);
      bVar69 = pbVar52[0x10];
      *__ptr = (long)(pbVar52 + 0x12);
      bVar73 = pbVar52[0x11];
      *__ptr = (long)(pbVar52 + 0x13);
      bVar75 = pbVar52[0x12];
      *__ptr = (long)(pbVar52 + 0x14);
      *(uint *)(lVar28 + 0x3c) = CONCAT31(CONCAT21(CONCAT11(bVar69,bVar73),bVar75),pbVar52[0x13]);
      *(long *)(puVar23[0x13] + lVar33 * 8) = lVar28;
      lVar33 = lVar33 + 1;
    } while (lVar33 < *(int *)(puVar23 + 0x12));
  }
  lVar33 = spSkeletonBinary_readSkin(param_1,__ptr,"default",puVar23,cVar5 != '\0');
  puVar23[9] = lVar33;
  pbVar32 = (byte *)*__ptr;
  *__ptr = (long)(pbVar32 + 1);
  uVar38 = *pbVar32 & 0x7f;
  if ((char)*pbVar32 < '\0') {
    *__ptr = (long)(pbVar32 + 2);
    uVar38 = uVar38 | (pbVar32[1] & 0x7f) << 7;
    if ((char)pbVar32[1] < '\0') {
      *__ptr = (long)(pbVar32 + 3);
      uVar38 = uVar38 | (pbVar32[2] & 0x7f) << 0xe;
      if ((char)pbVar32[2] < '\0') {
        *__ptr = (long)(pbVar32 + 4);
        uVar38 = uVar38 | (pbVar32[3] & 0x7f) << 0x15;
        if ((char)pbVar32[3] < '\0') {
          *__ptr = (long)(pbVar32 + 5);
          uVar38 = uVar38 | (uint)pbVar32[4] << 0x1c;
        }
      }
    }
  }
  if (lVar33 != 0) {
    uVar38 = uVar38 + 1;
  }
  *(uint *)(puVar23 + 7) = uVar38;
  plVar29 = (long *)_spMalloc(-(ulong)(uVar38 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar38 << 3,
                              "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonBinary.c"
                              ,0x402);
  puVar23[8] = plVar29;
  lVar33 = 0;
  if (puVar23[9] != 0) {
    *plVar29 = puVar23[9];
    lVar33 = puVar23[9];
  }
  if ((int)(uint)(lVar33 != 0) < *(int *)(puVar23 + 7)) {
    uVar41 = (ulong)(lVar33 != 0);
    do {
      pvVar26 = (void *)readString(__ptr);
      uVar27 = spSkeletonBinary_readSkin(param_1,__ptr,pvVar26,puVar23,cVar5 != '\0');
                    /* try { // try from 00d644b4 to 00e64587 has its CatchHandler @ 00d644b4
                       catch() { ... } // from try @ 00d644b4 with catch @ 00d644b4
                       catch() { ... } // from try @ 00d645c8 with catch @ 00d644b4
                       catch() { ... } // from try @ 00d64724 with catch @ 00d644b4
                       catch() { ... } // from try @ 00d64a70 with catch @ 00d644b4 */
      *(undefined8 *)(puVar23[8] + uVar41 * 8) = uVar27;
      _spFree(pvVar26);
      uVar41 = uVar41 + 1;
    } while ((int)uVar41 < *(int *)(puVar23 + 7));
  }
  if (0 < (int)param_1[7]) {
    lVar28 = 0;
    lVar33 = 0;
    do {
      lVar43 = *(long *)(param_1 + 10);
      if (*(long *)(lVar43 + lVar28 + 8) == 0) {
        lVar49 = puVar23[9];
      }
      else {
        lVar49 = spSkeletonData_findSkin(puVar23);
      }
      if (lVar49 == 0) {
        _spFree(__ptr);
        spSkeletonData_dispose(puVar23);
        uVar27 = *(undefined8 *)(lVar43 + lVar28 + 8);
        pcVar24 = "Skin not found: ";
LAB_00d66da0:
                    /* try { // try from 00d66da0 to 00e66daf has its CatchHandler @ 00d66f54 */
        _spSkeletonBinary_setError(param_1,pcVar24,uVar27);
        return (undefined8 *)0x0;
      }
      puVar45 = (undefined8 *)(lVar43 + lVar28);
      lVar49 = spSkin_getAttachment(lVar49,*(undefined4 *)(puVar45 + 2),*puVar45);
      if (lVar49 == 0) {
        _spFree(__ptr);
        spSkeletonData_dispose(puVar23);
        uVar27 = *(undefined8 *)(lVar43 + lVar28);
                    /* try { // try from 00d66d98 to 00e66d9b has its CatchHandler @ 00d66f58 */
        pcVar24 = "Parent mesh not found: ";
        goto LAB_00d66da0;
      }
      spMeshAttachment_setParentMesh(puVar45[3],lVar49);
      spMeshAttachment_updateUVs(puVar45[3]);
      spAttachmentLoader_configureAttachment(*(undefined8 *)(param_1 + 2),puVar45[3]);
      lVar33 = lVar33 + 1;
      lVar28 = lVar28 + 0x20;
    } while (lVar33 < (int)param_1[7]);
  }
  pbVar32 = (byte *)*__ptr;
  *__ptr = (long)(pbVar32 + 1);
  uVar38 = *pbVar32 & 0x7f;
  uVar41 = (ulong)uVar38;
  if ((char)*pbVar32 < '\0') {
    *__ptr = (long)(pbVar32 + 2);
    uVar38 = uVar38 | (pbVar32[1] & 0x7f) << 7;
    uVar41 = (ulong)uVar38;
    if ((char)pbVar32[1] < '\0') {
      *__ptr = (long)(pbVar32 + 3);
                    /* try { // try from 00d64588 to 00e6459f has its CatchHandler @ 00d64be0 */
      uVar38 = uVar38 | (pbVar32[2] & 0x7f) << 0xe;
      uVar41 = (ulong)uVar38;
      if ((char)pbVar32[2] < '\0') {
        *__ptr = (long)(pbVar32 + 4);
        uVar38 = uVar38 | (pbVar32[3] & 0x7f) << 0x15;
        uVar41 = (ulong)uVar38;
        if ((char)pbVar32[3] < '\0') {
          *__ptr = (long)(pbVar32 + 5);
          uVar41 = (ulong)(uVar38 | (uint)pbVar32[4] << 0x1c);
        }
      }
    }
  }
                    /* try { // try from 00d645bc to 00e645c7 has its CatchHandler @ 00d64b08 */
                    /* try { // try from 00d645c8 to 00e645e3 has its CatchHandler @ 00d644b4 */
  *(int *)(puVar23 + 10) = (int)uVar41;
  uVar27 = _spMalloc(-(uVar41 >> 0x1f) & 0xfffffff800000000 | uVar41 << 3,
                     "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonBinary.c"
                     ,0x428);
  puVar23[0xb] = uVar27;
  if (0 < *(int *)(puVar23 + 10)) {
    lVar33 = 0;
                    /* try { // try from 00d645e4 to 00e645fb has its CatchHandler @ 00d64bdc */
    do {
      pvVar26 = (void *)readString(__ptr);
      lVar28 = spEventData_create();
                    /* try { // try from 00d64674 to 00e6467f has its CatchHandler @ 00d64b20 */
      _spFree(pvVar26);
      pbVar52 = (byte *)*__ptr;
      pbVar32 = pbVar52 + 1;
                    /* try { // try from 00d64680 to 00e6468f has its CatchHandler @ 00d64b1c */
      *__ptr = (long)pbVar32;
      uVar38 = *pbVar52 & 0x7f;
      if ((char)*pbVar52 < '\0') {
        pbVar32 = pbVar52 + 2;
        *__ptr = (long)pbVar32;
        uVar38 = uVar38 | (pbVar52[1] & 0x7f) << 7;
                    /* try { // try from 00d646a0 to 00e646a7 has its CatchHandler @ 00d64b18 */
        if ((char)pbVar52[1] < '\0') {
          pbVar32 = pbVar52 + 3;
                    /* try { // try from 00d646a8 to 00e646b7 has its CatchHandler @ 00d64b14 */
          *__ptr = (long)pbVar32;
          uVar38 = uVar38 | (pbVar52[2] & 0x7f) << 0xe;
          if ((char)pbVar52[2] < '\0') {
            pbVar32 = pbVar52 + 4;
            *__ptr = (long)pbVar32;
            uVar38 = uVar38 | (pbVar52[3] & 0x7f) << 0x15;
            if ((char)pbVar52[3] < '\0') {
              pbVar32 = pbVar52 + 5;
                    /* try { // try from 00d646d0 to 00e646fb has its CatchHandler @ 00d64be4 */
              *__ptr = (long)pbVar32;
              uVar38 = uVar38 | (uint)pbVar52[4] << 0x1c;
            }
          }
        }
      }
      *(uint *)(lVar28 + 8) = -(uVar38 & 1) ^ uVar38 >> 1;
      *__ptr = (long)(pbVar32 + 1);
      bVar69 = *pbVar32;
      *__ptr = (long)(pbVar32 + 2);
      bVar73 = pbVar32[1];
                    /* try { // try from 00d64618 to 00e64623 has its CatchHandler @ 00d64b04 */
      *__ptr = (long)(pbVar32 + 3);
      bVar75 = pbVar32[2];
      *__ptr = (long)(pbVar32 + 4);
      *(uint *)(lVar28 + 0xc) = CONCAT31(CONCAT21(CONCAT11(bVar69,bVar73),bVar75),pbVar32[3]);
      uVar27 = readString(__ptr);
      *(undefined8 *)(lVar28 + 0x10) = uVar27;
                    /* try { // try from 00d64648 to 00e64653 has its CatchHandler @ 00d64b34 */
      *(long *)(puVar23[0xb] + lVar33 * 8) = lVar28;
      lVar33 = lVar33 + 1;
                    /* try { // try from 00d64654 to 00e64663 has its CatchHandler @ 00d64b24 */
    } while (lVar33 < *(int *)(puVar23 + 10));
  }
  pbVar32 = (byte *)*__ptr;
  *__ptr = (long)(pbVar32 + 1);
  uVar38 = *pbVar32 & 0x7f;
  uVar41 = (ulong)uVar38;
  if ((char)*pbVar32 < '\0') {
    *__ptr = (long)(pbVar32 + 2);
    uVar38 = uVar38 | (pbVar32[1] & 0x7f) << 7;
    uVar41 = (ulong)uVar38;
    if ((char)pbVar32[1] < '\0') {
                    /* try { // try from 00d6470c to 00e64713 has its CatchHandler @ 00d64b10 */
      *__ptr = (long)(pbVar32 + 3);
                    /* try { // try from 00d64714 to 00e64723 has its CatchHandler @ 00d64b0c */
      uVar38 = uVar38 | (pbVar32[2] & 0x7f) << 0xe;
      uVar41 = (ulong)uVar38;
      if ((char)pbVar32[2] < '\0') {
                    /* try { // try from 00d64724 to 00e64753 has its CatchHandler @ 00d644b4 */
        *__ptr = (long)(pbVar32 + 4);
        uVar38 = uVar38 | (pbVar32[3] & 0x7f) << 0x15;
        uVar41 = (ulong)uVar38;
        if ((char)pbVar32[3] < '\0') {
          *__ptr = (long)(pbVar32 + 5);
          uVar41 = (ulong)(uVar38 | (uint)pbVar32[4] << 0x1c);
        }
      }
    }
  }
                    /* try { // try from 00d64754 to 00e6475f has its CatchHandler @ 00d64bfc */
  *(int *)(puVar23 + 0xc) = (int)uVar41;
  uVar27 = _spMalloc(-(uVar41 >> 0x1f) & 0xfffffff800000000 | uVar41 << 3,
                     "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonBinary.c"
                     ,0x436);
                    /* try { // try from 00d64760 to 00e6476b has its CatchHandler @ 00d64bec */
  puVar23[0xd] = uVar27;
  if (0 < *(int *)(puVar23 + 0xc)) {
                    /* try { // try from 00d6476c to 00e64783 has its CatchHandler @ 00d64c54 */
    fVar66 = 1.0;
    local_d0 = 0;
    do {
      pvVar26 = (void *)readString(__ptr);
      pbVar52 = (byte *)*__ptr;
                    /* try { // try from 00d64788 to 00e6479f has its CatchHandler @ 00d64c50 */
      pbVar32 = pbVar52 + 1;
      *__ptr = (long)pbVar32;
      uVar38 = *pbVar52 & 0x7f;
      if ((char)*pbVar52 < '\0') {
        pbVar32 = pbVar52 + 2;
                    /* try { // try from 00d647a4 to 00e647bb has its CatchHandler @ 00d64c4c */
        *__ptr = (long)pbVar32;
        uVar38 = uVar38 | (pbVar52[1] & 0x7f) << 7;
        if ((char)pbVar52[1] < '\0') {
          pbVar32 = pbVar52 + 3;
          *__ptr = (long)pbVar32;
          uVar38 = uVar38 | (pbVar52[2] & 0x7f) << 0xe;
          if ((char)pbVar52[2] < '\0') {
            pbVar32 = pbVar52 + 4;
            *__ptr = (long)pbVar32;
            uVar38 = uVar38 | (pbVar52[3] & 0x7f) << 0x15;
                    /* try { // try from 00d647d8 to 00e647e3 has its CatchHandler @ 00d64b3c */
            if ((char)pbVar52[3] < '\0') {
              pbVar32 = pbVar52 + 5;
              *__ptr = (long)pbVar32;
              uVar38 = uVar38 | (uint)pbVar52[4] << 0x1c;
            }
          }
        }
      }
      uVar41 = 0;
      pvVar53 = (void *)0x0;
      local_90 = (void *)0x0;
      fVar83 = 0.0;
      iVar68 = 0;
      local_78 = (void *)0x0;
      while( true ) {
        pbVar52 = pbVar32 + 1;
        *__ptr = (long)pbVar52;
        uVar39 = *pbVar32 & 0x7f;
        if ((char)*pbVar32 < '\0') {
          pbVar52 = pbVar32 + 2;
          *__ptr = (long)pbVar52;
          uVar39 = uVar39 | (pbVar32[1] & 0x7f) << 7;
          if ((char)pbVar32[1] < '\0') {
                    /* try { // try from 00d64840 to 00e6484b has its CatchHandler @ 00d64c58 */
            pbVar52 = pbVar32 + 3;
            *__ptr = (long)pbVar52;
            uVar39 = uVar39 | (pbVar32[2] & 0x7f) << 0xe;
            if ((char)pbVar32[2] < '\0') {
              pbVar52 = pbVar32 + 4;
              *__ptr = (long)pbVar52;
              uVar39 = uVar39 | (pbVar32[3] & 0x7f) << 0x15;
              if ((char)pbVar32[3] < '\0') {
                pbVar52 = pbVar32 + 5;
                *__ptr = (long)pbVar52;
                uVar39 = uVar39 | (uint)pbVar32[4] << 0x1c;
              }
            }
          }
        }
        if ((int)uVar38 <= iVar68) break;
        pbVar32 = pbVar52 + 1;
        *__ptr = (long)pbVar32;
        uVar51 = *pbVar52 & 0x7f;
        if ((char)*pbVar52 < '\0') {
          pbVar32 = pbVar52 + 2;
                    /* try { // try from 00d648a4 to 00e648af has its CatchHandler @ 00d64bd8 */
          *__ptr = (long)pbVar32;
          uVar51 = uVar51 | (pbVar52[1] & 0x7f) << 7;
                    /* try { // try from 00d648b0 to 00e648bb has its CatchHandler @ 00d64bd4 */
          if ((char)pbVar52[1] < '\0') {
            pbVar32 = pbVar52 + 3;
            *__ptr = (long)pbVar32;
                    /* try { // try from 00d648bc to 00e648c7 has its CatchHandler @ 00d64ba4 */
            uVar51 = uVar51 | (pbVar52[2] & 0x7f) << 0xe;
            if ((char)pbVar52[2] < '\0') {
                    /* try { // try from 00d648c8 to 00e648df has its CatchHandler @ 00d64b78 */
              pbVar32 = pbVar52 + 4;
              *__ptr = (long)pbVar32;
              uVar51 = uVar51 | (pbVar52[3] & 0x7f) << 0x15;
              if ((char)pbVar52[3] < '\0') {
                pbVar32 = pbVar52 + 5;
                *__ptr = (long)pbVar32;
                uVar51 = uVar51 | (uint)pbVar52[4] << 0x1c;
              }
            }
          }
        }
                    /* try { // try from 00d648f0 to 00e648fb has its CatchHandler @ 00d64b74 */
        if (0 < (int)uVar51) {
          iVar65 = (int)uVar41;
                    /* try { // try from 00d648fc to 00e64907 has its CatchHandler @ 00d64b70 */
          do {
            *__ptr = (long)(pbVar32 + 1);
            bVar69 = *pbVar32;
            *__ptr = (long)(pbVar32 + 2);
                    /* try { // try from 00d6494c to 00e6496f has its CatchHandler @ 00d64c58 */
            uVar56 = pbVar32[1] & 0x7f;
            if ((char)pbVar32[1] < '\0') {
              *__ptr = (long)(pbVar32 + 3);
              uVar56 = uVar56 | (pbVar32[2] & 0x7f) << 7;
              if ((char)pbVar32[2] < '\0') {
                    /* try { // try from 00d64970 to 00e6497b has its CatchHandler @ 00d64be8 */
                *__ptr = (long)(pbVar32 + 4);
                uVar56 = uVar56 | (pbVar32[3] & 0x7f) << 0xe;
                    /* try { // try from 00d6497c to 00e64993 has its CatchHandler @ 00d64c10 */
                if ((char)pbVar32[3] < '\0') {
                  *__ptr = (long)(pbVar32 + 5);
                  uVar56 = uVar56 | (pbVar32[4] & 0x7f) << 0x15;
                  if ((char)pbVar32[4] < '\0') {
                    *__ptr = (long)(pbVar32 + 6);
                    uVar56 = uVar56 | (uint)pbVar32[5] << 0x1c;
                  }
                }
              }
            }
            uVar54 = (long)pvVar53 << 1;
                    /* try { // try from 00d649b0 to 00e649bb has its CatchHandler @ 00d64c0c */
            if (bVar69 == 0) {
              lVar33 = spAttachmentTimeline_create(uVar56);
              iVar58 = uVar56 - 1;
                    /* catch() { ... } // from try @ 00d64618 with catch @ 00d64b04 */
              *(uint *)(lVar33 + 0x20) = uVar39;
                    /* catch() { ... } // from try @ 00d645bc with catch @ 00d64b08 */
              if (0 < (int)uVar56) {
                    /* catch() { ... } // from try @ 00d64714 with catch @ 00d64b0c */
                uVar62 = 0;
                do {
                    /* catch() { ... } // from try @ 00d6470c with catch @ 00d64b10 */
                  puVar40 = (undefined1 *)*__ptr;
                    /* catch() { ... } // from try @ 00d646a8 with catch @ 00d64b14 */
                    /* catch() { ... } // from try @ 00d646a0 with catch @ 00d64b18 */
                    /* catch() { ... } // from try @ 00d64680 with catch @ 00d64b1c */
                    /* catch() { ... } // from try @ 00d64674 with catch @ 00d64b20 */
                  *__ptr = (long)(puVar40 + 1);
                    /* catch() { ... } // from try @ 00d64654 with catch @ 00d64b24 */
                  uVar2 = *puVar40;
                  *__ptr = (long)(puVar40 + 2);
                    /* catch() { ... } // from try @ 00d64648 with catch @ 00d64b34 */
                  uVar3 = puVar40[1];
                    /* catch() { ... } // from try @ 00d6480c with catch @ 00d64b38 */
                  *__ptr = (long)(puVar40 + 3);
                    /* catch() { ... } // from try @ 00d647d8 with catch @ 00d64b3c */
                  uVar4 = puVar40[2];
                    /* catch() { ... } // from try @ 00d64a38 with catch @ 00d64b40 */
                  *__ptr = (long)(puVar40 + 4);
                    /* catch() { ... } // from try @ 00d64a30 with catch @ 00d64b44 */
                  uVar6 = puVar40[3];
                    /* catch() { ... } // from try @ 00d649ec with catch @ 00d64b48 */
                    /* catch() { ... } // from try @ 00d649e0 with catch @ 00d64b58 */
                  pvVar30 = (void *)readString(__ptr);
                    /* catch() { ... } // from try @ 00d64914 with catch @ 00d64b5c */
                    /* catch() { ... } // from try @ 00d64908 with catch @ 00d64b60 */
                    /* catch() { ... } // from try @ 00d648fc with catch @ 00d64b70 */
                  spAttachmentTimeline_setFrame
                            (CONCAT31(CONCAT21(CONCAT11(uVar2,uVar3),uVar4),uVar6),lVar33,uVar62,
                             pvVar30);
                    /* catch() { ... } // from try @ 00d648f0 with catch @ 00d64b74 */
                    /* catch() { ... } // from try @ 00d648c8 with catch @ 00d64b78 */
                  _spFree(pvVar30);
                  uVar62 = uVar62 + 1;
                } while (uVar56 != uVar62);
              }
              if ((void *)uVar41 == pvVar53) {
                uVar60 = 2;
                if (pvVar53 != (void *)0x0) {
                  uVar60 = uVar54;
                }
                    /* catch() { ... } // from try @ 00d648bc with catch @ 00d64ba4 */
                local_90 = (void *)_spMalloc(uVar60 << 3,
                                             "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonBinary.c"
                                             ,0x113);
                if ((pvVar53 != (void *)0x0) && (uVar60 != 0)) {
                  uVar34 = uVar60;
                  if (pvVar53 <= uVar54) {
                    uVar34 = (ulong)pvVar53;
                  }
                    /* catch() { ... } // from try @ 00d648b0 with catch @ 00d64bd4 */
                  memcpy(local_90,local_78,uVar34 << 3);
                }
                    /* catch() { ... } // from try @ 00d648a4 with catch @ 00d64bd8 */
                    /* catch() { ... } // from try @ 00d645e4 with catch @ 00d64bdc */
                _spFree(local_78);
                pvVar53 = (void *)uVar60;
                local_78 = local_90;
                    /* catch() { ... } // from try @ 00d64588 with catch @ 00d64be0 */
                    /* catch() { ... } // from try @ 00d646d0 with catch @ 00d64be4 */
                    /* catch() { ... } // from try @ 00d64970 with catch @ 00d64be8 */
                    /* catch() { ... } // from try @ 00d64760 with catch @ 00d64bec */
              }
              *(long *)((long)local_90 + uVar41 * 8) = lVar33;
              plVar29 = (long *)(lVar33 + 0x18);
            }
            else if (bVar69 == 1) {
              lVar33 = spColorTimeline_create(uVar56);
                    /* catch() { ... } // from try @ 00d64754 with catch @ 00d64bfc */
              *(uint *)(lVar33 + 0x28) = uVar39;
              if (0 < (int)uVar56) {
                    /* catch() { ... } // from try @ 00d649b0 with catch @ 00d64c0c
                       catch() { ... } // from try @ 00d64a64 with catch @ 00d64c0c */
                uVar62 = 0;
                    /* catch() { ... } // from try @ 00d6497c with catch @ 00d64c10 */
                do {
                  puVar40 = (undefined1 *)*__ptr;
                  *__ptr = (long)(puVar40 + 1);
                  uVar2 = *puVar40;
                  *__ptr = (long)(puVar40 + 2);
                    /* catch() { ... } // from try @ 00d647a4 with catch @ 00d64c4c */
                  uVar3 = puVar40[1];
                    /* catch() { ... } // from try @ 00d64788 with catch @ 00d64c50 */
                    /* catch() { ... } // from try @ 00d6476c with catch @ 00d64c54 */
                  *__ptr = (long)(puVar40 + 3);
                    /* catch() { ... } // from try @ 00d64840 with catch @ 00d64c58
                       catch() { ... } // from try @ 00d6494c with catch @ 00d64c58 */
                  uVar4 = puVar40[2];
                  *__ptr = (long)(puVar40 + 4);
                  uVar6 = puVar40[3];
                  *__ptr = (long)(puVar40 + 5);
                  bVar69 = puVar40[4];
                  *__ptr = (long)(puVar40 + 6);
                    /* try { // try from 00d64c78 to 00e64cf3 has its CatchHandler @ 00d64c78
                       catch() { ... } // from try @ 00d64c78 with catch @ 00d64c78
                       catch() { ... } // from try @ 00d64d00 with catch @ 00d64c78
                       catch() { ... } // from try @ 00d64d40 with catch @ 00d64c78
                       catch() { ... } // from try @ 00d64de0 with catch @ 00d64c78
                       catch() { ... } // from try @ 00d64e00 with catch @ 00d64c78 */
                  bVar73 = puVar40[5];
                  *__ptr = (long)(puVar40 + 7);
                  bVar75 = puVar40[6];
                  *__ptr = (long)(puVar40 + 8);
                  fVar70 = (float)NEON_ucvtf((uint)bVar69);
                  fVar74 = (float)NEON_ucvtf((uint)bVar73);
                  fVar76 = (float)NEON_ucvtf((uint)bVar75);
                  fVar78 = (float)NEON_ucvtf((uint)(byte)puVar40[7]);
                  spColorTimeline_setFrame
                            (CONCAT31(CONCAT21(CONCAT11(uVar2,uVar3),uVar4),uVar6),fVar70 / 255.0,
                             fVar74 / 255.0,fVar76 / 255.0,fVar78 / 255.0,lVar33,uVar62);
                  if ((int)uVar62 < (int)(uVar56 - 1)) {
                    FUN_00d66e58(__ptr,lVar33,uVar62);
                  }
                  uVar62 = uVar62 + 1;
                } while (uVar56 != uVar62);
              }
              if ((void *)uVar41 == pvVar53) {
                uVar60 = 2;
                if (pvVar53 != (void *)0x0) {
                  uVar60 = uVar54;
                }
                local_90 = (void *)_spMalloc(uVar60 << 3,
                                             "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonBinary.c"
                                             ,0x121);
                if ((pvVar53 != (void *)0x0) && (uVar60 != 0)) {
                  uVar34 = uVar60;
                  if (pvVar53 <= uVar54) {
                    uVar34 = (ulong)pvVar53;
                  }
                  memcpy(local_90,local_78,uVar34 << 3);
                }
                _spFree(local_78);
                pvVar53 = (void *)uVar60;
                local_78 = local_90;
              }
              *(long *)((long)local_90 + uVar41 * 8) = lVar33;
              plVar29 = (long *)(lVar33 + 0x20);
              iVar58 = uVar56 * 5 + -5;
            }
            else {
              if (bVar69 != 2) {
                if (uVar41 != 0) {
                  uVar54 = 0;
                  do {
                    spTimeline_dispose(*(undefined8 *)((long)local_90 + uVar54 * 8));
                    uVar54 = uVar54 + 1;
                  } while (uVar41 != uVar54);
                }
                _spFree(local_78);
                lVar33 = puVar23[6];
                pcVar24 = "Invalid timeline type for a slot: ";
                uVar38 = uVar39;
LAB_00d66d34:
                _spSkeletonBinary_setError
                          (param_1,pcVar24,
                           *(undefined8 *)(*(long *)(lVar33 + (long)(int)uVar38 * 8) + 8));
LAB_00d66d44:
                    /* catch() { ... } // from try @ 00d66cc0 with catch @ 00d66d44 */
                _spFree(pvVar26);
                goto LAB_00d66d4c;
              }
              lVar33 = spTwoColorTimeline_create(uVar56);
              *(uint *)(lVar33 + 0x28) = uVar39;
              if (0 < (int)uVar56) {
                    /* try { // try from 00d649e0 to 00e649eb has its CatchHandler @ 00d64b58 */
                uVar62 = 0;
                do {
                  puVar40 = (undefined1 *)*__ptr;
                  *__ptr = (long)(puVar40 + 1);
                  uVar2 = *puVar40;
                  *__ptr = (long)(puVar40 + 2);
                  uVar3 = puVar40[1];
                  *__ptr = (long)(puVar40 + 3);
                  uVar4 = puVar40[2];
                    /* try { // try from 00d64a30 to 00e64a37 has its CatchHandler @ 00d64b44 */
                  *__ptr = (long)(puVar40 + 4);
                  uVar6 = puVar40[3];
                    /* try { // try from 00d64a38 to 00e64a47 has its CatchHandler @ 00d64b40 */
                  *__ptr = (long)(puVar40 + 5);
                  bVar69 = puVar40[4];
                  *__ptr = (long)(puVar40 + 6);
                  bVar73 = puVar40[5];
                  *__ptr = (long)(puVar40 + 7);
                  bVar75 = puVar40[6];
                  *__ptr = (long)(puVar40 + 8);
                    /* try { // try from 00d64a64 to 00e64a6f has its CatchHandler @ 00d64c0c */
                  bVar77 = puVar40[7];
                  *__ptr = (long)(puVar40 + 10);
                    /* try { // try from 00d64a70 to 00e64c77 has its CatchHandler @ 00d644b4 */
                  bVar79 = puVar40[9];
                  *__ptr = (long)(puVar40 + 0xb);
                  bVar81 = puVar40[10];
                  *__ptr = (long)(puVar40 + 0xc);
                  fVar70 = (float)NEON_ucvtf((uint)bVar69);
                  fVar74 = (float)NEON_ucvtf((uint)bVar73);
                  fVar76 = (float)NEON_ucvtf((uint)bVar75);
                  fVar78 = (float)NEON_ucvtf((uint)bVar77);
                  fVar80 = (float)NEON_ucvtf((uint)bVar79);
                  fVar82 = (float)NEON_ucvtf((uint)bVar81);
                  fVar84 = (float)NEON_ucvtf((uint)(byte)puVar40[0xb]);
                  spTwoColorTimeline_setFrame
                            (CONCAT31(CONCAT21(CONCAT11(uVar2,uVar3),uVar4),uVar6),fVar70 / 255.0,
                             fVar74 / 255.0,fVar76 / 255.0,fVar78 / 255.0,fVar80 / 255.0,
                             fVar82 / 255.0,fVar84 / 255.0,lVar33,uVar62);
                  if ((int)uVar62 < (int)(uVar56 - 1)) {
                    FUN_00d66e58(__ptr,lVar33,uVar62);
                  }
                  uVar62 = uVar62 + 1;
                    /* try { // try from 00d649ec to 00e649fb has its CatchHandler @ 00d64b48 */
                } while (uVar56 != uVar62);
              }
              if ((void *)uVar41 == pvVar53) {
                    /* try { // try from 00d64cf4 to 00e64cff has its CatchHandler @ 00d64fb4 */
                uVar60 = 2;
                if (pvVar53 != (void *)0x0) {
                  uVar60 = uVar54;
                }
                    /* try { // try from 00d64d00 to 00e64d33 has its CatchHandler @ 00d64c78 */
                local_90 = (void *)_spMalloc(uVar60 << 3,
                                             "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonBinary.c"
                                             ,0x131);
                if ((pvVar53 != (void *)0x0) && (uVar60 != 0)) {
                  uVar34 = uVar60;
                  if (pvVar53 <= uVar54) {
                    uVar34 = (ulong)pvVar53;
                  }
                  memcpy(local_90,local_78,uVar34 << 3);
                }
                    /* try { // try from 00d64d34 to 00e64d3f has its CatchHandler @ 00d64fb8 */
                _spFree(local_78);
                pvVar53 = (void *)uVar60;
                local_78 = local_90;
                    /* try { // try from 00d64d40 to 00e64dd3 has its CatchHandler @ 00d64c78 */
              }
                    /* try { // try from 00d64908 to 00e64913 has its CatchHandler @ 00d64b60 */
              plVar29 = (long *)(lVar33 + 0x20);
              iVar58 = uVar56 * 8 + -8;
              *(long *)((long)local_90 + uVar41 * 8) = lVar33;
            }
                    /* try { // try from 00d64914 to 00e6492b has its CatchHandler @ 00d64b5c */
            pbVar32 = (byte *)*__ptr;
            uVar41 = uVar41 + 1;
            fVar70 = *(float *)(*plVar29 + (long)iVar58 * 4);
            if (fVar83 <= fVar70) {
              fVar83 = fVar70;
            }
          } while (uVar51 + iVar65 != (int)uVar41);
        }
                    /* try { // try from 00d6480c to 00e64817 has its CatchHandler @ 00d64b38 */
        iVar68 = iVar68 + 1;
      }
                    /* try { // try from 00d64dd4 to 00e64ddf has its CatchHandler @ 00d64fac */
      iVar68 = 0;
      while( true ) {
        pbVar32 = pbVar52 + 1;
        *__ptr = (long)pbVar32;
        uVar38 = *pbVar52 & 0x7f;
                    /* try { // try from 00d64df4 to 00e64dff has its CatchHandler @ 00d64fb0 */
        if ((char)*pbVar52 < '\0') {
          pbVar32 = pbVar52 + 2;
          *__ptr = (long)pbVar32;
                    /* try { // try from 00d64e00 to 00e64fd3 has its CatchHandler @ 00d64c78 */
          uVar38 = uVar38 | (pbVar52[1] & 0x7f) << 7;
          if ((char)pbVar52[1] < '\0') {
            pbVar32 = pbVar52 + 3;
            *__ptr = (long)pbVar32;
            uVar38 = uVar38 | (pbVar52[2] & 0x7f) << 0xe;
            if ((char)pbVar52[2] < '\0') {
              pbVar32 = pbVar52 + 4;
              *__ptr = (long)pbVar32;
              uVar38 = uVar38 | (pbVar52[3] & 0x7f) << 0x15;
              if ((char)pbVar52[3] < '\0') {
                pbVar32 = pbVar52 + 5;
                *__ptr = (long)pbVar32;
                uVar38 = uVar38 | (uint)pbVar52[4] << 0x1c;
              }
            }
          }
        }
        if ((int)uVar39 <= iVar68) break;
        pbVar52 = pbVar32 + 1;
        *__ptr = (long)pbVar52;
        uVar51 = *pbVar32 & 0x7f;
        if ((char)*pbVar32 < '\0') {
          pbVar52 = pbVar32 + 2;
          *__ptr = (long)pbVar52;
          uVar51 = uVar51 | (pbVar32[1] & 0x7f) << 7;
          if ((char)pbVar32[1] < '\0') {
            pbVar52 = pbVar32 + 3;
            *__ptr = (long)pbVar52;
            uVar51 = uVar51 | (pbVar32[2] & 0x7f) << 0xe;
            if ((char)pbVar32[2] < '\0') {
              pbVar52 = pbVar32 + 4;
              *__ptr = (long)pbVar52;
              uVar51 = uVar51 | (pbVar32[3] & 0x7f) << 0x15;
              if ((char)pbVar32[3] < '\0') {
                pbVar52 = pbVar32 + 5;
                *__ptr = (long)pbVar52;
                uVar51 = uVar51 | (uint)pbVar32[4] << 0x1c;
              }
            }
          }
        }
        if (0 < (int)uVar51) {
          uVar56 = 0;
          do {
            *__ptr = (long)(pbVar52 + 1);
            bVar69 = *pbVar52;
            *__ptr = (long)(pbVar52 + 2);
            uVar62 = pbVar52[1] & 0x7f;
            if ((char)pbVar52[1] < '\0') {
              *__ptr = (long)(pbVar52 + 3);
              uVar62 = uVar62 | (pbVar52[2] & 0x7f) << 7;
              if ((char)pbVar52[2] < '\0') {
                *__ptr = (long)(pbVar52 + 4);
                uVar62 = uVar62 | (pbVar52[3] & 0x7f) << 0xe;
                if ((char)pbVar52[3] < '\0') {
                  *__ptr = (long)(pbVar52 + 5);
                  uVar62 = uVar62 | (pbVar52[4] & 0x7f) << 0x15;
                  if ((char)pbVar52[4] < '\0') {
                    *__ptr = (long)(pbVar52 + 6);
                    uVar62 = uVar62 | (uint)pbVar52[5] << 0x1c;
                  }
                }
              }
            }
            if (3 < bVar69) {
              if (uVar41 != 0) {
                uVar54 = 0;
                do {
                  spTimeline_dispose(*(undefined8 *)((long)local_90 + uVar54 * 8));
                    /* try { // try from 00d66de8 to 00e66deb has its CatchHandler @ 00d66f58 */
                  uVar54 = uVar54 + 1;
                    /* try { // try from 00d66df0 to 00e66dff has its CatchHandler @ 00d66f20 */
                } while (uVar41 != uVar54);
              }
              _spFree(local_78);
              lVar33 = puVar23[4];
                    /* try { // try from 00d66e00 to 00e66e13 has its CatchHandler @ 00d66f1c */
              pcVar24 = "Invalid timeline type for a bone: ";
              goto LAB_00d66d34;
            }
            uVar54 = (long)pvVar53 << 1;
            fVar70 = fVar66;
            switch(bVar69) {
            case 0:
                    /* catch() { ... } // from try @ 00d64dd4 with catch @ 00d64fac */
              lVar33 = spRotateTimeline_create(uVar62);
                    /* catch() { ... } // from try @ 00d64df4 with catch @ 00d64fb0 */
                    /* catch() { ... } // from try @ 00d64cf4 with catch @ 00d64fb4 */
                    /* catch() { ... } // from try @ 00d64d34 with catch @ 00d64fb8 */
              *(uint *)(lVar33 + 0x28) = uVar38;
              if (0 < (int)uVar62) {
                uVar63 = 0;
                do {
                  puVar40 = (undefined1 *)*__ptr;
                  *__ptr = (long)(puVar40 + 1);
                  uVar2 = *puVar40;
                  *__ptr = (long)(puVar40 + 2);
                  uVar3 = puVar40[1];
                  *__ptr = (long)(puVar40 + 3);
                  uVar4 = puVar40[2];
                  *__ptr = (long)(puVar40 + 4);
                  uVar6 = puVar40[3];
                  *__ptr = (long)(puVar40 + 5);
                  uVar7 = puVar40[4];
                  *__ptr = (long)(puVar40 + 6);
                  uVar8 = puVar40[5];
                  *__ptr = (long)(puVar40 + 7);
                    /* try { // try from 00d6503c to 00e65053 has its CatchHandler @ 00d651c0 */
                  uVar9 = puVar40[6];
                  *__ptr = (long)(puVar40 + 8);
                  spRotateTimeline_setFrame
                            (CONCAT31(CONCAT21(CONCAT11(uVar2,uVar3),uVar4),uVar6),
                             CONCAT31(CONCAT21(CONCAT11(uVar7,uVar8),uVar9),puVar40[7]),lVar33,
                             uVar63);
                  if ((int)uVar63 < (int)(uVar62 - 1)) {
                    /* try { // try from 00d65070 to 00e6507b has its CatchHandler @ 00d651c4 */
                    FUN_00d66e58(__ptr,lVar33,uVar63);
                  }
                  uVar63 = uVar63 + 1;
                    /* try { // try from 00d64fd4 to 00e6503b has its CatchHandler @ 00d64fd4
                       catch() { ... } // from try @ 00d64fd4 with catch @ 00d64fd4
                       catch() { ... } // from try @ 00d65148 with catch @ 00d64fd4 */
                } while (uVar62 != uVar63);
              }
              if ((void *)uVar41 == pvVar53) {
                    /* try { // try from 00d65250 to 00e6525b has its CatchHandler @ 00d65360 */
                uVar60 = 2;
                if (pvVar53 != (void *)0x0) {
                  uVar60 = uVar54;
                }
                    /* try { // try from 00d6526c to 00e65273 has its CatchHandler @ 00d6535c */
                local_90 = (void *)_spMalloc(uVar60 << 3,
                                             "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonBinary.c"
                                             ,0x150);
                    /* try { // try from 00d65274 to 00e6527f has its CatchHandler @ 00d6532c */
                if ((pvVar53 != (void *)0x0) && (uVar60 != 0)) {
                  uVar34 = uVar60;
                  if (pvVar53 <= uVar54) {
                    uVar34 = (ulong)pvVar53;
                  }
                    /* try { // try from 00d65290 to 00e652ab has its CatchHandler @ 00d65368 */
                  memcpy(local_90,local_78,uVar34 << 3);
                }
                _spFree(local_78);
                pvVar53 = (void *)uVar60;
                local_78 = local_90;
              }
                    /* try { // try from 00d652b4 to 00e652bf has its CatchHandler @ 00d65324 */
              iVar65 = uVar62 * 2 + -2;
              *(long *)((long)local_90 + uVar41 * 8) = lVar33;
              goto LAB_00d64edc;
            case 1:
              lVar33 = spTranslateTimeline_create(uVar62);
                    /* try { // try from 00d65098 to 00e650a3 has its CatchHandler @ 00d651bc */
              fVar70 = *param_1;
              break;
            case 2:
                    /* try { // try from 00d650a4 to 00e650b3 has its CatchHandler @ 00d6518c */
              lVar33 = spScaleTimeline_create(uVar62);
              break;
            case 3:
              lVar33 = spShearTimeline_create(uVar62);
            }
                    /* try { // try from 00d650c8 to 00e650d7 has its CatchHandler @ 00d65184 */
            *(uint *)(lVar33 + 0x28) = uVar38;
            if (0 < (int)uVar62) {
              uVar63 = 0;
              do {
                    /* try { // try from 00d650e8 to 00e65147 has its CatchHandler @ 00d651c4 */
                puVar40 = (undefined1 *)*__ptr;
                *__ptr = (long)(puVar40 + 1);
                uVar2 = *puVar40;
                *__ptr = (long)(puVar40 + 2);
                uVar3 = puVar40[1];
                *__ptr = (long)(puVar40 + 3);
                uVar4 = puVar40[2];
                *__ptr = (long)(puVar40 + 4);
                uVar6 = puVar40[3];
                *__ptr = (long)(puVar40 + 5);
                uVar7 = puVar40[4];
                *__ptr = (long)(puVar40 + 6);
                    /* try { // try from 00d65148 to 00e651df has its CatchHandler @ 00d64fd4 */
                uVar8 = puVar40[5];
                *__ptr = (long)(puVar40 + 7);
                uVar9 = puVar40[6];
                *__ptr = (long)(puVar40 + 8);
                uVar10 = puVar40[7];
                *__ptr = (long)(puVar40 + 9);
                uVar11 = puVar40[8];
                *__ptr = (long)(puVar40 + 10);
                uVar12 = puVar40[9];
                    /* catch() { ... } // from try @ 00d650c8 with catch @ 00d65184 */
                *__ptr = (long)(puVar40 + 0xb);
                    /* catch() { ... } // from try @ 00d650c0 with catch @ 00d65188 */
                    /* catch() { ... } // from try @ 00d650a4 with catch @ 00d6518c */
                uVar13 = puVar40[10];
                *__ptr = (long)(puVar40 + 0xc);
                    /* catch() { ... } // from try @ 00d65098 with catch @ 00d651bc */
                spTranslateTimeline_setFrame
                          (CONCAT31(CONCAT21(CONCAT11(uVar2,uVar3),uVar4),uVar6),
                           fVar70 * (float)CONCAT31(CONCAT21(CONCAT11(uVar7,uVar8),uVar9),uVar10),
                           fVar70 * (float)CONCAT31(CONCAT21(CONCAT11(uVar11,uVar12),uVar13),
                                                    puVar40[0xb]),lVar33,uVar63);
                    /* catch() { ... } // from try @ 00d6503c with catch @ 00d651c0 */
                    /* catch() { ... } // from try @ 00d65070 with catch @ 00d651c4
                       catch() { ... } // from try @ 00d650e8 with catch @ 00d651c4 */
                if ((int)uVar63 < (int)(uVar62 - 1)) {
                  FUN_00d66e58(__ptr,lVar33,uVar63);
                }
                uVar63 = uVar63 + 1;
              } while (uVar62 != uVar63);
            }
                    /* try { // try from 00d651e0 to 00e6522b has its CatchHandler @ 00d651e0
                       catch() { ... } // from try @ 00d651e0 with catch @ 00d651e0
                       catch() { ... } // from try @ 00d652e8 with catch @ 00d651e0 */
            if ((void *)uVar41 == pvVar53) {
              uVar60 = 2;
              if (pvVar53 != (void *)0x0) {
                uVar60 = uVar54;
              }
              local_90 = (void *)_spMalloc(uVar60 << 3,
                                           "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonBinary.c"
                                           ,0x16f);
              if ((pvVar53 != (void *)0x0) && (uVar60 != 0)) {
                uVar34 = uVar60;
                if (pvVar53 <= uVar54) {
                  uVar34 = (ulong)pvVar53;
                }
                    /* try { // try from 00d6522c to 00e65243 has its CatchHandler @ 00d65364 */
                memcpy(local_90,local_78,uVar34 << 3);
              }
              _spFree(local_78);
              pvVar53 = (void *)uVar60;
              local_78 = local_90;
            }
            *(long *)((long)local_90 + uVar41 * 8) = lVar33;
            iVar65 = uVar62 * 3 + -3;
LAB_00d64edc:
            uVar56 = uVar56 + 1;
            fVar70 = *(float *)(*(long *)(lVar33 + 0x20) + (long)iVar65 * 4);
            pbVar52 = (byte *)*__ptr;
            uVar41 = uVar41 + 1;
            if (fVar83 <= fVar70) {
              fVar83 = fVar70;
            }
          } while (uVar56 != uVar51);
        }
                    /* try { // try from 00d64de0 to 00e64df3 has its CatchHandler @ 00d64c78 */
        iVar68 = iVar68 + 1;
      }
      iVar68 = 0;
      while( true ) {
        pbVar52 = pbVar32 + 1;
        *__ptr = (long)pbVar52;
        uVar39 = *pbVar32 & 0x7f;
        if ((char)*pbVar32 < '\0') {
          pbVar52 = pbVar32 + 2;
          *__ptr = (long)pbVar52;
                    /* catch() { ... } // from try @ 00d652b4 with catch @ 00d65324 */
          uVar39 = uVar39 | (pbVar32[1] & 0x7f) << 7;
                    /* catch() { ... } // from try @ 00d652ac with catch @ 00d65328 */
          if ((char)pbVar32[1] < '\0') {
                    /* catch() { ... } // from try @ 00d65274 with catch @ 00d6532c */
            pbVar52 = pbVar32 + 3;
            *__ptr = (long)pbVar52;
            uVar39 = uVar39 | (pbVar32[2] & 0x7f) << 0xe;
            if ((char)pbVar32[2] < '\0') {
              pbVar52 = pbVar32 + 4;
              *__ptr = (long)pbVar52;
              uVar39 = uVar39 | (pbVar32[3] & 0x7f) << 0x15;
              if ((char)pbVar32[3] < '\0') {
                pbVar52 = pbVar32 + 5;
                *__ptr = (long)pbVar52;
                    /* catch() { ... } // from try @ 00d6526c with catch @ 00d6535c */
                    /* catch() { ... } // from try @ 00d65250 with catch @ 00d65360 */
                uVar39 = uVar39 | (uint)pbVar32[4] << 0x1c;
              }
            }
          }
        }
                    /* catch() { ... } // from try @ 00d6522c with catch @ 00d65364 */
                    /* catch() { ... } // from try @ 00d65290 with catch @ 00d65368
                       catch() { ... } // from try @ 00d652d8 with catch @ 00d65368 */
        if ((int)uVar38 <= iVar68) break;
        *__ptr = (long)(pbVar52 + 1);
        uVar51 = *pbVar52 & 0x7f;
        if ((char)*pbVar52 < '\0') {
          *__ptr = (long)(pbVar52 + 2);
          uVar51 = uVar51 | (pbVar52[1] & 0x7f) << 7;
          if ((char)pbVar52[1] < '\0') {
                    /* try { // try from 00d653a0 to 00e65473 has its CatchHandler @ 00d653a0
                       catch() { ... } // from try @ 00d653a0 with catch @ 00d653a0
                       catch() { ... } // from try @ 00d6548c with catch @ 00d653a0
                       catch() { ... } // from try @ 00d65510 with catch @ 00d653a0
                       catch() { ... } // from try @ 00d65568 with catch @ 00d653a0 */
            *__ptr = (long)(pbVar52 + 3);
            uVar51 = uVar51 | (pbVar52[2] & 0x7f) << 0xe;
            if ((char)pbVar52[2] < '\0') {
              *__ptr = (long)(pbVar52 + 4);
              uVar51 = uVar51 | (pbVar52[3] & 0x7f) << 0x15;
              if ((char)pbVar52[3] < '\0') {
                *__ptr = (long)(pbVar52 + 5);
                uVar51 = uVar51 | (uint)pbVar52[4] << 0x1c;
              }
            }
          }
        }
        lVar33 = spIkConstraintTimeline_create(uVar51);
        *(uint *)(lVar33 + 0x28) = uVar39;
        if (0 < (int)uVar51) {
          uVar39 = 0;
          do {
            puVar40 = (undefined1 *)*__ptr;
            *__ptr = (long)(puVar40 + 1);
            uVar2 = *puVar40;
            *__ptr = (long)(puVar40 + 2);
            uVar3 = puVar40[1];
            *__ptr = (long)(puVar40 + 3);
            uVar4 = puVar40[2];
            *__ptr = (long)(puVar40 + 4);
            uVar6 = puVar40[3];
            *__ptr = (long)(puVar40 + 5);
            uVar7 = puVar40[4];
            *__ptr = (long)(puVar40 + 6);
            uVar8 = puVar40[5];
            *__ptr = (long)(puVar40 + 7);
            uVar9 = puVar40[6];
                    /* try { // try from 00d65474 to 00e6548b has its CatchHandler @ 00d656a0 */
            *__ptr = (long)(puVar40 + 8);
            uVar10 = puVar40[7];
            *__ptr = (long)(puVar40 + 9);
                    /* try { // try from 00d6548c to 00e65507 has its CatchHandler @ 00d653a0 */
            spIkConstraintTimeline_setFrame
                      (CONCAT31(CONCAT21(CONCAT11(uVar2,uVar3),uVar4),uVar6),
                       CONCAT31(CONCAT21(CONCAT11(uVar7,uVar8),uVar9),uVar10),lVar33,uVar39,
                       (long)(char)puVar40[8]);
            if ((int)uVar39 < (int)(uVar51 - 1)) {
              FUN_00d66e58(__ptr,lVar33,uVar39);
            }
            uVar39 = uVar39 + 1;
          } while (uVar51 != uVar39);
        }
        if ((void *)uVar41 == pvVar53) {
          pvVar53 = (void *)2;
          if (uVar41 != 0) {
            pvVar53 = (void *)(uVar41 << 1);
          }
          local_90 = (void *)_spMalloc((long)pvVar53 << 3,
                                       "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonBinary.c"
                                       ,0x18b);
          if ((uVar41 != 0) && (pvVar53 != (void *)0x0)) {
            uVar54 = (ulong)pvVar53;
            if (uVar41 <= uVar41 << 1) {
              uVar54 = uVar41;
            }
                    /* try { // try from 00d65508 to 00e6550f has its CatchHandler @ 00d65684 */
            memcpy(local_90,local_78,uVar54 << 3);
          }
                    /* try { // try from 00d65510 to 00e6555f has its CatchHandler @ 00d653a0 */
          _spFree(local_78);
          local_78 = local_90;
        }
                    /* try { // try from 00d652d8 to 00e652e7 has its CatchHandler @ 00d65368 */
        *(long *)((long)local_90 + uVar41 * 8) = lVar33;
                    /* try { // try from 00d652e8 to 00e65383 has its CatchHandler @ 00d651e0 */
        fVar70 = *(float *)(*(long *)(lVar33 + 0x20) + (long)(int)(uVar51 * 3 + -3) * 4);
        pbVar32 = (byte *)*__ptr;
        uVar41 = uVar41 + 1;
        iVar68 = iVar68 + 1;
        if (fVar83 <= fVar70) {
          fVar83 = fVar70;
        }
      }
      iVar68 = 0;
      while( true ) {
        pbVar32 = pbVar52 + 1;
        *__ptr = (long)pbVar32;
                    /* try { // try from 00d65560 to 00e65567 has its CatchHandler @ 00d65680 */
        uVar38 = *pbVar52 & 0x7f;
                    /* try { // try from 00d65568 to 00e656c3 has its CatchHandler @ 00d653a0 */
        if ((char)*pbVar52 < '\0') {
          pbVar32 = pbVar52 + 2;
          *__ptr = (long)pbVar32;
          uVar38 = uVar38 | (pbVar52[1] & 0x7f) << 7;
          if ((char)pbVar52[1] < '\0') {
            pbVar32 = pbVar52 + 3;
            *__ptr = (long)pbVar32;
            uVar38 = uVar38 | (pbVar52[2] & 0x7f) << 0xe;
            if ((char)pbVar52[2] < '\0') {
              pbVar32 = pbVar52 + 4;
              *__ptr = (long)pbVar32;
              uVar38 = uVar38 | (pbVar52[3] & 0x7f) << 0x15;
              if ((char)pbVar52[3] < '\0') {
                pbVar32 = pbVar52 + 5;
                *__ptr = (long)pbVar32;
                uVar38 = uVar38 | (uint)pbVar52[4] << 0x1c;
              }
            }
          }
        }
        if ((int)uVar39 <= iVar68) break;
        *__ptr = (long)(pbVar32 + 1);
        uVar51 = *pbVar32 & 0x7f;
        if ((char)*pbVar32 < '\0') {
          *__ptr = (long)(pbVar32 + 2);
          uVar51 = uVar51 | (pbVar32[1] & 0x7f) << 7;
          if ((char)pbVar32[1] < '\0') {
            *__ptr = (long)(pbVar32 + 3);
            uVar51 = uVar51 | (pbVar32[2] & 0x7f) << 0xe;
            if ((char)pbVar32[2] < '\0') {
              *__ptr = (long)(pbVar32 + 4);
              uVar51 = uVar51 | (pbVar32[3] & 0x7f) << 0x15;
              if ((char)pbVar32[3] < '\0') {
                *__ptr = (long)(pbVar32 + 5);
                uVar51 = uVar51 | (uint)pbVar32[4] << 0x1c;
              }
            }
          }
        }
        lVar33 = spTransformConstraintTimeline_create(uVar51);
        *(uint *)(lVar33 + 0x28) = uVar38;
        if (0 < (int)uVar51) {
          uVar38 = 0;
          do {
            puVar40 = (undefined1 *)*__ptr;
            *__ptr = (long)(puVar40 + 1);
            uVar2 = *puVar40;
            *__ptr = (long)(puVar40 + 2);
                    /* catch() { ... } // from try @ 00d65560 with catch @ 00d65680 */
                    /* catch() { ... } // from try @ 00d65508 with catch @ 00d65684 */
            uVar3 = puVar40[1];
            *__ptr = (long)(puVar40 + 3);
            uVar4 = puVar40[2];
            *__ptr = (long)(puVar40 + 4);
            uVar6 = puVar40[3];
                    /* catch() { ... } // from try @ 00d65474 with catch @ 00d656a0 */
            *__ptr = (long)(puVar40 + 5);
            uVar7 = puVar40[4];
            *__ptr = (long)(puVar40 + 6);
            uVar8 = puVar40[5];
            *__ptr = (long)(puVar40 + 7);
                    /* try { // try from 00d656c4 to 00e657d3 has its CatchHandler @ 00d656c4
                       catch() { ... } // from try @ 00d656c4 with catch @ 00d656c4
                       catch() { ... } // from try @ 00d65a60 with catch @ 00d656c4
                       catch() { ... } // from try @ 00d65b44 with catch @ 00d656c4 */
            uVar9 = puVar40[6];
            *__ptr = (long)(puVar40 + 8);
            uVar10 = puVar40[7];
            *__ptr = (long)(puVar40 + 9);
            uVar11 = puVar40[8];
            *__ptr = (long)(puVar40 + 10);
            uVar12 = puVar40[9];
            *__ptr = (long)(puVar40 + 0xb);
            uVar13 = puVar40[10];
            *__ptr = (long)(puVar40 + 0xc);
            uVar14 = puVar40[0xb];
            *__ptr = (long)(puVar40 + 0xd);
            uVar15 = puVar40[0xc];
            *__ptr = (long)(puVar40 + 0xe);
            uVar16 = puVar40[0xd];
            *__ptr = (long)(puVar40 + 0xf);
            uVar17 = puVar40[0xe];
            *__ptr = (long)(puVar40 + 0x10);
            uVar18 = puVar40[0xf];
            *__ptr = (long)(puVar40 + 0x11);
            uVar19 = puVar40[0x10];
            *__ptr = (long)(puVar40 + 0x12);
            uVar20 = puVar40[0x11];
            *__ptr = (long)(puVar40 + 0x13);
            uVar21 = puVar40[0x12];
            *__ptr = (long)(puVar40 + 0x14);
            spTransformConstraintTimeline_setFrame
                      (CONCAT31(CONCAT21(CONCAT11(uVar2,uVar3),uVar4),uVar6),
                       CONCAT31(CONCAT21(CONCAT11(uVar7,uVar8),uVar9),uVar10),
                       CONCAT31(CONCAT21(CONCAT11(uVar11,uVar12),uVar13),uVar14),
                       CONCAT31(CONCAT21(CONCAT11(uVar15,uVar16),uVar17),uVar18),
                       CONCAT31(CONCAT21(CONCAT11(uVar19,uVar20),uVar21),puVar40[0x13]),lVar33,
                       uVar38);
            if ((int)uVar38 < (int)(uVar51 - 1)) {
              FUN_00d66e58(__ptr,lVar33,uVar38);
            }
            uVar38 = uVar38 + 1;
          } while (uVar51 != uVar38);
        }
                    /* try { // try from 00d657d4 to 00e657db has its CatchHandler @ 00d65bd0 */
        if ((void *)uVar41 == pvVar53) {
          pvVar53 = (void *)2;
          if (uVar41 != 0) {
            pvVar53 = (void *)(uVar41 << 1);
          }
          local_90 = (void *)_spMalloc((long)pvVar53 << 3,
                                       "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonBinary.c"
                                       ,0x19f);
                    /* try { // try from 00d65804 to 00e6583f has its CatchHandler @ 00d65bec */
          if ((uVar41 != 0) && (pvVar53 != (void *)0x0)) {
            uVar54 = (ulong)pvVar53;
            if (uVar41 <= uVar41 << 1) {
              uVar54 = uVar41;
            }
            memcpy(local_90,local_78,uVar54 << 3);
          }
          _spFree(local_78);
          local_78 = local_90;
        }
        *(long *)((long)local_90 + uVar41 * 8) = lVar33;
        fVar70 = *(float *)(*(long *)(lVar33 + 0x20) + (long)(int)(uVar51 * 5 + -5) * 4);
        pbVar52 = (byte *)*__ptr;
        uVar41 = uVar41 + 1;
        iVar68 = iVar68 + 1;
        if (fVar83 <= fVar70) {
          fVar83 = fVar70;
        }
      }
      iVar68 = 0;
      while( true ) {
        pbVar52 = pbVar32 + 1;
        *__ptr = (long)pbVar52;
        uVar39 = *pbVar32 & 0x7f;
        if ((char)*pbVar32 < '\0') {
          pbVar52 = pbVar32 + 2;
          *__ptr = (long)pbVar52;
          uVar39 = uVar39 | (pbVar32[1] & 0x7f) << 7;
          if ((char)pbVar32[1] < '\0') {
            pbVar52 = pbVar32 + 3;
            *__ptr = (long)pbVar52;
                    /* try { // try from 00d65878 to 00e65887 has its CatchHandler @ 00d65bdc */
            uVar39 = uVar39 | (pbVar32[2] & 0x7f) << 0xe;
            if ((char)pbVar32[2] < '\0') {
              pbVar52 = pbVar32 + 4;
              *__ptr = (long)pbVar52;
              uVar39 = uVar39 | (pbVar32[3] & 0x7f) << 0x15;
              if ((char)pbVar32[3] < '\0') {
                pbVar52 = pbVar32 + 5;
                *__ptr = (long)pbVar52;
                uVar39 = uVar39 | (uint)pbVar32[4] << 0x1c;
              }
            }
          }
        }
        if ((int)uVar38 <= iVar68) break;
        pbVar32 = pbVar52 + 1;
        lVar33 = *(long *)(puVar23[0x13] + (long)(int)uVar39 * 8);
        *__ptr = (long)pbVar32;
        uVar51 = *pbVar52 & 0x7f;
        if ((char)*pbVar52 < '\0') {
          pbVar32 = pbVar52 + 2;
          *__ptr = (long)pbVar32;
          uVar51 = uVar51 | (pbVar52[1] & 0x7f) << 7;
          if ((char)pbVar52[1] < '\0') {
            pbVar32 = pbVar52 + 3;
            *__ptr = (long)pbVar32;
                    /* try { // try from 00d658f0 to 00e658f7 has its CatchHandler @ 00d65b98 */
            uVar51 = uVar51 | (pbVar52[2] & 0x7f) << 0xe;
            if ((char)pbVar52[2] < '\0') {
              pbVar32 = pbVar52 + 4;
                    /* try { // try from 00d65900 to 00e6591f has its CatchHandler @ 00d65bcc */
              *__ptr = (long)pbVar32;
              uVar51 = uVar51 | (pbVar52[3] & 0x7f) << 0x15;
              if ((char)pbVar52[3] < '\0') {
                pbVar32 = pbVar52 + 5;
                *__ptr = (long)pbVar32;
                uVar51 = uVar51 | (uint)pbVar52[4] << 0x1c;
              }
            }
          }
        }
        if (0 < (int)uVar51) {
          uVar56 = 0;
          do {
            *__ptr = (long)(pbVar32 + 1);
            bVar69 = *pbVar32;
            *__ptr = (long)(pbVar32 + 2);
            uVar62 = pbVar32[1] & 0x7f;
            if ((char)pbVar32[1] < '\0') {
              *__ptr = (long)(pbVar32 + 3);
                    /* try { // try from 00d659a0 to 00e659a7 has its CatchHandler @ 00d65b94 */
              uVar62 = uVar62 | (pbVar32[2] & 0x7f) << 7;
              if ((char)pbVar32[2] < '\0') {
                *__ptr = (long)(pbVar32 + 4);
                    /* try { // try from 00d659b0 to 00e659bf has its CatchHandler @ 00d65bd4 */
                uVar62 = uVar62 | (pbVar32[3] & 0x7f) << 0xe;
                if ((char)pbVar32[3] < '\0') {
                    /* try { // try from 00d659c0 to 00e65a0b has its CatchHandler @ 00d65bd8 */
                  *__ptr = (long)(pbVar32 + 5);
                  uVar62 = uVar62 | (pbVar32[4] & 0x7f) << 0x15;
                  if ((char)pbVar32[4] < '\0') {
                    *__ptr = (long)(pbVar32 + 6);
                    uVar62 = uVar62 | (uint)pbVar32[5] << 0x1c;
                  }
                }
              }
            }
            uVar54 = (long)pvVar53 << 1;
            if (bVar69 == 0) {
                    /* try { // try from 00d65a3c to 00e65a5f has its CatchHandler @ 00d65bc8 */
              lVar28 = spPathConstraintPositionTimeline_create(uVar62);
              if (*(int *)(lVar33 + 0x20) == 0) {
LAB_00d65bf0:
                fVar70 = *param_1;
              }
              else {
                fVar70 = 1.0;
              }
LAB_00d65bf8:
              *(uint *)(lVar28 + 0x28) = uVar39;
              if (0 < (int)uVar62) {
                uVar63 = 0;
                do {
                  puVar40 = (undefined1 *)*__ptr;
                  *__ptr = (long)(puVar40 + 1);
                  uVar2 = *puVar40;
                  *__ptr = (long)(puVar40 + 2);
                  uVar3 = puVar40[1];
                  *__ptr = (long)(puVar40 + 3);
                  uVar4 = puVar40[2];
                  *__ptr = (long)(puVar40 + 4);
                  uVar6 = puVar40[3];
                  *__ptr = (long)(puVar40 + 5);
                  uVar7 = puVar40[4];
                  *__ptr = (long)(puVar40 + 6);
                  uVar8 = puVar40[5];
                  *__ptr = (long)(puVar40 + 7);
                  uVar9 = puVar40[6];
                  *__ptr = (long)(puVar40 + 8);
                  spPathConstraintPositionTimeline_setFrame
                            (CONCAT31(CONCAT21(CONCAT11(uVar2,uVar3),uVar4),uVar6),
                             fVar70 * (float)CONCAT31(CONCAT21(CONCAT11(uVar7,uVar8),uVar9),
                                                      puVar40[7]),lVar28,uVar63);
                  if ((int)uVar63 < (int)(uVar62 - 1)) {
                    FUN_00d66e58(__ptr,lVar28,uVar63);
                  }
                  uVar63 = uVar63 + 1;
                    /* try { // try from 00d65c18 to 00e65ccf has its CatchHandler @ 00d65c18
                       catch() { ... } // from try @ 00d65c18 with catch @ 00d65c18
                       catch() { ... } // from try @ 00d66234 with catch @ 00d65c18 */
                } while (uVar62 != uVar63);
              }
                    /* try { // try from 00d65cd0 to 00e65ce7 has its CatchHandler @ 00d66370 */
              if ((void *)uVar41 == pvVar53) {
                    /* try { // try from 00d65ce8 to 00e65cff has its CatchHandler @ 00d66350 */
                uVar60 = 2;
                if (pvVar53 != (void *)0x0) {
                  uVar60 = uVar54;
                }
                local_90 = (void *)_spMalloc(uVar60 << 3,
                                             "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonBinary.c"
                                             ,0x1bf);
                if ((pvVar53 != (void *)0x0) && (uVar60 != 0)) {
                  uVar34 = uVar60;
                  if (pvVar53 <= uVar54) {
                    uVar34 = (ulong)pvVar53;
                  }
                  memcpy(local_90,local_78,uVar34 << 3);
                }
                _spFree(local_78);
                pvVar53 = (void *)uVar60;
                local_78 = local_90;
              }
              *(long *)((long)local_90 + uVar41 * 8) = lVar28;
                    /* try { // try from 00d65948 to 00e65957 has its CatchHandler @ 00d65bdc */
              fVar70 = *(float *)(*(long *)(lVar28 + 0x20) + (long)(int)(uVar62 * 2 + -2) * 4);
LAB_00d6595c:
              uVar41 = uVar41 + 1;
              if (fVar83 <= fVar70) {
                fVar83 = fVar70;
              }
            }
            else {
              if (bVar69 == 2) {
                    /* try { // try from 00d65a60 to 00e65b2b has its CatchHandler @ 00d656c4 */
                lVar28 = spPathConstraintMixTimeline_create(uVar62);
                *(uint *)(lVar28 + 0x28) = uVar39;
                if (0 < (int)uVar62) {
                  uVar63 = 0;
                  do {
                    puVar40 = (undefined1 *)*__ptr;
                    *__ptr = (long)(puVar40 + 1);
                    uVar2 = *puVar40;
                    *__ptr = (long)(puVar40 + 2);
                    uVar3 = puVar40[1];
                    *__ptr = (long)(puVar40 + 3);
                    uVar4 = puVar40[2];
                    *__ptr = (long)(puVar40 + 4);
                    uVar6 = puVar40[3];
                    *__ptr = (long)(puVar40 + 5);
                    uVar7 = puVar40[4];
                    *__ptr = (long)(puVar40 + 6);
                    uVar8 = puVar40[5];
                    *__ptr = (long)(puVar40 + 7);
                    uVar9 = puVar40[6];
                    *__ptr = (long)(puVar40 + 8);
                    uVar10 = puVar40[7];
                    *__ptr = (long)(puVar40 + 9);
                    uVar11 = puVar40[8];
                    *__ptr = (long)(puVar40 + 10);
                    /* try { // try from 00d65b2c to 00e65b43 has its CatchHandler @ 00d65bb8 */
                    uVar12 = puVar40[9];
                    *__ptr = (long)(puVar40 + 0xb);
                    uVar13 = puVar40[10];
                    *__ptr = (long)(puVar40 + 0xc);
                    /* try { // try from 00d65b44 to 00e65c17 has its CatchHandler @ 00d656c4 */
                    spPathConstraintMixTimeline_setFrame
                              (CONCAT31(CONCAT21(CONCAT11(uVar2,uVar3),uVar4),uVar6),
                               CONCAT31(CONCAT21(CONCAT11(uVar7,uVar8),uVar9),uVar10),
                               CONCAT31(CONCAT21(CONCAT11(uVar11,uVar12),uVar13),puVar40[0xb]),
                               lVar28,uVar63);
                    if ((int)uVar63 < (int)(uVar62 - 1)) {
                      FUN_00d66e58(__ptr,lVar28,uVar63);
                    }
                    uVar63 = uVar63 + 1;
                  } while (uVar62 != uVar63);
                }
                if ((void *)uVar41 == pvVar53) {
                    /* catch() { ... } // from try @ 00d659a0 with catch @ 00d65b94 */
                    /* catch() { ... } // from try @ 00d658f0 with catch @ 00d65b98 */
                  uVar60 = 2;
                  if (pvVar53 != (void *)0x0) {
                    uVar60 = uVar54;
                  }
                  local_90 = (void *)_spMalloc(uVar60 << 3,
                                               "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonBinary.c"
                                               ,0x1cd);
                    /* catch() { ... } // from try @ 00d65b2c with catch @ 00d65bb8 */
                  if ((pvVar53 != (void *)0x0) && (uVar60 != 0)) {
                    /* catch() { ... } // from try @ 00d65a3c with catch @ 00d65bc8 */
                    /* catch() { ... } // from try @ 00d65900 with catch @ 00d65bcc */
                    uVar34 = uVar60;
                    /* catch() { ... } // from try @ 00d657d4 with catch @ 00d65bd0 */
                    if (pvVar53 <= uVar54) {
                      uVar34 = (ulong)pvVar53;
                    }
                    /* catch() { ... } // from try @ 00d65968 with catch @ 00d65bd4
                       catch() { ... } // from try @ 00d659b0 with catch @ 00d65bd4 */
                    /* catch() { ... } // from try @ 00d659c0 with catch @ 00d65bd8 */
                    memcpy(local_90,local_78,uVar34 << 3);
                  }
                    /* catch() { ... } // from try @ 00d65878 with catch @ 00d65bdc
                       catch() { ... } // from try @ 00d65948 with catch @ 00d65bdc */
                  _spFree(local_78);
                  pvVar53 = (void *)uVar60;
                  local_78 = local_90;
                    /* catch() { ... } // from try @ 00d65804 with catch @ 00d65bec */
                }
                *(long *)((long)local_90 + uVar41 * 8) = lVar28;
                fVar70 = *(float *)(*(long *)(lVar28 + 0x20) + (long)(int)(uVar62 * 3 + -3) * 4);
                goto LAB_00d6595c;
              }
              if (bVar69 == 1) {
                lVar28 = spPathConstraintSpacingTimeline_create(uVar62);
                fVar70 = fVar66;
                if (*(uint *)(lVar33 + 0x24) < 2) goto LAB_00d65bf0;
                goto LAB_00d65bf8;
              }
            }
            pbVar32 = (byte *)*__ptr;
                    /* try { // try from 00d65968 to 00e6597b has its CatchHandler @ 00d65bd4 */
            uVar56 = uVar56 + 1;
          } while (uVar56 != uVar51);
        }
        iVar68 = iVar68 + 1;
      }
      if (0 < (int)uVar39) {
        local_128 = 0;
        do {
                    /* try { // try from 00d65d70 to 00e65d7f has its CatchHandler @ 00d66308 */
          pbVar32 = pbVar52 + 1;
          lVar33 = puVar23[8];
          *__ptr = (long)pbVar32;
          uVar38 = *pbVar52 & 0x7f;
          if ((char)*pbVar52 < '\0') {
            pbVar32 = pbVar52 + 2;
            *__ptr = (long)pbVar32;
            uVar38 = uVar38 | (pbVar52[1] & 0x7f) << 7;
            if ((char)pbVar52[1] < '\0') {
              pbVar32 = pbVar52 + 3;
              *__ptr = (long)pbVar32;
              uVar38 = uVar38 | (pbVar52[2] & 0x7f) << 0xe;
              if ((char)pbVar52[2] < '\0') {
                pbVar32 = pbVar52 + 4;
                *__ptr = (long)pbVar32;
                uVar38 = uVar38 | (pbVar52[3] & 0x7f) << 0x15;
                if ((char)pbVar52[3] < '\0') {
                  pbVar32 = pbVar52 + 5;
                  *__ptr = (long)pbVar32;
                  uVar38 = uVar38 | (uint)pbVar52[4] << 0x1c;
                }
              }
            }
          }
          uVar27 = *(undefined8 *)(lVar33 + (long)(int)uVar38 * 8);
          pbVar52 = pbVar32 + 1;
          *__ptr = (long)pbVar52;
          uVar38 = *pbVar32 & 0x7f;
          if ((char)*pbVar32 < '\0') {
            pbVar52 = pbVar32 + 2;
            *__ptr = (long)pbVar52;
            uVar38 = uVar38 | (pbVar32[1] & 0x7f) << 7;
            if ((char)pbVar32[1] < '\0') {
                    /* try { // try from 00d65e04 to 00e65e0f has its CatchHandler @ 00d662f0 */
              pbVar52 = pbVar32 + 3;
              *__ptr = (long)pbVar52;
                    /* try { // try from 00d65e10 to 00e65e5f has its CatchHandler @ 00d66330 */
              uVar38 = uVar38 | (pbVar32[2] & 0x7f) << 0xe;
              if ((char)pbVar32[2] < '\0') {
                pbVar52 = pbVar32 + 4;
                *__ptr = (long)pbVar52;
                uVar38 = uVar38 | (pbVar32[3] & 0x7f) << 0x15;
                if ((char)pbVar32[3] < '\0') {
                  pbVar52 = pbVar32 + 5;
                  *__ptr = (long)pbVar52;
                  uVar38 = uVar38 | (uint)pbVar32[4] << 0x1c;
                }
              }
            }
          }
          if (0 < (int)uVar38) {
            uVar51 = 0;
            do {
              pbVar32 = pbVar52 + 1;
              *__ptr = (long)pbVar32;
              uVar56 = *pbVar52 & 0x7f;
              if ((char)*pbVar52 < '\0') {
                    /* try { // try from 00d65e64 to 00e65e6f has its CatchHandler @ 00d662e4 */
                pbVar32 = pbVar52 + 2;
                *__ptr = (long)pbVar32;
                uVar56 = uVar56 | (pbVar52[1] & 0x7f) << 7;
                if ((char)pbVar52[1] < '\0') {
                  pbVar32 = pbVar52 + 3;
                  *__ptr = (long)pbVar32;
                  uVar56 = uVar56 | (pbVar52[2] & 0x7f) << 0xe;
                  if ((char)pbVar52[2] < '\0') {
                    pbVar32 = pbVar52 + 4;
                    *__ptr = (long)pbVar32;
                    uVar56 = uVar56 | (pbVar52[3] & 0x7f) << 0x15;
                    if ((char)pbVar52[3] < '\0') {
                      pbVar32 = pbVar52 + 5;
                      *__ptr = (long)pbVar32;
                      uVar56 = uVar56 | (uint)pbVar52[4] << 0x1c;
                    }
                  }
                }
              }
                    /* try { // try from 00d65eb0 to 00e65eff has its CatchHandler @ 00d66330 */
              *__ptr = (long)(pbVar32 + 1);
              uVar62 = *pbVar32 & 0x7f;
              if ((char)*pbVar32 < '\0') {
                *__ptr = (long)(pbVar32 + 2);
                uVar62 = uVar62 | (pbVar32[1] & 0x7f) << 7;
                if ((char)pbVar32[1] < '\0') {
                  *__ptr = (long)(pbVar32 + 3);
                  uVar62 = uVar62 | (pbVar32[2] & 0x7f) << 0xe;
                  if ((char)pbVar32[2] < '\0') {
                    *__ptr = (long)(pbVar32 + 4);
                    uVar62 = uVar62 | (pbVar32[3] & 0x7f) << 0x15;
                    if ((char)pbVar32[3] < '\0') {
                    /* try { // try from 00d65f00 to 00e65f0b has its CatchHandler @ 00d662a0 */
                      *__ptr = (long)(pbVar32 + 5);
                      uVar62 = uVar62 | (uint)pbVar32[4] << 0x1c;
                    }
                  }
                }
              }
              if (0 < (int)uVar62) {
                uVar63 = 0;
LAB_00d65f70:
                pvVar30 = (void *)readString(__ptr);
                lVar33 = spSkin_getAttachment(uVar27,uVar56,pvVar30);
                if (lVar33 != 0) goto code_r0x00d65f98;
                    /* try { // try from 00d66e14 to 00e66e1f has its CatchHandler @ 00d66f18 */
                if (uVar41 != 0) {
                  uVar54 = 0;
                  do {
                    spTimeline_dispose(*(undefined8 *)((long)local_90 + uVar54 * 8));
                    uVar54 = uVar54 + 1;
                  } while (uVar41 != uVar54);
                }
                _spFree(local_78);
                    /* try { // try from 00d66e38 to 00e66e3b has its CatchHandler @ 00d66f58 */
                    /* try { // try from 00d66e40 to 00e66e4f has its CatchHandler @ 00d66f14 */
                _spSkeletonBinary_setError(param_1,"Attachment not found: ",pvVar30);
                    /* try { // try from 00d66e50 to 00e66e63 has its CatchHandler @ 00d66f10 */
                _spFree(pvVar30);
                goto LAB_00d66d44;
              }
LAB_00d6649c:
              pbVar52 = (byte *)*__ptr;
              uVar51 = uVar51 + 1;
            } while (uVar51 != uVar38);
          }
          local_128 = local_128 + 1;
        } while (local_128 != uVar39);
      }
      pbVar32 = pbVar52 + 1;
      *__ptr = (long)pbVar32;
      bVar69 = *pbVar52;
                    /* try { // try from 00d66508 to 00e66553 has its CatchHandler @ 00d66888 */
      uVar38 = bVar69 & 0x7f;
      local_98 = local_78;
      if ((char)bVar69 < '\0') {
        pbVar32 = pbVar52 + 2;
        *__ptr = (long)pbVar32;
        uVar38 = uVar38 | (pbVar52[1] & 0x7f) << 7;
        if ((char)pbVar52[1] < '\0') {
          pbVar32 = pbVar52 + 3;
          *__ptr = (long)pbVar32;
          uVar38 = uVar38 | (pbVar52[2] & 0x7f) << 0xe;
          if ((char)pbVar52[2] < '\0') {
                    /* try { // try from 00d66554 to 00e6656b has its CatchHandler @ 00d66864 */
            pbVar32 = pbVar52 + 4;
            *__ptr = (long)pbVar32;
            uVar38 = uVar38 | (pbVar52[3] & 0x7f) << 0x15;
            if ((char)pbVar52[3] < '\0') {
              pbVar32 = pbVar52 + 5;
              *__ptr = (long)pbVar32;
              uVar38 = uVar38 | (uint)pbVar52[4] << 0x1c;
            }
          }
        }
        if (uVar38 != 0) goto LAB_00d6657c;
      }
      else if ((bVar69 & 0x7f) != 0) {
LAB_00d6657c:
        lVar33 = spDrawOrderTimeline_create(uVar38,*(undefined4 *)(puVar23 + 5));
                    /* try { // try from 00d66590 to 00e66597 has its CatchHandler @ 00d66860 */
        if (0 < (int)uVar38) {
          uVar39 = 0;
          do {
                    /* try { // try from 00d665d0 to 00e665e3 has its CatchHandler @ 00d6682c */
            puVar40 = (undefined1 *)*__ptr;
            *__ptr = (long)(puVar40 + 1);
            uVar2 = *puVar40;
            *__ptr = (long)(puVar40 + 2);
            uVar3 = puVar40[1];
            *__ptr = (long)(puVar40 + 3);
                    /* try { // try from 00d665fc to 00e66613 has its CatchHandler @ 00d66884 */
            uVar4 = puVar40[2];
            *__ptr = (long)(puVar40 + 4);
            uVar6 = puVar40[3];
            *__ptr = (long)(puVar40 + 5);
            uVar51 = (byte)puVar40[4] & 0x7f;
            if ((char)puVar40[4] < '\0') {
              *__ptr = (long)(puVar40 + 6);
              uVar51 = uVar51 | ((byte)puVar40[5] & 0x7f) << 7;
              if ((char)puVar40[5] < '\0') {
                *__ptr = (long)(puVar40 + 7);
                uVar51 = uVar51 | ((byte)puVar40[6] & 0x7f) << 0xe;
                if ((char)puVar40[6] < '\0') {
                    /* try { // try from 00d66648 to 00e6664f has its CatchHandler @ 00d6688c */
                  *__ptr = (long)(puVar40 + 8);
                  uVar51 = uVar51 | ((byte)puVar40[7] & 0x7f) << 0x15;
                  if ((char)puVar40[7] < '\0') {
                    /* try { // try from 00d6665c to 00e66673 has its CatchHandler @ 00d668a0 */
                    *__ptr = (long)(puVar40 + 9);
                    uVar51 = uVar51 | (uint)(byte)puVar40[8] << 0x1c;
                  }
                }
              }
            }
                    /* try { // try from 00d6667c to 00e66683 has its CatchHandler @ 00d66898 */
            pvVar30 = (void *)_spMalloc((long)*(int *)(puVar23 + 5) << 2,
                                        "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonBinary.c"
                                        ,0x225);
            pvVar31 = (void *)_spMalloc(-(ulong)(*(int *)(puVar23 + 5) - uVar51 >> 0x1f) &
                                        0xfffffffc00000000 |
                                        (ulong)(*(int *)(puVar23 + 5) - uVar51) << 2,
                                        "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonBinary.c"
                                        ,0x226);
            memset(pvVar30,0xff,(long)*(int *)(puVar23 + 5) << 2);
                    /* try { // try from 00d666c0 to 00e666ef has its CatchHandler @ 00d66890 */
            if ((int)uVar51 < 1) {
              uVar56 = 0;
              uVar54 = 0;
            }
            else {
              pbVar32 = (byte *)*__ptr;
              uVar62 = 0;
              uVar54 = 0;
              uVar56 = 0;
              do {
                pbVar52 = pbVar32 + 1;
                *__ptr = (long)pbVar52;
                uVar63 = *pbVar32 & 0x7f;
                if ((char)*pbVar32 < '\0') {
                  pbVar52 = pbVar32 + 2;
                  *__ptr = (long)pbVar52;
                  uVar63 = uVar63 | (pbVar32[1] & 0x7f) << 7;
                  if ((char)pbVar32[1] < '\0') {
                    pbVar52 = pbVar32 + 3;
                    *__ptr = (long)pbVar52;
                    uVar63 = uVar63 | (pbVar32[2] & 0x7f) << 0xe;
                    if ((char)pbVar32[2] < '\0') {
                      pbVar52 = pbVar32 + 4;
                      *__ptr = (long)pbVar52;
                      uVar63 = uVar63 | (pbVar32[3] & 0x7f) << 0x15;
                      if ((char)pbVar32[3] < '\0') {
                        pbVar52 = pbVar32 + 5;
                    /* try { // try from 00d66758 to 00e667bf has its CatchHandler @ 00d6689c */
                        *__ptr = (long)pbVar52;
                        uVar63 = uVar63 | (uint)pbVar32[4] << 0x1c;
                      }
                    }
                  }
                }
                uVar48 = uVar56;
                if (uVar56 != uVar63) {
                  uVar60 = (ulong)(uVar63 + ~uVar56) + 1;
                  uVar34 = (ulong)(int)uVar54;
                  uVar48 = uVar63;
                  if (7 < uVar60) {
                    uVar55 = uVar60 & 0x1fffffff8;
                    uVar54 = uVar55 + uVar34;
                    uVar27 = CONCAT44(uVar56 + 1,uVar56);
                    uVar67 = CONCAT44(uVar56 + 3,uVar56 + 2);
                    puVar45 = (undefined8 *)((long)pvVar31 + uVar34 * 4 + 0x10);
                    uVar34 = uVar55;
                    do {
                      iVar68 = (int)((ulong)uVar27 >> 0x20);
                      iVar65 = (int)((ulong)uVar67 >> 0x20);
                      puVar45[-1] = uVar67;
                      puVar45[-2] = uVar27;
                      puVar45[1] = CONCAT44(iVar65 + 4,(int)uVar67 + 4);
                      *puVar45 = CONCAT44(iVar68 + 4,(int)uVar27 + 4);
                      uVar27 = CONCAT44(iVar68 + 8,(int)uVar27 + 8);
                      uVar67 = CONCAT44(iVar65 + 8,(int)uVar67 + 8);
                      uVar34 = uVar34 - 8;
                      puVar45 = puVar45 + 4;
                    /* try { // try from 00d667c8 to 00e667d3 has its CatchHandler @ 00d66890 */
                    } while (uVar34 != 0);
                    uVar34 = uVar54;
                    uVar56 = uVar56 + (int)uVar55;
                    if (uVar60 == uVar55) goto LAB_00d667f4;
                  }
                  do {
                    uVar57 = uVar56 + 1;
                    uVar54 = uVar34 + 1;
                    *(uint *)((long)pvVar31 + uVar34 * 4) = uVar56;
                    uVar34 = uVar54;
                    uVar56 = uVar57;
                  } while (uVar63 != uVar57);
                }
LAB_00d667f4:
                pbVar32 = pbVar52 + 1;
                *__ptr = (long)pbVar32;
                uVar63 = *pbVar52 & 0x7f;
                if ((char)*pbVar52 < '\0') {
                  pbVar32 = pbVar52 + 2;
                  *__ptr = (long)pbVar32;
                  uVar63 = uVar63 | (pbVar52[1] & 0x7f) << 7;
                  if ((char)pbVar52[1] < '\0') {
                    pbVar32 = pbVar52 + 3;
                    *__ptr = (long)pbVar32;
                    uVar63 = uVar63 | (pbVar52[2] & 0x7f) << 0xe;
                    /* catch() { ... } // from try @ 00d665d0 with catch @ 00d6682c */
                    if ((char)pbVar52[2] < '\0') {
                      pbVar32 = pbVar52 + 4;
                      *__ptr = (long)pbVar32;
                      uVar63 = uVar63 | (pbVar52[3] & 0x7f) << 0x15;
                      if ((char)pbVar52[3] < '\0') {
                    /* catch() { ... } // from try @ 00d665bc with catch @ 00d66844 */
                        pbVar32 = pbVar52 + 5;
                    /* catch() { ... } // from try @ 00d665b0 with catch @ 00d66848 */
                        *__ptr = (long)pbVar32;
                        uVar63 = uVar63 | (uint)pbVar52[4] << 0x1c;
                      }
                    }
                  }
                }
                uVar62 = uVar62 + 1;
                    /* try { // try from 00d666f8 to 00e6674f has its CatchHandler @ 00d66894 */
                uVar56 = uVar48 + 1;
                *(uint *)((long)pvVar30 + (long)(int)(uVar63 + uVar48) * 4) = uVar48;
              } while (uVar62 != uVar51);
            }
                    /* catch() { ... } // from try @ 00d66590 with catch @ 00d66860 */
            iVar68 = *(int *)(puVar23 + 5);
                    /* catch() { ... } // from try @ 00d66554 with catch @ 00d66864 */
                    /* catch() { ... } // from try @ 00d664bc with catch @ 00d66868 */
                    /* catch() { ... } // from try @ 00d66454 with catch @ 00d6686c */
            if ((int)uVar56 < iVar68) {
                    /* catch() { ... } // from try @ 00d6642c with catch @ 00d66870 */
              puVar47 = (uint *)((long)pvVar31 + (long)(int)uVar54 * 4);
              do {
                *puVar47 = uVar56;
                iVar68 = *(int *)(puVar23 + 5);
                uVar56 = uVar56 + 1;
                uVar54 = (ulong)((int)uVar54 + 1);
                    /* catch() { ... } // from try @ 00d665fc with catch @ 00d66884 */
                    /* catch() { ... } // from try @ 00d66470 with catch @ 00d66888
                       catch() { ... } // from try @ 00d66508 with catch @ 00d66888 */
                puVar47 = puVar47 + 1;
              } while ((int)uVar56 < iVar68);
            }
                    /* catch() { ... } // from try @ 00d66648 with catch @ 00d6688c */
                    /* catch() { ... } // from try @ 00d666c0 with catch @ 00d66890
                       catch() { ... } // from try @ 00d667c8 with catch @ 00d66890 */
            if (0 < iVar68) {
                    /* catch() { ... } // from try @ 00d666f8 with catch @ 00d66894 */
              lVar28 = (long)iVar68;
                    /* catch() { ... } // from try @ 00d6667c with catch @ 00d66898 */
                    /* catch() { ... } // from try @ 00d66758 with catch @ 00d6689c */
              do {
                lVar43 = lVar28 + -1;
                if (*(int *)((long)pvVar30 + lVar28 * 4 + -4) == -1) {
                  uVar51 = (int)uVar54 - 1;
                  uVar54 = (ulong)uVar51;
                  *(undefined4 *)((long)pvVar30 + lVar28 * 4 + -4) =
                       *(undefined4 *)((long)pvVar31 + (long)(int)uVar51 * 4);
                }
                    /* catch() { ... } // from try @ 00d6665c with catch @ 00d668a0 */
                lVar28 = lVar43;
              } while (0 < lVar43);
            }
            _spFree(pvVar31);
                    /* try { // try from 00d665b0 to 00e665bb has its CatchHandler @ 00d66848 */
            spDrawOrderTimeline_setFrame
                      (CONCAT31(CONCAT21(CONCAT11(uVar2,uVar3),uVar4),uVar6),lVar33,uVar39,pvVar30);
                    /* try { // try from 00d665bc to 00e665c7 has its CatchHandler @ 00d66844 */
            _spFree(pvVar30);
            uVar39 = uVar39 + 1;
          } while (uVar39 != uVar38);
        }
                    /* catch() { ... } // from try @ 00d66934 with catch @ 00d668d4 */
        if ((void *)uVar41 == pvVar53) {
          pvVar53 = (void *)2;
          if (uVar41 != 0) {
            pvVar53 = (void *)(uVar41 << 1);
          }
          local_90 = (void *)_spMalloc((long)pvVar53 << 3,
                                       "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonBinary.c"
                                       ,0x23d);
          if ((uVar41 != 0) && (pvVar53 != (void *)0x0)) {
            uVar54 = (ulong)pvVar53;
            if (uVar41 <= uVar41 << 1) {
              uVar54 = uVar41;
            }
            memcpy(local_90,local_78,uVar54 << 3);
          }
                    /* try { // try from 00d6692c to 00e66933 has its CatchHandler @ 00d669e0 */
          _spFree(local_78);
          local_98 = local_90;
                    /* try { // try from 00d66934 to 00e669fb has its CatchHandler @ 00d668d4 */
        }
        local_78 = pvVar53;
        *(long *)((long)local_90 + uVar41 * 8) = lVar33;
        uVar41 = uVar41 + 1;
        fVar70 = *(float *)(*(long *)(lVar33 + 0x18) + (long)(int)(uVar38 - 1) * 4);
        pbVar32 = (byte *)*__ptr;
        pvVar53 = local_78;
        if (fVar83 <= fVar70) {
          fVar83 = fVar70;
        }
      }
      local_78 = pvVar53;
      *__ptr = (long)(pbVar32 + 1);
      uVar38 = *pbVar32 & 0x7f;
      if ((char)*pbVar32 < '\0') {
        *__ptr = (long)(pbVar32 + 2);
        uVar38 = uVar38 | (pbVar32[1] & 0x7f) << 7;
        if ((char)pbVar32[1] < '\0') {
          *__ptr = (long)(pbVar32 + 3);
          uVar38 = uVar38 | (pbVar32[2] & 0x7f) << 0xe;
          if ((char)pbVar32[2] < '\0') {
            *__ptr = (long)(pbVar32 + 4);
            uVar38 = uVar38 | (pbVar32[3] & 0x7f) << 0x15;
            if ((char)pbVar32[3] < '\0') {
              *__ptr = (long)(pbVar32 + 5);
              uVar38 = uVar38 | (uint)pbVar32[4] << 0x1c;
            }
          }
        }
      }
      if (uVar38 != 0) {
        lVar33 = spEventTimeline_create(uVar38);
                    /* catch() { ... } // from try @ 00d6692c with catch @ 00d669e0 */
        if (0 < (int)uVar38) {
          uVar39 = 0;
          do {
            puVar40 = (undefined1 *)*__ptr;
            *__ptr = (long)(puVar40 + 1);
            uVar2 = *puVar40;
            *__ptr = (long)(puVar40 + 2);
            uVar3 = puVar40[1];
            *__ptr = (long)(puVar40 + 3);
            uVar4 = puVar40[2];
            *__ptr = (long)(puVar40 + 4);
            uVar6 = puVar40[3];
            lVar28 = puVar23[0xb];
            *__ptr = (long)(puVar40 + 5);
            uVar51 = (byte)puVar40[4] & 0x7f;
            if ((char)puVar40[4] < '\0') {
              *__ptr = (long)(puVar40 + 6);
              uVar51 = uVar51 | ((byte)puVar40[5] & 0x7f) << 7;
              if ((char)puVar40[5] < '\0') {
                *__ptr = (long)(puVar40 + 7);
                uVar51 = uVar51 | ((byte)puVar40[6] & 0x7f) << 0xe;
                if ((char)puVar40[6] < '\0') {
                  *__ptr = (long)(puVar40 + 8);
                  uVar51 = uVar51 | ((byte)puVar40[7] & 0x7f) << 0x15;
                  if ((char)puVar40[7] < '\0') {
                    *__ptr = (long)(puVar40 + 9);
                    uVar51 = uVar51 | (uint)(byte)puVar40[8] << 0x1c;
                  }
                }
              }
            }
            lVar43 = *(long *)(lVar28 + (long)(int)uVar51 * 8);
            lVar28 = spEvent_create(CONCAT31(CONCAT21(CONCAT11(uVar2,uVar3),uVar4),uVar6),lVar43);
            pbVar52 = (byte *)*__ptr;
            pbVar32 = pbVar52 + 1;
            *__ptr = (long)pbVar32;
            uVar51 = *pbVar52 & 0x7f;
            if ((char)*pbVar52 < '\0') {
              pbVar32 = pbVar52 + 2;
              *__ptr = (long)pbVar32;
              uVar51 = uVar51 | (pbVar52[1] & 0x7f) << 7;
              if ((char)pbVar52[1] < '\0') {
                pbVar32 = pbVar52 + 3;
                *__ptr = (long)pbVar32;
                uVar51 = uVar51 | (pbVar52[2] & 0x7f) << 0xe;
                if ((char)pbVar52[2] < '\0') {
                  pbVar32 = pbVar52 + 4;
                  *__ptr = (long)pbVar32;
                  uVar51 = uVar51 | (pbVar52[3] & 0x7f) << 0x15;
                  if ((char)pbVar52[3] < '\0') {
                    pbVar32 = pbVar52 + 5;
                    *__ptr = (long)pbVar32;
                    uVar51 = uVar51 | (uint)pbVar52[4] << 0x1c;
                  }
                }
              }
            }
            *(uint *)(lVar28 + 0xc) = -(uVar51 & 1) ^ uVar51 >> 1;
                    /* try { // try from 00d66b70 to 00e66bcb has its CatchHandler @ 00d66b70
                       catch() { ... } // from try @ 00d66b70 with catch @ 00d66b70
                       catch() { ... } // from try @ 00d66bd4 with catch @ 00d66b70 */
            *__ptr = (long)(pbVar32 + 1);
            bVar69 = *pbVar32;
            *__ptr = (long)(pbVar32 + 2);
            bVar73 = pbVar32[1];
            *__ptr = (long)(pbVar32 + 3);
            bVar75 = pbVar32[2];
            *__ptr = (long)(pbVar32 + 4);
            *(uint *)(lVar28 + 0x10) = CONCAT31(CONCAT21(CONCAT11(bVar69,bVar73),bVar75),pbVar32[3])
            ;
            *__ptr = (long)(pbVar32 + 5);
            if (pbVar32[4] == 0) {
              sVar25 = strlen(*(char **)(lVar43 + 0x10));
              pcVar24 = (char *)_spMalloc(sVar25 + 1,
                                          "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonBinary.c"
                                          ,0x24e);
              *(char **)(lVar28 + 0x18) = pcVar24;
              strcpy(pcVar24,*(char **)(lVar43 + 0x10));
            }
            else {
              uVar27 = readString(__ptr);
              *(undefined8 *)(lVar28 + 0x18) = uVar27;
            }
            spEventTimeline_setFrame(lVar33,uVar39,lVar28);
            uVar39 = uVar39 + 1;
          } while (uVar38 != uVar39);
        }
                    /* try { // try from 00d66bcc to 00e66bd3 has its CatchHandler @ 00d66c50 */
        if ((void *)uVar41 == local_78) {
                    /* try { // try from 00d66bd4 to 00e66c63 has its CatchHandler @ 00d66b70 */
          local_78 = (void *)2;
          if (uVar41 != 0) {
            local_78 = (void *)(uVar41 << 1);
          }
          local_90 = (void *)_spMalloc((long)local_78 << 3,
                                       "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonBinary.c"
                                       ,0x251);
          if ((uVar41 != 0) && (local_78 != (void *)0x0)) {
            uVar54 = (ulong)local_78;
            if (uVar41 <= uVar41 << 1) {
              uVar54 = uVar41;
            }
            memcpy(local_90,local_98,uVar54 << 3);
          }
          _spFree(local_98);
          local_98 = local_90;
        }
        *(long *)((long)local_90 + uVar41 * 8) = lVar33;
        uVar41 = uVar41 + 1;
        fVar70 = *(float *)(*(long *)(lVar33 + 0x18) + (long)(int)(uVar38 - 1) * 4);
                    /* catch() { ... } // from try @ 00d66bcc with catch @ 00d66c50 */
        if (fVar83 <= fVar70) {
          fVar83 = fVar70;
        }
      }
                    /* try { // try from 00d66c64 to 00e66cbf has its CatchHandler @ 00d66c64
                       catch() { ... } // from try @ 00d66c64 with catch @ 00d66c64
                       catch() { ... } // from try @ 00d66cc8 with catch @ 00d66c64 */
      pvVar53 = (void *)_spMalloc(uVar41 << 3,
                                  "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonBinary.c"
                                  ,0x255);
      if ((uVar41 != 0) && (local_78 != (void *)0x0)) {
        pvVar30 = (void *)uVar41;
        if (local_78 <= uVar41) {
          pvVar30 = local_78;
        }
        memcpy(pvVar53,local_98,(long)pvVar30 << 3);
      }
      _spFree(local_98);
      lVar33 = spAnimation_create(pvVar26,0);
      _spFree(*(void **)(lVar33 + 0x10));
                    /* try { // try from 00d66cc0 to 00e66cc7 has its CatchHandler @ 00d66d44 */
      *(float *)(lVar33 + 8) = fVar83;
      *(int *)(lVar33 + 0xc) = (int)uVar41;
                    /* try { // try from 00d66cc8 to 00e66d57 has its CatchHandler @ 00d66c64 */
      *(void **)(lVar33 + 0x10) = pvVar53;
      _spFree(pvVar26);
      if (lVar33 == 0) {
LAB_00d66d4c:
        _spFree(__ptr);
                    /* catch() { ... } // from try @ 00d66ec0 with catch @ 00d66d58 */
        spSkeletonData_dispose(puVar23);
        return (undefined8 *)0x0;
      }
      *(long *)(puVar23[0xd] + local_d0 * 8) = lVar33;
      local_d0 = local_d0 + 1;
    } while (local_d0 < *(int *)(puVar23 + 0xc));
  }
  _spFree(__ptr);
                    /* try { // try from 00d66db0 to 00e66dc3 has its CatchHandler @ 00d66f3c */
                    /* try { // try from 00d66dc4 to 00e66dcf has its CatchHandler @ 00d66f24 */
  return puVar23;
code_r0x00d65f98:
  _spFree(pvVar30);
  lVar28 = *(long *)(lVar33 + 0x28);
                    /* try { // try from 00d65fa8 to 00e65fb3 has its CatchHandler @ 00d662c4 */
  uVar48 = *(uint *)(lVar33 + 0x30);
  if (lVar28 != 0) {
    uVar48 = ((int)uVar48 / 3) * 2;
  }
  uVar60 = (ulong)uVar48;
  uVar54 = -(ulong)(uVar48 >> 0x1f) & 0xfffffffc00000000 | uVar60 << 2;
  pvVar30 = (void *)_spMalloc(uVar54,
                              "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonBinary.c"
                              ,0x1ef);
  pbVar32 = (byte *)*__ptr;
                    /* try { // try from 00d65ff0 to 00e65ff7 has its CatchHandler @ 00d6629c */
  *__ptr = (long)(pbVar32 + 1);
  uVar57 = *pbVar32 & 0x7f;
  if ((char)*pbVar32 < '\0') {
    *__ptr = (long)(pbVar32 + 2);
                    /* try { // try from 00d66010 to 00e6603b has its CatchHandler @ 00d662ac */
    uVar57 = uVar57 | (pbVar32[1] & 0x7f) << 7;
    if ((char)pbVar32[1] < '\0') {
      *__ptr = (long)(pbVar32 + 3);
      uVar57 = uVar57 | (pbVar32[2] & 0x7f) << 0xe;
      if ((char)pbVar32[2] < '\0') {
        *__ptr = (long)(pbVar32 + 4);
        uVar57 = uVar57 | (pbVar32[3] & 0x7f) << 0x15;
        if ((char)pbVar32[3] < '\0') {
                    /* try { // try from 00d66048 to 00e66053 has its CatchHandler @ 00d662e8 */
          *__ptr = (long)(pbVar32 + 5);
          uVar57 = uVar57 | (uint)pbVar32[4] << 0x1c;
        }
      }
    }
  }
                    /* try { // try from 00d6605c to 00e66063 has its CatchHandler @ 00d662a8 */
  lVar43 = spDeformTimeline_create(uVar57,uVar60);
                    /* try { // try from 00d66068 to 00e66073 has its CatchHandler @ 00d662a4 */
  *(uint *)(lVar43 + 0x38) = uVar56;
  *(long *)(lVar43 + 0x40) = lVar33;
  if (0 < (int)uVar57) {
    uVar34 = uVar60 & 0xfffffff8;
    uVar64 = 0;
    do {
      puVar40 = (undefined1 *)*__ptr;
                    /* try { // try from 00d660bc to 00e660c7 has its CatchHandler @ 00d6633c */
      *__ptr = (long)(puVar40 + 1);
      pbVar32 = puVar40 + 5;
      uVar2 = *puVar40;
      *__ptr = (long)(puVar40 + 2);
      uVar3 = puVar40[1];
                    /* try { // try from 00d660d8 to 00e660e7 has its CatchHandler @ 00d6632c */
      *__ptr = (long)(puVar40 + 3);
      uVar4 = puVar40[2];
      *__ptr = (long)(puVar40 + 4);
      uVar6 = puVar40[3];
      *__ptr = (long)pbVar32;
      uVar59 = (byte)puVar40[4] & 0x7f;
      if ((char)puVar40[4] < '\0') {
        pbVar32 = puVar40 + 6;
        *__ptr = (long)pbVar32;
        uVar59 = uVar59 | ((byte)puVar40[5] & 0x7f) << 7;
        if ((char)puVar40[5] < '\0') {
          pbVar32 = puVar40 + 7;
          *__ptr = (long)pbVar32;
                    /* try { // try from 00d66124 to 00e6614f has its CatchHandler @ 00d66300 */
          uVar59 = uVar59 | ((byte)puVar40[6] & 0x7f) << 0xe;
          if ((char)puVar40[6] < '\0') {
            pbVar32 = puVar40 + 8;
            *__ptr = (long)pbVar32;
            uVar59 = uVar59 | ((byte)puVar40[7] & 0x7f) << 0x15;
            if ((char)puVar40[7] < '\0') {
              pbVar32 = puVar40 + 9;
              *__ptr = (long)pbVar32;
              uVar59 = uVar59 | (uint)(byte)puVar40[8] << 0x1c;
            }
          }
        }
      }
      pvVar31 = pvVar30;
      if (uVar59 == 0) {
        if (lVar28 == 0) {
          pvVar31 = *(void **)(lVar33 + 0x38);
        }
        else {
          memset(pvVar30,0,uVar54);
        }
      }
      else {
                    /* try { // try from 00d66158 to 00e661af has its CatchHandler @ 00d66304 */
        *__ptr = (long)(pbVar32 + 1);
        uVar1 = *pbVar32 & 0x7f;
        uVar55 = (ulong)uVar1;
        if ((char)*pbVar32 < '\0') {
          *__ptr = (long)(pbVar32 + 2);
          uVar1 = uVar1 | (pbVar32[1] & 0x7f) << 7;
          uVar55 = (ulong)uVar1;
          if ((char)pbVar32[1] < '\0') {
            *__ptr = (long)(pbVar32 + 3);
            uVar1 = uVar1 | (pbVar32[2] & 0x7f) << 0xe;
            uVar55 = (ulong)uVar1;
            if ((char)pbVar32[2] < '\0') {
              *__ptr = (long)(pbVar32 + 4);
              uVar1 = uVar1 | (pbVar32[3] & 0x7f) << 0x15;
              uVar55 = (ulong)uVar1;
              if ((char)pbVar32[3] < '\0') {
                *__ptr = (long)(pbVar32 + 5);
                    /* try { // try from 00d661b8 to 00e6621f has its CatchHandler @ 00d66334 */
                uVar55 = (ulong)(uVar1 | (uint)pbVar32[4] << 0x1c);
              }
            }
          }
        }
        uVar61 = (ulong)(int)uVar55;
        memset(pvVar30,0,-(uVar55 >> 0x1f) & 0xfffffffc00000000 | uVar55 << 2);
        iVar68 = (int)uVar55 + uVar59;
        fVar70 = *param_1;
        if (fVar70 == 1.0) {
          if (0 < (int)uVar59) {
            lVar44 = *__ptr;
            lVar35 = 0;
            lVar49 = uVar61 * 4;
            do {
              puVar40 = (undefined1 *)(lVar44 + lVar35);
              *__ptr = (long)(puVar40 + 1);
              uVar7 = *puVar40;
              *__ptr = (long)(puVar40 + 2);
              uVar8 = puVar40[1];
              *__ptr = (long)(puVar40 + 3);
                    /* try { // try from 00d66228 to 00e66233 has its CatchHandler @ 00d66300 */
              uVar9 = puVar40[2];
              *__ptr = (long)(puVar40 + 4);
                    /* try { // try from 00d66234 to 00e6638b has its CatchHandler @ 00d65c18 */
              uVar61 = uVar61 + 1;
              *(uint *)((long)pvVar30 + lVar35 + lVar49) =
                   CONCAT31(CONCAT21(CONCAT11(uVar7,uVar8),uVar9),puVar40[3]);
              lVar35 = lVar35 + 4;
            } while ((long)uVar61 < (long)iVar68);
            uVar55 = uVar61 & 0xffffffff;
          }
        }
        else if (0 < (int)uVar59) {
          lVar35 = *__ptr;
          lVar49 = 0;
          uVar55 = uVar61;
          while( true ) {
            uVar55 = uVar55 + 1;
            puVar40 = (undefined1 *)(lVar35 + lVar49);
                    /* catch() { ... } // from try @ 00d65ff0 with catch @ 00d6629c */
                    /* catch() { ... } // from try @ 00d65f00 with catch @ 00d662a0 */
            *__ptr = (long)(puVar40 + 1);
                    /* catch() { ... } // from try @ 00d66068 with catch @ 00d662a4 */
            uVar7 = *puVar40;
                    /* catch() { ... } // from try @ 00d6605c with catch @ 00d662a8 */
                    /* catch() { ... } // from try @ 00d66010 with catch @ 00d662ac */
            *__ptr = (long)(puVar40 + 2);
            uVar8 = puVar40[1];
            *__ptr = (long)(puVar40 + 3);
            uVar9 = puVar40[2];
            *__ptr = (long)(puVar40 + 4);
                    /* catch() { ... } // from try @ 00d65fa8 with catch @ 00d662c4 */
            *(float *)((long)pvVar30 + lVar49 + uVar61 * 4) =
                 fVar70 * (float)CONCAT31(CONCAT21(CONCAT11(uVar7,uVar8),uVar9),puVar40[3]);
                    /* catch() { ... } // from try @ 00d65e64 with catch @ 00d662e4 */
            if ((long)iVar68 <= (long)uVar55) break;
                    /* catch() { ... } // from try @ 00d66048 with catch @ 00d662e8 */
                    /* catch() { ... } // from try @ 00d660a8 with catch @ 00d662ec */
            lVar49 = lVar49 + 4;
                    /* catch() { ... } // from try @ 00d65e04 with catch @ 00d662f0 */
            fVar70 = *param_1;
          }
        }
                    /* catch() { ... } // from try @ 00d66124 with catch @ 00d66300
                       catch() { ... } // from try @ 00d66228 with catch @ 00d66300 */
        uVar59 = uVar48 - (int)uVar55;
                    /* catch() { ... } // from try @ 00d66158 with catch @ 00d66304 */
                    /* catch() { ... } // from try @ 00d65d70 with catch @ 00d66308 */
        memset((void *)((long)pvVar30 + (long)(int)uVar55 * 4),0,
               -(ulong)(uVar59 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar59 << 2);
                    /* catch() { ... } // from try @ 00d65f3c with catch @ 00d66328 */
        if ((lVar28 == 0) && (0 < (int)uVar48)) {
                    /* catch() { ... } // from try @ 00d660d8 with catch @ 00d6632c */
                    /* catch() { ... } // from try @ 00d65e10 with catch @ 00d66330
                       catch() { ... } // from try @ 00d65eb0 with catch @ 00d66330 */
                    /* catch() { ... } // from try @ 00d661b8 with catch @ 00d66334 */
          pvVar36 = *(void **)(lVar33 + 0x38);
                    /* catch() { ... } // from try @ 00d65f50 with catch @ 00d66338 */
                    /* catch() { ... } // from try @ 00d660bc with catch @ 00d6633c */
                    /* catch() { ... } // from try @ 00d65ce8 with catch @ 00d66350 */
          if ((uVar48 < 8) ||
             ((pvVar30 < (void *)((long)pvVar36 + uVar60 * 4) &&
              (pvVar36 < (void *)((long)pvVar30 + uVar60 * 4))))) {
            uVar55 = 0;
          }
          else {
            puVar45 = (undefined8 *)((long)pvVar36 + 0x10);
            uVar55 = uVar34;
            puVar50 = (undefined8 *)((long)pvVar30 + 0x10);
            do {
              puVar22 = puVar45 + -1;
              uVar67 = puVar45[-2];
              uVar72 = puVar45[1];
              uVar71 = *puVar45;
              puVar45 = puVar45 + 4;
              uVar55 = uVar55 - 8;
              puVar50[-1] = CONCAT44((float)((ulong)*puVar22 >> 0x20) +
                                     (float)((ulong)puVar50[-1] >> 0x20),
                                     (float)*puVar22 + (float)puVar50[-1]);
              puVar50[-2] = CONCAT44((float)((ulong)uVar67 >> 0x20) +
                                     (float)((ulong)puVar50[-2] >> 0x20),
                                     (float)uVar67 + (float)puVar50[-2]);
              puVar50[1] = CONCAT44((float)((ulong)uVar72 >> 0x20) +
                                    (float)((ulong)puVar50[1] >> 0x20),
                                    (float)uVar72 + (float)puVar50[1]);
              *puVar50 = CONCAT44((float)((ulong)uVar71 >> 0x20) + (float)((ulong)*puVar50 >> 0x20),
                                  (float)uVar71 + (float)*puVar50);
              puVar50 = puVar50 + 4;
            } while (uVar55 != 0);
            uVar55 = uVar34;
            if (uVar34 == uVar60) goto LAB_00d66398;
          }
          lVar49 = uVar60 - uVar55;
          pfVar37 = (float *)((long)pvVar36 + uVar55 * 4);
          pfVar46 = (float *)((long)pvVar30 + uVar55 * 4);
          do {
                    /* catch() { ... } // from try @ 00d65cd0 with catch @ 00d66370 */
            lVar49 = lVar49 + -1;
            *pfVar46 = *pfVar37 + *pfVar46;
            pfVar37 = pfVar37 + 1;
            pfVar46 = pfVar46 + 1;
          } while (lVar49 != 0);
        }
      }
LAB_00d66398:
      spDeformTimeline_setFrame
                (CONCAT31(CONCAT21(CONCAT11(uVar2,uVar3),uVar4),uVar6),lVar43,uVar64,pvVar31);
                    /* try { // try from 00d663ac to 00e6642b has its CatchHandler @ 00d663ac
                       catch() { ... } // from try @ 00d663ac with catch @ 00d663ac
                       catch() { ... } // from try @ 00d66434 with catch @ 00d663ac
                       catch() { ... } // from try @ 00d667d4 with catch @ 00d663ac */
      if ((int)uVar64 < (int)(uVar57 - 1)) {
        FUN_00d66e58(__ptr,lVar43,uVar64);
      }
      uVar64 = uVar64 + 1;
                    /* try { // try from 00d660a8 to 00e660af has its CatchHandler @ 00d662ec */
    } while (uVar64 != uVar57);
  }
  _spFree(pvVar30);
  if ((void *)uVar41 == pvVar53) {
                    /* try { // try from 00d6642c to 00e66433 has its CatchHandler @ 00d66870 */
    uVar54 = 2;
    if (pvVar53 != (void *)0x0) {
      uVar54 = (long)pvVar53 << 1;
    }
                    /* try { // try from 00d66434 to 00e66453 has its CatchHandler @ 00d663ac */
    local_90 = (void *)_spMalloc(uVar54 << 3,
                                 "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonBinary.c"
                                 ,0x218);
                    /* try { // try from 00d66454 to 00e6645f has its CatchHandler @ 00d6686c */
    if ((pvVar53 != (void *)0x0) && (uVar54 != 0)) {
      uVar60 = uVar54;
      if (pvVar53 <= (ulong)((long)pvVar53 << 1)) {
        uVar60 = (ulong)pvVar53;
      }
                    /* try { // try from 00d66470 to 00e664b7 has its CatchHandler @ 00d66888 */
      memcpy(local_90,local_78,uVar60 << 3);
    }
    _spFree(local_78);
    pvVar53 = (void *)uVar54;
    local_78 = local_90;
  }
                    /* try { // try from 00d65f3c to 00e65f43 has its CatchHandler @ 00d66328 */
  *(long *)((long)local_90 + uVar41 * 8) = lVar43;
                    /* try { // try from 00d65f50 to 00e65f67 has its CatchHandler @ 00d66338 */
  uVar41 = uVar41 + 1;
  fVar70 = *(float *)(*(long *)(lVar43 + 0x20) + (long)(int)(uVar57 - 1) * 4);
  uVar63 = uVar63 + 1;
  if (fVar83 <= fVar70) {
    fVar83 = fVar70;
  }
  if (uVar63 == uVar62) goto LAB_00d6649c;
  goto LAB_00d65f70;
}

