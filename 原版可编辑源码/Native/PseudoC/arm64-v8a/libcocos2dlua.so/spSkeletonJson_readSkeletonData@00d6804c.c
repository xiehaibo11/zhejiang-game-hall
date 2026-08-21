
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * spSkeletonJson_readSkeletonData(float *param_1,undefined8 param_2)

{
  int *piVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  char *pcVar13;
  size_t sVar14;
  char *pcVar15;
  undefined8 uVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  undefined2 *puVar21;
  undefined4 *puVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  void *pvVar29;
  void *pvVar30;
  long *plVar31;
  void *pvVar32;
  float *pfVar33;
  undefined8 *puVar34;
  ulong uVar35;
  uint *puVar36;
  uint uVar37;
  float *pfVar38;
  ulong uVar39;
  undefined8 *puVar40;
  long *plVar41;
  long *plVar42;
  ulong uVar43;
  long *plVar44;
  ulong uVar45;
  uint uVar46;
  long *plVar47;
  long *plVar48;
  undefined4 uVar49;
  float fVar50;
  undefined4 uVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  undefined8 uVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  char *local_c0;
  char local_b4;
  char local_b3;
  undefined1 local_b2;
  long local_b0;
  
  lVar3 = tpidr_el0;
  local_b0 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 00d68094 to 00e6809b has its CatchHandler @ 00d68280 */
  _spFree(*(void **)(param_1 + 4));
  param_1[4] = 0.0;
  param_1[5] = 0.0;
  param_1[7] = 0.0;
                    /* try { // try from 00d680a4 to 00e680af has its CatchHandler @ 00d68248 */
  lVar10 = Json_create(param_2);
  if (lVar10 == 0) {
    uVar16 = Json_getError();
    pcVar13 = "Invalid skeleton JSON: ";
LAB_00d68d18:
    _spSkeletonJson_setError(param_1,0,pcVar13,uVar16);
    puVar11 = (undefined8 *)0x0;
  }
  else {
    puVar11 = (undefined8 *)spSkeletonData_create();
    lVar12 = Json_getItem(lVar10,"skeleton");
    if (lVar12 != 0) {
      pcVar13 = (char *)Json_getString(lVar12,"hash",0);
      sVar14 = strlen(pcVar13);
      pcVar13 = (char *)_spMalloc(sVar14 + 1,
                                  "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonJson.c"
                                  ,0x263);
                    /* try { // try from 00d68110 to 00e6820f has its CatchHandler @ 00d68284 */
      puVar11[1] = pcVar13;
      pcVar15 = (char *)Json_getString(lVar12,"hash",0);
      strcpy(pcVar13,pcVar15);
      pcVar13 = (char *)Json_getString(lVar12,"spine",0);
      sVar14 = strlen(pcVar13);
      pcVar13 = (char *)_spMalloc(sVar14 + 1,
                                  "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonJson.c"
                                  ,0x264);
      *puVar11 = pcVar13;
      pcVar15 = (char *)Json_getString(lVar12,"spine",0);
      strcpy(pcVar13,pcVar15);
      uVar49 = Json_getFloat(0,lVar12,"width");
      *(undefined4 *)(puVar11 + 2) = uVar49;
      uVar49 = Json_getFloat(0,lVar12,"height");
      *(undefined4 *)((long)puVar11 + 0x14) = uVar49;
    }
    lVar12 = Json_getItem(lVar10,"bones");
    uVar16 = _spMalloc((long)*(int *)(lVar12 + 0x14) << 3,
                       "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonJson.c"
                       ,0x26b);
    puVar11[4] = uVar16;
    plVar42 = *(long **)(lVar12 + 8);
    if (plVar42 != (long *)0x0) {
      lVar12 = 0;
                    /* try { // try from 00d68210 to 00e682bf has its CatchHandler @ 00d67e60 */
      do {
        pcVar13 = (char *)Json_getString(plVar42,"parent",0);
        if (pcVar13 == (char *)0x0) {
          lVar17 = 0;
        }
        else {
          lVar17 = spSkeletonData_findBone(puVar11,pcVar13);
                    /* try { // try from 00d683fc to 00e68413 has its CatchHandler @ 00d687ec */
          if (lVar17 == 0) {
            spSkeletonData_dispose(puVar11);
            pcVar15 = "Parent bone not found: ";
            goto LAB_00d6b748;
          }
        }
        uVar49 = *(undefined4 *)(puVar11 + 3);
        uVar16 = Json_getString(plVar42,"name",0);
                    /* catch() { ... } // from try @ 00d680a4 with catch @ 00d68248 */
        lVar17 = spBoneData_create(uVar49,uVar16,lVar17);
        fVar50 = (float)Json_getFloat(0,plVar42,"length");
        *(float *)(lVar17 + 0x18) = fVar50 * *param_1;
                    /* catch() { ... } // from try @ 00d68094 with catch @ 00d68280 */
                    /* catch() { ... } // from try @ 00d67f7c with catch @ 00d68284
                       catch() { ... } // from try @ 00d68110 with catch @ 00d68284 */
        fVar50 = (float)Json_getFloat(0,plVar42,"x");
        *(float *)(lVar17 + 0x1c) = fVar50 * *param_1;
                    /* catch() { ... } // from try @ 00d67f04 with catch @ 00d682a4 */
        fVar50 = (float)Json_getFloat(0,plVar42,&DAT_014a23fd);
        *(float *)(lVar17 + 0x20) = fVar50 * *param_1;
                    /* try { // try from 00d682c0 to 00e6839b has its CatchHandler @ 00d682c0
                       catch() { ... } // from try @ 00d682c0 with catch @ 00d682c0
                       catch() { ... } // from try @ 00d68754 with catch @ 00d682c0 */
        uVar49 = Json_getFloat(0,plVar42,"rotation");
        *(undefined4 *)(lVar17 + 0x24) = uVar49;
        uVar49 = Json_getFloat(0x3f800000,plVar42,"scaleX");
        *(undefined4 *)(lVar17 + 0x28) = uVar49;
        uVar49 = Json_getFloat(0x3f800000,plVar42,"scaleY");
        *(undefined4 *)(lVar17 + 0x2c) = uVar49;
        uVar49 = Json_getFloat(0,plVar42,"shearX");
        *(undefined4 *)(lVar17 + 0x30) = uVar49;
        uVar49 = Json_getFloat(0,plVar42,"shearY");
        *(undefined4 *)(lVar17 + 0x34) = uVar49;
        pcVar13 = (char *)Json_getString(plVar42,"transform","normal");
        *(undefined4 *)(lVar17 + 0x38) = 0;
        iVar5 = strcmp(pcVar13,"onlyTranslation");
        *(uint *)(lVar17 + 0x38) = (uint)(iVar5 == 0);
        iVar6 = strcmp(pcVar13,"noRotationOrReflection");
        uVar37 = 2;
        if (iVar6 != 0) {
          uVar37 = (uint)(iVar5 == 0);
        }
        *(uint *)(lVar17 + 0x38) = uVar37;
        iVar5 = strcmp(pcVar13,"noScale");
        uVar9 = 3;
        if (iVar5 != 0) {
          uVar9 = uVar37;
        }
                    /* try { // try from 00d6839c to 00e683b3 has its CatchHandler @ 00d687f0 */
        *(uint *)(lVar17 + 0x38) = uVar9;
        iVar5 = strcmp(pcVar13,"noScaleOrReflection");
        uVar37 = 4;
        if (iVar5 != 0) {
          uVar37 = uVar9;
        }
        *(uint *)(lVar17 + 0x38) = uVar37;
        *(long *)(puVar11[4] + lVar12) = lVar17;
        lVar12 = lVar12 + 8;
        *(int *)(puVar11 + 3) = *(int *)(puVar11 + 3) + 1;
        plVar42 = (long *)*plVar42;
      } while (plVar42 != (long *)0x0);
    }
    lVar12 = Json_getItem(lVar10,"slots");
    if (lVar12 != 0) {
      iVar5 = *(int *)(lVar12 + 0x14);
      *(int *)(puVar11 + 5) = iVar5;
      uVar16 = _spMalloc((long)iVar5 << 3,
                         "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonJson.c"
                         ,0x29a);
      puVar11[6] = uVar16;
      plVar42 = *(long **)(lVar12 + 8);
      if (plVar42 != (long *)0x0) {
                    /* try { // try from 00d68468 to 00e68473 has its CatchHandler @ 00d68874 */
        uVar43 = 0;
        fVar50 = -1.0;
                    /* try { // try from 00d68480 to 00e68497 has its CatchHandler @ 00d6887c */
        do {
          pcVar13 = (char *)Json_getString(plVar42,&DAT_0141acc3,0);
          lVar12 = spSkeletonData_findBone(puVar11,pcVar13);
          if (lVar12 == 0) {
            spSkeletonData_dispose(puVar11);
            pcVar15 = "Slot bone not found: ";
            goto LAB_00d6b748;
          }
          uVar16 = Json_getString(plVar42,"name",0);
                    /* try { // try from 00d684ec to 00e684f7 has its CatchHandler @ 00d68854 */
                    /* try { // try from 00d684f8 to 00e68503 has its CatchHandler @ 00d68800 */
          lVar12 = spSlotData_create(uVar43 & 0xffffffff,uVar16,lVar12);
          pcVar13 = (char *)Json_getString(plVar42,"color",0);
          if (pcVar13 != (char *)0x0) {
            sVar14 = strlen(pcVar13);
            fVar58 = fVar50;
            if (1 < sVar14) {
              local_b4 = *pcVar13;
                    /* try { // try from 00d68530 to 00e685bf has its CatchHandler @ 00d68854 */
              local_b3 = pcVar13[1];
              local_b2 = 0;
              uVar18 = strtoul(&local_b4,&local_c0,0x10);
              if (*local_c0 == '\0') {
                fVar58 = (float)(int)uVar18 / 255.0;
              }
            }
            sVar14 = strlen(pcVar13);
            fVar59 = fVar50;
            if (3 < sVar14) {
              local_b4 = pcVar13[2];
              local_b3 = pcVar13[3];
              local_b2 = 0;
              uVar18 = strtoul(&local_b4,&local_c0,0x10);
              if (*local_c0 == '\0') {
                fVar59 = (float)(int)uVar18 / 255.0;
              }
            }
            sVar14 = strlen(pcVar13);
            fVar60 = fVar50;
                    /* try { // try from 00d685d4 to 00e685df has its CatchHandler @ 00d687d0 */
            if (5 < sVar14) {
              local_b4 = pcVar13[4];
                    /* try { // try from 00d685e8 to 00e685f3 has its CatchHandler @ 00d687d4 */
              local_b3 = pcVar13[5];
              local_b2 = 0;
              uVar18 = strtoul(&local_b4,&local_c0,0x10);
              if (*local_c0 == '\0') {
                fVar60 = (float)(int)uVar18 / 255.0;
              }
            }
            sVar14 = strlen(pcVar13);
            fVar56 = fVar50;
            if (7 < sVar14) {
                    /* try { // try from 00d68634 to 00e68677 has its CatchHandler @ 00d68848 */
              local_b4 = pcVar13[6];
              local_b3 = pcVar13[7];
              local_b2 = 0;
              uVar18 = strtoul(&local_b4,&local_c0,0x10);
              if (*local_c0 == '\0') {
                fVar56 = (float)(int)uVar18 / 255.0;
              }
            }
            spColor_setFromFloats(fVar58,fVar59,fVar60,fVar56,lVar12 + 0x20);
          }
          pcVar13 = (char *)Json_getString(plVar42,&DAT_0141acde,0);
                    /* try { // try from 00d6869c to 00e686a3 has its CatchHandler @ 00d687cc */
          if (pcVar13 != (char *)0x0) {
            uVar16 = spColor_create();
                    /* try { // try from 00d686ac to 00e686b7 has its CatchHandler @ 00d687c8 */
            *(undefined8 *)(lVar12 + 0x30) = uVar16;
            sVar14 = strlen(pcVar13);
            fVar58 = fVar50;
                    /* try { // try from 00d686c0 to 00e686db has its CatchHandler @ 00d68848 */
            if (1 < sVar14) {
              local_b4 = *pcVar13;
              local_b3 = pcVar13[1];
              local_b2 = 0;
              uVar18 = strtoul(&local_b4,&local_c0,0x10);
                    /* try { // try from 00d686f4 to 00e686fb has its CatchHandler @ 00d68878 */
              if (*local_c0 == '\0') {
                fVar58 = (float)(int)uVar18 / 255.0;
              }
            }
            sVar14 = strlen(pcVar13);
            fVar59 = fVar50;
                    /* try { // try from 00d68714 to 00e6871f has its CatchHandler @ 00d687e8 */
            if (3 < sVar14) {
              local_b4 = pcVar13[2];
                    /* try { // try from 00d68728 to 00e6872f has its CatchHandler @ 00d687e4 */
              local_b3 = pcVar13[3];
              local_b2 = 0;
                    /* try { // try from 00d6873c to 00e68753 has its CatchHandler @ 00d6884c */
              uVar18 = strtoul(&local_b4,&local_c0,0x10);
              if (*local_c0 == '\0') {
                    /* try { // try from 00d68754 to 00e688b7 has its CatchHandler @ 00d682c0 */
                fVar59 = (float)(int)uVar18 / 255.0;
              }
            }
            sVar14 = strlen(pcVar13);
            fVar60 = fVar50;
            if (5 < sVar14) {
              local_b4 = pcVar13[4];
              local_b3 = pcVar13[5];
              local_b2 = 0;
              uVar18 = strtoul(&local_b4,&local_c0,0x10);
              if (*local_c0 == '\0') {
                fVar60 = (float)(int)uVar18 / 255.0;
              }
            }
            sVar14 = strlen(pcVar13);
            fVar56 = fVar50;
                    /* catch() { ... } // from try @ 00d686ac with catch @ 00d687c8 */
            if (7 < sVar14) {
                    /* catch() { ... } // from try @ 00d6869c with catch @ 00d687cc */
              local_b4 = pcVar13[6];
                    /* catch() { ... } // from try @ 00d685d4 with catch @ 00d687d0 */
                    /* catch() { ... } // from try @ 00d685e8 with catch @ 00d687d4 */
              local_b3 = pcVar13[7];
                    /* catch() { ... } // from try @ 00d68728 with catch @ 00d687e4 */
              local_b2 = 0;
                    /* catch() { ... } // from try @ 00d68714 with catch @ 00d687e8 */
                    /* catch() { ... } // from try @ 00d683fc with catch @ 00d687ec */
              uVar18 = strtoul(&local_b4,&local_c0,0x10);
                    /* catch() { ... } // from try @ 00d6839c with catch @ 00d687f0 */
              if (*local_c0 == '\0') {
                    /* catch() { ... } // from try @ 00d684f8 with catch @ 00d68800 */
                fVar56 = (float)(int)uVar18 / 255.0;
              }
            }
            spColor_setFromFloats(fVar58,fVar59,fVar60,fVar56,uVar16);
          }
          lVar17 = Json_getItem(plVar42,"attachment");
          if (lVar17 != 0) {
            spSlotData_setAttachmentName(lVar12,*(undefined8 *)(lVar17 + 0x18));
          }
                    /* catch() { ... } // from try @ 00d68634 with catch @ 00d68848
                       catch() { ... } // from try @ 00d686c0 with catch @ 00d68848 */
          lVar17 = Json_getItem(plVar42,"blend");
                    /* catch() { ... } // from try @ 00d6873c with catch @ 00d6884c */
          if (lVar17 != 0) {
                    /* catch() { ... } // from try @ 00d68498 with catch @ 00d68850 */
            pcVar13 = *(char **)(lVar17 + 0x18);
                    /* catch() { ... } // from try @ 00d684ec with catch @ 00d68854
                       catch() { ... } // from try @ 00d68530 with catch @ 00d68854 */
            iVar5 = strcmp(pcVar13,"additive");
            if (iVar5 == 0) {
              uVar49 = 1;
            }
            else {
                    /* catch() { ... } // from try @ 00d68468 with catch @ 00d68874 */
              iVar5 = strcmp(pcVar13,"multiply");
                    /* catch() { ... } // from try @ 00d686f4 with catch @ 00d68878 */
              if (iVar5 == 0) {
                uVar49 = 2;
              }
              else {
                    /* catch() { ... } // from try @ 00d68480 with catch @ 00d6887c */
                iVar5 = strcmp(pcVar13,"screen");
                if (iVar5 != 0) goto LAB_00d68498;
                uVar49 = 3;
              }
            }
            *(undefined4 *)(lVar12 + 0x38) = uVar49;
          }
LAB_00d68498:
                    /* try { // try from 00d68498 to 00e684a3 has its CatchHandler @ 00d68850 */
          *(long *)(puVar11[6] + uVar43 * 8) = lVar12;
          plVar42 = (long *)*plVar42;
          uVar43 = uVar43 + 1;
        } while (plVar42 != (long *)0x0);
      }
    }
    lVar12 = Json_getItem(lVar10,&DAT_0141acf3);
    if (lVar12 != 0) {
      iVar5 = *(int *)(lVar12 + 0x14);
      *(int *)(puVar11 + 0xe) = iVar5;
      uVar16 = _spMalloc((long)iVar5 << 3,
                         "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonJson.c"
                         ,0x2d4);
      puVar11[0xf] = uVar16;
      plVar42 = *(long **)(lVar12 + 8);
      if (plVar42 != (long *)0x0) {
        lVar12 = 0;
        do {
          Json_getString(plVar42,"name",0);
          lVar17 = spIkConstraintData_create();
          uVar49 = Json_getInt(plVar42,"order",0);
          *(undefined4 *)(lVar17 + 8) = uVar49;
          lVar19 = Json_getItem(plVar42,"bones");
          iVar5 = *(int *)(lVar19 + 0x14);
                    /* catch() { ... } // from try @ 00d68cb0 with catch @ 00d68960 */
          *(int *)(lVar17 + 0xc) = iVar5;
          uVar16 = _spMalloc((long)iVar5 << 3,
                             "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonJson.c"
                             ,0x2dd);
          *(undefined8 *)(lVar17 + 0x10) = uVar16;
          plVar47 = *(long **)(lVar19 + 8);
          if (plVar47 != (long *)0x0) {
            lVar19 = 0;
            do {
              uVar16 = spSkeletonData_findBone(puVar11,plVar47[3]);
              *(undefined8 *)(*(long *)(lVar17 + 0x10) + lVar19) = uVar16;
              if (*(long *)(*(long *)(lVar17 + 0x10) + lVar19) == 0) {
                spSkeletonData_dispose(puVar11);
                pcVar13 = (char *)plVar47[3];
                pcVar15 = "IK bone not found: ";
                goto LAB_00d6b748;
              }
              plVar47 = (long *)*plVar47;
              lVar19 = lVar19 + 8;
            } while (plVar47 != (long *)0x0);
          }
          uVar16 = Json_getString(plVar42,"target",0);
          lVar19 = spSkeletonData_findBone(puVar11,uVar16);
          *(long *)(lVar17 + 0x18) = lVar19;
          if (lVar19 == 0) goto LAB_00d6b72c;
          iVar5 = Json_getInt(plVar42,"bendPositive",1);
                    /* try { // try from 00d689e4 to 00e68caf has its CatchHandler @ 00d68cc4 */
          uVar49 = 1;
          if (iVar5 == 0) {
            uVar49 = 0xffffffff;
          }
          *(undefined4 *)(lVar17 + 0x20) = uVar49;
          uVar49 = Json_getFloat(0x3f800000,plVar42,&DAT_0141ad36);
          *(undefined4 *)(lVar17 + 0x24) = uVar49;
          *(long *)(puVar11[0xf] + lVar12 * 8) = lVar17;
          plVar42 = (long *)*plVar42;
          lVar12 = lVar12 + 1;
        } while (plVar42 != (long *)0x0);
      }
    }
    lVar12 = Json_getItem(lVar10,"transform");
    if (lVar12 != 0) {
      iVar5 = *(int *)(lVar12 + 0x14);
      *(int *)(puVar11 + 0x10) = iVar5;
      uVar16 = _spMalloc((long)iVar5 << 3,
                         "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonJson.c"
                         ,0x2fb);
      puVar11[0x11] = uVar16;
      plVar42 = *(long **)(lVar12 + 8);
      if (plVar42 != (long *)0x0) {
        lVar12 = 0;
        do {
          Json_getString(plVar42,"name",0);
          lVar17 = spTransformConstraintData_create();
          uVar49 = Json_getInt(plVar42,"order",0);
          *(undefined4 *)(lVar17 + 8) = uVar49;
          lVar19 = Json_getItem(plVar42,"bones");
          iVar5 = *(int *)(lVar19 + 0x14);
          *(int *)(lVar17 + 0xc) = iVar5;
          uVar16 = _spMalloc((long)iVar5 << 3,
                             "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonJson.c"
                             ,0x304);
          *(undefined8 *)(lVar17 + 0x10) = uVar16;
          plVar47 = *(long **)(lVar19 + 8);
          if (plVar47 != (long *)0x0) {
            lVar19 = 0;
            do {
              uVar16 = spSkeletonData_findBone(puVar11,plVar47[3]);
              *(undefined8 *)(*(long *)(lVar17 + 0x10) + lVar19) = uVar16;
              if (*(long *)(*(long *)(lVar17 + 0x10) + lVar19) == 0) {
                spSkeletonData_dispose(puVar11);
                    /* try { // try from 00d69c68 to 00e69c6f has its CatchHandler @ 00d69de4 */
                pcVar13 = (char *)plVar47[3];
                pcVar15 = "Transform bone not found: ";
                goto LAB_00d6b748;
              }
              plVar47 = (long *)*plVar47;
              lVar19 = lVar19 + 8;
            } while (plVar47 != (long *)0x0);
          }
          uVar16 = Json_getString(plVar42,"target",0);
          lVar19 = spSkeletonData_findBone(puVar11,uVar16);
          *(long *)(lVar17 + 0x18) = lVar19;
          if (lVar19 == 0) goto LAB_00d6b72c;
          uVar49 = Json_getInt(plVar42,"local",0);
          *(undefined4 *)(lVar17 + 0x4c) = uVar49;
          uVar49 = Json_getInt(plVar42,"relative",0);
          *(undefined4 *)(lVar17 + 0x48) = uVar49;
          uVar49 = Json_getFloat(0,plVar42,"rotation");
          *(undefined4 *)(lVar17 + 0x30) = uVar49;
          fVar50 = (float)Json_getFloat(0,plVar42,"x");
          *(float *)(lVar17 + 0x34) = fVar50 * *param_1;
          fVar50 = (float)Json_getFloat(0,plVar42,&DAT_014a23fd);
          *(float *)(lVar17 + 0x38) = fVar50 * *param_1;
          uVar49 = Json_getFloat(0,plVar42,"scaleX");
          *(undefined4 *)(lVar17 + 0x3c) = uVar49;
          uVar49 = Json_getFloat(0,plVar42,"scaleY");
          *(undefined4 *)(lVar17 + 0x40) = uVar49;
          uVar49 = Json_getFloat(0,plVar42,"shearY");
          *(undefined4 *)(lVar17 + 0x44) = uVar49;
          uVar49 = Json_getFloat(0x3f800000,plVar42,"rotateMix");
          *(undefined4 *)(lVar17 + 0x20) = uVar49;
          uVar49 = Json_getFloat(0x3f800000,plVar42,"translateMix");
          *(undefined4 *)(lVar17 + 0x24) = uVar49;
          uVar49 = Json_getFloat(0x3f800000,plVar42,"scaleMix");
          *(undefined4 *)(lVar17 + 0x28) = uVar49;
          uVar49 = Json_getFloat(0x3f800000,plVar42,"shearMix");
          *(undefined4 *)(lVar17 + 0x2c) = uVar49;
          *(long *)(puVar11[0x11] + lVar12 * 8) = lVar17;
          plVar42 = (long *)*plVar42;
          lVar12 = lVar12 + 1;
        } while (plVar42 != (long *)0x0);
      }
    }
    lVar12 = Json_getItem(lVar10,&DAT_0145a62a);
    if (lVar12 != 0) {
                    /* try { // try from 00d68cb0 to 00e68cdf has its CatchHandler @ 00d68960 */
      iVar5 = *(int *)(lVar12 + 0x14);
                    /* catch() { ... } // from try @ 00d689e4 with catch @ 00d68cc4 */
      *(int *)(puVar11 + 0x12) = iVar5;
      uVar16 = _spMalloc((long)iVar5 << 3,
                         "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonJson.c"
                         ,0x32d);
      puVar11[0x13] = uVar16;
      plVar42 = *(long **)(lVar12 + 8);
      if (plVar42 != (long *)0x0) {
                    /* try { // try from 00d68ce0 to 00e68e9b has its CatchHandler @ 00d68ce0
                       catch() { ... } // from try @ 00d68ce0 with catch @ 00d68ce0
                       catch() { ... } // from try @ 00d68ea8 with catch @ 00d68ce0 */
        lVar17 = 0;
        do {
          Json_getString(plVar42,"name",0);
          lVar19 = spPathConstraintData_create();
          uVar49 = Json_getInt(plVar42,"order",0);
          *(undefined4 *)(lVar19 + 8) = uVar49;
          lVar20 = Json_getItem(plVar42,"bones");
          iVar5 = *(int *)(lVar20 + 0x14);
          *(int *)(lVar19 + 0xc) = iVar5;
          uVar16 = _spMalloc((long)iVar5 << 3,
                             "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonJson.c"
                             ,0x337);
          *(undefined8 *)(lVar19 + 0x10) = uVar16;
          plVar47 = *(long **)(lVar20 + 8);
          if (plVar47 != (long *)0x0) {
            lVar20 = 0;
            do {
              uVar16 = spSkeletonData_findBone(puVar11,plVar47[3]);
              *(undefined8 *)(*(long *)(lVar19 + 0x10) + lVar20) = uVar16;
              if (*(long *)(*(long *)(lVar19 + 0x10) + lVar20) == 0) {
                spSkeletonData_dispose(puVar11);
                pcVar15 = "Path bone not found: ";
                pcVar13 = (char *)plVar47[3];
                goto LAB_00d6b748;
              }
              plVar47 = (long *)*plVar47;
              lVar20 = lVar20 + 8;
            } while (plVar47 != (long *)0x0);
          }
          uVar16 = Json_getString(plVar42,"target",0);
          lVar20 = spSkeletonData_findSlot(puVar11,uVar16);
          *(long *)(lVar19 + 0x18) = lVar20;
          if (lVar20 == 0) {
            spSkeletonData_dispose(puVar11);
                    /* catch() { ... } // from try @ 00d6b678 with catch @ 00d6b7bc */
            pcVar15 = "Target slot not found: ";
            pcVar13 = _DAT_00000028;
            goto LAB_00d6b748;
          }
          pcVar13 = (char *)Json_getString(plVar42,"positionMode","percent");
          iVar5 = strcmp(pcVar13,"fixed");
          if (iVar5 == 0) {
                    /* try { // try from 00d68e9c to 00e68ea7 has its CatchHandler @ 00d68ee4 */
            uVar49 = 0;
LAB_00d68ea4:
            *(undefined4 *)(lVar19 + 0x20) = uVar49;
          }
          else {
            iVar5 = strcmp(pcVar13,"percent");
            if (iVar5 == 0) {
              uVar49 = 1;
              goto LAB_00d68ea4;
            }
          }
                    /* try { // try from 00d68ea8 to 00e68eff has its CatchHandler @ 00d68ce0 */
          pcVar13 = (char *)Json_getString(plVar42,"spacingMode","length");
          iVar5 = strcmp(pcVar13,"length");
          if (iVar5 == 0) {
            uVar49 = 0;
LAB_00d68f0c:
            *(undefined4 *)(lVar19 + 0x24) = uVar49;
          }
          else {
            iVar5 = strcmp(pcVar13,"fixed");
                    /* catch() { ... } // from try @ 00d68e9c with catch @ 00d68ee4 */
            if (iVar5 == 0) {
              uVar49 = 1;
              goto LAB_00d68f0c;
            }
            iVar5 = strcmp(pcVar13,"percent");
            if (iVar5 == 0) {
              uVar49 = 2;
              goto LAB_00d68f0c;
            }
          }
          pcVar13 = (char *)Json_getString(plVar42,"rotateMode","tangent");
          iVar5 = strcmp(pcVar13,"tangent");
          if (iVar5 == 0) {
            uVar49 = 0;
LAB_00d68f80:
            *(undefined4 *)(lVar19 + 0x28) = uVar49;
          }
          else {
            iVar5 = strcmp(pcVar13,"chain");
            if (iVar5 == 0) {
              uVar49 = 1;
              goto LAB_00d68f80;
            }
            iVar5 = strcmp(pcVar13,"chainScale");
            if (iVar5 == 0) {
              uVar49 = 2;
              goto LAB_00d68f80;
            }
          }
          uVar49 = Json_getFloat(0,plVar42,"rotation");
          *(undefined4 *)(lVar19 + 0x2c) = uVar49;
          fVar50 = (float)Json_getFloat(0,plVar42,"position");
          *(float *)(lVar19 + 0x30) = fVar50;
          if (*(int *)(lVar19 + 0x20) == 0) {
            *(float *)(lVar19 + 0x30) = fVar50 * *param_1;
          }
          fVar50 = (float)Json_getFloat(0,plVar42,"spacing");
          *(float *)(lVar19 + 0x34) = fVar50;
          if (*(uint *)(lVar19 + 0x24) < 2) {
            *(float *)(lVar19 + 0x34) = fVar50 * *param_1;
          }
          uVar49 = Json_getFloat(0x3f800000,plVar42,"rotateMix");
          *(undefined4 *)(lVar19 + 0x38) = uVar49;
          uVar49 = Json_getFloat(0x3f800000,plVar42,"translateMix");
          *(undefined4 *)(lVar19 + 0x3c) = uVar49;
          *(long *)(puVar11[0x13] + lVar17 * 8) = lVar19;
          plVar42 = (long *)*plVar42;
          lVar17 = lVar17 + 1;
        } while (plVar42 != (long *)0x0);
      }
    }
    lVar17 = Json_getItem(lVar10,"skins");
    if (lVar17 != 0) {
                    /* catch() { ... } // from try @ 00d69060 with catch @ 00d69024 */
      uVar16 = _spMalloc((long)*(int *)(lVar17 + 0x14) << 3,
                         "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonJson.c"
                         ,0x367);
      puVar11[8] = uVar16;
      plVar42 = *(long **)(lVar17 + 8);
      if (plVar42 != (long *)0x0) {
                    /* try { // try from 00d69058 to 00e6905f has its CatchHandler @ 00d69074 */
                    /* try { // try from 00d69060 to 00e6908f has its CatchHandler @ 00d69024 */
                    /* catch() { ... } // from try @ 00d69058 with catch @ 00d69074 */
        fVar50 = -1.0;
        do {
          uVar16 = spSkin_create(plVar42[5]);
          iVar5 = *(int *)(puVar11 + 7);
          *(int *)(puVar11 + 7) = iVar5 + 1;
          *(undefined8 *)(puVar11[8] + (long)iVar5 * 8) = uVar16;
          iVar5 = strcmp((char *)plVar42[5],"default");
          if (iVar5 == 0) {
            puVar11[9] = uVar16;
          }
          for (plVar47 = (long *)plVar42[1]; plVar47 != (long *)0x0; plVar47 = (long *)*plVar47) {
            uVar49 = spSkeletonData_findSlotIndex(puVar11,plVar47[5]);
            for (plVar48 = (long *)plVar47[1]; plVar48 != (long *)0x0; plVar48 = (long *)*plVar48) {
              while( true ) {
                lVar17 = plVar48[5];
                uVar54 = Json_getString(plVar48,"name",lVar17);
                pcVar15 = (char *)Json_getString(plVar48,&DAT_0145a62a,uVar54);
                pcVar13 = (char *)Json_getString(plVar48,"type","region");
                iVar5 = strcmp(pcVar13,"region");
                if (iVar5 == 0) {
                  uVar55 = 0;
                }
                else {
                  iVar5 = strcmp(pcVar13,"mesh");
                  if (iVar5 == 0) {
                    uVar55 = 2;
                  }
                  else {
                    iVar5 = strcmp(pcVar13,"linkedmesh");
                    if (iVar5 == 0) {
                      uVar55 = 3;
                    }
                    else {
                      iVar5 = strcmp(pcVar13,"boundingbox");
                      if (iVar5 == 0) {
                        uVar55 = 1;
                      }
                      else {
                        iVar5 = strcmp(pcVar13,"path");
                        if (iVar5 == 0) {
                          uVar55 = 4;
                        }
                        else {
                          iVar5 = strcmp(pcVar13,"clipping");
                          if (iVar5 != 0) {
                    /* try { // try from 00d6b708 to 00e6b817 has its CatchHandler @ 00d6b50c */
                            spSkeletonData_dispose(puVar11);
                            pcVar15 = "Unknown attachment type: ";
                            goto LAB_00d6b748;
                          }
                          uVar55 = 6;
                        }
                      }
                    }
                  }
                }
                lVar19 = spAttachmentLoader_createAttachment
                                   (*(undefined8 *)(param_1 + 2),uVar16,uVar55,uVar54,pcVar15);
                if (lVar19 != 0) break;
                if (**(long **)(param_1 + 2) != 0) {
                  spSkeletonData_dispose(puVar11);
                  pcVar15 = (char *)**(undefined8 **)(param_1 + 2);
                  pcVar13 = (char *)(*(undefined8 **)(param_1 + 2))[1];
                  goto LAB_00d6b748;
                }
                plVar48 = (long *)*plVar48;
                if (plVar48 == (long *)0x0) goto LAB_00d690dc;
              }
              switch(*(undefined4 *)(lVar19 + 8)) {
              case 0:
                if (lVar12 != 0) {
                  sVar14 = strlen(pcVar15);
                  pcVar13 = (char *)_spMalloc(sVar14 + 1,
                                              "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonJson.c"
                                              ,0x39d);
                  *(char **)(lVar19 + 0x20) = pcVar13;
                  strcpy(pcVar13,pcVar15);
                }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d695d0 with catch @ 00d69524
                        */
                fVar58 = (float)Json_getFloat(0,plVar48,"x");
                *(float *)(lVar19 + 0x28) = fVar58 * *param_1;
                fVar58 = (float)Json_getFloat(0,plVar48,&DAT_014a23fd);
                *(float *)(lVar19 + 0x2c) = fVar58 * *param_1;
                uVar51 = Json_getFloat(0x3f800000,plVar48,"scaleX");
                *(undefined4 *)(lVar19 + 0x30) = uVar51;
                uVar51 = Json_getFloat(0x3f800000,plVar48,"scaleY");
                *(undefined4 *)(lVar19 + 0x34) = uVar51;
                uVar51 = Json_getFloat(0,plVar48,"rotation");
                *(undefined4 *)(lVar19 + 0x38) = uVar51;
                fVar58 = (float)Json_getFloat(0x42000000,plVar48,"width");
                    /* try { // try from 00d695cc to 00e695cf has its CatchHandler @ 00d696bc */
                    /* try { // try from 00d695d0 to 00e6965f has its CatchHandler @ 00d69524 */
                *(float *)(lVar19 + 0x3c) = fVar58 * *param_1;
                fVar58 = (float)Json_getFloat(0x42000000,plVar48,"height");
                *(float *)(lVar19 + 0x40) = fVar58 * *param_1;
                pcVar13 = (char *)Json_getString(plVar48,"color",0);
                if (pcVar13 != (char *)0x0) {
                  sVar14 = strlen(pcVar13);
                  fVar58 = fVar50;
                  if (1 < sVar14) {
                    local_b4 = *pcVar13;
                    local_b3 = pcVar13[1];
                    local_b2 = 0;
                    uVar43 = strtoul(&local_b4,&local_c0,0x10);
                    if (*local_c0 == '\0') {
                      fVar58 = (float)(int)uVar43 / 255.0;
                    }
                  }
                  sVar14 = strlen(pcVar13);
                    /* try { // try from 00d69660 to 00e69663 has its CatchHandler @ 00d696b8 */
                  fVar59 = fVar50;
                  if (3 < sVar14) {
                    local_b4 = pcVar13[2];
                    local_b3 = pcVar13[3];
                    local_b2 = 0;
                    uVar43 = strtoul(&local_b4,&local_c0,0x10);
                    if (*local_c0 == '\0') {
                      fVar59 = (float)(int)uVar43 / 255.0;
                    }
                  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d69660 with catch @ 00d696b8
                        */
                  sVar14 = strlen(pcVar13);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d695cc with catch @ 00d696bc
                        */
                  fVar60 = fVar50;
                  if (5 < sVar14) {
                    local_b4 = pcVar13[4];
                    local_b3 = pcVar13[5];
                    local_b2 = 0;
                    uVar43 = strtoul(&local_b4,&local_c0,0x10);
                    if (*local_c0 == '\0') {
                      fVar60 = (float)(int)uVar43 / 255.0;
                    }
                  }
                  sVar14 = strlen(pcVar13);
                  fVar56 = fVar50;
                  if (7 < sVar14) {
                    local_b4 = pcVar13[6];
                    local_b3 = pcVar13[7];
                    local_b2 = 0;
                    uVar43 = strtoul(&local_b4,&local_c0,0x10);
                    if (*local_c0 == '\0') {
                      fVar56 = (float)(int)uVar43 / 255.0;
                    }
                  }
                  spColor_setFromFloats(fVar58,fVar59,fVar60,fVar56,lVar19 + 0x44);
                }
                spRegionAttachment_updateOffset(lVar19);
                goto LAB_00d69bd8;
              case 1:
                iVar5 = Json_getInt(plVar48,"vertexCount",0);
                FUN_00d6b8cc(param_1,plVar48,lVar19,iVar5 << 1);
                *(int *)(lVar19 + 0x30) = iVar5 << 1;
                goto LAB_00d69bd8;
              case 2:
              case 3:
                sVar14 = strlen(pcVar15);
                pcVar13 = (char *)_spMalloc(sVar14 + 1,
                                            "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonJson.c"
                                            ,0x3b8);
                *(char **)(lVar19 + 0x80) = pcVar13;
                strcpy(pcVar13,pcVar15);
                pcVar13 = (char *)Json_getString(plVar48,"color",0);
                if (pcVar13 != (char *)0x0) {
                  sVar14 = strlen(pcVar13);
                  fVar58 = fVar50;
                  if (1 < sVar14) {
                    local_b4 = *pcVar13;
                    local_b3 = pcVar13[1];
                    local_b2 = 0;
                    uVar43 = strtoul(&local_b4,&local_c0,0x10);
                    if (*local_c0 == '\0') {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d69334 with catch @ 00d692c4
                       catch(type#1 @ 00000000) { ... } // from try @ 00d69364 with catch @ 00d692c4
                       catch(type#1 @ 00000000) { ... } // from try @ 00d69394 with catch @ 00d692c4
                       catch(type#1 @ 00000000) { ... } // from try @ 00d693bc with catch @ 00d692c4
                       catch(type#1 @ 00000000) { ... } // from try @ 00d693e8 with catch @ 00d692c4
                        */
                      fVar58 = (float)(int)uVar43 / 255.0;
                    }
                  }
                  sVar14 = strlen(pcVar13);
                  fVar59 = fVar50;
                  if (3 < sVar14) {
                    local_b4 = pcVar13[2];
                    local_b3 = pcVar13[3];
                    local_b2 = 0;
                    uVar43 = strtoul(&local_b4,&local_c0,0x10);
                    if (*local_c0 == '\0') {
                      fVar59 = (float)(int)uVar43 / 255.0;
                    }
                  }
                    /* try { // try from 00d6932c to 00e69333 has its CatchHandler @ 00d69428 */
                  sVar14 = strlen(pcVar13);
                  fVar60 = fVar50;
                    /* try { // try from 00d69334 to 00e69357 has its CatchHandler @ 00d692c4 */
                  if (5 < sVar14) {
                    local_b4 = pcVar13[4];
                    local_b3 = pcVar13[5];
                    local_b2 = 0;
                    /* try { // try from 00d69358 to 00e69363 has its CatchHandler @ 00d69428 */
                    uVar43 = strtoul(&local_b4,&local_c0,0x10);
                    /* try { // try from 00d69364 to 00e6938b has its CatchHandler @ 00d692c4 */
                    if (*local_c0 == '\0') {
                      fVar60 = (float)(int)uVar43 / 255.0;
                    }
                  }
                  sVar14 = strlen(pcVar13);
                  fVar56 = fVar50;
                    /* try { // try from 00d6938c to 00e69393 has its CatchHandler @ 00d69424 */
                  if (7 < sVar14) {
                    /* try { // try from 00d69394 to 00e693b3 has its CatchHandler @ 00d692c4 */
                    local_b4 = pcVar13[6];
                    local_b3 = pcVar13[7];
                    local_b2 = 0;
                    /* try { // try from 00d693b4 to 00e693bb has its CatchHandler @ 00d69424 */
                    uVar43 = strtoul(&local_b4,&local_c0,0x10);
                    /* try { // try from 00d693bc to 00e693db has its CatchHandler @ 00d692c4 */
                    if (*local_c0 == '\0') {
                      fVar56 = (float)(int)uVar43 / 255.0;
                    }
                  }
                    /* try { // try from 00d693dc to 00e693e7 has its CatchHandler @ 00d69424 */
                    /* try { // try from 00d693e8 to 00e6942b has its CatchHandler @ 00d692c4 */
                  spColor_setFromFloats(fVar58,fVar59,fVar60,fVar56,lVar19 + 0xa8);
                }
                fVar58 = (float)Json_getFloat(0x42000000,plVar48,"width");
                *(float *)(lVar19 + 0xd8) = fVar58 * *param_1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d6938c with catch @ 00d69424
                       catch(type#1 @ 00000000) { ... } // from try @ 00d693b4 with catch @ 00d69424
                       catch(type#1 @ 00000000) { ... } // from try @ 00d693dc with catch @ 00d69424
                        */
                fVar58 = (float)Json_getFloat(0x42000000,plVar48,"height");
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d6932c with catch @ 00d69428
                       catch(type#1 @ 00000000) { ... } // from try @ 00d69358 with catch @ 00d69428
                        */
                    /* catch() { ... } // from try @ 00d69490 with catch @ 00d6942c */
                *(float *)(lVar19 + 0xdc) = fVar58 * *param_1;
                lVar20 = Json_getItem(plVar48,"parent");
                if (lVar20 == 0) {
                  lVar20 = Json_getItem(plVar48,"triangles");
                  iVar5 = *(int *)(lVar20 + 0x14);
                  *(int *)(lVar19 + 0x98) = iVar5;
                  puVar21 = (undefined2 *)
                            _spMalloc((long)iVar5 << 1,
                                      "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonJson.c"
                                      ,0x3cb);
                  *(undefined2 **)(lVar19 + 0xa0) = puVar21;
                    /* catch() { ... } // from try @ 00d69990 with catch @ 00d69af8 */
                  for (plVar41 = *(long **)(lVar20 + 8); plVar41 != (long *)0x0;
                      plVar41 = (long *)*plVar41) {
                    *puVar21 = (short)*(undefined4 *)(plVar41 + 4);
                    puVar21 = puVar21 + 1;
                  }
                    /* catch() { ... } // from try @ 00d69980 with catch @ 00d69b10
                       catch() { ... } // from try @ 00d69aa4 with catch @ 00d69b10 */
                    /* catch() { ... } // from try @ 00d69950 with catch @ 00d69b14 */
                  lVar20 = Json_getItem(plVar48,&DAT_0141ae29);
                  iVar5 = *(int *)(lVar20 + 0x14);
                  puVar22 = (undefined4 *)
                            _spMalloc((long)iVar5 << 2,
                                      "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonJson.c"
                                      ,0x3d1);
                  *(undefined4 **)(lVar19 + 0x88) = puVar22;
                  for (plVar41 = *(long **)(lVar20 + 8); plVar41 != (long *)0x0;
                      plVar41 = (long *)*plVar41) {
                    /* try { // try from 00d69b48 to 00e69bef has its CatchHandler @ 00d69b48
                       catch() { ... } // from try @ 00d69b48 with catch @ 00d69b48
                       catch() { ... } // from try @ 00d69c88 with catch @ 00d69b48
                       catch() { ... } // from try @ 00d69d80 with catch @ 00d69b48 */
                    *puVar22 = *(undefined4 *)((long)plVar41 + 0x24);
                    puVar22 = puVar22 + 1;
                  }
                  FUN_00d6b8cc(param_1,plVar48,lVar19,iVar5);
                  spMeshAttachment_updateUVs(lVar19);
                  uVar51 = Json_getInt(plVar48,&DAT_0141ae2d,0);
                  *(undefined4 *)(lVar19 + 0xb8) = uVar51;
                  lVar20 = Json_getItem(plVar48,"edges");
                  if (lVar20 != 0) {
                    iVar5 = *(int *)(lVar20 + 0x14);
                    *(int *)(lVar19 + 0xcc) = iVar5;
                    puVar22 = (undefined4 *)
                              _spMalloc((long)iVar5 << 2,
                                        "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonJson.c"
                                        ,0x3de);
                    *(undefined4 **)(lVar19 + 0xd0) = puVar22;
                    for (plVar41 = *(long **)(lVar20 + 8); plVar41 != (long *)0x0;
                        plVar41 = (long *)*plVar41) {
                      *puVar22 = *(undefined4 *)(plVar41 + 4);
                      puVar22 = puVar22 + 1;
                    }
                  }
                  goto LAB_00d69bd8;
                }
                    /* try { // try from 00d69468 to 00e6948f has its CatchHandler @ 00d694a0 */
                uVar51 = Json_getInt(plVar48,"deform",1);
                *(undefined4 *)(lVar19 + 200) = uVar51;
                uVar54 = Json_getString(plVar48,&DAT_014190b3,0);
                fVar58 = param_1[7];
                uVar55 = *(undefined8 *)(lVar20 + 0x18);
                    /* try { // try from 00d69490 to 00e694d7 has its CatchHandler @ 00d6942c */
                if (fVar58 == param_1[8]) {
                    /* catch() { ... } // from try @ 00d69468 with catch @ 00d694a0 */
                  fVar59 = 1.12104e-44;
                  if (3 < (int)fVar58) {
                    fVar59 = (float)((int)fVar58 << 1);
                  }
                  param_1[8] = fVar59;
                  pvVar30 = (void *)_spMalloc(-(ulong)((uint)fVar59 >> 0x1f) & 0xffffffe000000000 |
                                              (ulong)(uint)fVar59 << 5,
                                              "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonJson.c"
                                              ,0x85);
                  memcpy(pvVar30,*(void **)(param_1 + 10),(long)(int)param_1[7] << 5);
                  _spFree(*(void **)(param_1 + 10));
                  fVar58 = param_1[7];
                  *(void **)(param_1 + 10) = pvVar30;
                }
                else {
                  pvVar30 = *(void **)(param_1 + 10);
                }
                    /* try { // try from 00d69bf0 to 00e69bff has its CatchHandler @ 00d69e18 */
                puVar34 = (undefined8 *)((long)pvVar30 + (long)(int)fVar58 * 0x20);
                param_1[7] = (float)((int)fVar58 + 1);
                *puVar34 = uVar55;
                puVar34[1] = uVar54;
                puVar34[3] = lVar19;
                *(undefined4 *)(puVar34 + 2) = uVar49;
                break;
              case 4:
                uVar51 = Json_getInt(plVar48,"closed",0);
                *(undefined4 *)(lVar19 + 0x58) = uVar51;
                uVar51 = Json_getInt(plVar48,"constantSpeed",1);
                *(undefined4 *)(lVar19 + 0x5c) = uVar51;
                iVar5 = Json_getInt(plVar48,"vertexCount",0);
                FUN_00d6b8cc(param_1,plVar48,lVar19,iVar5 << 1);
                uVar37 = iVar5 / 3;
                *(uint *)(lVar19 + 0x48) = uVar37;
                uVar54 = _spMalloc(-(ulong)(uVar37 >> 0x1f) & 0xfffffffc00000000 |
                                   (ulong)uVar37 << 2,
                                   "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonJson.c"
                                   ,0x3fc);
                *(undefined8 *)(lVar19 + 0x50) = uVar54;
                lVar20 = Json_getItem(plVar48,"lengths");
                plVar41 = *(long **)(lVar20 + 8);
                if (plVar41 != (long *)0x0) {
                  pfVar33 = *(float **)(lVar19 + 0x50);
                  do {
                    *pfVar33 = *(float *)((long)plVar41 + 0x24) * *param_1;
                    plVar41 = (long *)*plVar41;
                    pfVar33 = pfVar33 + 1;
                  } while (plVar41 != (long *)0x0);
                }
                break;
              case 5:
                fVar58 = (float)Json_getFloat(0,plVar48,"x");
                *(float *)(lVar19 + 0x48) = fVar58 * *param_1;
                fVar58 = (float)Json_getFloat(0,plVar48,&DAT_014a23fd);
                *(float *)(lVar19 + 0x4c) = fVar58 * *param_1;
                    /* catch() { ... } // from try @ 00d69844 with catch @ 00d69808 */
                uVar51 = Json_getFloat(0,plVar48,"rotation");
                *(undefined4 *)(lVar19 + 0x50) = uVar51;
                pcVar13 = (char *)Json_getString(plVar48,"color",0);
                if (pcVar13 != (char *)0x0) {
                  sVar14 = strlen(pcVar13);
                  fVar58 = fVar50;
                  if (1 < sVar14) {
                    /* try { // try from 00d6983c to 00e69843 has its CatchHandler @ 00d69858 */
                    local_b4 = *pcVar13;
                    /* try { // try from 00d69844 to 00e69873 has its CatchHandler @ 00d69808 */
                    local_b3 = pcVar13[1];
                    local_b2 = 0;
                    /* catch() { ... } // from try @ 00d6983c with catch @ 00d69858 */
                    uVar43 = strtoul(&local_b4,&local_c0,0x10);
                    if (*local_c0 == '\0') {
                      fVar58 = (float)(int)uVar43 / 255.0;
                    }
                  }
                  sVar14 = strlen(pcVar13);
                  fVar59 = fVar50;
                  if (3 < sVar14) {
                    local_b4 = pcVar13[2];
                    local_b3 = pcVar13[3];
                    /* try { // try from 00d698ac to 00e6994f has its CatchHandler @ 00d698ac
                       catch() { ... } // from try @ 00d698ac with catch @ 00d698ac
                       catch() { ... } // from try @ 00d699a0 with catch @ 00d698ac
                       catch() { ... } // from try @ 00d69aac with catch @ 00d698ac */
                    local_b2 = 0;
                    uVar43 = strtoul(&local_b4,&local_c0,0x10);
                    if (*local_c0 == '\0') {
                      fVar59 = (float)(int)uVar43 / 255.0;
                    }
                  }
                  sVar14 = strlen(pcVar13);
                  fVar60 = fVar50;
                  if (5 < sVar14) {
                    local_b4 = pcVar13[4];
                    local_b3 = pcVar13[5];
                    local_b2 = 0;
                    uVar43 = strtoul(&local_b4,&local_c0,0x10);
                    if (*local_c0 == '\0') {
                      fVar60 = (float)(int)uVar43 / 255.0;
                    }
                  }
                  sVar14 = strlen(pcVar13);
                  fVar56 = fVar50;
                  if (7 < sVar14) {
                    local_b4 = pcVar13[6];
                    /* try { // try from 00d69950 to 00e69957 has its CatchHandler @ 00d69b14 */
                    local_b3 = pcVar13[7];
                    local_b2 = 0;
                    uVar43 = strtoul(&local_b4,&local_c0,0x10);
                    if (*local_c0 == '\0') {
                    /* try { // try from 00d69980 to 00e69987 has its CatchHandler @ 00d69b10 */
                      fVar56 = (float)(int)uVar43 / 255.0;
                    }
                  }
                    /* try { // try from 00d69990 to 00e6999f has its CatchHandler @ 00d69af8 */
                  spColor_setFromFloats(fVar58,fVar59,fVar60,fVar56,lVar19 + 0x54);
                    /* try { // try from 00d699a0 to 00e69aa3 has its CatchHandler @ 00d698ac */
                }
                break;
              case 6:
                lVar20 = Json_getString(plVar48,&DAT_012f89ed,0);
                if (lVar20 != 0) {
                  uVar54 = spSkeletonData_findSlot(puVar11,lVar20);
                  *(undefined8 *)(lVar19 + 0x48) = uVar54;
                }
                    /* try { // try from 00d69aa4 to 00e69aab has its CatchHandler @ 00d69b10 */
                iVar5 = Json_getInt(plVar48,"vertexCount",0);
                    /* try { // try from 00d69aac to 00e69b47 has its CatchHandler @ 00d698ac */
                FUN_00d6b8cc(param_1,plVar48,lVar19,iVar5 << 1);
LAB_00d69bd8:
                spAttachmentLoader_configureAttachment(*(undefined8 *)(param_1 + 2),lVar19);
              }
              spSkin_addAttachment(uVar16,uVar49,lVar17,lVar19);
                    /* try { // try from 00d69c34 to 00e69c3f has its CatchHandler @ 00d69de8 */
            }
LAB_00d690dc:
          }
          plVar42 = (long *)*plVar42;
        } while (plVar42 != (long *)0x0);
      }
    }
                    /* try { // try from 00d69c78 to 00e69c87 has its CatchHandler @ 00d69dcc */
                    /* try { // try from 00d69c88 to 00e69d77 has its CatchHandler @ 00d69b48 */
    if (0 < (int)param_1[7]) {
      lVar17 = 0;
      lVar12 = 0;
      do {
        lVar19 = *(long *)(param_1 + 10);
        if (*(long *)(lVar19 + lVar17 + 8) == 0) {
          lVar20 = puVar11[9];
        }
        else {
          lVar20 = spSkeletonData_findSkin(puVar11);
        }
        if (lVar20 == 0) {
          spSkeletonData_dispose(puVar11);
          uVar16 = *(undefined8 *)(lVar19 + lVar17 + 8);
          pcVar13 = "Skin not found: ";
          goto LAB_00d68d18;
        }
        puVar34 = (undefined8 *)(lVar19 + lVar17);
        lVar20 = spSkin_getAttachment(lVar20,*(undefined4 *)(puVar34 + 2),*puVar34);
        if (lVar20 == 0) {
          spSkeletonData_dispose(puVar11);
          uVar16 = *(undefined8 *)(lVar19 + lVar17);
          pcVar13 = "Parent mesh not found: ";
          goto LAB_00d68d18;
        }
        spMeshAttachment_setParentMesh(puVar34[3],lVar20);
        spMeshAttachment_updateUVs(puVar34[3]);
        spAttachmentLoader_configureAttachment(*(undefined8 *)(param_1 + 2),puVar34[3]);
        lVar12 = lVar12 + 1;
        lVar17 = lVar17 + 0x20;
      } while (lVar12 < (int)param_1[7]);
    }
    lVar12 = Json_getItem(lVar10,"events");
    if (lVar12 != 0) {
      iVar5 = *(int *)(lVar12 + 0x14);
      *(int *)(puVar11 + 10) = iVar5;
      uVar16 = _spMalloc((long)iVar5 << 3,
                         "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonJson.c"
                         ,0x444);
      puVar11[0xb] = uVar16;
      plVar42 = *(long **)(lVar12 + 8);
      if (plVar42 != (long *)0x0) {
        lVar12 = 0;
        do {
          lVar17 = spEventData_create(plVar42[5]);
          uVar49 = Json_getInt(plVar42,"int",0);
          *(undefined4 *)(lVar17 + 8) = uVar49;
          uVar49 = Json_getFloat(0,plVar42,"float");
                    /* catch() { ... } // from try @ 00d69c78 with catch @ 00d69dcc */
          *(undefined4 *)(lVar17 + 0xc) = uVar49;
          pcVar13 = (char *)Json_getString(plVar42,"string",0);
          if (pcVar13 != (char *)0x0) {
            sVar14 = strlen(pcVar13);
                    /* catch() { ... } // from try @ 00d69c68 with catch @ 00d69de4
                       catch() { ... } // from try @ 00d69d78 with catch @ 00d69de4 */
                    /* catch() { ... } // from try @ 00d69c34 with catch @ 00d69de8 */
            pcVar15 = (char *)_spMalloc(sVar14 + 1,
                                        "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonJson.c"
                                        ,0x44a);
            *(char **)(lVar17 + 0x10) = pcVar15;
            strcpy(pcVar15,pcVar13);
          }
                    /* try { // try from 00d69d78 to 00e69d7f has its CatchHandler @ 00d69de4 */
                    /* try { // try from 00d69d80 to 00e69e2b has its CatchHandler @ 00d69b48 */
          *(long *)(puVar11[0xb] + lVar12) = lVar17;
          plVar42 = (long *)*plVar42;
          lVar12 = lVar12 + 8;
        } while (plVar42 != (long *)0x0);
      }
    }
                    /* catch() { ... } // from try @ 00d69bf0 with catch @ 00d69e18 */
    lVar12 = Json_getItem(lVar10,"animations");
                    /* try { // try from 00d69e2c to 00e69e77 has its CatchHandler @ 00d69e2c
                       catch() { ... } // from try @ 00d69e2c with catch @ 00d69e2c
                       catch() { ... } // from try @ 00d6aed0 with catch @ 00d69e2c */
    if (lVar12 != 0) {
      uVar16 = _spMalloc((long)*(int *)(lVar12 + 0x14) << 3,
                         "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonJson.c"
                         ,0x453);
      puVar11[0xd] = uVar16;
      plVar42 = *(long **)(lVar12 + 8);
      if (plVar42 != (long *)0x0) {
                    /* try { // try from 00d69e78 to 00e69e87 has its CatchHandler @ 00d6af58 */
        fVar50 = -1.0;
        do {
          lVar12 = Json_getItem(plVar42,"bones");
          lVar17 = Json_getItem(plVar42,"slots");
          lVar19 = Json_getItem(plVar42,&DAT_0141acf3);
          lVar20 = Json_getItem(plVar42,"transform");
          lVar23 = Json_getItem(plVar42,"paths");
          lVar24 = Json_getItem(plVar42,"deform");
                    /* try { // try from 00d69f00 to 00e69f07 has its CatchHandler @ 00d6af60 */
                    /* try { // try from 00d69f0c to 00e69f1b has its CatchHandler @ 00d6af70 */
          lVar25 = Json_getItem(plVar42,"drawOrder");
          lVar26 = Json_getItem(plVar42,"events");
          if (lVar25 == 0) {
            lVar25 = Json_getItem(plVar42,"draworder");
          }
                    /* try { // try from 00d69f50 to 00e69f67 has its CatchHandler @ 00d6af94 */
          iVar5 = 0;
          if (lVar12 != 0) {
            plVar47 = *(long **)(lVar12 + 8);
            if (plVar47 == (long *)0x0) {
              iVar5 = 0;
            }
            else {
                    /* try { // try from 00d69f68 to 00e69f77 has its CatchHandler @ 00d6af90 */
              iVar5 = 0;
              do {
                piVar1 = (int *)((long)plVar47 + 0x14);
                plVar47 = (long *)*plVar47;
                iVar5 = *piVar1 + iVar5;
              } while (plVar47 != (long *)0x0);
            }
          }
          if (lVar17 != 0) {
            for (plVar47 = *(long **)(lVar17 + 8); plVar47 != (long *)0x0;
                plVar47 = (long *)*plVar47) {
              iVar5 = *(int *)((long)plVar47 + 0x14) + iVar5;
            }
          }
          iVar6 = 0;
          if (lVar19 != 0) {
            iVar6 = *(int *)(lVar19 + 0x14);
          }
          iVar7 = 0;
          if (lVar20 != 0) {
            iVar7 = *(int *)(lVar20 + 0x14);
          }
          iVar7 = iVar6 + iVar5 + iVar7;
          if (lVar23 != 0) {
            for (plVar47 = *(long **)(lVar23 + 8); plVar47 != (long *)0x0;
                plVar47 = (long *)*plVar47) {
              iVar7 = *(int *)((long)plVar47 + 0x14) + iVar7;
            }
          }
          if (lVar24 != 0) {
                    /* try { // try from 00d69fe4 to 00e69feb has its CatchHandler @ 00d6af88 */
            for (plVar47 = *(long **)(lVar24 + 8); plVar47 != (long *)0x0;
                plVar47 = (long *)*plVar47) {
              for (plVar48 = (long *)plVar47[1]; plVar48 != (long *)0x0; plVar48 = (long *)*plVar48)
              {
                iVar7 = *(int *)((long)plVar48 + 0x14) + iVar7;
              }
                    /* try { // try from 00d69ff0 to 00e69fff has its CatchHandler @ 00d6af84 */
            }
          }
          uVar37 = 2;
          if (lVar26 == 0) {
            uVar37 = 1;
          }
                    /* try { // try from 00d6a030 to 00e6a037 has its CatchHandler @ 00d6afb8 */
          uVar9 = (uint)(lVar26 != 0);
          if (lVar25 != 0) {
            uVar9 = uVar37;
          }
          lVar27 = spAnimation_create(plVar42[5],uVar9 + iVar7);
          *(undefined4 *)(lVar27 + 0xc) = 0;
          if (lVar17 != 0) {
            for (plVar47 = *(long **)(lVar17 + 8); plVar47 != (long *)0x0;
                plVar47 = (long *)*plVar47) {
              iVar5 = spSkeletonData_findSlotIndex(puVar11,plVar47[5]);
              if (iVar5 == -1) {
                spAnimation_dispose(lVar27);
                uVar16 = plVar47[5];
                pcVar13 = "Slot not found: ";
                goto LAB_00d6b88c;
              }
              for (plVar48 = (long *)plVar47[1]; plVar48 != (long *)0x0; plVar48 = (long *)*plVar48)
              {
                pcVar13 = (char *)plVar48[5];
                iVar6 = strcmp(pcVar13,"attachment");
                if (iVar6 == 0) {
                  lVar17 = spAttachmentTimeline_create(*(undefined4 *)((long)plVar48 + 0x14));
                  *(int *)(lVar17 + 0x20) = iVar5;
                  plVar41 = (long *)plVar48[1];
                  if (plVar41 != (long *)0x0) {
                    iVar6 = 0;
                    do {
                      lVar28 = Json_getItem(plVar41,"name");
                      Json_getFloat(0,plVar41,"time");
                      if (*(int *)(lVar28 + 0x10) == 2) {
                        uVar16 = 0;
                      }
                      else {
                        uVar16 = *(undefined8 *)(lVar28 + 0x18);
                      }
                      spAttachmentTimeline_setFrame(lVar17,iVar6,uVar16);
                    /* try { // try from 00d6a5f8 to 00e6a5ff has its CatchHandler @ 00d6afac */
                      plVar41 = (long *)*plVar41;
                      iVar6 = iVar6 + 1;
                    } while (plVar41 != (long *)0x0);
                  }
                  iVar6 = *(int *)(lVar27 + 0xc);
                    /* try { // try from 00d6a204 to 00e6a20b has its CatchHandler @ 00d6afd4 */
                  *(int *)(lVar27 + 0xc) = iVar6 + 1;
                  *(long *)(*(long *)(lVar27 + 0x10) + (long)iVar6 * 8) = lVar17;
                    /* try { // try from 00d6a210 to 00e6a21f has its CatchHandler @ 00d6afd8 */
                  fVar59 = *(float *)(*(long *)(lVar17 + 0x18) +
                                      (long)*(int *)((long)plVar48 + 0x14) * 4 + -4);
                  fVar58 = *(float *)(lVar27 + 8);
                  if (*(float *)(lVar27 + 8) <= fVar59) {
                    fVar58 = fVar59;
                  }
                }
                else {
                    /* try { // try from 00d6a250 to 00e6a257 has its CatchHandler @ 00d6b00c */
                  iVar6 = strcmp(pcVar13,"color");
                  if (iVar6 == 0) {
                    lVar17 = spColorTimeline_create(*(undefined4 *)((long)plVar48 + 0x14));
                    *(int *)(lVar17 + 0x28) = iVar5;
                    plVar41 = (long *)plVar48[1];
                    if (plVar41 != (long *)0x0) {
                      iVar6 = 0;
                      do {
                        pcVar13 = (char *)Json_getString(plVar41,"color",0);
                    /* try { // try from 00d6a6ac to 00e6a6c3 has its CatchHandler @ 00d6afec */
                        uVar16 = Json_getFloat(0,plVar41,"time");
                        sVar14 = strlen(pcVar13);
                        fVar58 = fVar50;
                    /* try { // try from 00d6a6c4 to 00e6a6cf has its CatchHandler @ 00d6afe4 */
                        if (1 < sVar14) {
                          local_b4 = *pcVar13;
                          local_b3 = pcVar13[1];
                          local_b2 = 0;
                          uVar43 = strtoul(&local_b4,&local_c0,0x10);
                          if (*local_c0 == '\0') {
                            fVar58 = (float)(int)uVar43 / 255.0;
                          }
                        }
                        sVar14 = strlen(pcVar13);
                        fVar59 = fVar50;
                        if (3 < sVar14) {
                          local_b4 = pcVar13[2];
                          local_b3 = pcVar13[3];
                    /* try { // try from 00d6a73c to 00e6a74b has its CatchHandler @ 00d6afcc */
                          local_b2 = 0;
                          uVar43 = strtoul(&local_b4,&local_c0,0x10);
                          if (*local_c0 == '\0') {
                            fVar59 = (float)(int)uVar43 / 255.0;
                          }
                        }
                    /* try { // try from 00d6a768 to 00e6a77b has its CatchHandler @ 00d6afc8 */
                        sVar14 = strlen(pcVar13);
                        fVar60 = fVar50;
                        if (5 < sVar14) {
                          local_b4 = pcVar13[4];
                          local_b3 = pcVar13[5];
                          local_b2 = 0;
                          uVar43 = strtoul(&local_b4,&local_c0,0x10);
                          if (*local_c0 == '\0') {
                            fVar60 = (float)(int)uVar43 / 255.0;
                          }
                        }
                        sVar14 = strlen(pcVar13);
                        fVar56 = fVar50;
                    /* try { // try from 00d6a7cc to 00e6a7d3 has its CatchHandler @ 00d6afc0 */
                        if (7 < sVar14) {
                          local_b4 = pcVar13[6];
                    /* try { // try from 00d6a7d8 to 00e6a7e7 has its CatchHandler @ 00d6afc4 */
                          local_b3 = pcVar13[7];
                          local_b2 = 0;
                          uVar43 = strtoul(&local_b4,&local_c0,0x10);
                          if (*local_c0 == '\0') {
                            fVar56 = (float)(int)uVar43 / 255.0;
                    /* try { // try from 00d6a818 to 00e6a81f has its CatchHandler @ 00d6b004 */
                          }
                        }
                    /* try { // try from 00d6a65c to 00e6a663 has its CatchHandler @ 00d6afa8 */
                    /* try { // try from 00d6a668 to 00e6a677 has its CatchHandler @ 00d6afac */
                        spColorTimeline_setFrame(uVar16,fVar58,fVar59,fVar60,fVar56,lVar17,iVar6);
                        FUN_00d6bb4c(plVar41,lVar17,iVar6);
                        plVar41 = (long *)*plVar41;
                        iVar6 = iVar6 + 1;
                      } while (plVar41 != (long *)0x0);
                    }
                    iVar6 = *(int *)(lVar27 + 0xc);
                    *(int *)(lVar27 + 0xc) = iVar6 + 1;
                    *(long *)(*(long *)(lVar27 + 0x10) + (long)iVar6 * 8) = lVar17;
                    fVar58 = *(float *)(lVar27 + 8);
                    fVar59 = *(float *)(*(long *)(lVar17 + 0x20) +
                                       (long)(*(int *)((long)plVar48 + 0x14) * 5 + -5) * 4);
                  }
                  else {
                    iVar6 = strcmp(pcVar13,"twoColor");
                    if (iVar6 != 0) {
                      spAnimation_dispose(lVar27);
                      uVar16 = plVar48[5];
                      pcVar13 = "Invalid timeline type for a slot: ";
                      goto LAB_00d6b7f8;
                    }
                    lVar17 = spTwoColorTimeline_create(*(undefined4 *)((long)plVar48 + 0x14));
                    *(int *)(lVar17 + 0x28) = iVar5;
                    plVar41 = (long *)plVar48[1];
                    if (plVar41 != (long *)0x0) {
                      iVar6 = 0;
                      do {
                    /* try { // try from 00d6a2e4 to 00e6a2fb has its CatchHandler @ 00d6b090 */
                        pcVar13 = (char *)Json_getString(plVar41,"light",0);
                    /* try { // try from 00d6a2fc to 00e6a307 has its CatchHandler @ 00d6b054 */
                        pcVar15 = (char *)Json_getString(plVar41,&DAT_0141acde,0);
                        uVar16 = Json_getFloat(0,plVar41,"time");
                        sVar14 = strlen(pcVar13);
                        fVar58 = fVar50;
                        if (1 < sVar14) {
                          local_b4 = *pcVar13;
                          local_b3 = pcVar13[1];
                          local_b2 = 0;
                          uVar43 = strtoul(&local_b4,&local_c0,0x10);
                          if (*local_c0 == '\0') {
                    /* try { // try from 00d6a364 to 00e6a373 has its CatchHandler @ 00d6b028 */
                            fVar58 = (float)(int)uVar43 / 255.0;
                          }
                        }
                        sVar14 = strlen(pcVar13);
                        fVar59 = fVar50;
                        if (3 < sVar14) {
                    /* try { // try from 00d6a388 to 00e6a39b has its CatchHandler @ 00d6b02c */
                          local_b4 = pcVar13[2];
                          local_b3 = pcVar13[3];
                    /* try { // try from 00d6a3a0 to 00e6a3ab has its CatchHandler @ 00d6b050 */
                          local_b2 = 0;
                          uVar43 = strtoul(&local_b4,&local_c0,0x10);
                    /* try { // try from 00d6a3b4 to 00e6a3c3 has its CatchHandler @ 00d6b03c */
                          if (*local_c0 == '\0') {
                            fVar59 = (float)(int)uVar43 / 255.0;
                          }
                        }
                        sVar14 = strlen(pcVar13);
                        fVar60 = fVar50;
                        if (5 < sVar14) {
                    /* try { // try from 00d6a3e0 to 00e6a3f3 has its CatchHandler @ 00d6b044 */
                          local_b4 = pcVar13[4];
                          local_b3 = pcVar13[5];
                          local_b2 = 0;
                          uVar43 = strtoul(&local_b4,&local_c0,0x10);
                    /* try { // try from 00d6a404 to 00e6a40b has its CatchHandler @ 00d6b040 */
                          if (*local_c0 == '\0') {
                            fVar60 = (float)(int)uVar43 / 255.0;
                          }
                        }
                        sVar14 = strlen(pcVar13);
                        fVar56 = fVar50;
                        if (7 < sVar14) {
                          local_b4 = pcVar13[6];
                          local_b3 = pcVar13[7];
                          local_b2 = 0;
                          uVar43 = strtoul(&local_b4,&local_c0,0x10);
                    /* try { // try from 00d6a460 to 00e6a473 has its CatchHandler @ 00d6b020 */
                          if (*local_c0 == '\0') {
                            fVar56 = (float)(int)uVar43 / 255.0;
                          }
                        }
                        sVar14 = strlen(pcVar15);
                        fVar61 = fVar50;
                        if (1 < sVar14) {
                          local_b4 = *pcVar15;
                    /* try { // try from 00d6a4a4 to 00e6a4b7 has its CatchHandler @ 00d6b024 */
                          local_b3 = pcVar15[1];
                          local_b2 = 0;
                          uVar43 = strtoul(&local_b4,&local_c0,0x10);
                          if (*local_c0 == '\0') {
                            fVar61 = (float)(int)uVar43 / 255.0;
                          }
                        }
                        sVar14 = strlen(pcVar15);
                        fVar62 = fVar50;
                        if (3 < sVar14) {
                          local_b4 = pcVar15[2];
                          local_b3 = pcVar15[3];
                          local_b2 = 0;
                          uVar43 = strtoul(&local_b4,&local_c0,0x10);
                    /* try { // try from 00d6a50c to 00e6a51f has its CatchHandler @ 00d6afd0 */
                          if (*local_c0 == '\0') {
                            fVar62 = (float)(int)uVar43 / 255.0;
                          }
                        }
                        sVar14 = strlen(pcVar15);
                        fVar57 = fVar50;
                        if (5 < sVar14) {
                          local_b4 = pcVar15[4];
                          local_b3 = pcVar15[5];
                          local_b2 = 0;
                          uVar43 = strtoul(&local_b4,&local_c0,0x10);
                          if (*local_c0 == '\0') {
                            fVar57 = (float)(int)uVar43 / 255.0;
                          }
                        }
                    /* try { // try from 00d6a2ac to 00e6a2b3 has its CatchHandler @ 00d6b008 */
                    /* try { // try from 00d6a2b8 to 00e6a2c3 has its CatchHandler @ 00d6b00c */
                        spTwoColorTimeline_setFrame
                                  (uVar16,fVar58,fVar59,fVar60,fVar56,fVar61,fVar62,fVar57,lVar17,
                                   iVar6);
                        FUN_00d6bb4c(plVar41,lVar17,iVar6);
                        plVar41 = (long *)*plVar41;
                        iVar6 = iVar6 + 1;
                      } while (plVar41 != (long *)0x0);
                    }
                    iVar6 = *(int *)(lVar27 + 0xc);
                    *(int *)(lVar27 + 0xc) = iVar6 + 1;
                    *(long *)(*(long *)(lVar27 + 0x10) + (long)iVar6 * 8) = lVar17;
                    /* try { // try from 00d6a5ac to 00e6a5b3 has its CatchHandler @ 00d6af7c */
                    fVar58 = *(float *)(lVar27 + 8);
                    /* try { // try from 00d6a5b8 to 00e6a5c7 has its CatchHandler @ 00d6af78 */
                    fVar59 = *(float *)(*(long *)(lVar17 + 0x20) +
                                       (long)(*(int *)((long)plVar48 + 0x14) * 8 + -8) * 4);
                  }
                  if (fVar58 <= fVar59) {
                    fVar58 = fVar59;
                  }
                }
                *(float *)(lVar27 + 8) = fVar58;
              }
            }
          }
          if (lVar12 != 0) {
            for (plVar47 = *(long **)(lVar12 + 8); plVar47 != (long *)0x0;
                plVar47 = (long *)*plVar47) {
                    /* try { // try from 00d6a874 to 00e6a87b has its CatchHandler @ 00d6b000 */
              iVar5 = spSkeletonData_findBoneIndex(puVar11,plVar47[5]);
                    /* try { // try from 00d6a880 to 00e6a88b has its CatchHandler @ 00d6b004 */
              if (iVar5 == -1) {
                spAnimation_dispose(lVar27);
                uVar16 = plVar47[5];
                pcVar13 = "Bone not found: ";
                goto LAB_00d6b88c;
              }
              for (plVar48 = (long *)plVar47[1]; plVar48 != (long *)0x0; plVar48 = (long *)*plVar48)
              {
                fVar58 = 1.0;
                pcVar13 = (char *)plVar48[5];
                iVar6 = strcmp(pcVar13,"rotate");
                if (iVar6 == 0) {
                  lVar12 = spRotateTimeline_create(*(undefined4 *)((long)plVar48 + 0x14));
                  *(int *)(lVar12 + 0x28) = iVar5;
                  plVar41 = (long *)plVar48[1];
                    /* try { // try from 00d6a968 to 00e6a973 has its CatchHandler @ 00d6b048 */
                  if (plVar41 != (long *)0x0) {
                    iVar6 = 0;
                    do {
                    /* try { // try from 00d6a97c to 00e6a98b has its CatchHandler @ 00d6b030 */
                      uVar16 = Json_getFloat(0,plVar41,"time");
                      uVar54 = Json_getFloat(0,plVar41,"angle");
                    /* try { // try from 00d6a9a8 to 00e6a9bb has its CatchHandler @ 00d6b038 */
                      spRotateTimeline_setFrame(uVar16,uVar54,lVar12,iVar6);
                      FUN_00d6bb4c(plVar41,lVar12,iVar6);
                      plVar41 = (long *)*plVar41;
                      iVar6 = iVar6 + 1;
                    } while (plVar41 != (long *)0x0);
                  }
                    /* try { // try from 00d6a9cc to 00e6a9d3 has its CatchHandler @ 00d6b034 */
                  iVar6 = *(int *)(lVar27 + 0xc);
                  *(int *)(lVar27 + 0xc) = iVar6 + 1;
                  *(long *)(*(long *)(lVar27 + 0x10) + (long)iVar6 * 8) = lVar12;
                  lVar12 = *(long *)(lVar12 + 0x20);
                  fVar58 = *(float *)(lVar27 + 8);
                  iVar6 = *(int *)((long)plVar48 + 0x14) * 2 + -2;
                }
                else {
                  iVar6 = strcmp(pcVar13,"scale");
                  iVar7 = strcmp(pcVar13,"translate");
                  iVar8 = strcmp(pcVar13,"shear");
                    /* try { // try from 00d6a92c to 00e6a93b has its CatchHandler @ 00d6b018 */
                  if (((iVar6 != 0) && (iVar7 != 0)) && (iVar8 != 0)) {
                    spAnimation_dispose(lVar27);
                    uVar16 = plVar48[5];
                    /* catch() { ... } // from try @ 00d6b700 with catch @ 00d6b7d8 */
                    pcVar13 = "Invalid timeline type for a bone: ";
                    goto LAB_00d6b844;
                  }
                  if (iVar7 == 0) {
                    fVar58 = *param_1;
                  }
                  if (iVar6 == 0) {
                    lVar12 = spScaleTimeline_create(*(undefined4 *)((long)plVar48 + 0x14));
                  }
                  else if (iVar7 == 0) {
                    lVar12 = spTranslateTimeline_create(*(undefined4 *)((long)plVar48 + 0x14));
                  }
                  else if (iVar8 == 0) {
                    lVar12 = spShearTimeline_create(*(undefined4 *)((long)plVar48 + 0x14));
                  }
                  else {
                    lVar12 = 0;
                    /* try { // try from 00d6a950 to 00e6a963 has its CatchHandler @ 00d6b01c */
                  }
                    /* try { // try from 00d6aa28 to 00e6aa3b has its CatchHandler @ 00d6b010 */
                  *(int *)(lVar12 + 0x28) = iVar5;
                  plVar41 = (long *)plVar48[1];
                  if (plVar41 != (long *)0x0) {
                    iVar6 = 0;
                    do {
                      uVar16 = Json_getFloat(0,plVar41,"time");
                      fVar59 = (float)Json_getFloat(0,plVar41,"x");
                    /* try { // try from 00d6aa6c to 00e6aa7f has its CatchHandler @ 00d6b014 */
                      fVar60 = (float)Json_getFloat(0,plVar41,&DAT_014a23fd);
                      spTranslateTimeline_setFrame
                                (uVar16,fVar58 * fVar59,fVar58 * fVar60,lVar12,iVar6);
                      FUN_00d6bb4c(plVar41,lVar12,iVar6);
                      plVar41 = (long *)*plVar41;
                      iVar6 = iVar6 + 1;
                    } while (plVar41 != (long *)0x0);
                  }
                  iVar6 = *(int *)(lVar27 + 0xc);
                  *(int *)(lVar27 + 0xc) = iVar6 + 1;
                    /* try { // try from 00d6a8ac to 00e6a8c3 has its CatchHandler @ 00d6b08c */
                  *(long *)(*(long *)(lVar27 + 0x10) + (long)iVar6 * 8) = lVar12;
                  lVar12 = *(long *)(lVar12 + 0x20);
                  fVar58 = *(float *)(lVar27 + 8);
                  iVar6 = *(int *)((long)plVar48 + 0x14) * 3 + -3;
                }
                    /* try { // try from 00d6a8c4 to 00e6a8cf has its CatchHandler @ 00d6b04c */
                fVar59 = *(float *)(lVar12 + (long)iVar6 * 4);
                if (fVar58 <= fVar59) {
                  fVar58 = fVar59;
                }
                *(float *)(lVar27 + 8) = fVar58;
              }
            }
          }
          if (lVar19 != 0) {
            for (plVar47 = *(long **)(lVar19 + 8); plVar47 != (long *)0x0;
                plVar47 = (long *)*plVar47) {
                    /* try { // try from 00d6a0e4 to 00e6a0fb has its CatchHandler @ 00d6aff0 */
              lVar12 = spSkeletonData_findIkConstraint(puVar11,plVar47[5]);
              lVar17 = spIkConstraintTimeline_create(*(undefined4 *)((long)plVar47 + 0x14));
                    /* try { // try from 00d6a0fc to 00e6a107 has its CatchHandler @ 00d6afe8 */
              if (0 < *(int *)(puVar11 + 0xe)) {
                lVar19 = 0;
                do {
                  if (lVar12 == *(long *)(puVar11[0xf] + lVar19 * 8)) {
                    *(int *)(lVar17 + 0x28) = (int)lVar19;
                    break;
                  }
                  lVar19 = lVar19 + 1;
                } while (*(int *)(puVar11 + 0xe) != lVar19);
              }
              plVar48 = (long *)plVar47[1];
              if (plVar48 != (long *)0x0) {
                iVar5 = 0;
                do {
                  uVar16 = Json_getFloat(0,plVar48,"time");
                  uVar54 = Json_getFloat(0x3f800000,plVar48,&DAT_0141ad36);
                    /* try { // try from 00d6a174 to 00e6a183 has its CatchHandler @ 00d6afe0 */
                  iVar6 = Json_getInt(plVar48,"bendPositive",1);
                  uVar49 = 1;
                  if (iVar6 == 0) {
                    uVar49 = 0xffffffff;
                  }
                  spIkConstraintTimeline_setFrame(uVar16,uVar54,lVar17,iVar5,uVar49);
                    /* try { // try from 00d6a1a0 to 00e6a1b3 has its CatchHandler @ 00d6afdc */
                  FUN_00d6bb4c(plVar48,lVar17,iVar5);
                  plVar48 = (long *)*plVar48;
                  iVar5 = iVar5 + 1;
                } while (plVar48 != (long *)0x0);
              }
                    /* try { // try from 00d6a094 to 00e6a09b has its CatchHandler @ 00d6afb0 */
              iVar5 = *(int *)(lVar27 + 0xc);
                    /* try { // try from 00d6a0a0 to 00e6a0af has its CatchHandler @ 00d6afb8 */
              *(int *)(lVar27 + 0xc) = iVar5 + 1;
              *(long *)(*(long *)(lVar27 + 0x10) + (long)iVar5 * 8) = lVar17;
              fVar59 = *(float *)(*(long *)(lVar17 + 0x20) +
                                 (long)(*(int *)((long)plVar47 + 0x14) * 3 + -3) * 4);
              fVar58 = *(float *)(lVar27 + 8);
              if (*(float *)(lVar27 + 8) <= fVar59) {
                fVar58 = fVar59;
              }
              *(float *)(lVar27 + 8) = fVar58;
            }
          }
          pcVar13 = "shearMix";
                    /* try { // try from 00d6aad4 to 00e6aae7 has its CatchHandler @ 00d6afbc */
          if (lVar20 != 0) {
            for (plVar47 = *(long **)(lVar20 + 8); plVar47 != (long *)0x0;
                plVar47 = (long *)*plVar47) {
              lVar12 = spSkeletonData_findTransformConstraint(puVar11,plVar47[5]);
              lVar17 = spTransformConstraintTimeline_create(*(undefined4 *)((long)plVar47 + 0x14));
              if (0 < *(int *)(puVar11 + 0x10)) {
                lVar19 = 0;
                do {
                  if (lVar12 == *(long *)(puVar11[0x11] + lVar19 * 8)) {
                    /* try { // try from 00d6ab80 to 00e6ab8b has its CatchHandler @ 00d6af68 */
                    *(int *)(lVar17 + 0x28) = (int)lVar19;
                    break;
                  }
                  lVar19 = lVar19 + 1;
                    /* try { // try from 00d6ab74 to 00e6ab7b has its CatchHandler @ 00d6af6c */
                } while (*(int *)(puVar11 + 0x10) != lVar19);
              }
              plVar48 = (long *)plVar47[1];
              if (plVar48 != (long *)0x0) {
                iVar5 = 0;
                do {
                  uVar16 = Json_getFloat(0,plVar48,"time");
                    /* try { // try from 00d6abb0 to 00e6abbb has its CatchHandler @ 00d6afa0 */
                  uVar54 = Json_getFloat(0x3f800000,plVar48,"rotateMix");
                    /* try { // try from 00d6abc0 to 00e6abd3 has its CatchHandler @ 00d6afb4 */
                  uVar55 = Json_getFloat(0x3f800000,plVar48,"translateMix");
                    /* try { // try from 00d6abd4 to 00e6abdf has its CatchHandler @ 00d6afa4 */
                  uVar52 = Json_getFloat(0x3f800000,plVar48,"scaleMix");
                  uVar53 = Json_getFloat(0x3f800000,plVar48,"shearMix");
                  spTransformConstraintTimeline_setFrame
                            (uVar16,uVar54,uVar55,uVar52,uVar53,lVar17,iVar5);
                  FUN_00d6bb4c(plVar48,lVar17,iVar5);
                  plVar48 = (long *)*plVar48;
                  iVar5 = iVar5 + 1;
                } while (plVar48 != (long *)0x0);
              }
              iVar5 = *(int *)(lVar27 + 0xc);
              *(int *)(lVar27 + 0xc) = iVar5 + 1;
              *(long *)(*(long *)(lVar27 + 0x10) + (long)iVar5 * 8) = lVar17;
              fVar59 = *(float *)(*(long *)(lVar17 + 0x20) +
                                 (long)(*(int *)((long)plVar47 + 0x14) * 5 + -5) * 4);
              fVar58 = *(float *)(lVar27 + 8);
              if (*(float *)(lVar27 + 8) <= fVar59) {
                fVar58 = fVar59;
              }
              *(float *)(lVar27 + 8) = fVar58;
            }
          }
          if (lVar23 != 0) {
            for (plVar47 = *(long **)(lVar23 + 8); plVar47 != (long *)0x0;
                plVar47 = (long *)*plVar47) {
              lVar12 = spSkeletonData_findPathConstraint(puVar11,plVar47[5]);
              if (lVar12 == 0) {
                spAnimation_dispose(lVar27);
                uVar16 = plVar47[5];
                pcVar13 = "Path constraint not found: ";
                goto LAB_00d6b88c;
              }
              if (0 < *(int *)(puVar11 + 0x12)) {
                uVar43 = 0;
                do {
                    /* try { // try from 00d6ac8c to 00e6ac9f has its CatchHandler @ 00d6af8c */
                  if (*(long *)(puVar11[0x13] + uVar43 * 8) == lVar12) {
                    pcVar13 = (char *)(uVar43 & 0xffffffff);
                    break;
                  }
                  uVar43 = uVar43 + 1;
                } while ((long)*(int *)(puVar11 + 0x12) != uVar43);
              }
              for (plVar48 = (long *)plVar47[1]; plVar48 != (long *)0x0; plVar48 = (long *)*plVar48)
              {
                pcVar15 = (char *)plVar48[5];
                iVar5 = strcmp(pcVar15,"position");
                if ((iVar5 == 0) || (iVar5 = strcmp(pcVar15,"spacing"), iVar5 == 0)) {
                  iVar5 = strcmp(pcVar15,"spacing");
                  fVar58 = 1.0;
                  if (iVar5 == 0) {
                    lVar17 = spPathConstraintSpacingTimeline_create
                                       (*(undefined4 *)((long)plVar48 + 0x14));
                    if (*(uint *)(lVar12 + 0x24) < 2) goto LAB_00d6ae58;
                  }
                  else {
                    lVar17 = spPathConstraintPositionTimeline_create
                                       (*(undefined4 *)((long)plVar48 + 0x14));
                    /* try { // try from 00d6ae28 to 00e6ae3b has its CatchHandler @ 00d6af74 */
                    if (*(int *)(lVar12 + 0x20) == 0) {
LAB_00d6ae58:
                      fVar58 = *param_1;
                    }
                  }
                    /* try { // try from 00d6ae5c to 00e6ae6f has its CatchHandler @ 00d6af64 */
                  *(int *)(lVar17 + 0x28) = (int)pcVar13;
                  plVar41 = (long *)plVar48[1];
                  if (plVar41 != (long *)0x0) {
                    iVar5 = 0;
                    do {
                      uVar16 = Json_getFloat(0,plVar41,"time");
                      fVar59 = (float)Json_getFloat(0,plVar41,pcVar15);
                      spPathConstraintPositionTimeline_setFrame(uVar16,fVar58 * fVar59,lVar17,iVar5)
                      ;
                      FUN_00d6bb4c(plVar41,lVar17,iVar5);
                      plVar41 = (long *)*plVar41;
                      iVar5 = iVar5 + 1;
                    } while (plVar41 != (long *)0x0);
                  }
                  iVar5 = *(int *)(lVar27 + 0xc);
                  *(int *)(lVar27 + 0xc) = iVar5 + 1;
                  *(long *)(*(long *)(lVar27 + 0x10) + (long)iVar5 * 8) = lVar17;
                    /* try { // try from 00d6acdc to 00e6ace3 has its CatchHandler @ 00d6afa4 */
                  lVar17 = *(long *)(lVar17 + 0x20);
                  fVar58 = *(float *)(lVar27 + 8);
                  iVar5 = *(int *)((long)plVar48 + 0x14) * 2 + -2;
LAB_00d6acec:
                  fVar59 = *(float *)(lVar17 + (long)iVar5 * 4);
                  if (fVar58 <= fVar59) {
                    fVar58 = fVar59;
                  }
                  *(float *)(lVar27 + 8) = fVar58;
                }
                else {
                  iVar5 = strcmp(pcVar15,"mix");
                  if (iVar5 == 0) {
                    lVar17 = spPathConstraintMixTimeline_create
                                       (*(undefined4 *)((long)plVar48 + 0x14));
                    *(int *)(lVar17 + 0x28) = (int)pcVar13;
                    plVar41 = (long *)plVar48[1];
                    if (plVar41 != (long *)0x0) {
                      iVar5 = 0;
                      do {
                        uVar16 = Json_getFloat(0,plVar41,"time");
                        uVar54 = Json_getFloat(0x3f800000,plVar41,"rotateMix");
                        uVar55 = Json_getFloat(0x3f800000,plVar41,"translateMix");
                        spPathConstraintMixTimeline_setFrame(uVar16,uVar54,uVar55,lVar17,iVar5);
                    /* try { // try from 00d6adc0 to 00e6add3 has its CatchHandler @ 00d6af5c */
                        FUN_00d6bb4c(plVar41,lVar17,iVar5);
                        plVar41 = (long *)*plVar41;
                        iVar5 = iVar5 + 1;
                      } while (plVar41 != (long *)0x0);
                    }
                    iVar5 = *(int *)(lVar27 + 0xc);
                    *(int *)(lVar27 + 0xc) = iVar5 + 1;
                    *(long *)(*(long *)(lVar27 + 0x10) + (long)iVar5 * 8) = lVar17;
                    /* try { // try from 00d6adf4 to 00e6ae07 has its CatchHandler @ 00d6af80 */
                    lVar17 = *(long *)(lVar17 + 0x20);
                    fVar58 = *(float *)(lVar27 + 8);
                    iVar5 = *(int *)((long)plVar48 + 0x14) * 3 + -3;
                    goto LAB_00d6acec;
                  }
                }
              }
            }
          }
                    /* try { // try from 00d6aec8 to 00e6aecf has its CatchHandler @ 00d6af70 */
                    /* try { // try from 00d6aed0 to 00e6b0bb has its CatchHandler @ 00d69e2c */
          if (lVar24 != 0) {
            for (plVar47 = *(long **)(lVar24 + 8); plVar47 != (long *)0x0;
                plVar47 = (long *)*plVar47) {
              uVar16 = spSkeletonData_findSkin(puVar11,plVar47[5]);
              for (plVar48 = (long *)plVar47[1]; plVar48 != (long *)0x0; plVar48 = (long *)*plVar48)
              {
                uVar49 = spSkeletonData_findSlotIndex(puVar11,plVar48[5]);
                for (plVar41 = (long *)plVar48[1]; plVar41 != (long *)0x0;
                    plVar41 = (long *)*plVar41) {
                    /* catch() { ... } // from try @ 00d6abd4 with catch @ 00d6afa4
                       catch() { ... } // from try @ 00d6acdc with catch @ 00d6afa4 */
                    /* catch() { ... } // from try @ 00d6a65c with catch @ 00d6afa8 */
                    /* catch() { ... } // from try @ 00d6a5f8 with catch @ 00d6afac
                       catch() { ... } // from try @ 00d6a668 with catch @ 00d6afac */
                    /* catch() { ... } // from try @ 00d6a094 with catch @ 00d6afb0 */
                  lVar12 = spSkin_getAttachment(uVar16,uVar49,plVar41[5]);
                    /* catch() { ... } // from try @ 00d6abc0 with catch @ 00d6afb4 */
                  if (lVar12 == 0) {
                    spAnimation_dispose(lVar27);
                    uVar16 = plVar41[5];
                    pcVar13 = "Attachment not found: ";
                    goto LAB_00d6b7f8;
                  }
                    /* catch() { ... } // from try @ 00d6a030 with catch @ 00d6afb8
                       catch() { ... } // from try @ 00d6a0a0 with catch @ 00d6afb8 */
                  lVar17 = *(long *)(lVar12 + 0x28);
                    /* catch() { ... } // from try @ 00d6aad4 with catch @ 00d6afbc */
                  uVar37 = *(uint *)(lVar12 + 0x30);
                    /* catch() { ... } // from try @ 00d6a7cc with catch @ 00d6afc0 */
                    /* catch() { ... } // from try @ 00d6a7d8 with catch @ 00d6afc4 */
                    /* catch() { ... } // from try @ 00d6a768 with catch @ 00d6afc8 */
                  if (lVar17 != 0) {
                    /* catch() { ... } // from try @ 00d6a73c with catch @ 00d6afcc */
                    /* catch() { ... } // from try @ 00d6a50c with catch @ 00d6afd0 */
                    /* catch() { ... } // from try @ 00d6a204 with catch @ 00d6afd4 */
                    /* catch() { ... } // from try @ 00d6a210 with catch @ 00d6afd8 */
                    /* catch() { ... } // from try @ 00d6a1a0 with catch @ 00d6afdc */
                    /* catch() { ... } // from try @ 00d6a174 with catch @ 00d6afe0 */
                    /* catch() { ... } // from try @ 00d6a6c4 with catch @ 00d6afe4 */
                    uVar37 = ((int)uVar37 / 3) * 2;
                  }
                    /* catch() { ... } // from try @ 00d6a0fc with catch @ 00d6afe8 */
                  uVar18 = (ulong)uVar37;
                    /* catch() { ... } // from try @ 00d6a6ac with catch @ 00d6afec */
                  uVar43 = -(ulong)(uVar37 >> 0x1f) & 0xfffffffc00000000 | uVar18 << 2;
                    /* catch() { ... } // from try @ 00d6a0e4 with catch @ 00d6aff0 */
                  pvVar30 = (void *)_spMalloc(uVar43,
                                              "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonJson.c"
                                              ,399);
                    /* catch() { ... } // from try @ 00d6a874 with catch @ 00d6b000 */
                    /* catch() { ... } // from try @ 00d6a818 with catch @ 00d6b004
                       catch() { ... } // from try @ 00d6a880 with catch @ 00d6b004 */
                    /* catch() { ... } // from try @ 00d6a2ac with catch @ 00d6b008 */
                    /* catch() { ... } // from try @ 00d6a250 with catch @ 00d6b00c
                       catch() { ... } // from try @ 00d6a2b8 with catch @ 00d6b00c */
                    /* catch() { ... } // from try @ 00d6aa28 with catch @ 00d6b010 */
                  lVar19 = spDeformTimeline_create(*(undefined4 *)((long)plVar41 + 0x14),uVar18);
                    /* catch() { ... } // from try @ 00d6aa6c with catch @ 00d6b014 */
                  *(undefined4 *)(lVar19 + 0x38) = uVar49;
                    /* catch() { ... } // from try @ 00d6a92c with catch @ 00d6b018 */
                  *(long *)(lVar19 + 0x40) = lVar12;
                    /* catch() { ... } // from try @ 00d6a950 with catch @ 00d6b01c */
                  plVar44 = (long *)plVar41[1];
                    /* catch() { ... } // from try @ 00d6a460 with catch @ 00d6b020 */
                    /* catch() { ... } // from try @ 00d6a4a4 with catch @ 00d6b024 */
                    /* catch() { ... } // from try @ 00d6a364 with catch @ 00d6b028 */
                    /* catch() { ... } // from try @ 00d6a388 with catch @ 00d6b02c */
                  if (plVar44 != (long *)0x0) {
                    /* catch() { ... } // from try @ 00d6a97c with catch @ 00d6b030 */
                    /* catch() { ... } // from try @ 00d6a9cc with catch @ 00d6b034 */
                    /* catch() { ... } // from try @ 00d6a9a8 with catch @ 00d6b038 */
                    uVar39 = uVar18 & 0xfffffff8;
                    /* catch() { ... } // from try @ 00d6a3b4 with catch @ 00d6b03c */
                    iVar5 = 0;
                    /* catch() { ... } // from try @ 00d6a404 with catch @ 00d6b040 */
                    /* catch() { ... } // from try @ 00d6a3e0 with catch @ 00d6b044 */
                    /* catch() { ... } // from try @ 00d6a968 with catch @ 00d6b048 */
                    /* catch() { ... } // from try @ 00d6a8c4 with catch @ 00d6b04c */
                    /* catch() { ... } // from try @ 00d6a3a0 with catch @ 00d6b050 */
                    do {
                      lVar20 = Json_getItem(plVar44,"vertices");
                      pvVar29 = pvVar30;
                      if (lVar20 == 0) {
                    /* catch() { ... } // from try @ 00d6a2fc with catch @ 00d6b054 */
                        if (lVar17 == 0) {
                          pvVar29 = *(void **)(lVar12 + 0x38);
                        }
                        else {
                          memset(pvVar30,0,uVar43);
                        }
                      }
                      else {
                        uVar9 = Json_getInt(plVar44,"offset",0);
                        uVar35 = (ulong)uVar9;
                        uVar45 = (ulong)(int)uVar9;
                        memset(pvVar30,0,-(ulong)(uVar9 >> 0x1f) & 0xfffffffc00000000 | uVar35 << 2)
                        ;
                        plVar31 = *(long **)(lVar20 + 8);
                        if (*param_1 == 1.0) {
                          if (plVar31 != (long *)0x0) {
                            puVar22 = (undefined4 *)((long)pvVar30 + uVar45 * 4);
                            do {
                              uVar35 = (ulong)((int)uVar35 + 1);
                              *puVar22 = *(undefined4 *)((long)plVar31 + 0x24);
                              plVar31 = (long *)*plVar31;
                              puVar22 = puVar22 + 1;
                            } while (plVar31 != (long *)0x0);
                          }
                        }
                        else if (plVar31 != (long *)0x0) {
                          *(float *)((long)pvVar30 + uVar45 * 4) =
                               *param_1 * *(float *)((long)plVar31 + 0x24);
                          uVar35 = uVar45;
                          for (plVar31 = (long *)*plVar31; uVar35 = uVar35 + 1,
                              plVar31 != (long *)0x0; plVar31 = (long *)*plVar31) {
                            *(float *)((long)pvVar30 + uVar35 * 4) =
                                 *param_1 * *(float *)((long)plVar31 + 0x24);
                          }
                        }
                        uVar9 = uVar37 - (int)uVar35;
                        memset((void *)((long)pvVar30 + (long)(int)uVar35 * 4),0,
                               -(ulong)(uVar9 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar9 << 2);
                        if ((lVar17 == 0) && (0 < (int)uVar37)) {
                          pvVar32 = *(void **)(lVar12 + 0x38);
                          if ((uVar37 < 8) ||
                             ((pvVar30 < (void *)((long)pvVar32 + uVar18 * 4) &&
                              (pvVar32 < (void *)((long)pvVar30 + uVar18 * 4))))) {
                            uVar35 = 0;
                          }
                          else {
                            puVar34 = (undefined8 *)((long)pvVar32 + 0x10);
                            uVar35 = uVar39;
                            puVar40 = (undefined8 *)((long)pvVar30 + 0x10);
                            do {
                              puVar4 = puVar34 + -1;
                              uVar54 = puVar34[-2];
                              uVar52 = puVar34[1];
                              uVar55 = *puVar34;
                              puVar34 = puVar34 + 4;
                              uVar35 = uVar35 - 8;
                              puVar40[-1] = CONCAT44((float)((ulong)*puVar4 >> 0x20) +
                                                     (float)((ulong)puVar40[-1] >> 0x20),
                                                     (float)*puVar4 + (float)puVar40[-1]);
                              puVar40[-2] = CONCAT44((float)((ulong)uVar54 >> 0x20) +
                                                     (float)((ulong)puVar40[-2] >> 0x20),
                                                     (float)uVar54 + (float)puVar40[-2]);
                              puVar40[1] = CONCAT44((float)((ulong)uVar52 >> 0x20) +
                                                    (float)((ulong)puVar40[1] >> 0x20),
                                                    (float)uVar52 + (float)puVar40[1]);
                              *puVar40 = CONCAT44((float)((ulong)uVar55 >> 0x20) +
                                                  (float)((ulong)*puVar40 >> 0x20),
                                                  (float)uVar55 + (float)*puVar40);
                              puVar40 = puVar40 + 4;
                            } while (uVar35 != 0);
                            uVar35 = uVar39;
                            if (uVar39 == uVar18) goto LAB_00d6b070;
                          }
                          lVar20 = uVar18 - uVar35;
                          pfVar33 = (float *)((long)pvVar32 + uVar35 * 4);
                          pfVar38 = (float *)((long)pvVar30 + uVar35 * 4);
                          do {
                            lVar20 = lVar20 + -1;
                            *pfVar38 = *pfVar33 + *pfVar38;
                            pfVar33 = pfVar33 + 1;
                            pfVar38 = pfVar38 + 1;
                          } while (lVar20 != 0);
                        }
                      }
LAB_00d6b070:
                      Json_getFloat(0,plVar44,"time");
                    /* catch() { ... } // from try @ 00d6a8ac with catch @ 00d6b08c */
                      spDeformTimeline_setFrame(lVar19,iVar5,pvVar29);
                    /* catch() { ... } // from try @ 00d6a2e4 with catch @ 00d6b090 */
                      FUN_00d6bb4c(plVar44,lVar19,iVar5);
                      plVar44 = (long *)*plVar44;
                      iVar5 = iVar5 + 1;
                    } while (plVar44 != (long *)0x0);
                  }
                  _spFree(pvVar30);
                    /* catch() { ... } // from try @ 00d69e78 with catch @ 00d6af58 */
                  iVar5 = *(int *)(lVar27 + 0xc);
                    /* catch() { ... } // from try @ 00d6adc0 with catch @ 00d6af5c */
                    /* catch() { ... } // from try @ 00d69f00 with catch @ 00d6af60 */
                    /* catch() { ... } // from try @ 00d6ae5c with catch @ 00d6af64 */
                    /* catch() { ... } // from try @ 00d6ab80 with catch @ 00d6af68 */
                    /* catch() { ... } // from try @ 00d6ab74 with catch @ 00d6af6c */
                  *(int *)(lVar27 + 0xc) = iVar5 + 1;
                    /* catch() { ... } // from try @ 00d69f0c with catch @ 00d6af70
                       catch() { ... } // from try @ 00d6aec8 with catch @ 00d6af70 */
                  *(long *)(*(long *)(lVar27 + 0x10) + (long)iVar5 * 8) = lVar19;
                    /* catch() { ... } // from try @ 00d6ae28 with catch @ 00d6af74 */
                    /* catch() { ... } // from try @ 00d6a5b8 with catch @ 00d6af78 */
                    /* catch() { ... } // from try @ 00d6a5ac with catch @ 00d6af7c */
                    /* catch() { ... } // from try @ 00d6adf4 with catch @ 00d6af80 */
                    /* catch() { ... } // from try @ 00d69ff0 with catch @ 00d6af84 */
                    /* catch() { ... } // from try @ 00d69fe4 with catch @ 00d6af88 */
                    /* catch() { ... } // from try @ 00d6ac8c with catch @ 00d6af8c */
                  fVar59 = *(float *)(*(long *)(lVar19 + 0x20) +
                                      (long)*(int *)((long)plVar41 + 0x14) * 4 + -4);
                    /* catch() { ... } // from try @ 00d69f68 with catch @ 00d6af90 */
                    /* catch() { ... } // from try @ 00d69f50 with catch @ 00d6af94 */
                  fVar58 = *(float *)(lVar27 + 8);
                  if (*(float *)(lVar27 + 8) <= fVar59) {
                    fVar58 = fVar59;
                  }
                  *(float *)(lVar27 + 8) = fVar58;
                    /* catch() { ... } // from try @ 00d6abb0 with catch @ 00d6afa0 */
                }
              }
            }
          }
          if (lVar25 != 0) {
            lVar12 = spDrawOrderTimeline_create
                               (*(undefined4 *)(lVar25 + 0x14),*(undefined4 *)(puVar11 + 5));
            plVar47 = *(long **)(lVar25 + 8);
            if (plVar47 != (long *)0x0) {
              iVar5 = 0;
              do {
                lVar17 = Json_getItem(plVar47,"offsets");
                if (lVar17 == 0) {
                  pvVar30 = (void *)0x0;
                }
                else {
                  uVar37 = *(int *)(puVar11 + 5) - *(int *)(lVar17 + 0x14);
                  pvVar29 = (void *)_spMalloc(-(ulong)(uVar37 >> 0x1f) & 0xfffffffc00000000 |
                                              (ulong)uVar37 << 2,
                                              "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonJson.c"
                                              ,0x1c5);
                  pvVar30 = (void *)_spMalloc((long)*(int *)(puVar11 + 5) << 2,
                                              "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonJson.c"
                                              ,0x1c8);
                  uVar37 = *(uint *)(puVar11 + 5);
                  if (0 < (int)uVar37) {
                    memset((void *)((long)pvVar30 +
                                   ((long)(int)uVar37 - (ulong)(uVar37 - 1)) * 4 + -4),0xff,
                           (ulong)uVar37 << 2);
                  }
                  plVar48 = *(long **)(lVar17 + 8);
                  if (plVar48 == (long *)0x0) {
                    uVar37 = 0;
                    uVar43 = 0;
                  }
                  else {
                    uVar43 = 0;
                    uVar37 = 0;
                    do {
                      uVar16 = Json_getString(plVar48,&DAT_0141aecf,0);
                      uVar9 = spSkeletonData_findSlotIndex(puVar11,uVar16);
                      if (uVar9 == 0xffffffff) {
                        spAnimation_dispose(lVar27);
                        uVar16 = Json_getString(plVar48,&DAT_0141aecf,0);
                        pcVar13 = "Slot not found: ";
LAB_00d6b844:
                        _spSkeletonJson_setError(param_1,0,pcVar13,uVar16);
                        goto LAB_00d6b890;
                      }
                      uVar46 = uVar37;
                      if (uVar37 != uVar9) {
                        uVar18 = (ulong)(uVar9 + ~uVar37) + 1;
                        uVar39 = (ulong)(int)uVar43;
                        uVar46 = uVar9;
                        if (7 < uVar18) {
                          uVar35 = uVar18 & 0x1fffffff8;
                          uVar43 = uVar35 + uVar39;
                          uVar16 = CONCAT44(uVar37 + 1,uVar37);
                          uVar54 = CONCAT44(uVar37 + 3,uVar37 + 2);
                          puVar34 = (undefined8 *)((long)pvVar29 + uVar39 * 4 + 0x10);
                          uVar39 = uVar35;
                          do {
                            iVar6 = (int)((ulong)uVar16 >> 0x20);
                            iVar7 = (int)((ulong)uVar54 >> 0x20);
                            puVar34[-1] = uVar54;
                            puVar34[-2] = uVar16;
                            puVar34[1] = CONCAT44(iVar7 + 4,(int)uVar54 + 4);
                            *puVar34 = CONCAT44(iVar6 + 4,(int)uVar16 + 4);
                            uVar16 = CONCAT44(iVar6 + 8,(int)uVar16 + 8);
                            uVar54 = CONCAT44(iVar7 + 8,(int)uVar54 + 8);
                            uVar39 = uVar39 - 8;
                            puVar34 = puVar34 + 4;
                          } while (uVar39 != 0);
                          uVar39 = uVar43;
                          uVar37 = uVar37 + (int)uVar35;
                          if (uVar18 == uVar35) goto LAB_00d6b348;
                        }
                        do {
                          uVar2 = uVar37 + 1;
                          uVar43 = uVar39 + 1;
                          *(uint *)((long)pvVar29 + uVar39 * 4) = uVar37;
                          uVar39 = uVar43;
                          uVar37 = uVar2;
                        } while (uVar9 != uVar2);
                      }
LAB_00d6b348:
                      iVar6 = Json_getInt(plVar48,"offset",0);
                      *(uint *)((long)pvVar30 + (long)(int)(iVar6 + uVar46) * 4) = uVar46;
                      plVar48 = (long *)*plVar48;
                      uVar37 = uVar46 + 1;
                    } while (plVar48 != (long *)0x0);
                  }
                  iVar6 = *(int *)(puVar11 + 5);
                  if ((int)uVar37 < iVar6) {
                    puVar36 = (uint *)((long)pvVar29 + (long)(int)uVar43 * 4);
                    do {
                      *puVar36 = uVar37;
                      iVar6 = *(int *)(puVar11 + 5);
                      uVar37 = uVar37 + 1;
                      uVar43 = (ulong)((int)uVar43 + 1);
                      puVar36 = puVar36 + 1;
                    } while ((int)uVar37 < iVar6);
                  }
                  if (0 < iVar6) {
                    lVar17 = (long)iVar6;
                    do {
                      lVar19 = lVar17 + -1;
                      if (*(int *)((long)pvVar30 + lVar17 * 4 + -4) == -1) {
                        uVar37 = (int)uVar43 - 1;
                        uVar43 = (ulong)uVar37;
                        *(undefined4 *)((long)pvVar30 + lVar17 * 4 + -4) =
                             *(undefined4 *)((long)pvVar29 + (long)(int)uVar37 * 4);
                      }
                      lVar17 = lVar19;
                    } while (0 < lVar19);
                  }
                  _spFree(pvVar29);
                }
                Json_getFloat(0,plVar47,"time");
                spDrawOrderTimeline_setFrame(lVar12,iVar5,pvVar30);
                _spFree(pvVar30);
                plVar47 = (long *)*plVar47;
                iVar5 = iVar5 + 1;
              } while (plVar47 != (long *)0x0);
            }
            iVar5 = *(int *)(lVar27 + 0xc);
            *(int *)(lVar27 + 0xc) = iVar5 + 1;
            *(long *)(*(long *)(lVar27 + 0x10) + (long)iVar5 * 8) = lVar12;
            fVar59 = *(float *)(*(long *)(lVar12 + 0x18) + (long)*(int *)(lVar25 + 0x14) * 4 + -4);
            fVar58 = *(float *)(lVar27 + 8);
            if (*(float *)(lVar27 + 8) <= fVar59) {
              fVar58 = fVar59;
            }
            *(float *)(lVar27 + 8) = fVar58;
          }
                    /* catch() { ... } // from try @ 00d6b680 with catch @ 00d6b50c
                       catch() { ... } // from try @ 00d6b708 with catch @ 00d6b50c */
          if (lVar26 == 0) {
            if (lVar27 == 0) {
LAB_00d6b890:
              spSkeletonData_dispose(puVar11);
              goto LAB_00d6b74c;
            }
          }
          else {
            lVar12 = spEventTimeline_create(*(undefined4 *)(lVar26 + 0x14));
            plVar47 = *(long **)(lVar26 + 8);
            if (plVar47 != (long *)0x0) {
              iVar5 = 0;
              do {
                uVar16 = Json_getString(plVar47,"name",0);
                lVar17 = spSkeletonData_findEvent(puVar11,uVar16);
                if (lVar17 == 0) {
                  spAnimation_dispose(lVar27);
                  uVar16 = Json_getString(plVar47,"name",0);
                  pcVar13 = "Event not found: ";
LAB_00d6b7f8:
                  plVar42 = (long *)0x0;
LAB_00d6b88c:
                  _spSkeletonJson_setError(param_1,plVar42,pcVar13,uVar16);
                  goto LAB_00d6b890;
                }
                Json_getFloat(0,plVar47,"time");
                lVar19 = spEvent_create(lVar17);
                uVar49 = Json_getInt(plVar47,"int",*(undefined4 *)(lVar17 + 8));
                *(undefined4 *)(lVar19 + 0xc) = uVar49;
                uVar49 = Json_getFloat(*(undefined4 *)(lVar17 + 0xc),plVar47,"float");
                *(undefined4 *)(lVar19 + 0x10) = uVar49;
                pcVar13 = (char *)Json_getString(plVar47,"string",*(undefined8 *)(lVar17 + 0x10));
                if (pcVar13 != (char *)0x0) {
                  sVar14 = strlen(pcVar13);
                  pcVar15 = (char *)_spMalloc(sVar14 + 1,
                                              "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonJson.c"
                                              ,0x1f9);
                  *(char **)(lVar19 + 0x18) = pcVar15;
                  strcpy(pcVar15,pcVar13);
                }
                spEventTimeline_setFrame(lVar12,iVar5,lVar19);
                plVar47 = (long *)*plVar47;
                iVar5 = iVar5 + 1;
              } while (plVar47 != (long *)0x0);
            }
            iVar5 = *(int *)(lVar27 + 0xc);
            *(int *)(lVar27 + 0xc) = iVar5 + 1;
            *(long *)(*(long *)(lVar27 + 0x10) + (long)iVar5 * 8) = lVar12;
            fVar59 = *(float *)(*(long *)(lVar12 + 0x18) + (long)*(int *)(lVar26 + 0x14) * 4 + -4);
            fVar58 = *(float *)(lVar27 + 8);
            if (*(float *)(lVar27 + 8) <= fVar59) {
              fVar58 = fVar59;
            }
            *(float *)(lVar27 + 8) = fVar58;
          }
          iVar5 = *(int *)(puVar11 + 0xc);
          *(int *)(puVar11 + 0xc) = iVar5 + 1;
          *(long *)(puVar11[0xd] + (long)iVar5 * 8) = lVar27;
          plVar42 = (long *)*plVar42;
                    /* try { // try from 00d6b678 to 00e6b67f has its CatchHandler @ 00d6b7bc */
                    /* try { // try from 00d6b680 to 00e6b6ff has its CatchHandler @ 00d6b50c */
        } while (plVar42 != (long *)0x0);
      }
    }
    Json_dispose(lVar10);
  }
LAB_00d6b754:
  if (*(long *)(lVar3 + 0x28) == local_b0) {
    return puVar11;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00d6b72c:
  spSkeletonData_dispose(puVar11);
  pcVar15 = "Target bone not found: ";
  pcVar13 = _DAT_00000028;
LAB_00d6b748:
  _spSkeletonJson_setError(param_1,lVar10,pcVar15,pcVar13);
LAB_00d6b74c:
  puVar11 = (undefined8 *)0x0;
  goto LAB_00d6b754;
}

