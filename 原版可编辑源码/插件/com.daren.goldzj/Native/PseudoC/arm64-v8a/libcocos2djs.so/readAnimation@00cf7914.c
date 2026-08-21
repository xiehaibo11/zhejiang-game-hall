
/* spine::SkeletonBinary::readAnimation(spine::String const&, spine::SkeletonBinary::DataInput*,
   spine::SkeletonData*) */

Animation * __thiscall
spine::SkeletonBinary::readAnimation
          (SkeletonBinary *this,String *param_1,DataInput *param_2,SkeletonData *param_3)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  char cVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  char cVar22;
  undefined1 auVar23 [16];
  long lVar24;
  undefined8 *puVar25;
  bool bVar26;
  AttachmentTimeline *pAVar27;
  long *plVar28;
  ColorTimeline *this_00;
  TwoColorTimeline *this_01;
  RotateTimeline *pRVar29;
  ShearTimeline *this_02;
  IkConstraintTimeline *this_03;
  TransformConstraintTimeline *this_04;
  PathConstraintSpacingTimeline *this_05;
  PathConstraintMixTimeline *this_06;
  DeformTimeline *this_07;
  DrawOrderTimeline *this_08;
  ulong uVar30;
  EventTimeline *this_09;
  Event *this_10;
  undefined8 *puVar31;
  ulong uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  byte *pbVar38;
  ulong uVar39;
  undefined1 *puVar40;
  long lVar41;
  ulong uVar42;
  undefined1 *puVar43;
  long lVar44;
  void *pvVar45;
  float *pfVar46;
  undefined4 *puVar47;
  byte *pbVar48;
  int iVar49;
  byte *pbVar50;
  Skin *this_11;
  float *pfVar51;
  long lVar52;
  uint uVar53;
  undefined8 *puVar54;
  ulong uVar55;
  undefined1 *puVar56;
  ulong uVar57;
  Animation *this_12;
  ulong uVar58;
  DataInput *pDVar59;
  ulong uVar60;
  ulong uVar61;
  int iVar62;
  EventData *pEVar63;
  char *pcVar64;
  float fVar65;
  undefined8 uVar66;
  int iVar67;
  byte bVar68;
  undefined8 uVar69;
  undefined8 uVar70;
  byte bVar71;
  float fVar72;
  byte bVar73;
  float fVar74;
  byte bVar75;
  float fVar76;
  byte bVar77;
  float fVar78;
  byte bVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  int local_1b0;
  int local_1ac;
  undefined **local_100;
  ulong local_f8;
  long local_f0;
  void *local_e8;
  undefined **local_e0;
  undefined1 *local_d8;
  undefined1 *local_d0;
  void *local_c8;
  undefined **local_c0;
  ulong local_b8;
  ulong local_b0;
  long local_a8;
  long local_a0;
  
  lVar24 = tpidr_el0;
  local_a0 = *(long *)(lVar24 + 0x28);
  local_c0 = &PTR__Vector_01c8cfd8;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  fVar83 = *(float *)(this + 0x48);
  pDVar59 = param_2 + 8;
  pbVar38 = *(byte **)pDVar59;
  pbVar50 = pbVar38 + 1;
  *(byte **)pDVar59 = pbVar50;
  uVar35 = *pbVar38 & 0x7f;
  if ((char)*pbVar38 < '\0') {
    pbVar50 = pbVar38 + 2;
    *(byte **)pDVar59 = pbVar50;
    uVar35 = uVar35 | (pbVar38[1] & 0x7f) << 7;
    if ((char)pbVar38[1] < '\0') {
      pbVar50 = pbVar38 + 3;
      *(byte **)pDVar59 = pbVar50;
      uVar35 = uVar35 | (pbVar38[2] & 0x7f) << 0xe;
      if ((char)pbVar38[2] < '\0') {
        pbVar50 = pbVar38 + 4;
        *(byte **)pDVar59 = pbVar50;
        uVar35 = uVar35 | (pbVar38[3] & 0x7f) << 0x15;
        if ((char)pbVar38[3] < '\0') {
          pbVar50 = pbVar38 + 5;
          *(byte **)pDVar59 = pbVar50;
          uVar35 = uVar35 | (uint)pbVar38[4] << 0x1c;
        }
      }
    }
  }
  pbVar38 = pbVar50 + 1;
  *(byte **)pDVar59 = pbVar38;
  bVar26 = (*pbVar50 & 0x80) == 0;
  uVar34 = *pbVar50 & 0x7f;
  uVar39 = 0;
  if ((int)uVar35 < 1) {
    fVar82 = 0.0;
  }
  else {
    iVar62 = 0;
    fVar82 = 0.0;
    do {
      pbVar48 = pbVar38;
      if (!bVar26) {
        pbVar48 = pbVar50 + 2;
        *(byte **)pDVar59 = pbVar48;
        uVar34 = (*pbVar38 & 0x7f) << 7 | uVar34;
        if ((char)*pbVar38 < '\0') {
          pbVar48 = pbVar50 + 3;
          *(byte **)pDVar59 = pbVar48;
          uVar34 = (pbVar50[2] & 0x7f) << 0xe | uVar34;
          if ((char)pbVar50[2] < '\0') {
            pbVar48 = pbVar50 + 4;
            *(byte **)pDVar59 = pbVar48;
            uVar34 = (pbVar50[3] & 0x7f) << 0x15 | uVar34;
            if ((char)pbVar50[3] < '\0') {
              pbVar48 = pbVar50 + 5;
              *(byte **)pDVar59 = pbVar48;
              uVar34 = uVar34 | (uint)pbVar50[4] << 0x1c;
            }
          }
        }
      }
      pbVar50 = pbVar48 + 1;
      *(byte **)pDVar59 = pbVar50;
      uVar53 = *pbVar48 & 0x7f;
      if ((char)*pbVar48 < '\0') {
        pbVar50 = pbVar48 + 2;
        *(byte **)pDVar59 = pbVar50;
        uVar53 = uVar53 | (pbVar48[1] & 0x7f) << 7;
        if ((char)pbVar48[1] < '\0') {
          pbVar50 = pbVar48 + 3;
          *(byte **)pDVar59 = pbVar50;
          uVar53 = uVar53 | (pbVar48[2] & 0x7f) << 0xe;
          if ((char)pbVar48[2] < '\0') {
            pbVar50 = pbVar48 + 4;
            *(byte **)pDVar59 = pbVar50;
            uVar53 = uVar53 | (pbVar48[3] & 0x7f) << 0x15;
            if ((char)pbVar48[3] < '\0') {
              pbVar50 = pbVar48 + 5;
              *(byte **)pDVar59 = pbVar50;
              uVar53 = uVar53 | (uint)pbVar48[4] << 0x1c;
            }
          }
        }
      }
      if (0 < (int)uVar53) {
        iVar49 = 0;
        do {
          *(byte **)pDVar59 = pbVar50 + 1;
          bVar68 = *pbVar50;
          *(byte **)pDVar59 = pbVar50 + 2;
          uVar33 = pbVar50[1] & 0x7f;
          if ((char)pbVar50[1] < '\0') {
            *(byte **)pDVar59 = pbVar50 + 3;
            uVar33 = uVar33 | (pbVar50[2] & 0x7f) << 7;
            if ((char)pbVar50[2] < '\0') {
              *(byte **)pDVar59 = pbVar50 + 4;
              uVar33 = uVar33 | (pbVar50[3] & 0x7f) << 0xe;
              if ((char)pbVar50[3] < '\0') {
                *(byte **)pDVar59 = pbVar50 + 5;
                uVar33 = uVar33 | (pbVar50[4] & 0x7f) << 0x15;
                if ((char)pbVar50[4] < '\0') {
                  *(byte **)pDVar59 = pbVar50 + 6;
                  uVar33 = uVar33 | (uint)pbVar50[5] << 0x1c;
                }
              }
            }
          }
          if (bVar68 != 2) {
            if (bVar68 == 1) {
              this_00 = SpineObject::operator_new
                                  (0x50,
                                   "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonBinary.cpp"
                                   ,0x2b2);
              ColorTimeline::ColorTimeline(this_00,uVar33);
              *(uint *)(this_00 + 0x28) = uVar34;
              if (0 < (int)uVar33) {
                uVar37 = 0;
                do {
                  puVar40 = *(undefined1 **)pDVar59;
                  *(undefined1 **)pDVar59 = puVar40 + 1;
                  uVar2 = *puVar40;
                  *(undefined1 **)pDVar59 = puVar40 + 2;
                  uVar3 = puVar40[1];
                  *(undefined1 **)pDVar59 = puVar40 + 3;
                  uVar4 = puVar40[2];
                  *(undefined1 **)pDVar59 = puVar40 + 4;
                  uVar5 = puVar40[3];
                  *(undefined1 **)pDVar59 = puVar40 + 5;
                  bVar68 = puVar40[4];
                  *(undefined1 **)pDVar59 = puVar40 + 6;
                  bVar71 = puVar40[5];
                  *(undefined1 **)pDVar59 = puVar40 + 7;
                  bVar73 = puVar40[6];
                  *(undefined1 **)pDVar59 = puVar40 + 8;
                  fVar65 = (float)NEON_ucvtf((uint)bVar68);
                  fVar72 = (float)NEON_ucvtf((uint)bVar71);
                  fVar74 = (float)NEON_ucvtf((uint)bVar73);
                  fVar76 = (float)NEON_ucvtf((uint)(byte)puVar40[7]);
                  ColorTimeline::setFrame
                            (this_00,uVar37,
                             (float)CONCAT31(CONCAT21(CONCAT11(uVar2,uVar3),uVar4),uVar5),
                             fVar65 / 255.0,fVar72 / 255.0,fVar74 / 255.0,fVar76 / 255.0);
                  if ((int)uVar37 < (int)(uVar33 - 1)) {
                    readCurve(this,param_2,uVar37,(CurveTimeline *)this_00);
                  }
                  uVar37 = uVar37 + 1;
                } while (uVar33 != uVar37);
              }
              lVar52 = local_a8;
              if (local_b8 == local_b0) {
                uVar37 = (uint)((float)local_b8 * 1.75);
                if (uVar37 < 9) {
                  uVar37 = 8;
                }
                local_b0 = (ulong)(int)uVar37;
                plVar28 = (long *)SpineExtension::getInstance();
                local_a8 = (**(code **)(*plVar28 + 0x20))
                                     (plVar28,lVar52,
                                      -(ulong)(uVar37 >> 0x1f) & 0xfffffff800000000 |
                                      (ulong)uVar37 << 3,
                                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                                      ,0x6a);
                puVar31 = (undefined8 *)(local_a8 + local_b8 * 8);
              }
              else {
                puVar31 = (undefined8 *)(local_a8 + local_b8 * 8);
              }
              local_b8 = local_b8 + 1;
              *puVar31 = this_00;
              iVar67 = (uVar33 - 1) * 5;
              pAVar27 = (AttachmentTimeline *)(this_00 + 0x48);
              goto LAB_00cf8178;
            }
            if (bVar68 == 0) {
              pAVar27 = SpineObject::operator_new
                                  (0x50,
                                   "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonBinary.cpp"
                                   ,0x2a6);
              AttachmentTimeline::AttachmentTimeline(pAVar27,uVar33);
              iVar67 = uVar33 - 1;
              *(long *)(pAVar27 + 8) = (long)(int)uVar34;
              if (0 < (int)uVar33) {
                uVar37 = 0;
                do {
                  puVar40 = *(undefined1 **)pDVar59;
                  *(undefined1 **)pDVar59 = puVar40 + 1;
                  uVar2 = *puVar40;
                  *(undefined1 **)pDVar59 = puVar40 + 2;
                  uVar3 = puVar40[1];
                  *(undefined1 **)pDVar59 = puVar40 + 3;
                  uVar4 = puVar40[2];
                  *(undefined1 **)pDVar59 = puVar40 + 4;
                  uVar5 = puVar40[3];
                  *(undefined1 **)pDVar59 = puVar40 + 5;
                  uVar36 = (byte)puVar40[4] & 0x7f;
                  if ((char)puVar40[4] < '\0') {
                    *(undefined1 **)pDVar59 = puVar40 + 6;
                    uVar36 = uVar36 | ((byte)puVar40[5] & 0x7f) << 7;
                    if ((char)puVar40[5] < '\0') {
                      *(undefined1 **)pDVar59 = puVar40 + 7;
                      uVar36 = uVar36 | ((byte)puVar40[6] & 0x7f) << 0xe;
                      if ((char)puVar40[6] < '\0') {
                        *(undefined1 **)pDVar59 = puVar40 + 8;
                        uVar36 = uVar36 | ((byte)puVar40[7] & 0x7f) << 0x15;
                        if ((char)puVar40[7] < '\0') {
                          *(undefined1 **)pDVar59 = puVar40 + 9;
                          uVar36 = uVar36 | (uint)(byte)puVar40[8] << 0x1c;
                        }
                      }
                    }
                  }
                  if (uVar36 == 0) {
LAB_00cf7d1c:
                    local_e0 = &PTR__String_01c67868;
                    local_d8 = (undefined1 *)0x0;
                    local_d0 = (undefined1 *)0x0;
                  }
                  else {
                    pcVar64 = *(char **)(*(long *)(param_3 + 0x180) + (long)(int)(uVar36 - 1) * 8);
                    local_e0 = &PTR__String_01c67868;
                    if (pcVar64 == (char *)0x0) goto LAB_00cf7d1c;
                    local_d8 = (undefined1 *)strlen(pcVar64);
                    lVar52 = (long)local_d8 + 1;
                    plVar28 = (long *)SpineExtension::getInstance();
                    local_d0 = (undefined1 *)
                               (**(code **)(*plVar28 + 0x18))
                                         (plVar28,lVar52,
                                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                          ,0x39);
                    memcpy(local_d0,pcVar64,(long)local_d8 + 1);
                  }
                  AttachmentTimeline::setFrame
                            (pAVar27,uVar37,
                             (float)CONCAT31(CONCAT21(CONCAT11(uVar2,uVar3),uVar4),uVar5),
                             (String *)&local_e0);
                  puVar40 = local_d0;
                  local_e0 = &PTR__String_01c67868;
                  if (local_d0 != (undefined1 *)0x0) {
                    plVar28 = (long *)SpineExtension::getInstance();
                    (**(code **)(*plVar28 + 0x28))
                              (plVar28,puVar40,
                               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                               ,0xc9);
                  }
                  SpineObject::~SpineObject((SpineObject *)&local_e0);
                  uVar37 = uVar37 + 1;
                } while (uVar33 != uVar37);
              }
              lVar52 = local_a8;
              if (local_b8 == local_b0) {
                uVar33 = (uint)((float)local_b8 * 1.75);
                if (uVar33 < 9) {
                  uVar33 = 8;
                }
                local_b0 = (ulong)(int)uVar33;
                plVar28 = (long *)SpineExtension::getInstance();
                local_a8 = (**(code **)(*plVar28 + 0x20))
                                     (plVar28,lVar52,
                                      -(ulong)(uVar33 >> 0x1f) & 0xfffffff800000000 |
                                      (ulong)uVar33 << 3,
                                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                                      ,0x6a);
                puVar31 = (undefined8 *)(local_a8 + local_b8 * 8);
              }
              else {
                puVar31 = (undefined8 *)(local_a8 + local_b8 * 8);
              }
              local_b8 = local_b8 + 1;
              *puVar31 = pAVar27;
              pAVar27 = pAVar27 + 0x28;
              goto LAB_00cf8178;
            }
            if (0 < (int)uVar39) {
              uVar60 = (long)(int)uVar39;
              do {
                uVar58 = uVar60 - 1;
                plVar28 = *(long **)(local_a8 + uVar58 * 8);
                uVar42 = uVar39;
                if (plVar28 != (long *)0x0) {
                  (**(code **)(*plVar28 + 8))();
                  uVar42 = local_b8;
                }
                uVar39 = uVar42 - 1;
                if (uVar58 < uVar39) {
                  do {
                    lVar52 = uVar60 * 8;
                    uVar60 = uVar60 + 1;
                    puVar31 = (undefined8 *)(local_a8 + lVar52);
                    uVar66 = puVar31[-1];
                    puVar31[-1] = *puVar31;
                    *(undefined8 *)(local_a8 + lVar52) = uVar66;
                  } while (uVar42 != uVar60);
                }
                uVar60 = uVar58;
                local_b8 = uVar39;
              } while (0 < (long)uVar58);
            }
            pcVar64 = "Invalid timeline type for a slot: ";
            lVar52 = *(long *)(*(long *)(param_3 + 0x58) + (long)(int)uVar34 * 8);
            goto LAB_00cf88f0;
          }
          this_01 = SpineObject::operator_new
                              (0x50,
                               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonBinary.cpp"
                               ,0x2c3);
          TwoColorTimeline::TwoColorTimeline(this_01,uVar33);
          *(uint *)(this_01 + 0x48) = uVar34;
          if (0 < (int)uVar33) {
            uVar37 = 0;
            do {
              puVar40 = *(undefined1 **)pDVar59;
              *(undefined1 **)pDVar59 = puVar40 + 1;
              uVar2 = *puVar40;
              *(undefined1 **)pDVar59 = puVar40 + 2;
              uVar3 = puVar40[1];
              *(undefined1 **)pDVar59 = puVar40 + 3;
              uVar4 = puVar40[2];
              *(undefined1 **)pDVar59 = puVar40 + 4;
              uVar5 = puVar40[3];
              *(undefined1 **)pDVar59 = puVar40 + 5;
              bVar68 = puVar40[4];
              *(undefined1 **)pDVar59 = puVar40 + 6;
              bVar71 = puVar40[5];
              *(undefined1 **)pDVar59 = puVar40 + 7;
              bVar73 = puVar40[6];
              *(undefined1 **)pDVar59 = puVar40 + 8;
              bVar75 = puVar40[7];
              *(undefined1 **)pDVar59 = puVar40 + 10;
              bVar77 = puVar40[9];
              *(undefined1 **)pDVar59 = puVar40 + 0xb;
              bVar79 = puVar40[10];
              *(undefined1 **)pDVar59 = puVar40 + 0xc;
              fVar65 = (float)NEON_ucvtf((uint)bVar68);
              fVar72 = (float)NEON_ucvtf((uint)bVar71);
              fVar74 = (float)NEON_ucvtf((uint)bVar73);
              fVar76 = (float)NEON_ucvtf((uint)bVar75);
              fVar78 = (float)NEON_ucvtf((uint)bVar77);
              fVar80 = (float)NEON_ucvtf((uint)bVar79);
              fVar81 = (float)NEON_ucvtf((uint)(byte)puVar40[0xb]);
              TwoColorTimeline::setFrame
                        (this_01,uVar37,(float)CONCAT31(CONCAT21(CONCAT11(uVar2,uVar3),uVar4),uVar5)
                         ,fVar65 / 255.0,fVar72 / 255.0,fVar74 / 255.0,fVar76 / 255.0,fVar78 / 255.0
                         ,fVar80 / 255.0,fVar81 / 255.0);
              if ((int)uVar37 < (int)(uVar33 - 1)) {
                readCurve(this,param_2,uVar37,(CurveTimeline *)this_01);
              }
              uVar37 = uVar37 + 1;
            } while (uVar33 != uVar37);
          }
          lVar52 = local_a8;
          if (local_b8 == local_b0) {
            uVar37 = (uint)((float)local_b8 * 1.75);
            if (uVar37 < 9) {
              uVar37 = 8;
            }
            local_b0 = (ulong)(int)uVar37;
            plVar28 = (long *)SpineExtension::getInstance();
            local_a8 = (**(code **)(*plVar28 + 0x20))
                                 (plVar28,lVar52,
                                  -(ulong)(uVar37 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar37 << 3
                                  ,
                                  "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                                  ,0x6a);
            puVar31 = (undefined8 *)(local_a8 + local_b8 * 8);
          }
          else {
            puVar31 = (undefined8 *)(local_a8 + local_b8 * 8);
          }
          local_b8 = local_b8 + 1;
          *puVar31 = this_01;
          iVar67 = (uVar33 - 1) * 8;
          pAVar27 = (AttachmentTimeline *)(this_01 + 0x40);
LAB_00cf8178:
          iVar49 = iVar49 + 1;
          fVar65 = *(float *)(*(long *)pAVar27 + (long)iVar67 * 4);
          pbVar50 = *(byte **)pDVar59;
          if (fVar82 <= fVar65) {
            fVar82 = fVar65;
          }
          uVar39 = local_b8;
        } while (iVar49 < (int)uVar53);
      }
      pbVar38 = pbVar50 + 1;
      *(byte **)pDVar59 = pbVar38;
      bVar26 = (*pbVar50 & 0x80) == 0;
      iVar62 = iVar62 + 1;
      uVar34 = *pbVar50 & 0x7f;
    } while (iVar62 < (int)uVar35);
  }
  pbVar48 = pbVar38;
  if (!bVar26) {
    pbVar48 = pbVar50 + 2;
    *(byte **)pDVar59 = pbVar48;
    uVar34 = uVar34 | (*pbVar38 & 0x7f) << 7;
    if ((char)*pbVar38 < '\0') {
      *(byte **)pDVar59 = pbVar50 + 3;
      uVar34 = uVar34 | (pbVar50[2] & 0x7f) << 0xe;
      pbVar48 = pbVar50 + 3;
      if ((char)pbVar50[2] < '\0') {
        *(byte **)pDVar59 = pbVar50 + 4;
        uVar34 = uVar34 | (pbVar50[3] & 0x7f) << 0x15;
        pbVar48 = pbVar50 + 4;
        if ((char)pbVar50[3] < '\0') {
          *(byte **)pDVar59 = pbVar50 + 5;
          uVar34 = uVar34 | (uint)pbVar50[4] << 0x1c;
          pbVar48 = pbVar50 + 5;
        }
      }
    }
  }
  pbVar50 = pbVar48 + 1;
  *(byte **)pDVar59 = pbVar50;
  bVar26 = (*pbVar48 & 0x80) == 0;
  uVar35 = *pbVar48 & 0x7f;
  if (0 < (int)uVar34) {
    iVar62 = 0;
    do {
      pbVar38 = pbVar50;
      if (!bVar26) {
        pbVar38 = pbVar48 + 2;
        *(byte **)pDVar59 = pbVar38;
        uVar35 = (*pbVar50 & 0x7f) << 7 | uVar35;
        if ((char)*pbVar50 < '\0') {
          pbVar38 = pbVar48 + 3;
          *(byte **)pDVar59 = pbVar38;
          uVar35 = (pbVar48[2] & 0x7f) << 0xe | uVar35;
          if ((char)pbVar48[2] < '\0') {
            pbVar38 = pbVar48 + 4;
            *(byte **)pDVar59 = pbVar38;
            uVar35 = (pbVar48[3] & 0x7f) << 0x15 | uVar35;
            if ((char)pbVar48[3] < '\0') {
              pbVar38 = pbVar48 + 5;
              *(byte **)pDVar59 = pbVar38;
              uVar35 = uVar35 | (uint)pbVar48[4] << 0x1c;
            }
          }
        }
      }
      pbVar48 = pbVar38 + 1;
      *(byte **)pDVar59 = pbVar48;
      uVar53 = *pbVar38 & 0x7f;
      if ((char)*pbVar38 < '\0') {
        pbVar48 = pbVar38 + 2;
        *(byte **)pDVar59 = pbVar48;
        uVar53 = uVar53 | (pbVar38[1] & 0x7f) << 7;
        if ((char)pbVar38[1] < '\0') {
          pbVar48 = pbVar38 + 3;
          *(byte **)pDVar59 = pbVar48;
          uVar53 = uVar53 | (pbVar38[2] & 0x7f) << 0xe;
          if ((char)pbVar38[2] < '\0') {
            pbVar48 = pbVar38 + 4;
            *(byte **)pDVar59 = pbVar48;
            uVar53 = uVar53 | (pbVar38[3] & 0x7f) << 0x15;
            if ((char)pbVar38[3] < '\0') {
              pbVar48 = pbVar38 + 5;
              *(byte **)pDVar59 = pbVar48;
              uVar53 = uVar53 | (uint)pbVar38[4] << 0x1c;
            }
          }
        }
      }
      if (0 < (int)uVar53) {
        iVar49 = 0;
        do {
          *(byte **)pDVar59 = pbVar48 + 1;
          bVar68 = *pbVar48;
          *(byte **)pDVar59 = pbVar48 + 2;
          uVar33 = pbVar48[1] & 0x7f;
          if ((char)pbVar48[1] < '\0') {
            *(byte **)pDVar59 = pbVar48 + 3;
            uVar33 = uVar33 | (pbVar48[2] & 0x7f) << 7;
            if ((char)pbVar48[2] < '\0') {
              *(byte **)pDVar59 = pbVar48 + 4;
              uVar33 = uVar33 | (pbVar48[3] & 0x7f) << 0xe;
              if ((char)pbVar48[3] < '\0') {
                *(byte **)pDVar59 = pbVar48 + 5;
                uVar33 = uVar33 | (pbVar48[4] & 0x7f) << 0x15;
                if ((char)pbVar48[4] < '\0') {
                  *(byte **)pDVar59 = pbVar48 + 6;
                  uVar33 = uVar33 | (uint)pbVar48[5] << 0x1c;
                }
              }
            }
          }
          switch(bVar68) {
          case 0:
            pRVar29 = SpineObject::operator_new
                                (0x50,
                                 "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonBinary.cpp"
                                 ,0x2e9);
            RotateTimeline::RotateTimeline(pRVar29,uVar33);
            *(uint *)(pRVar29 + 0x28) = uVar35;
            if (0 < (int)uVar33) {
              uVar37 = 0;
              do {
                puVar40 = *(undefined1 **)pDVar59;
                *(undefined1 **)pDVar59 = puVar40 + 1;
                uVar2 = *puVar40;
                *(undefined1 **)pDVar59 = puVar40 + 2;
                uVar3 = puVar40[1];
                *(undefined1 **)pDVar59 = puVar40 + 3;
                uVar4 = puVar40[2];
                *(undefined1 **)pDVar59 = puVar40 + 4;
                uVar5 = puVar40[3];
                *(undefined1 **)pDVar59 = puVar40 + 5;
                uVar6 = puVar40[4];
                *(undefined1 **)pDVar59 = puVar40 + 6;
                uVar7 = puVar40[5];
                *(undefined1 **)pDVar59 = puVar40 + 7;
                uVar8 = puVar40[6];
                *(undefined1 **)pDVar59 = puVar40 + 8;
                RotateTimeline::setFrame
                          (pRVar29,uVar37,
                           (float)CONCAT31(CONCAT21(CONCAT11(uVar2,uVar3),uVar4),uVar5),
                           (float)CONCAT31(CONCAT21(CONCAT11(uVar6,uVar7),uVar8),puVar40[7]));
                if ((int)uVar37 < (int)(uVar33 - 1)) {
                  readCurve(this,param_2,uVar37,(CurveTimeline *)pRVar29);
                }
                uVar37 = uVar37 + 1;
              } while (uVar33 != uVar37);
            }
            lVar52 = local_a8;
            if (local_b8 == local_b0) {
              uVar37 = (uint)((float)local_b8 * 1.75);
              if (uVar37 < 9) {
                uVar37 = 8;
              }
              local_b0 = (ulong)(int)uVar37;
              plVar28 = (long *)SpineExtension::getInstance();
              local_a8 = (**(code **)(*plVar28 + 0x20))
                                   (plVar28,lVar52,
                                    -(ulong)(uVar37 >> 0x1f) & 0xfffffff800000000 |
                                    (ulong)uVar37 << 3,
                                    "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                                    ,0x6a);
              puVar31 = (undefined8 *)(local_a8 + local_b8 * 8);
            }
            else {
              puVar31 = (undefined8 *)(local_a8 + local_b8 * 8);
            }
            *puVar31 = pRVar29;
            iVar67 = uVar33 * 2 + -2;
            pRVar29 = pRVar29 + 0x48;
            goto LAB_00cf87f4;
          case 1:
            this_02 = SpineObject::operator_new
                                (0x50,
                                 "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonBinary.cpp"
                                 ,0x2ff);
            TranslateTimeline::TranslateTimeline((TranslateTimeline *)this_02,uVar33);
            fVar65 = fVar83;
            break;
          case 2:
            this_02 = SpineObject::operator_new
                                (0x50,
                                 "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonBinary.cpp"
                                 ,0x2fb);
            ScaleTimeline::ScaleTimeline((ScaleTimeline *)this_02,uVar33);
            fVar65 = 1.0;
            break;
          case 3:
            this_02 = SpineObject::operator_new
                                (0x50,
                                 "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonBinary.cpp"
                                 ,0x2fd);
            ShearTimeline::ShearTimeline(this_02,uVar33);
            fVar65 = 1.0;
            break;
          default:
            if (0 < (int)uVar39) {
              uVar60 = (long)(int)uVar39;
              do {
                uVar58 = uVar60 - 1;
                plVar28 = *(long **)(local_a8 + uVar58 * 8);
                uVar42 = uVar39;
                if (plVar28 != (long *)0x0) {
                  (**(code **)(*plVar28 + 8))();
                  uVar42 = local_b8;
                }
                uVar39 = uVar42 - 1;
                if (uVar58 < uVar39) {
                  do {
                    lVar52 = uVar60 * 8;
                    uVar60 = uVar60 + 1;
                    puVar31 = (undefined8 *)(local_a8 + lVar52);
                    uVar66 = puVar31[-1];
                    puVar31[-1] = *puVar31;
                    *(undefined8 *)(local_a8 + lVar52) = uVar66;
                  } while (uVar42 != uVar60);
                }
                uVar60 = uVar58;
                local_b8 = uVar39;
              } while (0 < (long)uVar58);
            }
            pcVar64 = "Invalid timeline type for a bone: ";
            lVar52 = *(long *)(*(long *)(param_3 + 0x38) + (long)(int)uVar35 * 8);
LAB_00cf88f0:
            setError(this,pcVar64,*(char **)(lVar52 + 0x20));
LAB_00cf88fc:
            this_12 = (Animation *)0x0;
            goto LAB_00cf8900;
          }
          *(uint *)(this_02 + 0x48) = uVar35;
          if (0 < (int)uVar33) {
            uVar37 = 0;
            do {
              puVar40 = *(undefined1 **)pDVar59;
              *(undefined1 **)pDVar59 = puVar40 + 1;
              uVar2 = *puVar40;
              *(undefined1 **)pDVar59 = puVar40 + 2;
              uVar3 = puVar40[1];
              *(undefined1 **)pDVar59 = puVar40 + 3;
              uVar4 = puVar40[2];
              *(undefined1 **)pDVar59 = puVar40 + 4;
              uVar5 = puVar40[3];
              *(undefined1 **)pDVar59 = puVar40 + 5;
              uVar6 = puVar40[4];
              *(undefined1 **)pDVar59 = puVar40 + 6;
              uVar7 = puVar40[5];
              *(undefined1 **)pDVar59 = puVar40 + 7;
              uVar8 = puVar40[6];
              *(undefined1 **)pDVar59 = puVar40 + 8;
              uVar9 = puVar40[7];
              *(undefined1 **)pDVar59 = puVar40 + 9;
              uVar10 = puVar40[8];
              *(undefined1 **)pDVar59 = puVar40 + 10;
              uVar11 = puVar40[9];
              *(undefined1 **)pDVar59 = puVar40 + 0xb;
              uVar12 = puVar40[10];
              *(undefined1 **)pDVar59 = puVar40 + 0xc;
              TranslateTimeline::setFrame
                        ((TranslateTimeline *)this_02,uVar37,
                         (float)CONCAT31(CONCAT21(CONCAT11(uVar2,uVar3),uVar4),uVar5),
                         fVar65 * (float)CONCAT31(CONCAT21(CONCAT11(uVar6,uVar7),uVar8),uVar9),
                         fVar65 * (float)CONCAT31(CONCAT21(CONCAT11(uVar10,uVar11),uVar12),
                                                  puVar40[0xb]));
              if ((int)uVar37 < (int)(uVar33 - 1)) {
                readCurve(this,param_2,uVar37,(CurveTimeline *)this_02);
              }
              uVar37 = uVar37 + 1;
            } while (uVar33 != uVar37);
          }
          lVar52 = local_a8;
          if (local_b8 == local_b0) {
            uVar37 = (uint)((float)local_b8 * 1.75);
            if (uVar37 < 9) {
              uVar37 = 8;
            }
            local_b0 = (ulong)(int)uVar37;
            plVar28 = (long *)SpineExtension::getInstance();
            local_a8 = (**(code **)(*plVar28 + 0x20))
                                 (plVar28,lVar52,
                                  -(ulong)(uVar37 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar37 << 3
                                  ,
                                  "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                                  ,0x6a);
            puVar31 = (undefined8 *)(local_a8 + local_b8 * 8);
          }
          else {
            puVar31 = (undefined8 *)(local_a8 + local_b8 * 8);
          }
          *puVar31 = this_02;
          pRVar29 = (RotateTimeline *)(this_02 + 0x40);
          iVar67 = (uVar33 - 1) * 3;
LAB_00cf87f4:
          local_b8 = local_b8 + 1;
          iVar49 = iVar49 + 1;
          fVar65 = *(float *)(*(long *)pRVar29 + (long)iVar67 * 4);
          pbVar48 = *(byte **)pDVar59;
          if (fVar82 <= fVar65) {
            fVar82 = fVar65;
          }
          uVar39 = local_b8;
        } while (iVar49 < (int)uVar53);
      }
      pbVar50 = pbVar48 + 1;
      *(byte **)pDVar59 = pbVar50;
      bVar26 = (*pbVar48 & 0x80) == 0;
      iVar62 = iVar62 + 1;
      uVar35 = *pbVar48 & 0x7f;
    } while (iVar62 < (int)uVar34);
  }
  pbVar38 = pbVar50;
  if (!bVar26) {
    pbVar38 = pbVar48 + 2;
    *(byte **)pDVar59 = pbVar38;
    uVar35 = uVar35 | (*pbVar50 & 0x7f) << 7;
    if ((char)*pbVar50 < '\0') {
      pbVar38 = pbVar48 + 3;
      *(byte **)pDVar59 = pbVar38;
      uVar35 = uVar35 | (pbVar48[2] & 0x7f) << 0xe;
      if ((char)pbVar48[2] < '\0') {
        pbVar38 = pbVar48 + 4;
        *(byte **)pDVar59 = pbVar38;
        uVar35 = uVar35 | (pbVar48[3] & 0x7f) << 0x15;
        if ((char)pbVar48[3] < '\0') {
          pbVar38 = pbVar48 + 5;
          *(byte **)pDVar59 = pbVar38;
          uVar35 = uVar35 | (uint)pbVar48[4] << 0x1c;
        }
      }
    }
  }
  iVar62 = 0;
  while( true ) {
    pbVar50 = pbVar38 + 1;
    *(byte **)pDVar59 = pbVar50;
    uVar34 = *pbVar38 & 0x7f;
    if ((char)*pbVar38 < '\0') {
      pbVar50 = pbVar38 + 2;
      *(byte **)pDVar59 = pbVar50;
      uVar34 = uVar34 | (pbVar38[1] & 0x7f) << 7;
      if ((char)pbVar38[1] < '\0') {
        pbVar50 = pbVar38 + 3;
        *(byte **)pDVar59 = pbVar50;
        uVar34 = uVar34 | (pbVar38[2] & 0x7f) << 0xe;
        if ((char)pbVar38[2] < '\0') {
          pbVar50 = pbVar38 + 4;
          *(byte **)pDVar59 = pbVar50;
          uVar34 = uVar34 | (pbVar38[3] & 0x7f) << 0x15;
          if ((char)pbVar38[3] < '\0') {
            pbVar50 = pbVar38 + 5;
            *(byte **)pDVar59 = pbVar50;
            uVar34 = uVar34 | (uint)pbVar38[4] << 0x1c;
          }
        }
      }
    }
    if ((int)uVar35 <= iVar62) break;
    *(byte **)pDVar59 = pbVar50 + 1;
    uVar53 = *pbVar50 & 0x7f;
    if ((char)*pbVar50 < '\0') {
      *(byte **)pDVar59 = pbVar50 + 2;
      uVar53 = uVar53 | (pbVar50[1] & 0x7f) << 7;
      if ((char)pbVar50[1] < '\0') {
        *(byte **)pDVar59 = pbVar50 + 3;
        uVar53 = uVar53 | (pbVar50[2] & 0x7f) << 0xe;
        if ((char)pbVar50[2] < '\0') {
          *(byte **)pDVar59 = pbVar50 + 4;
          uVar53 = uVar53 | (pbVar50[3] & 0x7f) << 0x15;
          if ((char)pbVar50[3] < '\0') {
            *(byte **)pDVar59 = pbVar50 + 5;
            uVar53 = uVar53 | (uint)pbVar50[4] << 0x1c;
          }
        }
      }
    }
    this_03 = SpineObject::operator_new
                        (0x50,
                         "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonBinary.cpp"
                         ,0x31d);
    IkConstraintTimeline::IkConstraintTimeline(this_03,uVar53);
    *(uint *)(this_03 + 0x48) = uVar34;
    if (0 < (int)uVar53) {
      uVar34 = 0;
      do {
        puVar40 = *(undefined1 **)pDVar59;
        *(undefined1 **)pDVar59 = puVar40 + 1;
        uVar2 = *puVar40;
        *(undefined1 **)pDVar59 = puVar40 + 2;
        uVar3 = puVar40[1];
        *(undefined1 **)pDVar59 = puVar40 + 3;
        uVar4 = puVar40[2];
        *(undefined1 **)pDVar59 = puVar40 + 4;
        uVar5 = puVar40[3];
        *(undefined1 **)pDVar59 = puVar40 + 5;
        uVar6 = puVar40[4];
        *(undefined1 **)pDVar59 = puVar40 + 6;
        uVar7 = puVar40[5];
        *(undefined1 **)pDVar59 = puVar40 + 7;
        uVar8 = puVar40[6];
        *(undefined1 **)pDVar59 = puVar40 + 8;
        uVar9 = puVar40[7];
        *(undefined1 **)pDVar59 = puVar40 + 9;
        uVar10 = puVar40[8];
        *(undefined1 **)pDVar59 = puVar40 + 10;
        uVar11 = puVar40[9];
        *(undefined1 **)pDVar59 = puVar40 + 0xb;
        uVar12 = puVar40[10];
        *(undefined1 **)pDVar59 = puVar40 + 0xc;
        uVar13 = puVar40[0xb];
        fVar65 = *(float *)(this + 0x48);
        *(undefined1 **)pDVar59 = puVar40 + 0xd;
        cVar22 = puVar40[0xc];
        *(undefined1 **)pDVar59 = puVar40 + 0xe;
        cVar14 = puVar40[0xd];
        *(undefined1 **)pDVar59 = puVar40 + 0xf;
        IkConstraintTimeline::setFrame
                  (this_03,uVar34,(float)CONCAT31(CONCAT21(CONCAT11(uVar2,uVar3),uVar4),uVar5),
                   (float)CONCAT31(CONCAT21(CONCAT11(uVar6,uVar7),uVar8),uVar9),
                   fVar65 * (float)CONCAT31(CONCAT21(CONCAT11(uVar10,uVar11),uVar12),uVar13),
                   (int)cVar22,cVar14 != '\0',puVar40[0xe] != '\0');
        if ((int)uVar34 < (int)(uVar53 - 1)) {
          readCurve(this,param_2,uVar34,(CurveTimeline *)this_03);
        }
        uVar34 = uVar34 + 1;
      } while (uVar53 != uVar34);
    }
    lVar52 = local_a8;
    if (local_b8 == local_b0) {
      uVar34 = (uint)((float)local_b8 * 1.75);
      if (uVar34 < 9) {
        uVar34 = 8;
      }
      local_b0 = (ulong)(int)uVar34;
      plVar28 = (long *)SpineExtension::getInstance();
      local_a8 = (**(code **)(*plVar28 + 0x20))
                           (plVar28,lVar52,
                            -(ulong)(uVar34 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar34 << 3,
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                            ,0x6a);
      puVar31 = (undefined8 *)(local_a8 + local_b8 * 8);
    }
    else {
      puVar31 = (undefined8 *)(local_a8 + local_b8 * 8);
    }
    local_b8 = local_b8 + 1;
    *puVar31 = this_03;
    pbVar38 = *(byte **)pDVar59;
    fVar65 = *(float *)(*(long *)(this_03 + 0x40) + (long)(int)((uVar53 - 1) * 6) * 4);
    iVar62 = iVar62 + 1;
    if (fVar82 <= fVar65) {
      fVar82 = fVar65;
    }
  }
  iVar62 = 0;
  while( true ) {
    pbVar38 = pbVar50 + 1;
    *(byte **)pDVar59 = pbVar38;
    uVar35 = *pbVar50 & 0x7f;
    if ((char)*pbVar50 < '\0') {
      pbVar38 = pbVar50 + 2;
      *(byte **)pDVar59 = pbVar38;
      uVar35 = uVar35 | (pbVar50[1] & 0x7f) << 7;
      if ((char)pbVar50[1] < '\0') {
        pbVar38 = pbVar50 + 3;
        *(byte **)pDVar59 = pbVar38;
        uVar35 = uVar35 | (pbVar50[2] & 0x7f) << 0xe;
        if ((char)pbVar50[2] < '\0') {
          pbVar38 = pbVar50 + 4;
          *(byte **)pDVar59 = pbVar38;
          uVar35 = uVar35 | (pbVar50[3] & 0x7f) << 0x15;
          if ((char)pbVar50[3] < '\0') {
            pbVar38 = pbVar50 + 5;
            *(byte **)pDVar59 = pbVar38;
            uVar35 = uVar35 | (uint)pbVar50[4] << 0x1c;
          }
        }
      }
    }
    if ((int)uVar34 <= iVar62) break;
    *(byte **)pDVar59 = pbVar38 + 1;
    uVar53 = *pbVar38 & 0x7f;
    if ((char)*pbVar38 < '\0') {
      *(byte **)pDVar59 = pbVar38 + 2;
      uVar53 = uVar53 | (pbVar38[1] & 0x7f) << 7;
      if ((char)pbVar38[1] < '\0') {
        *(byte **)pDVar59 = pbVar38 + 3;
        uVar53 = uVar53 | (pbVar38[2] & 0x7f) << 0xe;
        if ((char)pbVar38[2] < '\0') {
          *(byte **)pDVar59 = pbVar38 + 4;
          uVar53 = uVar53 | (pbVar38[3] & 0x7f) << 0x15;
          if ((char)pbVar38[3] < '\0') {
            *(byte **)pDVar59 = pbVar38 + 5;
            uVar53 = uVar53 | (uint)pbVar38[4] << 0x1c;
          }
        }
      }
    }
    this_04 = SpineObject::operator_new
                        (0x50,
                         "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonBinary.cpp"
                         ,0x331);
    TransformConstraintTimeline::TransformConstraintTimeline(this_04,uVar53);
    *(uint *)(this_04 + 0x48) = uVar35;
    if (0 < (int)uVar53) {
      uVar39 = 0;
      do {
        puVar40 = *(undefined1 **)pDVar59;
        *(undefined1 **)pDVar59 = puVar40 + 1;
        uVar2 = *puVar40;
        *(undefined1 **)pDVar59 = puVar40 + 2;
        uVar3 = puVar40[1];
        *(undefined1 **)pDVar59 = puVar40 + 3;
        uVar4 = puVar40[2];
        *(undefined1 **)pDVar59 = puVar40 + 4;
        uVar5 = puVar40[3];
        *(undefined1 **)pDVar59 = puVar40 + 5;
        uVar6 = puVar40[4];
        *(undefined1 **)pDVar59 = puVar40 + 6;
        uVar7 = puVar40[5];
        *(undefined1 **)pDVar59 = puVar40 + 7;
        uVar8 = puVar40[6];
        *(undefined1 **)pDVar59 = puVar40 + 8;
        uVar9 = puVar40[7];
        *(undefined1 **)pDVar59 = puVar40 + 9;
        uVar10 = puVar40[8];
        *(undefined1 **)pDVar59 = puVar40 + 10;
        uVar11 = puVar40[9];
        *(undefined1 **)pDVar59 = puVar40 + 0xb;
        uVar12 = puVar40[10];
        *(undefined1 **)pDVar59 = puVar40 + 0xc;
        uVar13 = puVar40[0xb];
        *(undefined1 **)pDVar59 = puVar40 + 0xd;
        uVar15 = puVar40[0xc];
        *(undefined1 **)pDVar59 = puVar40 + 0xe;
        uVar16 = puVar40[0xd];
        *(undefined1 **)pDVar59 = puVar40 + 0xf;
        uVar17 = puVar40[0xe];
        *(undefined1 **)pDVar59 = puVar40 + 0x10;
        uVar18 = puVar40[0xf];
        *(undefined1 **)pDVar59 = puVar40 + 0x11;
        uVar19 = puVar40[0x10];
        *(undefined1 **)pDVar59 = puVar40 + 0x12;
        uVar20 = puVar40[0x11];
        *(undefined1 **)pDVar59 = puVar40 + 0x13;
        uVar21 = puVar40[0x12];
        *(undefined1 **)pDVar59 = puVar40 + 0x14;
        TransformConstraintTimeline::setFrame
                  (this_04,uVar39,(float)CONCAT31(CONCAT21(CONCAT11(uVar2,uVar3),uVar4),uVar5),
                   (float)CONCAT31(CONCAT21(CONCAT11(uVar6,uVar7),uVar8),uVar9),
                   (float)CONCAT31(CONCAT21(CONCAT11(uVar10,uVar11),uVar12),uVar13),
                   (float)CONCAT31(CONCAT21(CONCAT11(uVar15,uVar16),uVar17),uVar18),
                   (float)CONCAT31(CONCAT21(CONCAT11(uVar19,uVar20),uVar21),puVar40[0x13]));
        if ((long)uVar39 < (long)(int)(uVar53 - 1)) {
          readCurve(this,param_2,(int)uVar39,(CurveTimeline *)this_04);
        }
        uVar39 = uVar39 + 1;
      } while (uVar53 != uVar39);
    }
    lVar52 = local_a8;
    if (local_b8 == local_b0) {
      uVar35 = (uint)((float)local_b8 * 1.75);
      if (uVar35 < 9) {
        uVar35 = 8;
      }
      local_b0 = (ulong)(int)uVar35;
      plVar28 = (long *)SpineExtension::getInstance();
      local_a8 = (**(code **)(*plVar28 + 0x20))
                           (plVar28,lVar52,
                            -(ulong)(uVar35 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar35 << 3,
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                            ,0x6a);
      puVar31 = (undefined8 *)(local_a8 + local_b8 * 8);
    }
    else {
      puVar31 = (undefined8 *)(local_a8 + local_b8 * 8);
    }
    local_b8 = local_b8 + 1;
    *puVar31 = this_04;
    iVar62 = iVar62 + 1;
    fVar65 = *(float *)(*(long *)(this_04 + 0x40) + (long)(int)((uVar53 - 1) * 5) * 4);
    pbVar50 = *(byte **)pDVar59;
    if (fVar82 <= fVar65) {
      fVar82 = fVar65;
    }
  }
  iVar62 = 0;
  while( true ) {
    pbVar50 = pbVar38 + 1;
    *(byte **)pDVar59 = pbVar50;
    uVar34 = *pbVar38 & 0x7f;
    if ((char)*pbVar38 < '\0') {
      pbVar50 = pbVar38 + 2;
      *(byte **)pDVar59 = pbVar50;
      uVar34 = uVar34 | (pbVar38[1] & 0x7f) << 7;
      if ((char)pbVar38[1] < '\0') {
        pbVar50 = pbVar38 + 3;
        *(byte **)pDVar59 = pbVar50;
        uVar34 = uVar34 | (pbVar38[2] & 0x7f) << 0xe;
        if ((char)pbVar38[2] < '\0') {
          pbVar50 = pbVar38 + 4;
          *(byte **)pDVar59 = pbVar50;
          uVar34 = uVar34 | (pbVar38[3] & 0x7f) << 0x15;
          if ((char)pbVar38[3] < '\0') {
            pbVar50 = pbVar38 + 5;
            *(byte **)pDVar59 = pbVar50;
            uVar34 = uVar34 | (uint)pbVar38[4] << 0x1c;
          }
        }
      }
    }
    if ((int)uVar35 <= iVar62) break;
    pbVar38 = pbVar50 + 1;
    lVar52 = *(long *)(*(long *)(param_3 + 0x120) + (long)(int)uVar34 * 8);
    *(byte **)pDVar59 = pbVar38;
    uVar53 = *pbVar50 & 0x7f;
    if ((char)*pbVar50 < '\0') {
      pbVar38 = pbVar50 + 2;
      *(byte **)pDVar59 = pbVar38;
      uVar53 = uVar53 | (pbVar50[1] & 0x7f) << 7;
      if ((char)pbVar50[1] < '\0') {
        pbVar38 = pbVar50 + 3;
        *(byte **)pDVar59 = pbVar38;
        uVar53 = uVar53 | (pbVar50[2] & 0x7f) << 0xe;
        if ((char)pbVar50[2] < '\0') {
          pbVar38 = pbVar50 + 4;
          *(byte **)pDVar59 = pbVar38;
          uVar53 = uVar53 | (pbVar50[3] & 0x7f) << 0x15;
          if ((char)pbVar50[3] < '\0') {
            pbVar38 = pbVar50 + 5;
            *(byte **)pDVar59 = pbVar38;
            uVar53 = uVar53 | (uint)pbVar50[4] << 0x1c;
          }
        }
      }
    }
    if (0 < (int)uVar53) {
      uVar33 = 0;
      do {
        *(byte **)pDVar59 = pbVar38 + 1;
        bVar68 = *pbVar38;
        *(byte **)pDVar59 = pbVar38 + 2;
        uVar37 = pbVar38[1] & 0x7f;
        if ((char)pbVar38[1] < '\0') {
          *(byte **)pDVar59 = pbVar38 + 3;
          uVar37 = uVar37 | (pbVar38[2] & 0x7f) << 7;
          if ((char)pbVar38[2] < '\0') {
            *(byte **)pDVar59 = pbVar38 + 4;
            uVar37 = uVar37 | (pbVar38[3] & 0x7f) << 0xe;
            if ((char)pbVar38[3] < '\0') {
              *(byte **)pDVar59 = pbVar38 + 5;
              uVar37 = uVar37 | (pbVar38[4] & 0x7f) << 0x15;
              if ((char)pbVar38[4] < '\0') {
                *(byte **)pDVar59 = pbVar38 + 6;
                uVar37 = uVar37 | (uint)pbVar38[5] << 0x1c;
              }
            }
          }
        }
        if (bVar68 < 2) {
          if (bVar68 == 1) {
            this_05 = SpineObject::operator_new
                                (0x50,
                                 "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonBinary.cpp"
                                 ,0x34d);
            PathConstraintSpacingTimeline::PathConstraintSpacingTimeline(this_05,uVar37);
            bVar26 = *(uint *)(lVar52 + 0x5c) < 2;
          }
          else {
            this_05 = SpineObject::operator_new
                                (0x50,
                                 "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonBinary.cpp"
                                 ,0x351);
            PathConstraintPositionTimeline::PathConstraintPositionTimeline
                      ((PathConstraintPositionTimeline *)this_05,uVar37);
            bVar26 = *(int *)(lVar52 + 0x58) == 0;
          }
          fVar65 = fVar83;
          if (!bVar26) {
            fVar65 = 1.0;
          }
          *(uint *)(this_05 + 0x48) = uVar34;
          if (0 < (int)uVar37) {
            uVar36 = 0;
            do {
              puVar40 = *(undefined1 **)pDVar59;
              *(undefined1 **)pDVar59 = puVar40 + 1;
              uVar2 = *puVar40;
              *(undefined1 **)pDVar59 = puVar40 + 2;
              uVar3 = puVar40[1];
              *(undefined1 **)pDVar59 = puVar40 + 3;
              uVar4 = puVar40[2];
              *(undefined1 **)pDVar59 = puVar40 + 4;
              uVar5 = puVar40[3];
              *(undefined1 **)pDVar59 = puVar40 + 5;
              uVar6 = puVar40[4];
              *(undefined1 **)pDVar59 = puVar40 + 6;
              uVar7 = puVar40[5];
              *(undefined1 **)pDVar59 = puVar40 + 7;
              uVar8 = puVar40[6];
              *(undefined1 **)pDVar59 = puVar40 + 8;
              PathConstraintPositionTimeline::setFrame
                        ((PathConstraintPositionTimeline *)this_05,uVar36,
                         (float)CONCAT31(CONCAT21(CONCAT11(uVar2,uVar3),uVar4),uVar5),
                         fVar65 * (float)CONCAT31(CONCAT21(CONCAT11(uVar6,uVar7),uVar8),puVar40[7]))
              ;
              if ((int)uVar36 < (int)(uVar37 - 1)) {
                readCurve(this,param_2,uVar36,(CurveTimeline *)this_05);
              }
              uVar36 = uVar36 + 1;
            } while (uVar37 != uVar36);
          }
          lVar41 = local_a8;
          if (local_b8 == local_b0) {
            uVar36 = (uint)((float)local_b8 * 1.75);
            if (uVar36 < 9) {
              uVar36 = 8;
            }
            local_b0 = (ulong)(int)uVar36;
            plVar28 = (long *)SpineExtension::getInstance();
            local_a8 = (**(code **)(*plVar28 + 0x20))
                                 (plVar28,lVar41,
                                  -(ulong)(uVar36 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar36 << 3
                                  ,
                                  "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                                  ,0x6a);
            puVar31 = (undefined8 *)(local_a8 + local_b8 * 8);
          }
          else {
            puVar31 = (undefined8 *)(local_a8 + local_b8 * 8);
          }
          *puVar31 = this_05;
          lVar41 = *(long *)(this_05 + 0x40);
          iVar49 = 2;
LAB_00cf94fc:
          local_b8 = local_b8 + 1;
          fVar65 = *(float *)(lVar41 + (long)(int)(iVar49 * (uVar37 - 1)) * 4);
          if (fVar82 <= fVar65) {
            fVar82 = fVar65;
          }
        }
        else if (bVar68 == 2) {
          this_06 = SpineObject::operator_new
                              (0x50,
                               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonBinary.cpp"
                               ,0x361);
          PathConstraintMixTimeline::PathConstraintMixTimeline(this_06,uVar37);
          *(uint *)(this_06 + 0x48) = uVar34;
          if (0 < (int)uVar37) {
            uVar36 = 0;
            do {
              puVar40 = *(undefined1 **)pDVar59;
              *(undefined1 **)pDVar59 = puVar40 + 1;
              uVar2 = *puVar40;
              *(undefined1 **)pDVar59 = puVar40 + 2;
              uVar3 = puVar40[1];
              *(undefined1 **)pDVar59 = puVar40 + 3;
              uVar4 = puVar40[2];
              *(undefined1 **)pDVar59 = puVar40 + 4;
              uVar5 = puVar40[3];
              *(undefined1 **)pDVar59 = puVar40 + 5;
              uVar6 = puVar40[4];
              *(undefined1 **)pDVar59 = puVar40 + 6;
              uVar7 = puVar40[5];
              *(undefined1 **)pDVar59 = puVar40 + 7;
              uVar8 = puVar40[6];
              *(undefined1 **)pDVar59 = puVar40 + 8;
              uVar9 = puVar40[7];
              *(undefined1 **)pDVar59 = puVar40 + 9;
              uVar10 = puVar40[8];
              *(undefined1 **)pDVar59 = puVar40 + 10;
              uVar11 = puVar40[9];
              *(undefined1 **)pDVar59 = puVar40 + 0xb;
              uVar12 = puVar40[10];
              *(undefined1 **)pDVar59 = puVar40 + 0xc;
              PathConstraintMixTimeline::setFrame
                        (this_06,uVar36,(float)CONCAT31(CONCAT21(CONCAT11(uVar2,uVar3),uVar4),uVar5)
                         ,(float)CONCAT31(CONCAT21(CONCAT11(uVar6,uVar7),uVar8),uVar9),
                         (float)CONCAT31(CONCAT21(CONCAT11(uVar10,uVar11),uVar12),puVar40[0xb]));
              if ((int)uVar36 < (int)(uVar37 - 1)) {
                readCurve(this,param_2,uVar36,(CurveTimeline *)this_06);
              }
              uVar36 = uVar36 + 1;
            } while (uVar37 != uVar36);
          }
          lVar41 = local_a8;
          if (local_b8 == local_b0) {
            uVar36 = (uint)((float)local_b8 * 1.75);
            if (uVar36 < 9) {
              uVar36 = 8;
            }
            local_b0 = (ulong)(int)uVar36;
            plVar28 = (long *)SpineExtension::getInstance();
            local_a8 = (**(code **)(*plVar28 + 0x20))
                                 (plVar28,lVar41,
                                  -(ulong)(uVar36 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar36 << 3
                                  ,
                                  "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                                  ,0x6a);
            puVar31 = (undefined8 *)(local_a8 + local_b8 * 8);
          }
          else {
            puVar31 = (undefined8 *)(local_a8 + local_b8 * 8);
          }
          *puVar31 = this_06;
          lVar41 = *(long *)(this_06 + 0x40);
          iVar49 = 3;
          goto LAB_00cf94fc;
        }
        pbVar38 = *(byte **)pDVar59;
        uVar33 = uVar33 + 1;
      } while (uVar33 != uVar53);
    }
    iVar62 = iVar62 + 1;
  }
  pbVar38 = pbVar50 + 1;
  *(byte **)pDVar59 = pbVar38;
  bVar26 = (*pbVar50 & 0x80) == 0;
  uVar35 = *pbVar50 & 0x7f;
  if (0 < (int)uVar34) {
    local_1b0 = 0;
    do {
      pbVar48 = pbVar38;
      if (!bVar26) {
        pbVar48 = pbVar50 + 2;
        *(byte **)pDVar59 = pbVar48;
        uVar35 = (*pbVar38 & 0x7f) << 7 | uVar35;
        if ((char)*pbVar38 < '\0') {
          pbVar48 = pbVar50 + 3;
          *(byte **)pDVar59 = pbVar48;
          uVar35 = (pbVar50[2] & 0x7f) << 0xe | uVar35;
          if ((char)pbVar50[2] < '\0') {
            pbVar48 = pbVar50 + 4;
            *(byte **)pDVar59 = pbVar48;
            uVar35 = (pbVar50[3] & 0x7f) << 0x15 | uVar35;
            if ((char)pbVar50[3] < '\0') {
              pbVar48 = pbVar50 + 5;
              *(byte **)pDVar59 = pbVar48;
              uVar35 = uVar35 | (uint)pbVar50[4] << 0x1c;
            }
          }
        }
      }
      pbVar50 = pbVar48 + 1;
      this_11 = *(Skin **)(*(long *)(param_3 + 0x78) + (long)(int)uVar35 * 8);
      *(byte **)pDVar59 = pbVar50;
      uVar35 = *pbVar48 & 0x7f;
      if ((char)*pbVar48 < '\0') {
        pbVar50 = pbVar48 + 2;
        *(byte **)pDVar59 = pbVar50;
        uVar35 = uVar35 | (pbVar48[1] & 0x7f) << 7;
        if ((char)pbVar48[1] < '\0') {
          pbVar50 = pbVar48 + 3;
          *(byte **)pDVar59 = pbVar50;
          uVar35 = uVar35 | (pbVar48[2] & 0x7f) << 0xe;
          if ((char)pbVar48[2] < '\0') {
            pbVar50 = pbVar48 + 4;
            *(byte **)pDVar59 = pbVar50;
            uVar35 = uVar35 | (pbVar48[3] & 0x7f) << 0x15;
            if ((char)pbVar48[3] < '\0') {
              pbVar50 = pbVar48 + 5;
              *(byte **)pDVar59 = pbVar50;
              uVar35 = uVar35 | (uint)pbVar48[4] << 0x1c;
            }
          }
        }
      }
      if (0 < (int)uVar35) {
        local_1ac = 0;
        do {
          pbVar38 = pbVar50 + 1;
          *(byte **)pDVar59 = pbVar38;
          uVar53 = *pbVar50 & 0x7f;
          if ((char)*pbVar50 < '\0') {
            pbVar38 = pbVar50 + 2;
            *(byte **)pDVar59 = pbVar38;
            uVar53 = uVar53 | (pbVar50[1] & 0x7f) << 7;
            if ((char)pbVar50[1] < '\0') {
              pbVar38 = pbVar50 + 3;
              *(byte **)pDVar59 = pbVar38;
              uVar53 = uVar53 | (pbVar50[2] & 0x7f) << 0xe;
              if ((char)pbVar50[2] < '\0') {
                pbVar38 = pbVar50 + 4;
                *(byte **)pDVar59 = pbVar38;
                uVar53 = uVar53 | (pbVar50[3] & 0x7f) << 0x15;
                if ((char)pbVar50[3] < '\0') {
                  pbVar38 = pbVar50 + 5;
                  *(byte **)pDVar59 = pbVar38;
                  uVar53 = uVar53 | (uint)pbVar50[4] << 0x1c;
                }
              }
            }
          }
          pbVar50 = pbVar38 + 1;
          *(byte **)pDVar59 = pbVar50;
          uVar33 = *pbVar38 & 0x7f;
          if ((char)*pbVar38 < '\0') {
            pbVar50 = pbVar38 + 2;
            *(byte **)pDVar59 = pbVar50;
            uVar33 = uVar33 | (pbVar38[1] & 0x7f) << 7;
            if ((char)pbVar38[1] < '\0') {
              pbVar50 = pbVar38 + 3;
              *(byte **)pDVar59 = pbVar50;
              uVar33 = uVar33 | (pbVar38[2] & 0x7f) << 0xe;
              if ((char)pbVar38[2] < '\0') {
                pbVar50 = pbVar38 + 4;
                *(byte **)pDVar59 = pbVar50;
                uVar33 = uVar33 | (pbVar38[3] & 0x7f) << 0x15;
                if ((char)pbVar38[3] < '\0') {
                  pbVar50 = pbVar38 + 5;
                  *(byte **)pDVar59 = pbVar50;
                  uVar33 = uVar33 | (uint)pbVar38[4] << 0x1c;
                }
              }
            }
          }
          if (0 < (int)uVar33) {
            iVar62 = 0;
            do {
              *(byte **)pDVar59 = pbVar50 + 1;
              uVar37 = *pbVar50 & 0x7f;
              if ((char)*pbVar50 < '\0') {
                *(byte **)pDVar59 = pbVar50 + 2;
                uVar37 = uVar37 | (pbVar50[1] & 0x7f) << 7;
                if ((char)pbVar50[1] < '\0') {
                  *(byte **)pDVar59 = pbVar50 + 3;
                  uVar37 = uVar37 | (pbVar50[2] & 0x7f) << 0xe;
                  if ((char)pbVar50[2] < '\0') {
                    *(byte **)pDVar59 = pbVar50 + 4;
                    uVar37 = uVar37 | (pbVar50[3] & 0x7f) << 0x15;
                    if ((char)pbVar50[3] < '\0') {
                      *(byte **)pDVar59 = pbVar50 + 5;
                      uVar37 = uVar37 | (uint)pbVar50[4] << 0x1c;
                    }
                  }
                }
              }
              if (uVar37 == 0) {
LAB_00cf9818:
                local_e0 = &PTR__String_01c67868;
                pcVar64 = (char *)0x0;
                local_d8 = (undefined1 *)0x0;
                local_d0 = (undefined1 *)0x0;
              }
              else {
                pcVar64 = *(char **)(*(long *)(param_3 + 0x180) + (long)(int)(uVar37 - 1) * 8);
                local_e0 = &PTR__String_01c67868;
                if (pcVar64 == (char *)0x0) goto LAB_00cf9818;
                local_d8 = (undefined1 *)strlen(pcVar64);
                lVar52 = (long)local_d8 + 1;
                plVar28 = (long *)SpineExtension::getInstance();
                local_d0 = (undefined1 *)
                           (**(code **)(*plVar28 + 0x18))
                                     (plVar28,lVar52,
                                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                      ,0x39);
                memcpy(local_d0,pcVar64,(long)local_d8 + 1);
              }
              lVar52 = Skin::getAttachment(this_11,(long)(int)uVar53,(String *)&local_e0);
              puVar40 = local_d0;
              local_e0 = &PTR__String_01c67868;
              if (local_d0 != (undefined1 *)0x0) {
                plVar28 = (long *)SpineExtension::getInstance();
                (**(code **)(*plVar28 + 0x28))
                          (plVar28,puVar40,
                           "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                           ,0xc9);
              }
              SpineObject::~SpineObject((SpineObject *)&local_e0);
              if (lVar52 == 0) {
                if (0 < (int)local_b8) {
                  uVar39 = (long)(int)local_b8;
                  do {
                    uVar60 = uVar39 - 1;
                    plVar28 = *(long **)(local_a8 + uVar60 * 8);
                    if (plVar28 != (long *)0x0) {
                      (**(code **)(*plVar28 + 8))();
                    }
                    uVar42 = local_b8 - 1;
                    if (uVar60 < uVar42) {
                      do {
                        lVar52 = uVar39 * 8;
                        uVar39 = uVar39 + 1;
                        puVar31 = (undefined8 *)(local_a8 + lVar52);
                        uVar66 = puVar31[-1];
                        puVar31[-1] = *puVar31;
                        *(undefined8 *)(local_a8 + lVar52) = uVar66;
                      } while (local_b8 != uVar39);
                    }
                    uVar39 = uVar60;
                    local_b8 = uVar42;
                  } while (0 < (long)uVar60);
                }
                setError(this,"Attachment not found: ",pcVar64);
                goto LAB_00cf88fc;
              }
              lVar41 = *(long *)(lVar52 + 0x30);
              puVar40 = *(undefined1 **)(lVar52 + 0x50);
              if (lVar41 != 0) {
                auVar23._8_8_ = 0;
                auVar23._0_8_ = puVar40;
                puVar40 = (undefined1 *)
                          (SUB168(auVar23 * ZEXT816(0xaaaaaaaaaaaaaaab),8) & 0xfffffffffffffffe);
              }
              pbVar50 = *(byte **)pDVar59;
              *(byte **)pDVar59 = pbVar50 + 1;
              uVar37 = *pbVar50 & 0x7f;
              if ((char)*pbVar50 < '\0') {
                *(byte **)pDVar59 = pbVar50 + 2;
                uVar37 = uVar37 | (pbVar50[1] & 0x7f) << 7;
                if ((char)pbVar50[1] < '\0') {
                  *(byte **)pDVar59 = pbVar50 + 3;
                  uVar37 = uVar37 | (pbVar50[2] & 0x7f) << 0xe;
                  if ((char)pbVar50[2] < '\0') {
                    *(byte **)pDVar59 = pbVar50 + 4;
                    uVar37 = uVar37 | (pbVar50[3] & 0x7f) << 0x15;
                    if ((char)pbVar50[3] < '\0') {
                      *(byte **)pDVar59 = pbVar50 + 5;
                      uVar37 = uVar37 | (uint)pbVar50[4] << 0x1c;
                    }
                  }
                }
              }
              uVar39 = (ulong)(int)uVar37;
              this_07 = SpineObject::operator_new
                                  (0x78,
                                   "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonBinary.cpp"
                                   ,0x38a);
              DeformTimeline::DeformTimeline(this_07,uVar37);
              *(uint *)(this_07 + 0x28) = uVar53;
              *(long *)(this_07 + 0x70) = lVar52;
              if (uVar37 != 0) {
                uVar37 = (uint)((float)puVar40 * 1.75);
                if (uVar37 < 9) {
                  uVar37 = 8;
                }
                uVar42 = -(ulong)(uVar37 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar37 << 2;
                uVar60 = 0;
                do {
                  puVar43 = *(undefined1 **)pDVar59;
                  *(undefined1 **)pDVar59 = puVar43 + 1;
                  uVar2 = *puVar43;
                  *(undefined1 **)pDVar59 = puVar43 + 2;
                  uVar3 = puVar43[1];
                  *(undefined1 **)pDVar59 = puVar43 + 3;
                  uVar4 = puVar43[2];
                  *(undefined1 **)pDVar59 = puVar43 + 4;
                  uVar5 = puVar43[3];
                  local_e0 = &PTR__Vector_01c8d048;
                  local_d0 = (undefined1 *)0x0;
                  local_c8 = (void *)0x0;
                  *(undefined1 **)pDVar59 = puVar43 + 5;
                  uVar36 = (byte)puVar43[4] & 0x7f;
                  if ((char)puVar43[4] < '\0') {
                    *(undefined1 **)pDVar59 = puVar43 + 6;
                    uVar36 = uVar36 | ((byte)puVar43[5] & 0x7f) << 7;
                    if ((char)puVar43[5] < '\0') {
                      *(undefined1 **)pDVar59 = puVar43 + 7;
                      uVar36 = uVar36 | ((byte)puVar43[6] & 0x7f) << 0xe;
                      if ((char)puVar43[6] < '\0') {
                        *(undefined1 **)pDVar59 = puVar43 + 8;
                        uVar36 = uVar36 | ((byte)puVar43[7] & 0x7f) << 0x15;
                        if ((char)puVar43[7] < '\0') {
                          *(undefined1 **)pDVar59 = puVar43 + 9;
                          uVar36 = uVar36 | (uint)(byte)puVar43[8] << 0x1c;
                        }
                      }
                    }
                  }
                  local_d8 = puVar40;
                  if (uVar36 == 0) {
                    if (lVar41 == 0) {
                      local_d8 = (undefined1 *)0x0;
                      puVar43 = *(undefined1 **)(lVar52 + 0x50);
                      if (puVar43 != (undefined1 *)0x0) {
                        local_d0 = puVar43;
                        plVar28 = (long *)SpineExtension::getInstance();
                        pvVar45 = (void *)(**(code **)(*plVar28 + 0x20))
                                                    (plVar28,0,(long)puVar43 << 2,
                                                                                                          
                                                  "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                                                  ,0x5e);
                        uVar58 = *(ulong *)(lVar52 + 0x50);
                        local_c8 = pvVar45;
                        if (uVar58 != 0) {
                          uVar61 = 0;
                          do {
                            if (local_d8 == local_d0) {
                              uVar36 = (uint)((float)local_d8 * 1.75);
                              uVar1 = *(undefined4 *)(*(long *)(lVar52 + 0x60) + uVar61 * 4);
                              if (uVar36 < 9) {
                                uVar36 = 8;
                              }
                              local_d0 = (undefined1 *)(long)(int)uVar36;
                              plVar28 = (long *)SpineExtension::getInstance();
                              pvVar45 = (void *)(**(code **)(*plVar28 + 0x20))
                                                          (plVar28,pvVar45,
                                                           -(ulong)(uVar36 >> 0x1f) &
                                                           0xfffffffc00000000 | (ulong)uVar36 << 2,
                                                                                                                      
                                                  "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                                                  ,0x6a);
                              *(undefined4 *)((long)pvVar45 + (long)local_d8 * 4) = uVar1;
                              uVar58 = *(ulong *)(lVar52 + 0x50);
                              local_c8 = pvVar45;
                            }
                            else {
                              *(undefined4 *)((long)pvVar45 + (long)local_d8 * 4) =
                                   *(undefined4 *)(*(long *)(lVar52 + 0x60) + uVar61 * 4);
                            }
                            local_d8 = local_d8 + 1;
                            uVar61 = uVar61 + 1;
                          } while (uVar61 < uVar58);
                        }
                      }
                    }
                    else if (puVar40 != (undefined1 *)0x0) {
                      local_d0 = (undefined1 *)(long)(int)uVar37;
                      plVar28 = (long *)SpineExtension::getInstance();
                      local_c8 = (void *)(**(code **)(*plVar28 + 0x20))
                                                   (plVar28,0,uVar42,
                                                                                                        
                                                  "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                                                  ,0x52);
                      if (local_d8 != (undefined1 *)0x0) {
                        memset(local_c8,0,(long)local_d8 << 2);
                      }
                      if (puVar40 != (undefined1 *)0x0) {
                        memset(local_c8,0,(long)puVar40 << 2);
                      }
                    }
                  }
                  else {
                    if (puVar40 != (undefined1 *)0x0) {
                      local_d0 = (undefined1 *)(long)(int)uVar37;
                      plVar28 = (long *)SpineExtension::getInstance();
                      local_c8 = (void *)(**(code **)(*plVar28 + 0x20))
                                                   (plVar28,0,uVar42,
                                                                                                        
                                                  "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                                                  ,0x52);
                      if (local_d8 != (undefined1 *)0x0) {
                        memset(local_c8,0,(long)local_d8 << 2);
                      }
                    }
                    pbVar38 = *(byte **)pDVar59;
                    lVar44 = (long)(int)uVar36;
                    pbVar50 = pbVar38 + 1;
                    *(byte **)pDVar59 = pbVar50;
                    uVar36 = *pbVar38 & 0x7f;
                    if ((char)*pbVar38 < '\0') {
                      pbVar50 = pbVar38 + 2;
                      *(byte **)pDVar59 = pbVar50;
                      uVar36 = uVar36 | (pbVar38[1] & 0x7f) << 7;
                      if ((char)pbVar38[1] < '\0') {
                        pbVar50 = pbVar38 + 3;
                        *(byte **)pDVar59 = pbVar50;
                        uVar36 = uVar36 | (pbVar38[2] & 0x7f) << 0xe;
                        if ((char)pbVar38[2] < '\0') {
                          pbVar50 = pbVar38 + 4;
                          *(byte **)pDVar59 = pbVar50;
                          uVar36 = uVar36 | (pbVar38[3] & 0x7f) << 0x15;
                          if ((char)pbVar38[3] < '\0') {
                            pbVar50 = pbVar38 + 5;
                            *(byte **)pDVar59 = pbVar50;
                            uVar36 = uVar36 | (uint)pbVar38[4] << 0x1c;
                          }
                        }
                      }
                    }
                    uVar58 = (ulong)(int)uVar36;
                    if (fVar83 == 1.0) {
                      if (uVar58 < uVar58 + lVar44) {
                        pbVar50 = pbVar50 + 2;
                        puVar47 = (undefined4 *)((long)local_c8 + uVar58 * 4);
                        do {
                          *(byte **)pDVar59 = pbVar50 + -1;
                          bVar71 = pbVar50[-2];
                          *(byte **)pDVar59 = pbVar50;
                          bVar73 = pbVar50[-1];
                          *(byte **)pDVar59 = pbVar50 + 1;
                          bVar68 = *pbVar50;
                          *(byte **)pDVar59 = pbVar50 + 2;
                          lVar44 = lVar44 + -1;
                          *puVar47 = CONCAT31(CONCAT21(CONCAT11(bVar71,bVar73),bVar68),pbVar50[1]);
                          pbVar50 = pbVar50 + 4;
                          puVar47 = puVar47 + 1;
                        } while (lVar44 != 0);
                      }
                    }
                    else if (uVar58 < uVar58 + lVar44) {
                      pbVar50 = pbVar50 + 2;
                      pfVar46 = (float *)((long)local_c8 + uVar58 * 4);
                      do {
                        *(byte **)pDVar59 = pbVar50 + -1;
                        bVar71 = pbVar50[-2];
                        *(byte **)pDVar59 = pbVar50;
                        bVar73 = pbVar50[-1];
                        *(byte **)pDVar59 = pbVar50 + 1;
                        bVar68 = *pbVar50;
                        *(byte **)pDVar59 = pbVar50 + 2;
                        lVar44 = lVar44 + -1;
                        *pfVar46 = fVar83 * (float)CONCAT31(CONCAT21(CONCAT11(bVar71,bVar73),bVar68)
                                                            ,pbVar50[1]);
                        pbVar50 = pbVar50 + 4;
                        pfVar46 = pfVar46 + 1;
                      } while (lVar44 != 0);
                    }
                    if ((lVar41 == 0) && (local_d8 != (undefined1 *)0x0)) {
                      pvVar45 = *(void **)(lVar52 + 0x60);
                      if ((local_d8 < &DAT_00000008) ||
                         ((local_c8 < (void *)((long)pvVar45 + (long)local_d8 * 4) &&
                          (pvVar45 < (void *)((long)local_c8 + (long)local_d8 * 4))))) {
                        puVar43 = (undefined1 *)0x0;
                      }
                      else {
                        puVar43 = (undefined1 *)((ulong)local_d8 & 0xfffffffffffffff8);
                        puVar31 = (undefined8 *)((long)pvVar45 + 0x10);
                        puVar54 = (undefined8 *)((long)local_c8 + 0x10);
                        puVar56 = puVar43;
                        do {
                          puVar25 = puVar31 + -1;
                          uVar66 = puVar31[-2];
                          uVar70 = puVar31[1];
                          uVar69 = *puVar31;
                          puVar31 = puVar31 + 4;
                          puVar56 = puVar56 + -8;
                          puVar54[-1] = CONCAT44((float)((ulong)*puVar25 >> 0x20) +
                                                 (float)((ulong)puVar54[-1] >> 0x20),
                                                 (float)*puVar25 + (float)puVar54[-1]);
                          puVar54[-2] = CONCAT44((float)((ulong)uVar66 >> 0x20) +
                                                 (float)((ulong)puVar54[-2] >> 0x20),
                                                 (float)uVar66 + (float)puVar54[-2]);
                          puVar54[1] = CONCAT44((float)((ulong)uVar70 >> 0x20) +
                                                (float)((ulong)puVar54[1] >> 0x20),
                                                (float)uVar70 + (float)puVar54[1]);
                          *puVar54 = CONCAT44((float)((ulong)uVar69 >> 0x20) +
                                              (float)((ulong)*puVar54 >> 0x20),
                                              (float)uVar69 + (float)*puVar54);
                          puVar54 = puVar54 + 4;
                        } while (puVar56 != (undefined1 *)0x0);
                        if (local_d8 == puVar43) goto LAB_00cf9db0;
                      }
                      lVar44 = (long)local_d8 - (long)puVar43;
                      pfVar46 = (float *)((long)pvVar45 + (long)puVar43 * 4);
                      pfVar51 = (float *)((long)local_c8 + (long)puVar43 * 4);
                      do {
                        lVar44 = lVar44 + -1;
                        *pfVar51 = *pfVar46 + *pfVar51;
                        pfVar46 = pfVar46 + 1;
                        pfVar51 = pfVar51 + 1;
                      } while (lVar44 != 0);
                    }
                  }
LAB_00cf9db0:
                  DeformTimeline::setFrame
                            (this_07,(int)uVar60,
                             (float)CONCAT31(CONCAT21(CONCAT11(uVar2,uVar3),uVar4),uVar5),
                             (Vector *)&local_e0);
                  if (uVar60 < uVar39 - 1) {
                    readCurve(this,param_2,(int)uVar60,(CurveTimeline *)this_07);
                  }
                  pvVar45 = local_c8;
                  local_e0 = &PTR__Vector_01c8d048;
                  local_d8 = (undefined1 *)0x0;
                  if (local_c8 != (void *)0x0) {
                    plVar28 = (long *)SpineExtension::getInstance();
                    (**(code **)(*plVar28 + 0x28))
                              (plVar28,pvVar45,
                               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                               ,0xce);
                  }
                  SpineObject::~SpineObject((SpineObject *)&local_e0);
                  uVar60 = uVar60 + 1;
                } while (uVar60 < uVar39);
              }
              lVar52 = local_a8;
              if (local_b8 == local_b0) {
                uVar37 = (uint)((float)local_b8 * 1.75);
                if (uVar37 < 9) {
                  uVar37 = 8;
                }
                local_b0 = (ulong)(int)uVar37;
                plVar28 = (long *)SpineExtension::getInstance();
                local_a8 = (**(code **)(*plVar28 + 0x20))
                                     (plVar28,lVar52,
                                      -(ulong)(uVar37 >> 0x1f) & 0xfffffff800000000 |
                                      (ulong)uVar37 << 3,
                                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                                      ,0x6a);
                puVar31 = (undefined8 *)(local_a8 + local_b8 * 8);
              }
              else {
                puVar31 = (undefined8 *)(local_a8 + local_b8 * 8);
              }
              local_b8 = local_b8 + 1;
              *puVar31 = this_07;
              iVar62 = iVar62 + 1;
              fVar65 = *(float *)(*(long *)(this_07 + 0x48) + uVar39 * 4 + -4);
              if (fVar82 <= fVar65) {
                fVar82 = fVar65;
              }
              if ((int)uVar33 <= iVar62) break;
              pbVar50 = *(byte **)pDVar59;
            } while( true );
          }
          pbVar50 = *(byte **)pDVar59;
          local_1ac = local_1ac + 1;
        } while (local_1ac < (int)uVar35);
      }
      pbVar38 = pbVar50 + 1;
      *(byte **)pDVar59 = pbVar38;
      bVar26 = (*pbVar50 & 0x80) == 0;
      local_1b0 = local_1b0 + 1;
      uVar35 = *pbVar50 & 0x7f;
    } while (local_1b0 < (int)uVar34);
  }
  if (!bVar26) {
    *(byte **)pDVar59 = pbVar50 + 2;
    bVar68 = *pbVar38;
    uVar35 = uVar35 | (bVar68 & 0x7f) << 7;
    pbVar38 = pbVar50 + 2;
    if ((char)bVar68 < '\0') {
      pbVar38 = pbVar50 + 3;
      *(byte **)pDVar59 = pbVar38;
      uVar35 = uVar35 | (pbVar50[2] & 0x7f) << 0xe;
      if ((char)pbVar50[2] < '\0') {
        pbVar38 = pbVar50 + 4;
        *(byte **)pDVar59 = pbVar38;
        uVar35 = uVar35 | (pbVar50[3] & 0x7f) << 0x15;
        if ((char)pbVar50[3] < '\0') {
          pbVar38 = pbVar50 + 5;
          *(byte **)pDVar59 = pbVar38;
          uVar35 = uVar35 | (uint)pbVar50[4] << 0x1c;
        }
      }
    }
  }
  if (uVar35 != 0) {
    this_08 = SpineObject::operator_new
                        (0x48,
                         "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonBinary.cpp"
                         ,0x3b9);
    DrawOrderTimeline::DrawOrderTimeline(this_08,uVar35);
    uVar39 = *(ulong *)(param_3 + 0x48);
    uVar34 = (uint)((float)uVar39 * 1.75);
    iVar62 = (int)uVar39;
    if (uVar34 < 9) {
      uVar34 = 8;
    }
    uVar60 = 0;
    do {
      puVar40 = *(undefined1 **)pDVar59;
      *(undefined1 **)pDVar59 = puVar40 + 1;
      uVar2 = *puVar40;
      *(undefined1 **)pDVar59 = puVar40 + 2;
      uVar3 = puVar40[1];
      *(undefined1 **)pDVar59 = puVar40 + 3;
      uVar4 = puVar40[2];
      *(undefined1 **)pDVar59 = puVar40 + 4;
      uVar5 = puVar40[3];
      *(undefined1 **)pDVar59 = puVar40 + 5;
      uVar53 = (byte)puVar40[4] & 0x7f;
      if ((char)puVar40[4] < '\0') {
        *(undefined1 **)pDVar59 = puVar40 + 6;
        uVar53 = uVar53 | ((byte)puVar40[5] & 0x7f) << 7;
        if ((char)puVar40[5] < '\0') {
          *(undefined1 **)pDVar59 = puVar40 + 7;
          uVar53 = uVar53 | ((byte)puVar40[6] & 0x7f) << 0xe;
          if ((char)puVar40[6] < '\0') {
            *(undefined1 **)pDVar59 = puVar40 + 8;
            uVar53 = uVar53 | ((byte)puVar40[7] & 0x7f) << 0x15;
            if ((char)puVar40[7] < '\0') {
              *(undefined1 **)pDVar59 = puVar40 + 9;
              uVar53 = uVar53 | (uint)(byte)puVar40[8] << 0x1c;
            }
          }
        }
      }
      local_e0 = &PTR__Vector_01c8e510;
      local_d0 = (undefined1 *)0x0;
      local_c8 = (void *)0x0;
      local_d8 = (undefined1 *)uVar39;
      if (uVar39 != 0) {
        local_d0 = (undefined1 *)(long)(int)uVar34;
        plVar28 = (long *)SpineExtension::getInstance();
        local_c8 = (void *)(**(code **)(*plVar28 + 0x20))
                                     (plVar28,0,
                                      -(ulong)(uVar34 >> 0x1f) & 0xfffffffc00000000 |
                                      (ulong)uVar34 << 2,
                                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                                      ,0x52);
        if (local_d8 != (undefined1 *)0x0) {
          memset(local_c8,0,(long)local_d8 << 2);
        }
      }
      if (0 < iVar62) {
        memset((void *)((long)local_c8 + (((long)iVar62 + -1) - (ulong)(iVar62 - 1)) * 4),0xff,
               (uVar39 & 0xffffffff) << 2);
      }
      local_100 = &PTR__Vector_01c8e510;
      local_f8 = uVar39 - (long)(int)uVar53;
      local_f0 = 0;
      local_e8 = (void *)0x0;
      if (local_f8 != 0) {
        uVar33 = (uint)((float)local_f8 * 1.75);
        if (uVar33 < 9) {
          uVar33 = 8;
        }
        local_f0 = (long)(int)uVar33;
        plVar28 = (long *)SpineExtension::getInstance();
        local_e8 = (void *)(**(code **)(*plVar28 + 0x20))
                                     (plVar28,0,
                                      -(ulong)(uVar33 >> 0x1f) & 0xfffffffc00000000 |
                                      (ulong)uVar33 << 2,
                                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                                      ,0x52);
        if (local_f8 != 0) {
          memset(local_e8,0,local_f8 << 2);
        }
      }
      if (uVar53 == 0) {
        uVar42 = 0;
        lVar52 = 0;
      }
      else {
        pbVar50 = *(byte **)pDVar59;
        uVar58 = 0;
        lVar52 = 0;
        uVar42 = 0;
        do {
          pbVar38 = pbVar50 + 1;
          *(byte **)pDVar59 = pbVar38;
          uVar33 = *pbVar50 & 0x7f;
          if ((char)*pbVar50 < '\0') {
            pbVar38 = pbVar50 + 2;
            *(byte **)pDVar59 = pbVar38;
            uVar33 = uVar33 | (pbVar50[1] & 0x7f) << 7;
            if ((char)pbVar50[1] < '\0') {
              pbVar38 = pbVar50 + 3;
              *(byte **)pDVar59 = pbVar38;
              uVar33 = uVar33 | (pbVar50[2] & 0x7f) << 0xe;
              if ((char)pbVar50[2] < '\0') {
                pbVar38 = pbVar50 + 4;
                *(byte **)pDVar59 = pbVar38;
                uVar33 = uVar33 | (pbVar50[3] & 0x7f) << 0x15;
                if ((char)pbVar50[3] < '\0') {
                  pbVar38 = pbVar50 + 5;
                  *(byte **)pDVar59 = pbVar38;
                  uVar33 = uVar33 | (uint)pbVar50[4] << 0x1c;
                }
              }
            }
          }
          uVar55 = (ulong)(int)uVar33;
          uVar61 = uVar42 + 1;
          uVar37 = (uint)uVar42;
          uVar57 = uVar42;
          if (uVar42 != uVar55) {
            uVar57 = uVar55 - uVar42;
            lVar41 = (lVar52 + uVar55) - uVar42;
            if (uVar57 < 8) {
LAB_00cfa358:
              lVar44 = (uVar55 + 1) - uVar61;
              puVar47 = (undefined4 *)((long)local_e8 + lVar52 * 4);
              do {
                lVar44 = lVar44 + -1;
                *puVar47 = (int)uVar42;
                uVar42 = uVar61 & 0xffffffff;
                puVar47 = puVar47 + 1;
                uVar61 = uVar61 + 1;
              } while (lVar44 != 0);
            }
            else {
              uVar30 = uVar57 & 0xfffffffffffffff8;
              lVar44 = lVar52 * 4;
              uVar42 = (ulong)(uVar37 + (int)uVar30);
              uVar61 = uVar61 + uVar30;
              lVar52 = lVar52 + uVar30;
              uVar66 = CONCAT44(uVar37 + 1,uVar37);
              uVar69 = CONCAT44(uVar37 + 3,uVar37 + 2);
              puVar31 = (undefined8 *)((long)local_e8 + lVar44 + 0x10);
              uVar32 = uVar30;
              do {
                iVar49 = (int)((ulong)uVar66 >> 0x20);
                iVar67 = (int)((ulong)uVar69 >> 0x20);
                puVar31[-1] = uVar69;
                puVar31[-2] = uVar66;
                puVar31[1] = CONCAT44(iVar67 + 4,(int)uVar69 + 4);
                *puVar31 = CONCAT44(iVar49 + 4,(int)uVar66 + 4);
                uVar66 = CONCAT44(iVar49 + 8,(int)uVar66 + 8);
                uVar69 = CONCAT44(iVar67 + 8,(int)uVar69 + 8);
                uVar32 = uVar32 - 8;
                puVar31 = puVar31 + 4;
              } while (uVar32 != 0);
              if (uVar57 != uVar30) goto LAB_00cfa358;
            }
            lVar52 = lVar41;
            uVar57 = uVar55;
            uVar61 = uVar55 + 1;
            uVar37 = uVar33;
          }
          uVar42 = uVar61;
          pbVar50 = pbVar38 + 1;
          *(byte **)pDVar59 = pbVar50;
          uVar33 = *pbVar38 & 0x7f;
          if ((char)*pbVar38 < '\0') {
            pbVar50 = pbVar38 + 2;
            *(byte **)pDVar59 = pbVar50;
            uVar33 = uVar33 | (pbVar38[1] & 0x7f) << 7;
            if ((char)pbVar38[1] < '\0') {
              pbVar50 = pbVar38 + 3;
              *(byte **)pDVar59 = pbVar50;
              uVar33 = uVar33 | (pbVar38[2] & 0x7f) << 0xe;
              if ((char)pbVar38[2] < '\0') {
                pbVar50 = pbVar38 + 4;
                *(byte **)pDVar59 = pbVar50;
                uVar33 = uVar33 | (pbVar38[3] & 0x7f) << 0x15;
                if ((char)pbVar38[3] < '\0') {
                  pbVar50 = pbVar38 + 5;
                  *(byte **)pDVar59 = pbVar50;
                  uVar33 = uVar33 | (uint)pbVar38[4] << 0x1c;
                }
              }
            }
          }
          uVar58 = uVar58 + 1;
          *(uint *)((long)local_c8 + (uVar57 + (long)(int)uVar33) * 4) = uVar37;
        } while (uVar58 < (ulong)(long)(int)uVar53);
      }
      uVar58 = uVar39 - uVar42;
      if (uVar42 <= uVar39 && uVar58 != 0) {
        lVar41 = uVar39 + lVar52;
        uVar61 = uVar42;
        if (uVar58 < 8) {
LAB_00cfa47c:
          puVar47 = (undefined4 *)((long)local_e8 + lVar52 * 4);
          do {
            uVar58 = uVar61 + 1;
            *puVar47 = (int)uVar61;
            uVar61 = uVar58;
            puVar47 = puVar47 + 1;
          } while (uVar39 != uVar58);
        }
        else {
          uVar57 = uVar58 & 0xfffffffffffffff8;
          iVar49 = (int)uVar42;
          lVar44 = lVar52 * 4;
          lVar52 = lVar52 + uVar57;
          uVar66 = CONCAT44(iVar49 + 1,iVar49);
          uVar69 = CONCAT44(iVar49 + 3,iVar49 + 2);
          puVar31 = (undefined8 *)((long)local_e8 + lVar44 + 0x10);
          uVar61 = uVar57;
          do {
            iVar49 = (int)((ulong)uVar66 >> 0x20);
            iVar67 = (int)((ulong)uVar69 >> 0x20);
            puVar31[-1] = uVar69;
            puVar31[-2] = uVar66;
            puVar31[1] = CONCAT44(iVar67 + 4,(int)uVar69 + 4);
            *puVar31 = CONCAT44(iVar49 + 4,(int)uVar66 + 4);
            uVar66 = CONCAT44(iVar49 + 8,(int)uVar66 + 8);
            uVar69 = CONCAT44(iVar67 + 8,(int)uVar69 + 8);
            uVar61 = uVar61 - 8;
            puVar31 = puVar31 + 4;
          } while (uVar61 != 0);
          uVar61 = uVar42 + uVar57;
          if (uVar58 != uVar57) goto LAB_00cfa47c;
        }
        lVar52 = lVar41 - uVar42;
      }
      lVar41 = (long)iVar62;
      if (0 < iVar62) {
        do {
          if (*(int *)((long)local_c8 + lVar41 * 4 + -4) == -1) {
            lVar52 = lVar52 + -1;
            *(undefined4 *)((long)local_c8 + lVar41 * 4 + -4) =
                 *(undefined4 *)((long)local_e8 + lVar52 * 4);
          }
          lVar41 = lVar41 + -1;
        } while (0 < lVar41);
      }
      DrawOrderTimeline::setFrame
                (this_08,uVar60,(float)CONCAT31(CONCAT21(CONCAT11(uVar2,uVar3),uVar4),uVar5),
                 (Vector *)&local_e0);
      pvVar45 = local_e8;
      local_f8 = 0;
      local_100 = &PTR__Vector_01c8e510;
      if (local_e8 != (void *)0x0) {
        plVar28 = (long *)SpineExtension::getInstance();
        (**(code **)(*plVar28 + 0x28))
                  (plVar28,pvVar45,
                   "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",0xce)
        ;
      }
      SpineObject::~SpineObject((SpineObject *)&local_100);
      pvVar45 = local_c8;
      local_d8 = (undefined1 *)0x0;
      local_e0 = &PTR__Vector_01c8e510;
      if (local_c8 != (void *)0x0) {
        plVar28 = (long *)SpineExtension::getInstance();
        (**(code **)(*plVar28 + 0x28))
                  (plVar28,pvVar45,
                   "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",0xce)
        ;
      }
      SpineObject::~SpineObject((SpineObject *)&local_e0);
      lVar52 = local_a8;
      uVar60 = uVar60 + 1;
    } while (uVar60 < (ulong)(long)(int)uVar35);
    if (local_b8 == local_b0) {
      uVar34 = (uint)((float)local_b8 * 1.75);
      if (uVar34 < 9) {
        uVar34 = 8;
      }
      local_b0 = (ulong)(int)uVar34;
      plVar28 = (long *)SpineExtension::getInstance();
      local_a8 = (**(code **)(*plVar28 + 0x20))
                           (plVar28,lVar52,
                            -(ulong)(uVar34 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar34 << 3,
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                            ,0x6a);
      puVar31 = (undefined8 *)(local_a8 + local_b8 * 8);
    }
    else {
      puVar31 = (undefined8 *)(local_a8 + local_b8 * 8);
    }
    local_b8 = local_b8 + 1;
    *puVar31 = this_08;
    fVar83 = *(float *)(*(long *)(this_08 + 0x20) + (long)(int)uVar35 * 4 + -4);
    pbVar38 = *(byte **)pDVar59;
    if (fVar82 <= fVar83) {
      fVar82 = fVar83;
    }
  }
  *(byte **)pDVar59 = pbVar38 + 1;
  uVar35 = *pbVar38 & 0x7f;
  if ((char)*pbVar38 < '\0') {
    *(byte **)pDVar59 = pbVar38 + 2;
    uVar35 = uVar35 | (pbVar38[1] & 0x7f) << 7;
    if ((char)pbVar38[1] < '\0') {
      *(byte **)pDVar59 = pbVar38 + 3;
      uVar35 = uVar35 | (pbVar38[2] & 0x7f) << 0xe;
      if ((char)pbVar38[2] < '\0') {
        *(byte **)pDVar59 = pbVar38 + 4;
        uVar35 = uVar35 | (pbVar38[3] & 0x7f) << 0x15;
        if ((char)pbVar38[3] < '\0') {
          *(byte **)pDVar59 = pbVar38 + 5;
          uVar35 = uVar35 | (uint)pbVar38[4] << 0x1c;
        }
      }
    }
  }
  if (0 < (int)uVar35) {
    this_09 = SpineObject::operator_new
                        (0x48,
                         "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonBinary.cpp"
                         ,0x3e3);
    EventTimeline::EventTimeline(this_09,uVar35);
    uVar39 = 0;
    do {
      puVar40 = *(undefined1 **)pDVar59;
      *(undefined1 **)pDVar59 = puVar40 + 1;
      uVar2 = *puVar40;
      *(undefined1 **)pDVar59 = puVar40 + 2;
      uVar3 = puVar40[1];
      *(undefined1 **)pDVar59 = puVar40 + 3;
      uVar4 = puVar40[2];
      *(undefined1 **)pDVar59 = puVar40 + 4;
      uVar5 = puVar40[3];
      *(undefined1 **)pDVar59 = puVar40 + 5;
      uVar34 = (byte)puVar40[4] & 0x7f;
      if ((char)puVar40[4] < '\0') {
        *(undefined1 **)pDVar59 = puVar40 + 6;
        uVar34 = uVar34 | ((byte)puVar40[5] & 0x7f) << 7;
        if ((char)puVar40[5] < '\0') {
          *(undefined1 **)pDVar59 = puVar40 + 7;
          uVar34 = uVar34 | ((byte)puVar40[6] & 0x7f) << 0xe;
          if ((char)puVar40[6] < '\0') {
            *(undefined1 **)pDVar59 = puVar40 + 8;
            uVar34 = uVar34 | ((byte)puVar40[7] & 0x7f) << 0x15;
            if ((char)puVar40[7] < '\0') {
              *(undefined1 **)pDVar59 = puVar40 + 9;
              uVar34 = uVar34 | (uint)(byte)puVar40[8] << 0x1c;
            }
          }
        }
      }
      pEVar63 = *(EventData **)(*(long *)(param_3 + 0xa0) + (long)(int)uVar34 * 8);
      this_10 = SpineObject::operator_new
                          (0x40,
                           "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonBinary.cpp"
                           ,1000);
      Event::Event(this_10,(float)CONCAT31(CONCAT21(CONCAT11(uVar2,uVar3),uVar4),uVar5),pEVar63);
      pbVar38 = *(byte **)pDVar59;
      pbVar50 = pbVar38 + 1;
      *(byte **)pDVar59 = pbVar50;
      uVar34 = *pbVar38 & 0x7f;
      if ((char)*pbVar38 < '\0') {
        pbVar50 = pbVar38 + 2;
        *(byte **)pDVar59 = pbVar50;
        uVar34 = uVar34 | (pbVar38[1] & 0x7f) << 7;
        if ((char)pbVar38[1] < '\0') {
          pbVar50 = pbVar38 + 3;
          *(byte **)pDVar59 = pbVar50;
          uVar34 = uVar34 | (pbVar38[2] & 0x7f) << 0xe;
          if ((char)pbVar38[2] < '\0') {
            pbVar50 = pbVar38 + 4;
            *(byte **)pDVar59 = pbVar50;
            uVar34 = uVar34 | (pbVar38[3] & 0x7f) << 0x15;
            if ((char)pbVar38[3] < '\0') {
              pbVar50 = pbVar38 + 5;
              *(byte **)pDVar59 = pbVar50;
              uVar34 = uVar34 | (uint)pbVar38[4] << 0x1c;
            }
          }
        }
      }
      *(uint *)(this_10 + 0x14) = -(uVar34 & 1) ^ uVar34 >> 1;
      *(byte **)pDVar59 = pbVar50 + 1;
      bVar68 = *pbVar50;
      *(byte **)pDVar59 = pbVar50 + 2;
      bVar71 = pbVar50[1];
      *(byte **)pDVar59 = pbVar50 + 3;
      bVar73 = pbVar50[2];
      *(byte **)pDVar59 = pbVar50 + 4;
      *(uint *)(this_10 + 0x18) = CONCAT31(CONCAT21(CONCAT11(bVar68,bVar71),bVar73),pbVar50[3]);
      *(byte **)pDVar59 = pbVar50 + 5;
      bVar68 = pbVar50[4];
      if (bVar68 == 0) {
        pcVar64 = *(char **)(pEVar63 + 0x38);
        if (pcVar64 == (char *)0x0) goto LAB_00cfa8b4;
LAB_00cfa860:
        local_e0 = &PTR__String_01c67868;
        local_d8 = (undefined1 *)strlen(pcVar64);
        lVar52 = (long)local_d8 + 1;
        plVar28 = (long *)SpineExtension::getInstance();
        local_d0 = (undefined1 *)
                   (**(code **)(*plVar28 + 0x18))
                             (plVar28,lVar52,
                              "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                              ,0x39);
        memcpy(local_d0,pcVar64,(long)local_d8 + 1);
      }
      else {
        pcVar64 = (char *)readString(this,param_2);
        if (pcVar64 != (char *)0x0) goto LAB_00cfa860;
LAB_00cfa8b4:
        local_d8 = (undefined1 *)0x0;
        local_d0 = (undefined1 *)0x0;
        local_e0 = &PTR__String_01c67868;
      }
      if ((Event *)&local_e0 == this_10 + 0x20) {
LAB_00cfa938:
        puVar40 = local_d0;
        local_e0 = &PTR__String_01c67868;
        if (local_d0 != (undefined1 *)0x0) {
          plVar28 = (long *)SpineExtension::getInstance();
          (**(code **)(*plVar28 + 0x28))
                    (plVar28,puVar40,
                     "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                     ,0xc9);
        }
      }
      else {
        lVar52 = *(long *)(this_10 + 0x30);
        if (lVar52 != 0) {
          plVar28 = (long *)SpineExtension::getInstance();
          (**(code **)(*plVar28 + 0x28))
                    (plVar28,lVar52,
                     "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                     ,0x7a);
        }
        if (local_d0 != (undefined1 *)0x0) {
          *(undefined1 **)(this_10 + 0x28) = local_d8;
          lVar52 = (long)local_d8 + 1;
          plVar28 = (long *)SpineExtension::getInstance();
          pvVar45 = (void *)(**(code **)(*plVar28 + 0x18))
                                      (plVar28,lVar52,
                                       "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                       ,0x81);
          *(void **)(this_10 + 0x30) = pvVar45;
          memcpy(pvVar45,local_d0,(long)local_d8 + 1);
          goto LAB_00cfa938;
        }
        *(undefined8 *)(this_10 + 0x28) = 0;
        *(undefined8 *)(this_10 + 0x30) = 0;
        local_e0 = &PTR__String_01c67868;
      }
      SpineObject::~SpineObject((SpineObject *)&local_e0);
      if (bVar68 != 0) {
        plVar28 = (long *)SpineExtension::getInstance();
        (**(code **)(*plVar28 + 0x28))
                  (plVar28,pcVar64,
                   "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonBinary.cpp"
                   ,0x3ef);
      }
      if (*(long *)(pEVar63 + 0x48) != 0) {
        puVar40 = *(undefined1 **)pDVar59;
        *(undefined1 **)pDVar59 = puVar40 + 1;
        uVar2 = *puVar40;
        *(undefined1 **)pDVar59 = puVar40 + 2;
        uVar3 = puVar40[1];
        *(undefined1 **)pDVar59 = puVar40 + 3;
        uVar4 = puVar40[2];
        *(undefined1 **)pDVar59 = puVar40 + 4;
        *(uint *)(this_10 + 0x38) = CONCAT31(CONCAT21(CONCAT11(uVar2,uVar3),uVar4),puVar40[3]);
        *(undefined1 **)pDVar59 = puVar40 + 5;
        uVar2 = puVar40[4];
        *(undefined1 **)pDVar59 = puVar40 + 6;
        uVar3 = puVar40[5];
        *(undefined1 **)pDVar59 = puVar40 + 7;
        uVar4 = puVar40[6];
        *(undefined1 **)pDVar59 = puVar40 + 8;
        *(uint *)(this_10 + 0x3c) = CONCAT31(CONCAT21(CONCAT11(uVar2,uVar3),uVar4),puVar40[7]);
      }
      EventTimeline::setFrame(this_09,uVar39,this_10);
      lVar52 = local_a8;
      uVar39 = uVar39 + 1;
    } while (uVar35 != uVar39);
    if (local_b8 == local_b0) {
      uVar34 = (uint)((float)local_b8 * 1.75);
      if (uVar34 < 9) {
        uVar34 = 8;
      }
      local_b0 = (ulong)(int)uVar34;
      plVar28 = (long *)SpineExtension::getInstance();
      local_a8 = (**(code **)(*plVar28 + 0x20))
                           (plVar28,lVar52,
                            -(ulong)(uVar34 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar34 << 3,
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                            ,0x6a);
      puVar31 = (undefined8 *)(local_a8 + local_b8 * 8);
    }
    else {
      puVar31 = (undefined8 *)(local_a8 + local_b8 * 8);
    }
    local_b8 = local_b8 + 1;
    *puVar31 = this_09;
    fVar83 = *(float *)(*(long *)(this_09 + 0x20) + (long)(int)(uVar35 - 1) * 4);
    if (fVar82 <= fVar83) {
      fVar82 = fVar83;
    }
  }
  this_12 = SpineObject::operator_new
                      (0x60,
                       "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonBinary.cpp"
                       ,0x3fc);
  local_e0 = &PTR__String_01c67868;
  if (*(long *)(param_1 + 0x10) == 0) {
    local_d8 = (undefined1 *)0x0;
    local_d0 = (undefined1 *)0x0;
  }
  else {
    local_d8 = *(undefined1 **)(param_1 + 8);
    lVar52 = (long)local_d8 + 1;
    plVar28 = (long *)SpineExtension::getInstance();
    local_d0 = (undefined1 *)
               (**(code **)(*plVar28 + 0x18))
                         (plVar28,lVar52,
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                          ,0x47);
    memcpy(local_d0,*(void **)(param_1 + 0x10),*(long *)(param_1 + 8) + 1);
  }
  Animation::Animation(this_12,(String *)&local_e0,(Vector *)&local_c0,fVar82);
  puVar40 = local_d0;
  local_e0 = &PTR__String_01c67868;
  if (local_d0 != (undefined1 *)0x0) {
    plVar28 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar28 + 0x28))
              (plVar28,puVar40,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",0xc9
              );
  }
  SpineObject::~SpineObject((SpineObject *)&local_e0);
LAB_00cf8900:
  lVar52 = local_a8;
  local_c0 = &PTR__Vector_01c8cfd8;
  local_b8 = 0;
  if (local_a8 != 0) {
    plVar28 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar28 + 0x28))
              (plVar28,lVar52,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",0xce);
  }
  SpineObject::~SpineObject((SpineObject *)&local_c0);
  if (*(long *)(lVar24 + 0x28) == local_a0) {
    return this_12;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

