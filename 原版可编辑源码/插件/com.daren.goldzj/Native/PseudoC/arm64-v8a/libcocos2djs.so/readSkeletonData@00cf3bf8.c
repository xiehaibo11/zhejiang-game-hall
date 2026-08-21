
/* spine::SkeletonBinary::readSkeletonData(unsigned char const*, int) */

SkeletonData * __thiscall
spine::SkeletonBinary::readSkeletonData(SkeletonBinary *this,uchar *param_1,int param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  long lVar8;
  bool bVar9;
  int iVar10;
  DataInput *pDVar11;
  char *pcVar12;
  long *plVar13;
  size_t sVar14;
  undefined8 uVar15;
  long lVar16;
  BoneData *this_00;
  SlotData *this_01;
  void *__dest;
  IkConstraintData *this_02;
  TransformConstraintData *this_03;
  PathConstraintData *this_04;
  Skin *this_05;
  MeshAttachment *pMVar17;
  MeshAttachment *this_06;
  EventData *this_07;
  uint uVar18;
  undefined1 *puVar19;
  long lVar20;
  byte *pbVar21;
  ulong uVar22;
  long lVar23;
  undefined8 *puVar24;
  MeshAttachment *pMVar25;
  uint uVar26;
  uint uVar27;
  byte *pbVar28;
  uint uVar29;
  DataInput *pDVar30;
  ulong uVar31;
  ulong uVar32;
  char *pcVar33;
  ulong uVar34;
  undefined8 uVar35;
  BoneData *pBVar36;
  float fVar37;
  undefined4 uVar38;
  SkeletonData *local_98;
  undefined **local_90;
  size_t local_88;
  char *local_80;
  long local_78;
  
  lVar8 = tpidr_el0;
  local_78 = *(long *)(lVar8 + 0x28);
  pDVar11 = SpineObject::operator_new
                      (0x18,
                       "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonBinary.cpp"
                       ,0x76);
  *(undefined ***)pDVar11 = &PTR__SpineObject_01c8f3a0;
  pDVar30 = pDVar11 + 8;
  *(uchar **)pDVar30 = param_1;
  *(uchar **)(pDVar11 + 0x10) = param_1 + param_2;
  *(undefined8 *)(this + 0x18) = 0;
  local_98 = SpineObject::operator_new
                       (0x1c0,
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonBinary.cpp"
                        ,0x7c);
  SkeletonData::SkeletonData(local_98);
  pcVar12 = (char *)readString(this,pDVar11);
  pcVar33 = *(char **)(local_98 + 0x160);
  if (pcVar33 != pcVar12) {
    if (pcVar33 != (char *)0x0) {
      plVar13 = (long *)SpineExtension::getInstance();
      (**(code **)(*plVar13 + 0x28))
                (plVar13,pcVar33,
                 "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",
                 0x66);
    }
    if (pcVar12 == (char *)0x0) {
      *(undefined8 *)(local_98 + 0x158) = 0;
      *(undefined8 *)(local_98 + 0x160) = 0;
    }
    else {
      sVar14 = strlen(pcVar12);
      *(size_t *)(local_98 + 0x158) = sVar14;
      *(char **)(local_98 + 0x160) = pcVar12;
    }
  }
  pcVar12 = (char *)readString(this,pDVar11);
  pcVar33 = *(char **)(local_98 + 0x148);
  if (pcVar33 != pcVar12) {
    if (pcVar33 != (char *)0x0) {
      plVar13 = (long *)SpineExtension::getInstance();
      (**(code **)(*plVar13 + 0x28))
                (plVar13,pcVar33,
                 "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",
                 0x66);
    }
    if (pcVar12 == (char *)0x0) {
      *(undefined8 *)(local_98 + 0x140) = 0;
      *(undefined8 *)(local_98 + 0x148) = 0;
    }
    else {
      sVar14 = strlen(pcVar12);
      *(size_t *)(local_98 + 0x140) = sVar14;
      *(char **)(local_98 + 0x148) = pcVar12;
    }
  }
  local_88 = 6;
  local_90 = &PTR__String_01c67868;
  plVar13 = (long *)SpineExtension::getInstance();
  pcVar12 = (char *)(**(code **)(*plVar13 + 0x18))
                              (plVar13,7,
                               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                               ,0x39);
  builtin_strncpy(pcVar12,"3.8.75",7);
  pcVar33 = *(char **)(local_98 + 0x148);
  local_80 = pcVar12;
  if (pcVar12 == pcVar33) {
    bVar9 = true;
joined_r0x00cf4070:
    local_90 = &PTR__String_01c67868;
    if (pcVar12 == (char *)0x0) goto LAB_00cf3e28;
  }
  else {
    if (*(long *)(local_98 + 0x140) != 6) {
      bVar9 = false;
      goto joined_r0x00cf4070;
    }
    bVar9 = false;
    if ((pcVar12 == (char *)0x0) || (pcVar33 == (char *)0x0)) goto joined_r0x00cf4070;
    iVar10 = strcmp(pcVar12,pcVar33);
    bVar9 = iVar10 == 0;
  }
  local_90 = &PTR__String_01c67868;
  plVar13 = (long *)SpineExtension::getInstance();
  (**(code **)(*plVar13 + 0x28))
            (plVar13,pcVar12,
             "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",0xc9);
LAB_00cf3e28:
  SpineObject::~SpineObject((SpineObject *)&local_90);
  if (bVar9) {
    if (pDVar11 != (DataInput *)0x0) {
      (**(code **)(*(long *)pDVar11 + 8))();
    }
    (**(code **)(*(long *)local_98 + 8))();
    pcVar12 = "Unsupported skeleton data, please export with a newer version of Spine.";
    pcVar33 = "";
LAB_00cf3e6c:
    setError(this,pcVar12,pcVar33);
LAB_00cf3e74:
    local_98 = (SkeletonData *)0x0;
  }
  else {
    puVar19 = *(undefined1 **)pDVar30;
    *(undefined1 **)pDVar30 = puVar19 + 1;
    uVar1 = *puVar19;
    *(undefined1 **)pDVar30 = puVar19 + 2;
    uVar2 = puVar19[1];
    *(undefined1 **)pDVar30 = puVar19 + 3;
    uVar3 = puVar19[2];
    *(undefined1 **)pDVar30 = puVar19 + 4;
    *(uint *)(local_98 + 0x128) = CONCAT31(CONCAT21(CONCAT11(uVar1,uVar2),uVar3),puVar19[3]);
    *(undefined1 **)pDVar30 = puVar19 + 5;
    uVar1 = puVar19[4];
    *(undefined1 **)pDVar30 = puVar19 + 6;
    uVar2 = puVar19[5];
    *(undefined1 **)pDVar30 = puVar19 + 7;
    uVar3 = puVar19[6];
    *(undefined1 **)pDVar30 = puVar19 + 8;
    *(uint *)(local_98 + 300) = CONCAT31(CONCAT21(CONCAT11(uVar1,uVar2),uVar3),puVar19[7]);
    *(undefined1 **)pDVar30 = puVar19 + 9;
    uVar1 = puVar19[8];
    *(undefined1 **)pDVar30 = puVar19 + 10;
    uVar2 = puVar19[9];
    *(undefined1 **)pDVar30 = puVar19 + 0xb;
    uVar3 = puVar19[10];
    *(undefined1 **)pDVar30 = puVar19 + 0xc;
    *(uint *)(local_98 + 0x130) = CONCAT31(CONCAT21(CONCAT11(uVar1,uVar2),uVar3),puVar19[0xb]);
    *(undefined1 **)pDVar30 = puVar19 + 0xd;
    uVar1 = puVar19[0xc];
    *(undefined1 **)pDVar30 = puVar19 + 0xe;
    uVar2 = puVar19[0xd];
    *(undefined1 **)pDVar30 = puVar19 + 0xf;
    uVar3 = puVar19[0xe];
    *(undefined1 **)pDVar30 = puVar19 + 0x10;
    *(uint *)(local_98 + 0x134) = CONCAT31(CONCAT21(CONCAT11(uVar1,uVar2),uVar3),puVar19[0xf]);
    *(undefined1 **)pDVar30 = puVar19 + 0x11;
    cVar4 = puVar19[0x10];
    if (cVar4 != '\0') {
      *(undefined1 **)(pDVar11 + 8) = puVar19 + 0x12;
      uVar1 = puVar19[0x11];
      *(undefined1 **)(pDVar11 + 8) = puVar19 + 0x13;
      uVar2 = puVar19[0x12];
      *(undefined1 **)(pDVar11 + 8) = puVar19 + 0x14;
      uVar3 = puVar19[0x13];
      *(undefined1 **)(pDVar11 + 8) = puVar19 + 0x15;
      *(uint *)(local_98 + 0x188) = CONCAT31(CONCAT21(CONCAT11(uVar1,uVar2),uVar3),puVar19[0x14]);
      pcVar12 = (char *)readString(this,pDVar11);
      pcVar33 = *(char **)(local_98 + 0x1a0);
      if (pcVar33 != pcVar12) {
        if (pcVar33 != (char *)0x0) {
          plVar13 = (long *)SpineExtension::getInstance();
          (**(code **)(*plVar13 + 0x28))
                    (plVar13,pcVar33,
                     "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                     ,0x66);
        }
        if (pcVar12 == (char *)0x0) {
          *(undefined8 *)(local_98 + 0x198) = 0;
          *(undefined8 *)(local_98 + 0x1a0) = 0;
        }
        else {
          sVar14 = strlen(pcVar12);
          *(size_t *)(local_98 + 0x198) = sVar14;
          *(char **)(local_98 + 0x1a0) = pcVar12;
        }
      }
      pcVar12 = (char *)readString(this,pDVar11);
      pcVar33 = *(char **)(local_98 + 0x1b8);
      if (pcVar33 != pcVar12) {
        if (pcVar33 != (char *)0x0) {
          plVar13 = (long *)SpineExtension::getInstance();
          (**(code **)(*plVar13 + 0x28))
                    (plVar13,pcVar33,
                     "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                     ,0x66);
        }
        if (pcVar12 == (char *)0x0) {
          *(undefined8 *)(local_98 + 0x1b0) = 0;
          *(undefined8 *)(local_98 + 0x1b8) = 0;
        }
        else {
          sVar14 = strlen(pcVar12);
          *(size_t *)(local_98 + 0x1b0) = sVar14;
          *(char **)(local_98 + 0x1b8) = pcVar12;
        }
      }
    }
    pbVar28 = *(byte **)pDVar30;
    pbVar21 = pbVar28 + 1;
    *(byte **)pDVar30 = pbVar21;
    uVar27 = *pbVar28 & 0x7f;
    if ((char)*pbVar28 < '\0') {
      pbVar21 = pbVar28 + 2;
      *(byte **)pDVar30 = pbVar21;
      uVar27 = uVar27 | (pbVar28[1] & 0x7f) << 7;
      if ((char)pbVar28[1] < '\0') {
        pbVar21 = pbVar28 + 3;
        *(byte **)pDVar30 = pbVar21;
        uVar27 = uVar27 | (pbVar28[2] & 0x7f) << 0xe;
        if ((char)pbVar28[2] < '\0') {
          pbVar21 = pbVar28 + 4;
          *(byte **)pDVar30 = pbVar21;
          uVar27 = uVar27 | (pbVar28[3] & 0x7f) << 0x15;
          if ((char)pbVar28[3] < '\0') {
            pbVar21 = pbVar28 + 5;
            *(byte **)pDVar30 = pbVar21;
            uVar27 = uVar27 | (uint)pbVar28[4] << 0x1c;
          }
        }
      }
    }
    if (0 < (int)uVar27) {
      do {
        uVar15 = readString(this,pDVar11);
        uVar31 = *(ulong *)(local_98 + 0x170);
        if (uVar31 == *(ulong *)(local_98 + 0x178)) {
          uVar18 = (uint)((float)uVar31 * 1.75);
          uVar35 = *(undefined8 *)(local_98 + 0x180);
          if (uVar18 < 9) {
            uVar18 = 8;
          }
          *(long *)(local_98 + 0x178) = (long)(int)uVar18;
          plVar13 = (long *)SpineExtension::getInstance();
          lVar16 = (**(code **)(*plVar13 + 0x20))
                             (plVar13,uVar35,
                              -(ulong)(uVar18 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar18 << 3,
                              "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                              ,0x6a);
          lVar20 = *(long *)(local_98 + 0x170);
          *(long *)(local_98 + 0x180) = lVar16;
          *(long *)(local_98 + 0x170) = lVar20 + 1;
          puVar24 = (undefined8 *)(lVar16 + lVar20 * 8);
        }
        else {
          *(ulong *)(local_98 + 0x170) = uVar31 + 1;
          puVar24 = (undefined8 *)(*(long *)(local_98 + 0x180) + uVar31 * 8);
        }
        uVar27 = uVar27 - 1;
        *puVar24 = uVar15;
      } while (uVar27 != 0);
      pbVar21 = *(byte **)pDVar30;
    }
    *(byte **)pDVar30 = pbVar21 + 1;
    uVar27 = *pbVar21 & 0x7f;
    if ((char)*pbVar21 < '\0') {
      *(byte **)pDVar30 = pbVar21 + 2;
      uVar27 = uVar27 | (pbVar21[1] & 0x7f) << 7;
      if ((char)pbVar21[1] < '\0') {
        *(byte **)pDVar30 = pbVar21 + 3;
        uVar27 = uVar27 | (pbVar21[2] & 0x7f) << 0xe;
        if ((char)pbVar21[2] < '\0') {
          *(byte **)pDVar30 = pbVar21 + 4;
          uVar27 = uVar27 | (pbVar21[3] & 0x7f) << 0x15;
          if ((char)pbVar21[3] < '\0') {
            *(byte **)pDVar30 = pbVar21 + 5;
            uVar27 = uVar27 | (uint)pbVar21[4] << 0x1c;
          }
        }
      }
    }
    uVar34 = (ulong)(int)uVar27;
    uVar31 = *(ulong *)(local_98 + 0x28);
    *(ulong *)(local_98 + 0x28) = uVar34;
    if (*(ulong *)(local_98 + 0x30) < uVar34) {
      uVar18 = (uint)((float)uVar34 * 1.75);
      uVar15 = *(undefined8 *)(local_98 + 0x38);
      if (uVar18 < 9) {
        uVar18 = 8;
      }
      *(long *)(local_98 + 0x30) = (long)(int)uVar18;
      plVar13 = (long *)SpineExtension::getInstance();
      uVar15 = (**(code **)(*plVar13 + 0x20))
                         (plVar13,uVar15,
                          -(ulong)(uVar18 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar18 << 3,
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                          ,0x52);
      uVar34 = *(ulong *)(local_98 + 0x28);
      *(undefined8 *)(local_98 + 0x38) = uVar15;
    }
    if (uVar31 < uVar34) {
      do {
        *(undefined8 *)(*(long *)(local_98 + 0x38) + uVar31 * 8) = 0;
        uVar31 = uVar31 + 1;
      } while (uVar34 != uVar31);
    }
    if (0 < (int)uVar27) {
      uVar31 = 0;
      do {
        pcVar12 = (char *)readString(this,pDVar11);
        if (uVar31 == 0) {
          pBVar36 = (BoneData *)0x0;
        }
        else {
          pbVar21 = *(byte **)pDVar30;
          *(byte **)pDVar30 = pbVar21 + 1;
          uVar18 = *pbVar21 & 0x7f;
          if ((char)*pbVar21 < '\0') {
            *(byte **)pDVar30 = pbVar21 + 2;
            uVar18 = uVar18 | (pbVar21[1] & 0x7f) << 7;
            if ((char)pbVar21[1] < '\0') {
              *(byte **)pDVar30 = pbVar21 + 3;
              uVar18 = uVar18 | (pbVar21[2] & 0x7f) << 0xe;
              if ((char)pbVar21[2] < '\0') {
                *(byte **)pDVar30 = pbVar21 + 4;
                uVar18 = uVar18 | (pbVar21[3] & 0x7f) << 0x15;
                if ((char)pbVar21[3] < '\0') {
                  *(byte **)pDVar30 = pbVar21 + 5;
                  uVar18 = uVar18 | (uint)pbVar21[4] << 0x1c;
                }
              }
            }
          }
          pBVar36 = *(BoneData **)(*(long *)(local_98 + 0x38) + (long)(int)uVar18 * 8);
        }
        this_00 = SpineObject::operator_new
                            (0x58,
                             "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonBinary.cpp"
                             ,0xa2);
        if (pcVar12 == (char *)0x0) {
          local_88 = 0;
          local_80 = (char *)0x0;
          local_90 = &PTR__String_01c67868;
        }
        else {
          local_90 = &PTR__String_01c67868;
          local_88 = strlen(pcVar12);
          local_80 = pcVar12;
        }
        BoneData::BoneData(this_00,(int)uVar31,(String *)&local_90,pBVar36);
        pcVar12 = local_80;
        local_90 = &PTR__String_01c67868;
        if (local_80 != (char *)0x0) {
          plVar13 = (long *)SpineExtension::getInstance();
          (**(code **)(*plVar13 + 0x28))
                    (plVar13,pcVar12,
                     "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                     ,0xc9);
        }
        SpineObject::~SpineObject((SpineObject *)&local_90);
        puVar19 = *(undefined1 **)pDVar30;
        *(undefined1 **)pDVar30 = puVar19 + 1;
        pcVar12 = puVar19 + 0x21;
        uVar1 = *puVar19;
        *(undefined1 **)pDVar30 = puVar19 + 2;
        uVar2 = puVar19[1];
        *(undefined1 **)pDVar30 = puVar19 + 3;
        uVar3 = puVar19[2];
        *(undefined1 **)pDVar30 = puVar19 + 4;
        *(uint *)(this_00 + 0x3c) = CONCAT31(CONCAT21(CONCAT11(uVar1,uVar2),uVar3),puVar19[3]);
        *(undefined1 **)pDVar30 = puVar19 + 5;
        uVar1 = puVar19[4];
        *(undefined1 **)pDVar30 = puVar19 + 6;
        uVar2 = puVar19[5];
        *(undefined1 **)pDVar30 = puVar19 + 7;
        uVar3 = puVar19[6];
        *(undefined1 **)pDVar30 = puVar19 + 8;
        fVar37 = *(float *)(this + 0x48);
        *(float *)(this_00 + 0x34) =
             fVar37 * (float)CONCAT31(CONCAT21(CONCAT11(uVar1,uVar2),uVar3),puVar19[7]);
        *(undefined1 **)pDVar30 = puVar19 + 9;
        uVar1 = puVar19[8];
        *(undefined1 **)pDVar30 = puVar19 + 10;
        uVar2 = puVar19[9];
        *(undefined1 **)pDVar30 = puVar19 + 0xb;
        uVar3 = puVar19[10];
        *(undefined1 **)pDVar30 = puVar19 + 0xc;
        *(float *)(this_00 + 0x38) =
             fVar37 * (float)CONCAT31(CONCAT21(CONCAT11(uVar1,uVar2),uVar3),puVar19[0xb]);
        *(undefined1 **)pDVar30 = puVar19 + 0xd;
        uVar1 = puVar19[0xc];
        *(undefined1 **)pDVar30 = puVar19 + 0xe;
        uVar2 = puVar19[0xd];
        *(undefined1 **)pDVar30 = puVar19 + 0xf;
        uVar3 = puVar19[0xe];
        *(undefined1 **)pDVar30 = puVar19 + 0x10;
        *(uint *)(this_00 + 0x40) = CONCAT31(CONCAT21(CONCAT11(uVar1,uVar2),uVar3),puVar19[0xf]);
        *(undefined1 **)pDVar30 = puVar19 + 0x11;
        uVar1 = puVar19[0x10];
        *(undefined1 **)pDVar30 = puVar19 + 0x12;
        uVar2 = puVar19[0x11];
        *(undefined1 **)pDVar30 = puVar19 + 0x13;
        uVar3 = puVar19[0x12];
        *(undefined1 **)pDVar30 = puVar19 + 0x14;
        *(uint *)(this_00 + 0x44) = CONCAT31(CONCAT21(CONCAT11(uVar1,uVar2),uVar3),puVar19[0x13]);
        *(undefined1 **)pDVar30 = puVar19 + 0x15;
        uVar1 = puVar19[0x14];
        *(undefined1 **)pDVar30 = puVar19 + 0x16;
        uVar2 = puVar19[0x15];
        *(undefined1 **)pDVar30 = puVar19 + 0x17;
        uVar3 = puVar19[0x16];
        *(undefined1 **)pDVar30 = puVar19 + 0x18;
        *(uint *)(this_00 + 0x48) = CONCAT31(CONCAT21(CONCAT11(uVar1,uVar2),uVar3),puVar19[0x17]);
        *(undefined1 **)pDVar30 = puVar19 + 0x19;
        uVar1 = puVar19[0x18];
        *(undefined1 **)pDVar30 = puVar19 + 0x1a;
        uVar2 = puVar19[0x19];
        *(undefined1 **)pDVar30 = puVar19 + 0x1b;
        uVar3 = puVar19[0x1a];
        *(undefined1 **)pDVar30 = puVar19 + 0x1c;
        *(uint *)(this_00 + 0x4c) = CONCAT31(CONCAT21(CONCAT11(uVar1,uVar2),uVar3),puVar19[0x1b]);
        *(undefined1 **)pDVar30 = puVar19 + 0x1d;
        uVar1 = puVar19[0x1c];
        *(undefined1 **)pDVar30 = puVar19 + 0x1e;
        uVar2 = puVar19[0x1d];
        *(undefined1 **)pDVar30 = puVar19 + 0x1f;
        uVar3 = puVar19[0x1e];
        *(undefined1 **)pDVar30 = puVar19 + 0x20;
        *(float *)(this_00 + 0x30) =
             fVar37 * (float)CONCAT31(CONCAT21(CONCAT11(uVar1,uVar2),uVar3),puVar19[0x1f]);
        *(char **)pDVar30 = pcVar12;
        uVar18 = (byte)puVar19[0x20] & 0x7f;
        if ((char)puVar19[0x20] < '\0') {
          pcVar12 = puVar19 + 0x22;
          *(char **)pDVar30 = pcVar12;
          uVar18 = uVar18 | ((byte)puVar19[0x21] & 0x7f) << 7;
          if ((char)puVar19[0x21] < '\0') {
            pcVar12 = puVar19 + 0x23;
            *(char **)pDVar30 = pcVar12;
            uVar18 = uVar18 | ((byte)puVar19[0x22] & 0x7f) << 0xe;
            if ((char)puVar19[0x22] < '\0') {
              pcVar12 = puVar19 + 0x24;
              *(char **)pDVar30 = pcVar12;
              uVar18 = uVar18 | ((byte)puVar19[0x23] & 0x7f) << 0x15;
              if ((char)puVar19[0x23] < '\0') {
                pcVar12 = puVar19 + 0x25;
                *(char **)pDVar30 = pcVar12;
                uVar18 = uVar18 | (uint)(byte)puVar19[0x24] << 0x1c;
              }
            }
          }
        }
        *(uint *)(this_00 + 0x50) = uVar18;
        *(char **)pDVar30 = pcVar12 + 1;
        this_00[0x54] = (BoneData)(*pcVar12 != '\0');
        if (cVar4 != '\0') {
          *(char **)pDVar30 = pcVar12 + 5;
        }
        *(BoneData **)(*(long *)(local_98 + 0x38) + uVar31 * 8) = this_00;
        uVar31 = uVar31 + 1;
      } while (uVar27 != uVar31);
    }
    pbVar21 = *(byte **)pDVar30;
    *(byte **)pDVar30 = pbVar21 + 1;
    uVar27 = *pbVar21 & 0x7f;
    if ((char)*pbVar21 < '\0') {
      *(byte **)pDVar30 = pbVar21 + 2;
      uVar27 = uVar27 | (pbVar21[1] & 0x7f) << 7;
      if ((char)pbVar21[1] < '\0') {
        *(byte **)pDVar30 = pbVar21 + 3;
        uVar27 = uVar27 | (pbVar21[2] & 0x7f) << 0xe;
        if ((char)pbVar21[2] < '\0') {
          *(byte **)pDVar30 = pbVar21 + 4;
          uVar27 = uVar27 | (pbVar21[3] & 0x7f) << 0x15;
          if ((char)pbVar21[3] < '\0') {
            *(byte **)pDVar30 = pbVar21 + 5;
            uVar27 = uVar27 | (uint)pbVar21[4] << 0x1c;
          }
        }
      }
    }
    uVar34 = (ulong)(int)uVar27;
    uVar31 = *(ulong *)(local_98 + 0x48);
    *(ulong *)(local_98 + 0x48) = uVar34;
    if (*(ulong *)(local_98 + 0x50) < uVar34) {
      uVar18 = (uint)((float)uVar34 * 1.75);
      uVar15 = *(undefined8 *)(local_98 + 0x58);
      if (uVar18 < 9) {
        uVar18 = 8;
      }
      *(long *)(local_98 + 0x50) = (long)(int)uVar18;
      plVar13 = (long *)SpineExtension::getInstance();
      uVar15 = (**(code **)(*plVar13 + 0x20))
                         (plVar13,uVar15,
                          -(ulong)(uVar18 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar18 << 3,
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                          ,0x52);
      uVar34 = *(ulong *)(local_98 + 0x48);
      *(undefined8 *)(local_98 + 0x58) = uVar15;
    }
    if (uVar31 < uVar34) {
      do {
        *(undefined8 *)(*(long *)(local_98 + 0x58) + uVar31 * 8) = 0;
        uVar31 = uVar31 + 1;
      } while (uVar34 != uVar31);
    }
    if (0 < (int)uVar27) {
      uVar31 = 0;
      do {
        pcVar12 = (char *)readString(this,pDVar11);
        pbVar21 = *(byte **)(pDVar11 + 8);
        *(byte **)(pDVar11 + 8) = pbVar21 + 1;
        uVar18 = *pbVar21 & 0x7f;
        if ((char)*pbVar21 < '\0') {
          *(byte **)pDVar30 = pbVar21 + 2;
          uVar18 = uVar18 | (pbVar21[1] & 0x7f) << 7;
          if ((char)pbVar21[1] < '\0') {
            *(byte **)pDVar30 = pbVar21 + 3;
            uVar18 = uVar18 | (pbVar21[2] & 0x7f) << 0xe;
            if ((char)pbVar21[2] < '\0') {
              *(byte **)pDVar30 = pbVar21 + 4;
              uVar18 = uVar18 | (pbVar21[3] & 0x7f) << 0x15;
              if ((char)pbVar21[3] < '\0') {
                *(byte **)pDVar30 = pbVar21 + 5;
                uVar18 = uVar18 | (uint)pbVar21[4] << 0x1c;
              }
            }
          }
        }
        pBVar36 = *(BoneData **)(*(long *)(local_98 + 0x38) + (long)(int)uVar18 * 8);
        this_01 = SpineObject::operator_new
                            (0x88,
                             "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonBinary.cpp"
                             ,0xb7);
        if (pcVar12 == (char *)0x0) {
          local_88 = 0;
          local_80 = (char *)0x0;
          local_90 = &PTR__String_01c67868;
        }
        else {
          local_90 = &PTR__String_01c67868;
          local_88 = strlen(pcVar12);
          local_80 = pcVar12;
        }
        SlotData::SlotData(this_01,(int)uVar31,(String *)&local_90,pBVar36);
        pcVar12 = local_80;
        local_90 = &PTR__String_01c67868;
        if (local_80 != (char *)0x0) {
          plVar13 = (long *)SpineExtension::getInstance();
          (**(code **)(*plVar13 + 0x28))
                    (plVar13,pcVar12,
                     "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                     ,0xc9);
        }
        SpineObject::~SpineObject((SpineObject *)&local_90);
        lVar16 = SlotData::getColor(this_01);
        pbVar28 = *(byte **)pDVar30;
        *(byte **)pDVar30 = pbVar28 + 1;
        *(float *)(lVar16 + 8) = (float)*pbVar28 / 255.0;
        *(byte **)pDVar30 = pbVar28 + 2;
        fVar37 = (float)NEON_ucvtf((uint)pbVar28[1]);
        *(float *)(lVar16 + 0xc) = fVar37 / 255.0;
        *(byte **)pDVar30 = pbVar28 + 3;
        fVar37 = (float)NEON_ucvtf((uint)pbVar28[2]);
        *(float *)(lVar16 + 0x10) = fVar37 / 255.0;
        *(byte **)pDVar30 = pbVar28 + 4;
        fVar37 = (float)NEON_ucvtf((uint)pbVar28[3]);
        *(float *)(lVar16 + 0x14) = fVar37 / 255.0;
        *(byte **)pDVar30 = pbVar28 + 5;
        bVar5 = pbVar28[4];
        *(byte **)pDVar30 = pbVar28 + 6;
        bVar6 = pbVar28[5];
        *(byte **)pDVar30 = pbVar28 + 7;
        bVar7 = pbVar28[6];
        pbVar21 = pbVar28 + 8;
        *(byte **)pDVar30 = pbVar21;
        if (((bVar6 & bVar5) != 0xff) || ((pbVar28[7] & bVar7) != 0xff)) {
          lVar16 = SlotData::getDarkColor(this_01);
          fVar37 = (float)bVar5 / 255.0;
          *(float *)(lVar16 + 8) = fVar37;
          *(float *)(lVar16 + 0xc) = (float)bVar6 / 255.0;
          *(float *)(lVar16 + 0x10) = (float)bVar7 / 255.0;
          *(undefined4 *)(lVar16 + 0x14) = 0x3f800000;
          uVar38 = MathUtil::clamp(fVar37,0.0,1.0);
          *(undefined4 *)(lVar16 + 8) = uVar38;
          uVar38 = MathUtil::clamp(*(float *)(lVar16 + 0xc),0.0,1.0);
          *(undefined4 *)(lVar16 + 0xc) = uVar38;
          uVar38 = MathUtil::clamp(*(float *)(lVar16 + 0x10),0.0,1.0);
          *(undefined4 *)(lVar16 + 0x10) = uVar38;
          uVar38 = MathUtil::clamp(*(float *)(lVar16 + 0x14),0.0,1.0);
          *(undefined4 *)(lVar16 + 0x14) = uVar38;
          SlotData::setHasDarkColor(this_01,true);
          pbVar21 = *(byte **)pDVar30;
        }
        *(byte **)pDVar30 = pbVar21 + 1;
        uVar18 = *pbVar21 & 0x7f;
        if ((char)*pbVar21 < '\0') {
          *(byte **)pDVar30 = pbVar21 + 2;
          uVar18 = uVar18 | (pbVar21[1] & 0x7f) << 7;
          if ((char)pbVar21[1] < '\0') {
            *(byte **)pDVar30 = pbVar21 + 3;
            uVar18 = uVar18 | (pbVar21[2] & 0x7f) << 0xe;
            if ((char)pbVar21[2] < '\0') {
              *(byte **)pDVar30 = pbVar21 + 4;
              uVar18 = uVar18 | (pbVar21[3] & 0x7f) << 0x15;
              if ((char)pbVar21[3] < '\0') {
                *(byte **)pDVar30 = pbVar21 + 5;
                uVar18 = uVar18 | (uint)pbVar21[4] << 0x1c;
              }
            }
          }
        }
        if (uVar18 == 0) {
          pcVar12 = (char *)0x0;
        }
        else {
          pcVar12 = *(char **)(*(long *)(local_98 + 0x180) + (long)(int)(uVar18 - 1) * 8);
        }
        pcVar33 = *(char **)(this_01 + 0x78);
        if (pcVar33 != pcVar12) {
          if (pcVar33 != (char *)0x0) {
            plVar13 = (long *)SpineExtension::getInstance();
            (**(code **)(*plVar13 + 0x28))
                      (plVar13,pcVar33,
                       "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                       ,0x8a);
          }
          if (pcVar12 == (char *)0x0) {
            *(undefined8 *)(this_01 + 0x70) = 0;
            *(undefined8 *)(this_01 + 0x78) = 0;
          }
          else {
            sVar14 = strlen(pcVar12);
            *(size_t *)(this_01 + 0x70) = sVar14;
            plVar13 = (long *)SpineExtension::getInstance();
            __dest = (void *)(**(code **)(*plVar13 + 0x18))
                                       (plVar13,sVar14 + 1,
                                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                        ,0x91);
            *(void **)(this_01 + 0x78) = __dest;
            memcpy(__dest,pcVar12,*(long *)(this_01 + 0x70) + 1);
          }
        }
        pbVar21 = *(byte **)pDVar30;
        *(byte **)pDVar30 = pbVar21 + 1;
        uVar18 = *pbVar21 & 0x7f;
        if ((char)*pbVar21 < '\0') {
          *(byte **)pDVar30 = pbVar21 + 2;
          uVar18 = uVar18 | (pbVar21[1] & 0x7f) << 7;
          if ((char)pbVar21[1] < '\0') {
            *(byte **)pDVar30 = pbVar21 + 3;
            uVar18 = uVar18 | (pbVar21[2] & 0x7f) << 0xe;
            if ((char)pbVar21[2] < '\0') {
              *(byte **)pDVar30 = pbVar21 + 4;
              uVar18 = uVar18 | (pbVar21[3] & 0x7f) << 0x15;
              if ((char)pbVar21[3] < '\0') {
                *(byte **)pDVar30 = pbVar21 + 5;
                uVar18 = uVar18 | (uint)pbVar21[4] << 0x1c;
              }
            }
          }
        }
        *(uint *)(this_01 + 0x80) = uVar18;
        *(SlotData **)(*(long *)(local_98 + 0x58) + uVar31 * 8) = this_01;
        uVar31 = uVar31 + 1;
      } while (uVar27 != uVar31);
    }
    pbVar21 = *(byte **)pDVar30;
    *(byte **)pDVar30 = pbVar21 + 1;
    uVar27 = *pbVar21 & 0x7f;
    if ((char)*pbVar21 < '\0') {
      *(byte **)pDVar30 = pbVar21 + 2;
      uVar27 = uVar27 | (pbVar21[1] & 0x7f) << 7;
      if ((char)pbVar21[1] < '\0') {
        *(byte **)pDVar30 = pbVar21 + 3;
        uVar27 = uVar27 | (pbVar21[2] & 0x7f) << 0xe;
        if ((char)pbVar21[2] < '\0') {
          *(byte **)pDVar30 = pbVar21 + 4;
          uVar27 = uVar27 | (pbVar21[3] & 0x7f) << 0x15;
          if ((char)pbVar21[3] < '\0') {
            *(byte **)pDVar30 = pbVar21 + 5;
            uVar27 = uVar27 | (uint)pbVar21[4] << 0x1c;
          }
        }
      }
    }
    uVar34 = (ulong)(int)uVar27;
    uVar31 = *(ulong *)(local_98 + 0xd0);
    *(ulong *)(local_98 + 0xd0) = uVar34;
    if (*(ulong *)(local_98 + 0xd8) < uVar34) {
      uVar18 = (uint)((float)uVar34 * 1.75);
      uVar15 = *(undefined8 *)(local_98 + 0xe0);
      if (uVar18 < 9) {
        uVar18 = 8;
      }
      *(long *)(local_98 + 0xd8) = (long)(int)uVar18;
      plVar13 = (long *)SpineExtension::getInstance();
      uVar15 = (**(code **)(*plVar13 + 0x20))
                         (plVar13,uVar15,
                          -(ulong)(uVar18 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar18 << 3,
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                          ,0x52);
      uVar34 = *(ulong *)(local_98 + 0xd0);
      *(undefined8 *)(local_98 + 0xe0) = uVar15;
    }
    if (uVar31 < uVar34) {
      do {
        *(undefined8 *)(*(long *)(local_98 + 0xe0) + uVar31 * 8) = 0;
        uVar31 = uVar31 + 1;
      } while (uVar34 != uVar31);
    }
    if (0 < (int)uVar27) {
      uVar31 = 0;
      do {
        pcVar12 = (char *)readString(this,pDVar11);
        this_02 = SpineObject::operator_new
                            (0x68,
                             "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonBinary.cpp"
                             ,0xcc);
        if (pcVar12 == (char *)0x0) {
          local_88 = 0;
          local_80 = (char *)0x0;
          local_90 = &PTR__String_01c67868;
        }
        else {
          local_90 = &PTR__String_01c67868;
          local_88 = strlen(pcVar12);
          local_80 = pcVar12;
        }
        IkConstraintData::IkConstraintData(this_02,(String *)&local_90);
        pcVar12 = local_80;
        local_90 = &PTR__String_01c67868;
        if (local_80 != (char *)0x0) {
          plVar13 = (long *)SpineExtension::getInstance();
          (**(code **)(*plVar13 + 0x28))
                    (plVar13,pcVar12,
                     "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                     ,0xc9);
        }
        SpineObject::~SpineObject((SpineObject *)&local_90);
        pbVar21 = *(byte **)pDVar30;
        *(byte **)pDVar30 = pbVar21 + 1;
        uVar18 = *pbVar21 & 0x7f;
        if ((char)*pbVar21 < '\0') {
          *(byte **)pDVar30 = pbVar21 + 2;
          uVar18 = uVar18 | (pbVar21[1] & 0x7f) << 7;
          if ((char)pbVar21[1] < '\0') {
            *(byte **)pDVar30 = pbVar21 + 3;
            uVar18 = uVar18 | (pbVar21[2] & 0x7f) << 0xe;
            if ((char)pbVar21[2] < '\0') {
              *(byte **)pDVar30 = pbVar21 + 4;
              uVar18 = uVar18 | (pbVar21[3] & 0x7f) << 0x15;
              if ((char)pbVar21[3] < '\0') {
                *(byte **)pDVar30 = pbVar21 + 5;
                uVar18 = uVar18 | (uint)pbVar21[4] << 0x1c;
              }
            }
          }
        }
        ConstraintData::setOrder((ConstraintData *)this_02,(long)(int)uVar18);
        pcVar12 = *(char **)pDVar30;
        *(char **)pDVar30 = pcVar12 + 1;
        ConstraintData::setSkinRequired((ConstraintData *)this_02,*pcVar12 != '\0');
        pbVar21 = *(byte **)pDVar30;
        *(byte **)pDVar30 = pbVar21 + 1;
        uVar18 = *pbVar21 & 0x7f;
        if ((char)*pbVar21 < '\0') {
          *(byte **)pDVar30 = pbVar21 + 2;
          uVar18 = uVar18 | (pbVar21[1] & 0x7f) << 7;
          if ((char)pbVar21[1] < '\0') {
            *(byte **)pDVar30 = pbVar21 + 3;
            uVar18 = uVar18 | (pbVar21[2] & 0x7f) << 0xe;
            if ((char)pbVar21[2] < '\0') {
              *(byte **)pDVar30 = pbVar21 + 4;
              uVar18 = uVar18 | (pbVar21[3] & 0x7f) << 0x15;
              if ((char)pbVar21[3] < '\0') {
                *(byte **)pDVar30 = pbVar21 + 5;
                uVar18 = uVar18 | (uint)pbVar21[4] << 0x1c;
              }
            }
          }
        }
        uVar34 = *(ulong *)(this_02 + 0x38);
        uVar32 = (ulong)(int)uVar18;
        *(ulong *)(this_02 + 0x38) = uVar32;
        uVar22 = uVar32;
        if (*(ulong *)(this_02 + 0x40) < uVar32) {
          uVar18 = (uint)((float)uVar32 * 1.75);
          uVar15 = *(undefined8 *)(this_02 + 0x48);
          if (uVar18 < 9) {
            uVar18 = 8;
          }
          *(long *)(this_02 + 0x40) = (long)(int)uVar18;
          plVar13 = (long *)SpineExtension::getInstance();
          uVar15 = (**(code **)(*plVar13 + 0x20))
                             (plVar13,uVar15,
                              -(ulong)(uVar18 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar18 << 3,
                              "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                              ,0x52);
          uVar22 = *(ulong *)(this_02 + 0x38);
          *(undefined8 *)(this_02 + 0x48) = uVar15;
        }
        if (uVar34 < uVar22) {
          do {
            *(undefined8 *)(*(long *)(this_02 + 0x48) + uVar34 * 8) = 0;
            uVar34 = uVar34 + 1;
          } while (uVar22 != uVar34);
        }
        lVar16 = 0;
        while( true ) {
          pbVar28 = *(byte **)pDVar30;
          pbVar21 = pbVar28 + 1;
          *(byte **)pDVar30 = pbVar21;
          uVar18 = *pbVar28 & 0x7f;
          if ((char)*pbVar28 < '\0') {
            pbVar21 = pbVar28 + 2;
            *(byte **)pDVar30 = pbVar21;
            uVar18 = uVar18 | (pbVar28[1] & 0x7f) << 7;
            if ((char)pbVar28[1] < '\0') {
              pbVar21 = pbVar28 + 3;
              *(byte **)pDVar30 = pbVar21;
              uVar18 = uVar18 | (pbVar28[2] & 0x7f) << 0xe;
              if ((char)pbVar28[2] < '\0') {
                pbVar21 = pbVar28 + 4;
                *(byte **)pDVar30 = pbVar21;
                uVar18 = uVar18 | (pbVar28[3] & 0x7f) << 0x15;
                if ((char)pbVar28[3] < '\0') {
                  pbVar21 = pbVar28 + 5;
                  *(byte **)pDVar30 = pbVar21;
                  uVar18 = uVar18 | (uint)pbVar28[4] << 0x1c;
                }
              }
            }
          }
          uVar15 = *(undefined8 *)(*(long *)(local_98 + 0x38) + (long)(int)uVar18 * 8);
          if ((long)uVar32 <= lVar16) break;
          *(undefined8 *)(*(long *)(this_02 + 0x48) + lVar16 * 8) = uVar15;
          lVar16 = lVar16 + 1;
        }
        *(undefined8 *)(this_02 + 0x50) = uVar15;
        *(byte **)pDVar30 = pbVar21 + 1;
        bVar5 = *pbVar21;
        *(byte **)pDVar30 = pbVar21 + 2;
        bVar6 = pbVar21[1];
        *(byte **)pDVar30 = pbVar21 + 3;
        bVar7 = pbVar21[2];
        *(byte **)pDVar30 = pbVar21 + 4;
        *(uint *)(this_02 + 0x60) = CONCAT31(CONCAT21(CONCAT11(bVar5,bVar6),bVar7),pbVar21[3]);
        *(byte **)pDVar30 = pbVar21 + 5;
        bVar5 = pbVar21[4];
        *(byte **)pDVar30 = pbVar21 + 6;
        bVar6 = pbVar21[5];
        *(byte **)pDVar30 = pbVar21 + 7;
        bVar7 = pbVar21[6];
        *(byte **)pDVar30 = pbVar21 + 8;
        *(float *)(this_02 + 100) =
             *(float *)(this + 0x48) *
             (float)CONCAT31(CONCAT21(CONCAT11(bVar5,bVar6),bVar7),pbVar21[7]);
        *(byte **)pDVar30 = pbVar21 + 9;
        *(int *)(this_02 + 0x58) = (int)(char)pbVar21[8];
        *(byte **)pDVar30 = pbVar21 + 10;
        this_02[0x5c] = (IkConstraintData)(pbVar21[9] != 0);
        *(byte **)pDVar30 = pbVar21 + 0xb;
        this_02[0x5d] = (IkConstraintData)(pbVar21[10] != 0);
        *(byte **)pDVar30 = pbVar21 + 0xc;
        this_02[0x5e] = (IkConstraintData)(pbVar21[0xb] != 0);
        *(IkConstraintData **)(*(long *)(local_98 + 0xe0) + uVar31 * 8) = this_02;
        uVar31 = uVar31 + 1;
      } while (uVar31 != uVar27);
    }
    pbVar21 = *(byte **)pDVar30;
    *(byte **)pDVar30 = pbVar21 + 1;
    uVar27 = *pbVar21 & 0x7f;
    if ((char)*pbVar21 < '\0') {
      *(byte **)pDVar30 = pbVar21 + 2;
      uVar27 = uVar27 | (pbVar21[1] & 0x7f) << 7;
      if ((char)pbVar21[1] < '\0') {
        *(byte **)pDVar30 = pbVar21 + 3;
        uVar27 = uVar27 | (pbVar21[2] & 0x7f) << 0xe;
        if ((char)pbVar21[2] < '\0') {
          *(byte **)pDVar30 = pbVar21 + 4;
          uVar27 = uVar27 | (pbVar21[3] & 0x7f) << 0x15;
          if ((char)pbVar21[3] < '\0') {
            *(byte **)pDVar30 = pbVar21 + 5;
            uVar27 = uVar27 | (uint)pbVar21[4] << 0x1c;
          }
        }
      }
    }
    uVar34 = (ulong)(int)uVar27;
    uVar31 = *(ulong *)(local_98 + 0xf0);
    *(ulong *)(local_98 + 0xf0) = uVar34;
    if (*(ulong *)(local_98 + 0xf8) < uVar34) {
      uVar18 = (uint)((float)uVar34 * 1.75);
      uVar15 = *(undefined8 *)(local_98 + 0x100);
      if (uVar18 < 9) {
        uVar18 = 8;
      }
      *(long *)(local_98 + 0xf8) = (long)(int)uVar18;
      plVar13 = (long *)SpineExtension::getInstance();
      uVar15 = (**(code **)(*plVar13 + 0x20))
                         (plVar13,uVar15,
                          -(ulong)(uVar18 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar18 << 3,
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                          ,0x52);
      uVar34 = *(ulong *)(local_98 + 0xf0);
      *(undefined8 *)(local_98 + 0x100) = uVar15;
    }
    if (uVar31 < uVar34) {
      do {
        *(undefined8 *)(*(long *)(local_98 + 0x100) + uVar31 * 8) = 0;
        uVar31 = uVar31 + 1;
      } while (uVar34 != uVar31);
    }
    if (0 < (int)uVar27) {
      uVar31 = 0;
      do {
        pcVar12 = (char *)readString(this,pDVar11);
        this_03 = SpineObject::operator_new
                            (0x88,
                             "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonBinary.cpp"
                             ,0xe2);
        if (pcVar12 == (char *)0x0) {
          local_88 = 0;
          local_80 = (char *)0x0;
          local_90 = &PTR__String_01c67868;
        }
        else {
          local_90 = &PTR__String_01c67868;
          local_88 = strlen(pcVar12);
          local_80 = pcVar12;
        }
        TransformConstraintData::TransformConstraintData(this_03,(String *)&local_90);
        pcVar12 = local_80;
        local_90 = &PTR__String_01c67868;
        if (local_80 != (char *)0x0) {
          plVar13 = (long *)SpineExtension::getInstance();
          (**(code **)(*plVar13 + 0x28))
                    (plVar13,pcVar12,
                     "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                     ,0xc9);
        }
        SpineObject::~SpineObject((SpineObject *)&local_90);
        pbVar21 = *(byte **)pDVar30;
        *(byte **)pDVar30 = pbVar21 + 1;
        uVar18 = *pbVar21 & 0x7f;
        if ((char)*pbVar21 < '\0') {
          *(byte **)pDVar30 = pbVar21 + 2;
          uVar18 = uVar18 | (pbVar21[1] & 0x7f) << 7;
          if ((char)pbVar21[1] < '\0') {
            *(byte **)pDVar30 = pbVar21 + 3;
            uVar18 = uVar18 | (pbVar21[2] & 0x7f) << 0xe;
            if ((char)pbVar21[2] < '\0') {
              *(byte **)pDVar30 = pbVar21 + 4;
              uVar18 = uVar18 | (pbVar21[3] & 0x7f) << 0x15;
              if ((char)pbVar21[3] < '\0') {
                *(byte **)pDVar30 = pbVar21 + 5;
                uVar18 = uVar18 | (uint)pbVar21[4] << 0x1c;
              }
            }
          }
        }
        ConstraintData::setOrder((ConstraintData *)this_03,(long)(int)uVar18);
        pcVar12 = *(char **)pDVar30;
        *(char **)pDVar30 = pcVar12 + 1;
        ConstraintData::setSkinRequired((ConstraintData *)this_03,*pcVar12 != '\0');
        pbVar21 = *(byte **)pDVar30;
        *(byte **)pDVar30 = pbVar21 + 1;
        uVar18 = *pbVar21 & 0x7f;
        if ((char)*pbVar21 < '\0') {
          *(byte **)pDVar30 = pbVar21 + 2;
          uVar18 = uVar18 | (pbVar21[1] & 0x7f) << 7;
          if ((char)pbVar21[1] < '\0') {
            *(byte **)pDVar30 = pbVar21 + 3;
            uVar18 = uVar18 | (pbVar21[2] & 0x7f) << 0xe;
            if ((char)pbVar21[2] < '\0') {
              *(byte **)pDVar30 = pbVar21 + 4;
              uVar18 = uVar18 | (pbVar21[3] & 0x7f) << 0x15;
              if ((char)pbVar21[3] < '\0') {
                *(byte **)pDVar30 = pbVar21 + 5;
                uVar18 = uVar18 | (uint)pbVar21[4] << 0x1c;
              }
            }
          }
        }
        uVar34 = *(ulong *)(this_03 + 0x38);
        uVar32 = (ulong)(int)uVar18;
        *(ulong *)(this_03 + 0x38) = uVar32;
        uVar22 = uVar32;
        if (*(ulong *)(this_03 + 0x40) < uVar32) {
          uVar18 = (uint)((float)uVar32 * 1.75);
          uVar15 = *(undefined8 *)(this_03 + 0x48);
          if (uVar18 < 9) {
            uVar18 = 8;
          }
          *(long *)(this_03 + 0x40) = (long)(int)uVar18;
          plVar13 = (long *)SpineExtension::getInstance();
          uVar15 = (**(code **)(*plVar13 + 0x20))
                             (plVar13,uVar15,
                              -(ulong)(uVar18 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar18 << 3,
                              "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                              ,0x52);
          uVar22 = *(ulong *)(this_03 + 0x38);
          *(undefined8 *)(this_03 + 0x48) = uVar15;
        }
        if (uVar34 < uVar22) {
          do {
            *(undefined8 *)(*(long *)(this_03 + 0x48) + uVar34 * 8) = 0;
            uVar34 = uVar34 + 1;
          } while (uVar22 != uVar34);
        }
        lVar16 = 0;
        while( true ) {
          pbVar28 = *(byte **)pDVar30;
          pbVar21 = pbVar28 + 1;
          *(byte **)pDVar30 = pbVar21;
          uVar18 = *pbVar28 & 0x7f;
          if ((char)*pbVar28 < '\0') {
            pbVar21 = pbVar28 + 2;
            *(byte **)pDVar30 = pbVar21;
            uVar18 = uVar18 | (pbVar28[1] & 0x7f) << 7;
            if ((char)pbVar28[1] < '\0') {
              pbVar21 = pbVar28 + 3;
              *(byte **)pDVar30 = pbVar21;
              uVar18 = uVar18 | (pbVar28[2] & 0x7f) << 0xe;
              if ((char)pbVar28[2] < '\0') {
                pbVar21 = pbVar28 + 4;
                *(byte **)pDVar30 = pbVar21;
                uVar18 = uVar18 | (pbVar28[3] & 0x7f) << 0x15;
                if ((char)pbVar28[3] < '\0') {
                  pbVar21 = pbVar28 + 5;
                  *(byte **)pDVar30 = pbVar21;
                  uVar18 = uVar18 | (uint)pbVar28[4] << 0x1c;
                }
              }
            }
          }
          uVar15 = *(undefined8 *)(*(long *)(local_98 + 0x38) + (long)(int)uVar18 * 8);
          if ((long)uVar32 <= lVar16) break;
          *(undefined8 *)(*(long *)(this_03 + 0x48) + lVar16 * 8) = uVar15;
          lVar16 = lVar16 + 1;
        }
        *(undefined8 *)(this_03 + 0x50) = uVar15;
        *(byte **)pDVar30 = pbVar21 + 1;
        this_03[0x81] = (TransformConstraintData)(*pbVar21 != 0);
        *(byte **)pDVar30 = pbVar21 + 2;
        this_03[0x80] = (TransformConstraintData)(pbVar21[1] != 0);
        *(byte **)pDVar30 = pbVar21 + 3;
        bVar5 = pbVar21[2];
        *(byte **)pDVar30 = pbVar21 + 4;
        bVar6 = pbVar21[3];
        *(byte **)pDVar30 = pbVar21 + 5;
        bVar7 = pbVar21[4];
        *(byte **)pDVar30 = pbVar21 + 6;
        *(uint *)(this_03 + 0x68) = CONCAT31(CONCAT21(CONCAT11(bVar5,bVar6),bVar7),pbVar21[5]);
        *(byte **)pDVar30 = pbVar21 + 7;
        bVar5 = pbVar21[6];
        *(byte **)pDVar30 = pbVar21 + 8;
        bVar6 = pbVar21[7];
        *(byte **)pDVar30 = pbVar21 + 9;
        bVar7 = pbVar21[8];
        *(byte **)pDVar30 = pbVar21 + 10;
        fVar37 = *(float *)(this + 0x48);
        *(float *)(this_03 + 0x6c) =
             fVar37 * (float)CONCAT31(CONCAT21(CONCAT11(bVar5,bVar6),bVar7),pbVar21[9]);
        *(byte **)pDVar30 = pbVar21 + 0xb;
        bVar5 = pbVar21[10];
        *(byte **)pDVar30 = pbVar21 + 0xc;
        bVar6 = pbVar21[0xb];
        *(byte **)pDVar30 = pbVar21 + 0xd;
        bVar7 = pbVar21[0xc];
        *(byte **)pDVar30 = pbVar21 + 0xe;
        *(float *)(this_03 + 0x70) =
             fVar37 * (float)CONCAT31(CONCAT21(CONCAT11(bVar5,bVar6),bVar7),pbVar21[0xd]);
        *(byte **)pDVar30 = pbVar21 + 0xf;
        bVar5 = pbVar21[0xe];
        *(byte **)pDVar30 = pbVar21 + 0x10;
        bVar6 = pbVar21[0xf];
        *(byte **)pDVar30 = pbVar21 + 0x11;
        bVar7 = pbVar21[0x10];
        *(byte **)pDVar30 = pbVar21 + 0x12;
        *(uint *)(this_03 + 0x74) = CONCAT31(CONCAT21(CONCAT11(bVar5,bVar6),bVar7),pbVar21[0x11]);
        *(byte **)pDVar30 = pbVar21 + 0x13;
        bVar5 = pbVar21[0x12];
        *(byte **)pDVar30 = pbVar21 + 0x14;
        bVar6 = pbVar21[0x13];
        *(byte **)pDVar30 = pbVar21 + 0x15;
        bVar7 = pbVar21[0x14];
        *(byte **)pDVar30 = pbVar21 + 0x16;
        *(uint *)(this_03 + 0x78) = CONCAT31(CONCAT21(CONCAT11(bVar5,bVar6),bVar7),pbVar21[0x15]);
        *(byte **)pDVar30 = pbVar21 + 0x17;
        bVar5 = pbVar21[0x16];
        *(byte **)pDVar30 = pbVar21 + 0x18;
        bVar6 = pbVar21[0x17];
        *(byte **)pDVar30 = pbVar21 + 0x19;
        bVar7 = pbVar21[0x18];
        *(byte **)pDVar30 = pbVar21 + 0x1a;
        *(uint *)(this_03 + 0x7c) = CONCAT31(CONCAT21(CONCAT11(bVar5,bVar6),bVar7),pbVar21[0x19]);
        *(byte **)pDVar30 = pbVar21 + 0x1b;
        bVar5 = pbVar21[0x1a];
        *(byte **)pDVar30 = pbVar21 + 0x1c;
        bVar6 = pbVar21[0x1b];
        *(byte **)pDVar30 = pbVar21 + 0x1d;
        bVar7 = pbVar21[0x1c];
        *(byte **)pDVar30 = pbVar21 + 0x1e;
        *(uint *)(this_03 + 0x58) = CONCAT31(CONCAT21(CONCAT11(bVar5,bVar6),bVar7),pbVar21[0x1d]);
        *(byte **)pDVar30 = pbVar21 + 0x1f;
        bVar5 = pbVar21[0x1e];
        *(byte **)pDVar30 = pbVar21 + 0x20;
        bVar6 = pbVar21[0x1f];
        *(byte **)pDVar30 = pbVar21 + 0x21;
        bVar7 = pbVar21[0x20];
        *(byte **)pDVar30 = pbVar21 + 0x22;
        *(uint *)(this_03 + 0x5c) = CONCAT31(CONCAT21(CONCAT11(bVar5,bVar6),bVar7),pbVar21[0x21]);
        *(byte **)pDVar30 = pbVar21 + 0x23;
        bVar5 = pbVar21[0x22];
        *(byte **)pDVar30 = pbVar21 + 0x24;
        bVar6 = pbVar21[0x23];
        *(byte **)pDVar30 = pbVar21 + 0x25;
        bVar7 = pbVar21[0x24];
        *(byte **)pDVar30 = pbVar21 + 0x26;
        *(uint *)(this_03 + 0x60) = CONCAT31(CONCAT21(CONCAT11(bVar5,bVar6),bVar7),pbVar21[0x25]);
        *(byte **)pDVar30 = pbVar21 + 0x27;
        bVar5 = pbVar21[0x26];
        *(byte **)pDVar30 = pbVar21 + 0x28;
        bVar6 = pbVar21[0x27];
        *(byte **)pDVar30 = pbVar21 + 0x29;
        bVar7 = pbVar21[0x28];
        *(byte **)pDVar30 = pbVar21 + 0x2a;
        *(uint *)(this_03 + 100) = CONCAT31(CONCAT21(CONCAT11(bVar5,bVar6),bVar7),pbVar21[0x29]);
        *(TransformConstraintData **)(*(long *)(local_98 + 0x100) + uVar31 * 8) = this_03;
        uVar31 = uVar31 + 1;
      } while (uVar31 != uVar27);
    }
    pbVar21 = *(byte **)pDVar30;
    *(byte **)pDVar30 = pbVar21 + 1;
    uVar27 = *pbVar21 & 0x7f;
    if ((char)*pbVar21 < '\0') {
      *(byte **)pDVar30 = pbVar21 + 2;
      uVar27 = uVar27 | (pbVar21[1] & 0x7f) << 7;
      if ((char)pbVar21[1] < '\0') {
        *(byte **)pDVar30 = pbVar21 + 3;
        uVar27 = uVar27 | (pbVar21[2] & 0x7f) << 0xe;
        if ((char)pbVar21[2] < '\0') {
          *(byte **)pDVar30 = pbVar21 + 4;
          uVar27 = uVar27 | (pbVar21[3] & 0x7f) << 0x15;
          if ((char)pbVar21[3] < '\0') {
            *(byte **)pDVar30 = pbVar21 + 5;
            uVar27 = uVar27 | (uint)pbVar21[4] << 0x1c;
          }
        }
      }
    }
    uVar34 = (ulong)(int)uVar27;
    uVar31 = *(ulong *)(local_98 + 0x110);
    *(ulong *)(local_98 + 0x110) = uVar34;
    if (*(ulong *)(local_98 + 0x118) < uVar34) {
      uVar18 = (uint)((float)uVar34 * 1.75);
      uVar15 = *(undefined8 *)(local_98 + 0x120);
      if (uVar18 < 9) {
        uVar18 = 8;
      }
      *(long *)(local_98 + 0x118) = (long)(int)uVar18;
      plVar13 = (long *)SpineExtension::getInstance();
      uVar15 = (**(code **)(*plVar13 + 0x20))
                         (plVar13,uVar15,
                          -(ulong)(uVar18 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar18 << 3,
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                          ,0x52);
      uVar34 = *(ulong *)(local_98 + 0x110);
      *(undefined8 *)(local_98 + 0x120) = uVar15;
    }
    if (uVar31 < uVar34) {
      do {
        *(undefined8 *)(*(long *)(local_98 + 0x120) + uVar31 * 8) = 0;
        uVar31 = uVar31 + 1;
      } while (uVar34 != uVar31);
    }
    if (0 < (int)uVar27) {
      uVar31 = 0;
      do {
        pcVar12 = (char *)readString(this,pDVar11);
        this_04 = SpineObject::operator_new
                            (0x78,
                             "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonBinary.cpp"
                             ,0xfe);
        local_90 = &PTR__String_01c67868;
        if (pcVar12 == (char *)0x0) {
          local_88 = 0;
          local_80 = (char *)0x0;
        }
        else {
          local_88 = strlen(pcVar12);
          local_80 = pcVar12;
        }
        PathConstraintData::PathConstraintData(this_04,(String *)&local_90);
        pcVar12 = local_80;
        local_90 = &PTR__String_01c67868;
        if (local_80 != (char *)0x0) {
          plVar13 = (long *)SpineExtension::getInstance();
          (**(code **)(*plVar13 + 0x28))
                    (plVar13,pcVar12,
                     "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                     ,0xc9);
        }
        SpineObject::~SpineObject((SpineObject *)&local_90);
        pbVar21 = *(byte **)pDVar30;
        *(byte **)pDVar30 = pbVar21 + 1;
        uVar18 = *pbVar21 & 0x7f;
        if ((char)*pbVar21 < '\0') {
          *(byte **)pDVar30 = pbVar21 + 2;
          uVar18 = uVar18 | (pbVar21[1] & 0x7f) << 7;
          if ((char)pbVar21[1] < '\0') {
            *(byte **)pDVar30 = pbVar21 + 3;
            uVar18 = uVar18 | (pbVar21[2] & 0x7f) << 0xe;
            if ((char)pbVar21[2] < '\0') {
              *(byte **)pDVar30 = pbVar21 + 4;
              uVar18 = uVar18 | (pbVar21[3] & 0x7f) << 0x15;
              if ((char)pbVar21[3] < '\0') {
                *(byte **)pDVar30 = pbVar21 + 5;
                uVar18 = uVar18 | (uint)pbVar21[4] << 0x1c;
              }
            }
          }
        }
        ConstraintData::setOrder((ConstraintData *)this_04,(long)(int)uVar18);
        pcVar12 = *(char **)pDVar30;
        *(char **)pDVar30 = pcVar12 + 1;
        ConstraintData::setSkinRequired((ConstraintData *)this_04,*pcVar12 != '\0');
        pbVar21 = *(byte **)pDVar30;
        *(byte **)pDVar30 = pbVar21 + 1;
        uVar18 = *pbVar21 & 0x7f;
        if ((char)*pbVar21 < '\0') {
          *(byte **)pDVar30 = pbVar21 + 2;
          uVar18 = uVar18 | (pbVar21[1] & 0x7f) << 7;
          if ((char)pbVar21[1] < '\0') {
            *(byte **)pDVar30 = pbVar21 + 3;
            uVar18 = uVar18 | (pbVar21[2] & 0x7f) << 0xe;
            if ((char)pbVar21[2] < '\0') {
              *(byte **)pDVar30 = pbVar21 + 4;
              uVar18 = uVar18 | (pbVar21[3] & 0x7f) << 0x15;
              if ((char)pbVar21[3] < '\0') {
                *(byte **)pDVar30 = pbVar21 + 5;
                uVar18 = uVar18 | (uint)pbVar21[4] << 0x1c;
              }
            }
          }
        }
        uVar34 = *(ulong *)(this_04 + 0x38);
        uVar32 = (ulong)(int)uVar18;
        *(ulong *)(this_04 + 0x38) = uVar32;
        uVar22 = uVar32;
        if (*(ulong *)(this_04 + 0x40) < uVar32) {
          uVar18 = (uint)((float)uVar32 * 1.75);
          uVar15 = *(undefined8 *)(this_04 + 0x48);
          if (uVar18 < 9) {
            uVar18 = 8;
          }
          *(long *)(this_04 + 0x40) = (long)(int)uVar18;
          plVar13 = (long *)SpineExtension::getInstance();
          uVar15 = (**(code **)(*plVar13 + 0x20))
                             (plVar13,uVar15,
                              -(ulong)(uVar18 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar18 << 3,
                              "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                              ,0x52);
          uVar22 = *(ulong *)(this_04 + 0x38);
          *(undefined8 *)(this_04 + 0x48) = uVar15;
        }
        if (uVar34 < uVar22) {
          do {
            *(undefined8 *)(*(long *)(this_04 + 0x48) + uVar34 * 8) = 0;
            uVar34 = uVar34 + 1;
          } while (uVar22 != uVar34);
        }
        lVar16 = 0;
        while( true ) {
          pbVar28 = *(byte **)pDVar30;
          pbVar21 = pbVar28 + 1;
          *(byte **)pDVar30 = pbVar21;
          uVar18 = *pbVar28 & 0x7f;
          if ((char)*pbVar28 < '\0') {
            pbVar21 = pbVar28 + 2;
            *(byte **)pDVar30 = pbVar21;
            uVar18 = uVar18 | (pbVar28[1] & 0x7f) << 7;
            if ((char)pbVar28[1] < '\0') {
              pbVar21 = pbVar28 + 3;
              *(byte **)pDVar30 = pbVar21;
              uVar18 = uVar18 | (pbVar28[2] & 0x7f) << 0xe;
              if ((char)pbVar28[2] < '\0') {
                pbVar21 = pbVar28 + 4;
                *(byte **)pDVar30 = pbVar21;
                uVar18 = uVar18 | (pbVar28[3] & 0x7f) << 0x15;
                if ((char)pbVar28[3] < '\0') {
                  pbVar21 = pbVar28 + 5;
                  *(byte **)pDVar30 = pbVar21;
                  uVar18 = uVar18 | (uint)pbVar28[4] << 0x1c;
                }
              }
            }
          }
          if ((long)uVar32 <= lVar16) break;
          *(undefined8 *)(*(long *)(this_04 + 0x48) + lVar16 * 8) =
               *(undefined8 *)(*(long *)(local_98 + 0x38) + (long)(int)uVar18 * 8);
          lVar16 = lVar16 + 1;
        }
        pbVar28 = pbVar21 + 1;
        *(undefined8 *)(this_04 + 0x50) =
             *(undefined8 *)(*(long *)(local_98 + 0x58) + (long)(int)uVar18 * 8);
        *(byte **)pDVar30 = pbVar28;
        uVar18 = *pbVar21 & 0x7f;
        if ((char)*pbVar21 < '\0') {
          pbVar28 = pbVar21 + 2;
          *(byte **)pDVar30 = pbVar28;
          uVar18 = uVar18 | (pbVar21[1] & 0x7f) << 7;
          if ((char)pbVar21[1] < '\0') {
            pbVar28 = pbVar21 + 3;
            *(byte **)pDVar30 = pbVar28;
            uVar18 = uVar18 | (pbVar21[2] & 0x7f) << 0xe;
            if ((char)pbVar21[2] < '\0') {
              pbVar28 = pbVar21 + 4;
              *(byte **)pDVar30 = pbVar28;
              uVar18 = uVar18 | (pbVar21[3] & 0x7f) << 0x15;
              if ((char)pbVar21[3] < '\0') {
                pbVar28 = pbVar21 + 5;
                *(byte **)pDVar30 = pbVar28;
                uVar18 = uVar18 | (uint)pbVar21[4] << 0x1c;
              }
            }
          }
        }
        pbVar21 = pbVar28 + 1;
        *(uint *)(this_04 + 0x58) = uVar18;
        *(byte **)pDVar30 = pbVar21;
        uVar26 = *pbVar28 & 0x7f;
        if ((char)*pbVar28 < '\0') {
          pbVar21 = pbVar28 + 2;
          *(byte **)pDVar30 = pbVar21;
          uVar26 = uVar26 | (pbVar28[1] & 0x7f) << 7;
          if ((char)pbVar28[1] < '\0') {
            pbVar21 = pbVar28 + 3;
            *(byte **)pDVar30 = pbVar21;
            uVar26 = uVar26 | (pbVar28[2] & 0x7f) << 0xe;
            if ((char)pbVar28[2] < '\0') {
              pbVar21 = pbVar28 + 4;
              *(byte **)pDVar30 = pbVar21;
              uVar26 = uVar26 | (pbVar28[3] & 0x7f) << 0x15;
              if ((char)pbVar28[3] < '\0') {
                pbVar21 = pbVar28 + 5;
                *(byte **)pDVar30 = pbVar21;
                uVar26 = uVar26 | (uint)pbVar28[4] << 0x1c;
              }
            }
          }
        }
        pbVar28 = pbVar21 + 1;
        *(uint *)(this_04 + 0x5c) = uVar26;
        *(byte **)pDVar30 = pbVar28;
        uVar29 = *pbVar21 & 0x7f;
        if ((char)*pbVar21 < '\0') {
          pbVar28 = pbVar21 + 2;
          *(byte **)pDVar30 = pbVar28;
          uVar29 = uVar29 | (pbVar21[1] & 0x7f) << 7;
          if ((char)pbVar21[1] < '\0') {
            pbVar28 = pbVar21 + 3;
            *(byte **)pDVar30 = pbVar28;
            uVar29 = uVar29 | (pbVar21[2] & 0x7f) << 0xe;
            if ((char)pbVar21[2] < '\0') {
              pbVar28 = pbVar21 + 4;
              *(byte **)pDVar30 = pbVar28;
              uVar29 = uVar29 | (pbVar21[3] & 0x7f) << 0x15;
              if ((char)pbVar21[3] < '\0') {
                pbVar28 = pbVar21 + 5;
                *(byte **)pDVar30 = pbVar28;
                uVar29 = uVar29 | (uint)pbVar21[4] << 0x1c;
              }
            }
          }
        }
        *(uint *)(this_04 + 0x60) = uVar29;
        *(byte **)pDVar30 = pbVar28 + 1;
        bVar5 = *pbVar28;
        *(byte **)pDVar30 = pbVar28 + 2;
        bVar6 = pbVar28[1];
        *(byte **)pDVar30 = pbVar28 + 3;
        bVar7 = pbVar28[2];
        *(byte **)pDVar30 = pbVar28 + 4;
        *(uint *)(this_04 + 100) = CONCAT31(CONCAT21(CONCAT11(bVar5,bVar6),bVar7),pbVar28[3]);
        *(byte **)pDVar30 = pbVar28 + 5;
        bVar5 = pbVar28[4];
        *(byte **)pDVar30 = pbVar28 + 6;
        bVar6 = pbVar28[5];
        *(byte **)pDVar30 = pbVar28 + 7;
        bVar7 = pbVar28[6];
        *(byte **)pDVar30 = pbVar28 + 8;
        fVar37 = (float)CONCAT31(CONCAT21(CONCAT11(bVar5,bVar6),bVar7),pbVar28[7]);
        *(float *)(this_04 + 0x68) = fVar37;
        if (uVar18 == 0) {
          *(float *)(this_04 + 0x68) = *(float *)(this + 0x48) * fVar37;
        }
        *(byte **)pDVar30 = pbVar28 + 9;
        bVar5 = pbVar28[8];
        *(byte **)pDVar30 = pbVar28 + 10;
        bVar6 = pbVar28[9];
        *(byte **)pDVar30 = pbVar28 + 0xb;
        bVar7 = pbVar28[10];
        *(byte **)pDVar30 = pbVar28 + 0xc;
        fVar37 = (float)CONCAT31(CONCAT21(CONCAT11(bVar5,bVar6),bVar7),pbVar28[0xb]);
        *(float *)(this_04 + 0x6c) = fVar37;
        if (uVar26 < 2) {
          *(float *)(this_04 + 0x6c) = *(float *)(this + 0x48) * fVar37;
        }
        *(byte **)pDVar30 = pbVar28 + 0xd;
        bVar5 = pbVar28[0xc];
        *(byte **)pDVar30 = pbVar28 + 0xe;
        bVar6 = pbVar28[0xd];
        *(byte **)pDVar30 = pbVar28 + 0xf;
        bVar7 = pbVar28[0xe];
        *(byte **)pDVar30 = pbVar28 + 0x10;
        *(uint *)(this_04 + 0x70) = CONCAT31(CONCAT21(CONCAT11(bVar5,bVar6),bVar7),pbVar28[0xf]);
        *(byte **)pDVar30 = pbVar28 + 0x11;
        bVar5 = pbVar28[0x10];
        *(byte **)pDVar30 = pbVar28 + 0x12;
        bVar6 = pbVar28[0x11];
        *(byte **)pDVar30 = pbVar28 + 0x13;
        bVar7 = pbVar28[0x12];
        *(byte **)pDVar30 = pbVar28 + 0x14;
        *(uint *)(this_04 + 0x74) = CONCAT31(CONCAT21(CONCAT11(bVar5,bVar6),bVar7),pbVar28[0x13]);
        *(PathConstraintData **)(*(long *)(local_98 + 0x120) + uVar31 * 8) = this_04;
        uVar31 = uVar31 + 1;
      } while (uVar31 != uVar27);
    }
    lVar16 = readSkin(this,pDVar11,true,local_98,cVar4 != '\0');
    if (lVar16 != 0) {
      uVar31 = *(ulong *)(local_98 + 0x68);
      *(long *)(local_98 + 0x80) = lVar16;
      if (uVar31 == *(ulong *)(local_98 + 0x70)) {
        uVar27 = (uint)((float)uVar31 * 1.75);
        uVar15 = *(undefined8 *)(local_98 + 0x78);
        if (uVar27 < 9) {
          uVar27 = 8;
        }
        *(long *)(local_98 + 0x70) = (long)(int)uVar27;
        plVar13 = (long *)SpineExtension::getInstance();
        lVar20 = (**(code **)(*plVar13 + 0x20))
                           (plVar13,uVar15,
                            -(ulong)(uVar27 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar27 << 3,
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                            ,0x6a);
        lVar23 = *(long *)(local_98 + 0x68);
        *(long *)(local_98 + 0x78) = lVar20;
        *(long *)(local_98 + 0x68) = lVar23 + 1;
        plVar13 = (long *)(lVar20 + lVar23 * 8);
      }
      else {
        *(ulong *)(local_98 + 0x68) = uVar31 + 1;
        plVar13 = (long *)(*(long *)(local_98 + 0x78) + uVar31 * 8);
      }
      *plVar13 = lVar16;
    }
    pbVar21 = *(byte **)pDVar30;
    *(byte **)pDVar30 = pbVar21 + 1;
    uVar27 = *pbVar21 & 0x7f;
    if ((char)*pbVar21 < '\0') {
      *(byte **)pDVar30 = pbVar21 + 2;
      uVar27 = uVar27 | (pbVar21[1] & 0x7f) << 7;
      if ((char)pbVar21[1] < '\0') {
        *(byte **)pDVar30 = pbVar21 + 3;
        uVar27 = uVar27 | (pbVar21[2] & 0x7f) << 0xe;
        if ((char)pbVar21[2] < '\0') {
          *(byte **)pDVar30 = pbVar21 + 4;
          uVar27 = uVar27 | (pbVar21[3] & 0x7f) << 0x15;
          if ((char)pbVar21[3] < '\0') {
            *(byte **)pDVar30 = pbVar21 + 5;
            uVar27 = uVar27 | (uint)pbVar21[4] << 0x1c;
          }
        }
      }
    }
    if (uVar27 != 0) {
      uVar31 = 0;
      do {
        uVar15 = readSkin(this,pDVar11,false,local_98,cVar4 != '\0');
        uVar34 = *(ulong *)(local_98 + 0x68);
        if (uVar34 == *(ulong *)(local_98 + 0x70)) {
          uVar18 = (uint)((float)uVar34 * 1.75);
          uVar35 = *(undefined8 *)(local_98 + 0x78);
          if (uVar18 < 9) {
            uVar18 = 8;
          }
          *(long *)(local_98 + 0x70) = (long)(int)uVar18;
          plVar13 = (long *)SpineExtension::getInstance();
          lVar16 = (**(code **)(*plVar13 + 0x20))
                             (plVar13,uVar35,
                              -(ulong)(uVar18 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar18 << 3,
                              "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                              ,0x6a);
          lVar20 = *(long *)(local_98 + 0x68);
          *(long *)(local_98 + 0x78) = lVar16;
          *(long *)(local_98 + 0x68) = lVar20 + 1;
          puVar24 = (undefined8 *)(lVar16 + lVar20 * 8);
        }
        else {
          *(ulong *)(local_98 + 0x68) = uVar34 + 1;
          puVar24 = (undefined8 *)(*(long *)(local_98 + 0x78) + uVar34 * 8);
        }
        uVar31 = uVar31 + 1;
        *puVar24 = uVar15;
      } while (uVar31 < (ulong)(long)(int)uVar27);
    }
    uVar15 = *(undefined8 *)(this + 0x18);
    if (0 < (int)uVar15) {
      lVar16 = 0;
      do {
        lVar20 = *(long *)(*(long *)(this + 0x28) + lVar16 * 8);
        if (*(long *)(lVar20 + 0x18) == 0) {
          this_05 = (Skin *)SkeletonData::getDefaultSkin(local_98);
        }
        else {
          this_05 = (Skin *)SkeletonData::findSkin(local_98,(String *)(lVar20 + 0x10));
        }
        if (this_05 == (Skin *)0x0) {
          if (pDVar11 != (DataInput *)0x0) {
            (**(code **)(*(long *)pDVar11 + 8))();
          }
          if (local_98 != (SkeletonData *)0x0) {
            (**(code **)(*(long *)local_98 + 8))();
          }
          pcVar33 = *(char **)(lVar20 + 0x20);
          pcVar12 = "Skin not found: ";
          goto LAB_00cf3e6c;
        }
        pMVar17 = (MeshAttachment *)
                  Skin::getAttachment(this_05,*(ulong *)(lVar20 + 0x28),(String *)(lVar20 + 0x30));
        if (pMVar17 == (MeshAttachment *)0x0) {
          if (pDVar11 != (DataInput *)0x0) {
            (**(code **)(*(long *)pDVar11 + 8))();
          }
          if (local_98 != (SkeletonData *)0x0) {
            (**(code **)(*(long *)local_98 + 8))();
          }
          pcVar33 = *(char **)(lVar20 + 0x40);
          pcVar12 = "Parent mesh not found: ";
          goto LAB_00cf3e6c;
        }
        if (*(char *)(lVar20 + 0x48) == '\0') {
          this_06 = *(MeshAttachment **)(lVar20 + 8);
          pMVar25 = this_06;
        }
        else {
          this_06 = *(MeshAttachment **)(lVar20 + 8);
          pMVar25 = pMVar17;
        }
        *(MeshAttachment **)(this_06 + 0x70) = pMVar25;
        MeshAttachment::setParentMesh(this_06,pMVar17);
        MeshAttachment::updateUVs(*(MeshAttachment **)(lVar20 + 8));
        (**(code **)(**(long **)(this + 8) + 0x48))
                  (*(long **)(this + 8),*(undefined8 *)(lVar20 + 8));
        lVar16 = lVar16 + 1;
      } while (lVar16 < (int)uVar15);
      uVar31 = *(ulong *)(this + 0x18);
      if (0 < (int)uVar31) {
        uVar34 = (long)(int)uVar31;
        do {
          uVar32 = uVar34 - 1;
          plVar13 = *(long **)(*(long *)(this + 0x28) + uVar32 * 8);
          uVar22 = uVar31;
          if (plVar13 != (long *)0x0) {
            (**(code **)(*plVar13 + 8))();
            uVar22 = *(ulong *)(this + 0x18);
          }
          uVar31 = uVar22 - 1;
          *(ulong *)(this + 0x18) = uVar31;
          if (uVar32 < uVar31) {
            do {
              lVar16 = uVar34 * 8;
              uVar34 = uVar34 + 1;
              puVar24 = (undefined8 *)(*(long *)(this + 0x28) + lVar16);
              uVar15 = puVar24[-1];
              puVar24[-1] = *puVar24;
              *(undefined8 *)(*(long *)(this + 0x28) + lVar16) = uVar15;
            } while (uVar22 != uVar34);
          }
          uVar34 = uVar32;
        } while (0 < (long)uVar32);
      }
    }
    *(undefined8 *)(this + 0x18) = 0;
    pbVar21 = *(byte **)pDVar30;
    *(byte **)pDVar30 = pbVar21 + 1;
    uVar27 = *pbVar21 & 0x7f;
    if ((char)*pbVar21 < '\0') {
      *(byte **)pDVar30 = pbVar21 + 2;
      uVar27 = uVar27 | (pbVar21[1] & 0x7f) << 7;
      if ((char)pbVar21[1] < '\0') {
        *(byte **)pDVar30 = pbVar21 + 3;
        uVar27 = uVar27 | (pbVar21[2] & 0x7f) << 0xe;
        if ((char)pbVar21[2] < '\0') {
          *(byte **)pDVar30 = pbVar21 + 4;
          uVar27 = uVar27 | (pbVar21[3] & 0x7f) << 0x15;
          if ((char)pbVar21[3] < '\0') {
            *(byte **)pDVar30 = pbVar21 + 5;
            uVar27 = uVar27 | (uint)pbVar21[4] << 0x1c;
          }
        }
      }
    }
    uVar34 = (ulong)(int)uVar27;
    uVar31 = *(ulong *)(local_98 + 0x90);
    *(ulong *)(local_98 + 0x90) = uVar34;
    if (*(ulong *)(local_98 + 0x98) < uVar34) {
      uVar18 = (uint)((float)uVar34 * 1.75);
      uVar15 = *(undefined8 *)(local_98 + 0xa0);
      if (uVar18 < 9) {
        uVar18 = 8;
      }
      *(long *)(local_98 + 0x98) = (long)(int)uVar18;
      plVar13 = (long *)SpineExtension::getInstance();
      uVar15 = (**(code **)(*plVar13 + 0x20))
                         (plVar13,uVar15,
                          -(ulong)(uVar18 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar18 << 3,
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                          ,0x52);
      uVar34 = *(ulong *)(local_98 + 0x90);
      *(undefined8 *)(local_98 + 0xa0) = uVar15;
    }
    if (uVar31 < uVar34) {
      do {
        *(undefined8 *)(*(long *)(local_98 + 0xa0) + uVar31 * 8) = 0;
        uVar31 = uVar31 + 1;
      } while (uVar34 != uVar31);
    }
    pbVar28 = *(byte **)pDVar30;
    pbVar21 = pbVar28 + 1;
    *(byte **)pDVar30 = pbVar21;
    bVar9 = (*pbVar28 & 0x80) == 0;
    uVar18 = *pbVar28 & 0x7f;
    if (0 < (int)uVar27) {
      uVar31 = 0;
      do {
        if (!bVar9) {
          *(byte **)pDVar30 = pbVar28 + 2;
          uVar18 = (*pbVar21 & 0x7f) << 7 | uVar18;
          if ((char)*pbVar21 < '\0') {
            *(byte **)pDVar30 = pbVar28 + 3;
            uVar18 = (pbVar28[2] & 0x7f) << 0xe | uVar18;
            if ((char)pbVar28[2] < '\0') {
              *(byte **)pDVar30 = pbVar28 + 4;
              uVar18 = (pbVar28[3] & 0x7f) << 0x15 | uVar18;
              if ((char)pbVar28[3] < '\0') {
                *(byte **)pDVar30 = pbVar28 + 5;
                uVar18 = uVar18 | (uint)pbVar28[4] << 0x1c;
              }
            }
          }
        }
        if (uVar18 == 0) {
          pcVar12 = (char *)0x0;
        }
        else {
          pcVar12 = *(char **)(*(long *)(local_98 + 0x180) + (long)(int)(uVar18 - 1) * 8);
        }
        this_07 = SpineObject::operator_new
                            (0x60,
                             "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonBinary.cpp"
                             ,0x13e);
        if (pcVar12 == (char *)0x0) {
          local_88 = 0;
          local_80 = (char *)0x0;
          local_90 = &PTR__String_01c67868;
        }
        else {
          local_90 = &PTR__String_01c67868;
          local_88 = strlen(pcVar12);
          lVar16 = local_88 + 1;
          plVar13 = (long *)SpineExtension::getInstance();
          local_80 = (char *)(**(code **)(*plVar13 + 0x18))
                                       (plVar13,lVar16,
                                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                        ,0x39);
          memcpy(local_80,pcVar12,local_88 + 1);
        }
        EventData::EventData(this_07,(String *)&local_90);
        pcVar12 = local_80;
        local_90 = &PTR__String_01c67868;
        if (local_80 != (char *)0x0) {
          plVar13 = (long *)SpineExtension::getInstance();
          (**(code **)(*plVar13 + 0x28))
                    (plVar13,pcVar12,
                     "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                     ,0xc9);
        }
        SpineObject::~SpineObject((SpineObject *)&local_90);
        pbVar28 = *(byte **)pDVar30;
        pbVar21 = pbVar28 + 1;
        *(byte **)pDVar30 = pbVar21;
        uVar18 = *pbVar28 & 0x7f;
        if ((char)*pbVar28 < '\0') {
          pbVar21 = pbVar28 + 2;
          *(byte **)pDVar30 = pbVar21;
          uVar18 = uVar18 | (pbVar28[1] & 0x7f) << 7;
          if ((char)pbVar28[1] < '\0') {
            pbVar21 = pbVar28 + 3;
            *(byte **)pDVar30 = pbVar21;
            uVar18 = uVar18 | (pbVar28[2] & 0x7f) << 0xe;
            if ((char)pbVar28[2] < '\0') {
              pbVar21 = pbVar28 + 4;
              *(byte **)pDVar30 = pbVar21;
              uVar18 = uVar18 | (pbVar28[3] & 0x7f) << 0x15;
              if ((char)pbVar28[3] < '\0') {
                pbVar21 = pbVar28 + 5;
                *(byte **)pDVar30 = pbVar21;
                uVar18 = uVar18 | (uint)pbVar28[4] << 0x1c;
              }
            }
          }
        }
        *(uint *)(this_07 + 0x20) = -(uVar18 & 1) ^ uVar18 >> 1;
        *(byte **)(pDVar11 + 8) = pbVar21 + 1;
        bVar5 = *pbVar21;
        *(byte **)(pDVar11 + 8) = pbVar21 + 2;
        bVar6 = pbVar21[1];
        *(byte **)(pDVar11 + 8) = pbVar21 + 3;
        bVar7 = pbVar21[2];
        *(byte **)(pDVar11 + 8) = pbVar21 + 4;
        *(uint *)(this_07 + 0x24) = CONCAT31(CONCAT21(CONCAT11(bVar5,bVar6),bVar7),pbVar21[3]);
        pcVar12 = (char *)readString(this,pDVar11);
        pcVar33 = *(char **)(this_07 + 0x38);
        if (pcVar33 != pcVar12) {
          if (pcVar33 != (char *)0x0) {
            plVar13 = (long *)SpineExtension::getInstance();
            (**(code **)(*plVar13 + 0x28))
                      (plVar13,pcVar33,
                       "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                       ,0x66);
          }
          if (pcVar12 == (char *)0x0) {
            *(undefined8 *)(this_07 + 0x30) = 0;
            *(undefined8 *)(this_07 + 0x38) = 0;
          }
          else {
            sVar14 = strlen(pcVar12);
            *(size_t *)(this_07 + 0x30) = sVar14;
            *(char **)(this_07 + 0x38) = pcVar12;
          }
        }
        pcVar12 = (char *)readString(this,pDVar11);
        pcVar33 = *(char **)(this_07 + 0x50);
        if (pcVar33 == pcVar12) {
          sVar14 = *(size_t *)(this_07 + 0x48);
joined_r0x00cf64e8:
          if (sVar14 != 0) {
            puVar19 = *(undefined1 **)pDVar30;
            *(undefined1 **)pDVar30 = puVar19 + 1;
            uVar1 = *puVar19;
            *(undefined1 **)pDVar30 = puVar19 + 2;
            uVar2 = puVar19[1];
            *(undefined1 **)pDVar30 = puVar19 + 3;
            uVar3 = puVar19[2];
            *(undefined1 **)pDVar30 = puVar19 + 4;
            *(uint *)(this_07 + 0x58) = CONCAT31(CONCAT21(CONCAT11(uVar1,uVar2),uVar3),puVar19[3]);
            *(undefined1 **)pDVar30 = puVar19 + 5;
            uVar1 = puVar19[4];
            *(undefined1 **)pDVar30 = puVar19 + 6;
            uVar2 = puVar19[5];
            *(undefined1 **)pDVar30 = puVar19 + 7;
            uVar3 = puVar19[6];
            *(undefined1 **)pDVar30 = puVar19 + 8;
            *(uint *)(this_07 + 0x5c) = CONCAT31(CONCAT21(CONCAT11(uVar1,uVar2),uVar3),puVar19[7]);
          }
        }
        else {
          if (pcVar33 != (char *)0x0) {
            plVar13 = (long *)SpineExtension::getInstance();
            (**(code **)(*plVar13 + 0x28))
                      (plVar13,pcVar33,
                       "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                       ,0x66);
          }
          if (pcVar12 != (char *)0x0) {
            sVar14 = strlen(pcVar12);
            *(size_t *)(this_07 + 0x48) = sVar14;
            *(char **)(this_07 + 0x50) = pcVar12;
            goto joined_r0x00cf64e8;
          }
          *(undefined8 *)(this_07 + 0x48) = 0;
          *(undefined8 *)(this_07 + 0x50) = 0;
        }
        *(EventData **)(*(long *)(local_98 + 0xa0) + uVar31 * 8) = this_07;
        pbVar28 = *(byte **)pDVar30;
        uVar31 = uVar31 + 1;
        pbVar21 = pbVar28 + 1;
        *(byte **)pDVar30 = pbVar21;
        bVar9 = (*pbVar28 & 0x80) == 0;
        uVar18 = *pbVar28 & 0x7f;
      } while (uVar27 != uVar31);
    }
    if (!bVar9) {
      *(byte **)pDVar30 = pbVar28 + 2;
      uVar18 = uVar18 | (*pbVar21 & 0x7f) << 7;
      if ((char)*pbVar21 < '\0') {
        *(byte **)pDVar30 = pbVar28 + 3;
        uVar18 = uVar18 | (pbVar28[2] & 0x7f) << 0xe;
        if ((char)pbVar28[2] < '\0') {
          *(byte **)pDVar30 = pbVar28 + 4;
          uVar18 = uVar18 | (pbVar28[3] & 0x7f) << 0x15;
          if ((char)pbVar28[3] < '\0') {
            *(byte **)pDVar30 = pbVar28 + 5;
            uVar18 = uVar18 | (uint)pbVar28[4] << 0x1c;
          }
        }
      }
    }
    uVar22 = (ulong)(int)uVar18;
    uVar31 = *(ulong *)(local_98 + 0xb0);
    *(ulong *)(local_98 + 0xb0) = uVar22;
    uVar34 = uVar22;
    if (*(ulong *)(local_98 + 0xb8) < uVar22) {
      uVar27 = (uint)((float)uVar22 * 1.75);
      uVar15 = *(undefined8 *)(local_98 + 0xc0);
      if (uVar27 < 9) {
        uVar27 = 8;
      }
      *(long *)(local_98 + 0xb8) = (long)(int)uVar27;
      plVar13 = (long *)SpineExtension::getInstance();
      uVar15 = (**(code **)(*plVar13 + 0x20))
                         (plVar13,uVar15,
                          -(ulong)(uVar27 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar27 << 3,
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                          ,0x52);
      uVar34 = *(ulong *)(local_98 + 0xb0);
      *(undefined8 *)(local_98 + 0xc0) = uVar15;
    }
    if (uVar31 < uVar34) {
      do {
        *(undefined8 *)(*(long *)(local_98 + 0xc0) + uVar31 * 8) = 0;
        uVar31 = uVar31 + 1;
      } while (uVar34 != uVar31);
    }
    if (0 < (int)uVar18) {
      lVar16 = 0;
      do {
        pcVar12 = (char *)readString(this,pDVar11);
        local_90 = &PTR__String_01c67868;
        if (pcVar12 == (char *)0x0) {
          local_88 = 0;
          local_80 = (char *)0x0;
        }
        else {
          local_88 = strlen(pcVar12);
          local_80 = pcVar12;
        }
        lVar20 = readAnimation(this,(String *)&local_90,pDVar11,local_98);
        if (lVar20 == 0) {
          if (pDVar11 != (DataInput *)0x0) {
            (**(code **)(*(long *)pDVar11 + 8))();
          }
          (**(code **)(*(long *)local_98 + 8))();
          bVar9 = true;
        }
        else {
          bVar9 = false;
          *(long *)(*(long *)(local_98 + 0xc0) + lVar16 * 8) = lVar20;
        }
        pcVar12 = local_80;
        local_90 = &PTR__String_01c67868;
        if (local_80 != (char *)0x0) {
          plVar13 = (long *)SpineExtension::getInstance();
          (**(code **)(*plVar13 + 0x28))
                    (plVar13,pcVar12,
                     "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                     ,0xc9);
        }
        SpineObject::~SpineObject((SpineObject *)&local_90);
        if (bVar9) goto LAB_00cf3e74;
        lVar16 = lVar16 + 1;
      } while (lVar16 < (long)uVar22);
    }
    if (pDVar11 != (DataInput *)0x0) {
      (**(code **)(*(long *)pDVar11 + 8))();
    }
  }
  if (*(long *)(lVar8 + 0x28) == local_78) {
    return local_98;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

