
/* spine::SkeletonJson::readAnimation(spine::Json*, spine::SkeletonData*) */

Animation * __thiscall
spine::SkeletonJson::readAnimation(SkeletonJson *this,Json *param_1,SkeletonData *param_2)

{
  int *piVar1;
  undefined1 auVar2 [16];
  long lVar3;
  undefined8 *puVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  TwoColorTimeline *pTVar18;
  char *pcVar19;
  size_t sVar20;
  ulong uVar21;
  long *plVar22;
  AttachmentTimeline *this_00;
  ColorTimeline *this_01;
  RotateTimeline *pRVar23;
  IkConstraintTimeline *this_02;
  TransformConstraintTimeline *this_03;
  PathConstraintMixTimeline *this_04;
  PathConstraintPositionTimeline *this_05;
  Skin *this_06;
  long *plVar24;
  DeformTimeline *this_07;
  DrawOrderTimeline *this_08;
  EventTimeline *this_09;
  EventData *pEVar25;
  Event *this_10;
  Animation *this_11;
  uint uVar26;
  uint uVar27;
  long *plVar28;
  float *pfVar29;
  undefined8 *puVar30;
  void *pvVar31;
  long *plVar32;
  ulong uVar33;
  undefined4 *puVar34;
  void *pvVar35;
  float *pfVar36;
  ulong uVar37;
  undefined8 *puVar38;
  ulong uVar39;
  ulong uVar40;
  char *pcVar41;
  Json *pJVar42;
  Json *pJVar43;
  ulong uVar44;
  ShearTimeline *this_12;
  float fVar45;
  float fVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  long local_1e8;
  undefined **local_140;
  size_t local_138;
  void *local_130;
  undefined **local_128;
  size_t local_120;
  void *local_118;
  undefined **local_110;
  char *local_108;
  char *local_100;
  void *local_f8;
  undefined **local_f0;
  ulong local_e8;
  ulong local_e0;
  long local_d8;
  undefined **local_d0;
  void *local_c8;
  void *local_c0;
  long local_b8;
  long local_b0;
  
  lVar3 = tpidr_el0;
  local_b0 = *(long *)(lVar3 + 0x28);
  local_f0 = &PTR__Vector_01c8cfd8;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  lVar11 = Json::getItem(param_1,"bones");
  lVar12 = Json::getItem(param_1,"slots");
  lVar13 = Json::getItem(param_1,"ik");
  lVar14 = Json::getItem(param_1,"transform");
  lVar15 = Json::getItem(param_1,"path");
  if (lVar15 == 0) {
    lVar15 = Json::getItem(param_1,"paths");
  }
  lVar16 = Json::getItem(param_1,"deform");
  local_1e8 = Json::getItem(param_1,"drawOrder");
  lVar17 = Json::getItem(param_1,"events");
  if (local_1e8 == 0) {
    local_1e8 = Json::getItem(param_1,"draworder");
  }
  if (lVar11 != 0) {
    for (plVar28 = *(long **)(lVar11 + 8); plVar28 != (long *)0x0; plVar28 = (long *)*plVar28) {
    }
  }
  if (lVar12 != 0) {
    for (plVar28 = *(long **)(lVar12 + 8); plVar28 != (long *)0x0; plVar28 = (long *)*plVar28) {
    }
  }
  if (lVar15 != 0) {
    for (plVar28 = *(long **)(lVar15 + 8); plVar28 != (long *)0x0; plVar28 = (long *)*plVar28) {
    }
  }
  if (lVar16 != 0) {
    for (plVar28 = *(long **)(lVar16 + 8); plVar28 != (long *)0x0; plVar28 = (long *)*plVar28) {
      for (plVar32 = (long *)plVar28[1]; plVar32 != (long *)0x0; plVar32 = (long *)*plVar32) {
      }
    }
  }
  fVar51 = 0.0;
  if ((lVar12 != 0) && (plVar28 = *(long **)(lVar12 + 8), fVar51 = 0.0, plVar28 != (long *)0x0)) {
    fVar51 = 0.0;
    fVar46 = -1.0;
LAB_00d054f8:
    pcVar41 = (char *)plVar28[5];
    local_110 = &PTR__String_01c67868;
    if (pcVar41 == (char *)0x0) {
      local_108 = (char *)0x0;
      local_100 = (char *)0x0;
    }
    else {
      local_108 = (char *)strlen(pcVar41);
      lVar12 = (long)local_108 + 1;
      plVar32 = (long *)SpineExtension::getInstance();
      local_100 = (char *)(**(code **)(*plVar32 + 0x18))
                                    (plVar32,lVar12,
                                     "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                     ,0x39);
      memcpy(local_100,pcVar41,(long)local_108 + 1);
    }
    iVar6 = SkeletonData::findSlotIndex(param_2,(String *)&local_110);
    pcVar41 = local_100;
    local_110 = &PTR__String_01c67868;
    if (local_100 != (char *)0x0) {
      plVar32 = (long *)SpineExtension::getInstance();
      (**(code **)(*plVar32 + 0x28))
                (plVar32,pcVar41,
                 "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",
                 0xc9);
    }
    SpineObject::~SpineObject((SpineObject *)&local_110);
    if (iVar6 != -1) goto code_r0x00d055ac;
    if (0 < (int)local_e8) {
      uVar44 = (long)(int)local_e8;
      do {
        uVar21 = uVar44 - 1;
        plVar32 = *(long **)(local_d8 + uVar21 * 8);
        if (plVar32 != (long *)0x0) {
          (**(code **)(*plVar32 + 8))();
        }
        uVar33 = local_e8 - 1;
        if (uVar21 < uVar33) {
          do {
            lVar11 = uVar44 * 8;
            uVar44 = uVar44 + 1;
            puVar30 = (undefined8 *)(local_d8 + lVar11);
            uVar47 = puVar30[-1];
            puVar30[-1] = *puVar30;
            *(undefined8 *)(local_d8 + lVar11) = uVar47;
          } while (local_e8 != uVar44);
        }
        uVar44 = uVar21;
        local_e8 = uVar33;
      } while (0 < (long)uVar21);
    }
    local_110 = &PTR__String_01c67868;
    local_108 = (char *)0x10;
    plVar32 = (long *)SpineExtension::getInstance();
    local_100 = (char *)(**(code **)(*plVar32 + 0x18))
                                  (plVar32,0x11,
                                   "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                   ,0x39);
    builtin_strncpy(local_100,"Slot not found: ",0x11);
    pcVar41 = (char *)plVar28[5];
joined_r0x00d07dc0:
    if (pcVar41 == (char *)0x0) {
      local_d0 = &PTR__String_01c67868;
      local_c8 = (void *)0x0;
      local_c0 = (void *)0x0;
      setError(this,(Json *)0x0,(String *)&local_110,(String *)&local_d0);
      local_d0 = &PTR__String_01c67868;
    }
    else {
      local_d0 = &PTR__String_01c67868;
      local_c8 = (void *)strlen(pcVar41);
      lVar11 = (long)local_c8 + 1;
      plVar28 = (long *)SpineExtension::getInstance();
      local_c0 = (void *)(**(code **)(*plVar28 + 0x18))
                                   (plVar28,lVar11,
                                    "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                    ,0x39);
      memcpy(local_c0,pcVar41,(long)local_c8 + 1);
      pvVar35 = local_c0;
      setError(this,(Json *)0x0,(String *)&local_110,(String *)&local_d0);
      local_d0 = &PTR__String_01c67868;
      if (pvVar35 != (void *)0x0) {
        plVar28 = (long *)SpineExtension::getInstance();
        (**(code **)(*plVar28 + 0x28))
                  (plVar28,pvVar35,
                   "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",
                   0xc9);
      }
    }
    SpineObject::~SpineObject((SpineObject *)&local_d0);
    goto LAB_00d087e8;
  }
LAB_00d05e20:
  if ((lVar11 != 0) && (plVar28 = *(long **)(lVar11 + 8), plVar28 != (long *)0x0)) {
LAB_00d05e80:
    pcVar41 = (char *)plVar28[5];
    local_110 = &PTR__String_01c67868;
    if (pcVar41 == (char *)0x0) {
      local_108 = (char *)0x0;
      local_100 = (char *)0x0;
    }
    else {
      local_108 = (char *)strlen(pcVar41);
      lVar11 = (long)local_108 + 1;
      plVar32 = (long *)SpineExtension::getInstance();
      local_100 = (char *)(**(code **)(*plVar32 + 0x18))
                                    (plVar32,lVar11,
                                     "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                     ,0x39);
      memcpy(local_100,pcVar41,(long)local_108 + 1);
    }
    iVar6 = SkeletonData::findBoneIndex(param_2,(String *)&local_110);
    pcVar41 = local_100;
    local_110 = &PTR__String_01c67868;
    if (local_100 != (char *)0x0) {
      plVar32 = (long *)SpineExtension::getInstance();
      (**(code **)(*plVar32 + 0x28))
                (plVar32,pcVar41,
                 "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",
                 0xc9);
    }
    SpineObject::~SpineObject((SpineObject *)&local_110);
    if (iVar6 != -1) goto code_r0x00d05f3c;
    if (0 < (int)local_e8) {
      uVar44 = (long)(int)local_e8;
      do {
        uVar21 = uVar44 - 1;
        plVar32 = *(long **)(local_d8 + uVar21 * 8);
        if (plVar32 != (long *)0x0) {
          (**(code **)(*plVar32 + 8))();
        }
        uVar33 = local_e8 - 1;
        if (uVar21 < uVar33) {
          do {
            lVar11 = uVar44 * 8;
            uVar44 = uVar44 + 1;
            puVar30 = (undefined8 *)(local_d8 + lVar11);
            uVar47 = puVar30[-1];
            puVar30[-1] = *puVar30;
            *(undefined8 *)(local_d8 + lVar11) = uVar47;
          } while (local_e8 != uVar44);
        }
        uVar44 = uVar21;
        local_e8 = uVar33;
      } while (0 < (long)uVar21);
    }
    local_110 = &PTR__String_01c67868;
    local_108 = (char *)0x10;
    plVar32 = (long *)SpineExtension::getInstance();
    local_100 = (char *)(**(code **)(*plVar32 + 0x18))
                                  (plVar32,0x11,
                                   "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                   ,0x39);
    builtin_strncpy(local_100,"Bone not found: ",0x11);
    goto LAB_00d08724;
  }
LAB_00d0629c:
  if (lVar13 != 0) {
    plVar28 = *(long **)(lVar13 + 8);
    while (plVar28 != (long *)0x0) {
      pcVar41 = (char *)plVar28[5];
      local_110 = &PTR__String_01c67868;
      if (pcVar41 == (char *)0x0) {
        local_108 = (char *)0x0;
        local_100 = (char *)0x0;
      }
      else {
        local_108 = (char *)strlen(pcVar41);
        lVar11 = (long)local_108 + 1;
        plVar32 = (long *)SpineExtension::getInstance();
        local_100 = (char *)(**(code **)(*plVar32 + 0x18))
                                      (plVar32,lVar11,
                                       "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                       ,0x39);
        memcpy(local_100,pcVar41,(long)local_108 + 1);
      }
      lVar11 = SkeletonData::findIkConstraint(param_2,(String *)&local_110);
      pcVar41 = local_100;
      local_110 = &PTR__String_01c67868;
      if (local_100 != (char *)0x0) {
        plVar32 = (long *)SpineExtension::getInstance();
        (**(code **)(*plVar32 + 0x28))
                  (plVar32,pcVar41,
                   "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",
                   0xc9);
      }
      SpineObject::~SpineObject((SpineObject *)&local_110);
      this_02 = SpineObject::operator_new
                          (0x50,
                           "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonJson.cpp"
                           ,0x3ad);
      IkConstraintTimeline::IkConstraintTimeline(this_02,*(int *)((long)plVar28 + 0x14));
      if (*(ulong *)(param_2 + 0xd0) != 0) {
        uVar44 = 0;
        do {
          if (lVar11 == *(long *)(*(long *)(param_2 + 0xe0) + uVar44 * 8)) {
            *(int *)(this_02 + 0x48) = (int)uVar44;
            break;
          }
          uVar44 = uVar44 + 1;
        } while (uVar44 < *(ulong *)(param_2 + 0xd0));
      }
      pJVar43 = (Json *)plVar28[1];
      if (pJVar43 != (Json *)0x0) {
        uVar44 = 0;
        do {
          fVar46 = (float)Json::getFloat(pJVar43,"time",0.0);
          fVar52 = (float)Json::getFloat(pJVar43,"mix",1.0);
          fVar45 = (float)Json::getFloat(pJVar43,"softness",0.0);
          fVar53 = *(float *)(this + 0x30);
          iVar7 = Json::getInt(pJVar43,"bendPositive",1);
          iVar6 = 1;
          if (iVar7 == 0) {
            iVar6 = -1;
          }
          iVar7 = Json::getInt(pJVar43,"compress",0);
          iVar8 = Json::getInt(pJVar43,"stretch",0);
          IkConstraintTimeline::setFrame
                    (this_02,(int)uVar44,fVar46,fVar52,fVar45 * fVar53,iVar6,iVar7 != 0,iVar8 != 0);
          readCurve(pJVar43,(CurveTimeline *)this_02,uVar44);
          pJVar43 = *(Json **)pJVar43;
          uVar44 = uVar44 + 1;
        } while (pJVar43 != (Json *)0x0);
      }
      lVar11 = local_d8;
      if (local_e8 == local_e0) {
        uVar26 = (uint)((float)local_e8 * 1.75);
        if (uVar26 < 9) {
          uVar26 = 8;
        }
        local_e0 = (ulong)(int)uVar26;
        plVar32 = (long *)SpineExtension::getInstance();
        local_d8 = (**(code **)(*plVar32 + 0x20))
                             (plVar32,lVar11,
                              -(ulong)(uVar26 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar26 << 3,
                              "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                              ,0x6a);
        puVar30 = (undefined8 *)(local_d8 + local_e8 * 8);
      }
      else {
        puVar30 = (undefined8 *)(local_d8 + local_e8 * 8);
      }
      local_e8 = local_e8 + 1;
      *puVar30 = this_02;
      piVar1 = (int *)((long)plVar28 + 0x14);
      plVar28 = (long *)*plVar28;
      fVar46 = *(float *)(*(long *)(this_02 + 0x40) + (long)((*piVar1 + -1) * 6) * 4);
      if (fVar51 <= fVar46) {
        fVar51 = fVar46;
      }
    }
  }
  if ((lVar14 != 0) && (plVar28 = *(long **)(lVar14 + 8), plVar28 != (long *)0x0)) {
    do {
      pcVar41 = (char *)plVar28[5];
      if (pcVar41 == (char *)0x0) {
        local_108 = (char *)0x0;
        local_100 = (char *)0x0;
        local_110 = &PTR__String_01c67868;
      }
      else {
        local_110 = &PTR__String_01c67868;
        local_108 = (char *)strlen(pcVar41);
        lVar11 = (long)local_108 + 1;
        plVar32 = (long *)SpineExtension::getInstance();
        local_100 = (char *)(**(code **)(*plVar32 + 0x18))
                                      (plVar32,lVar11,
                                       "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                       ,0x39);
        memcpy(local_100,pcVar41,(long)local_108 + 1);
      }
      lVar11 = SkeletonData::findTransformConstraint(param_2,(String *)&local_110);
      pcVar41 = local_100;
      local_110 = &PTR__String_01c67868;
      if (local_100 != (char *)0x0) {
        plVar32 = (long *)SpineExtension::getInstance();
        (**(code **)(*plVar32 + 0x28))
                  (plVar32,pcVar41,
                   "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",
                   0xc9);
      }
      SpineObject::~SpineObject((SpineObject *)&local_110);
      this_03 = SpineObject::operator_new
                          (0x50,
                           "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonJson.cpp"
                           ,0x3c3);
      TransformConstraintTimeline::TransformConstraintTimeline
                (this_03,*(int *)((long)plVar28 + 0x14));
      if (*(ulong *)(param_2 + 0xf0) != 0) {
        uVar44 = 0;
        do {
          if (lVar11 == *(long *)(*(long *)(param_2 + 0x100) + uVar44 * 8)) {
            *(int *)(this_03 + 0x48) = (int)uVar44;
            pJVar43 = (Json *)plVar28[1];
            goto joined_r0x00d0673c;
          }
          uVar44 = uVar44 + 1;
        } while (uVar44 < *(ulong *)(param_2 + 0xf0));
      }
      pJVar43 = (Json *)plVar28[1];
joined_r0x00d0673c:
      if (pJVar43 != (Json *)0x0) {
        uVar44 = 0;
        do {
          fVar46 = (float)Json::getFloat(pJVar43,"time",0.0);
          fVar52 = (float)Json::getFloat(pJVar43,"rotateMix",1.0);
          fVar45 = (float)Json::getFloat(pJVar43,"translateMix",1.0);
          fVar53 = (float)Json::getFloat(pJVar43,"scaleMix",1.0);
          fVar54 = (float)Json::getFloat(pJVar43,"shearMix",1.0);
          TransformConstraintTimeline::setFrame(this_03,uVar44,fVar46,fVar52,fVar45,fVar53,fVar54);
          readCurve(pJVar43,(CurveTimeline *)this_03,uVar44);
          pJVar43 = *(Json **)pJVar43;
          uVar44 = uVar44 + 1;
        } while (pJVar43 != (Json *)0x0);
      }
      lVar11 = local_d8;
      if (local_e8 == local_e0) {
        uVar26 = (uint)((float)local_e8 * 1.75);
        if (uVar26 < 9) {
          uVar26 = 8;
        }
        local_e0 = (ulong)(int)uVar26;
        plVar32 = (long *)SpineExtension::getInstance();
        local_d8 = (**(code **)(*plVar32 + 0x20))
                             (plVar32,lVar11,
                              -(ulong)(uVar26 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar26 << 3,
                              "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                              ,0x6a);
        puVar30 = (undefined8 *)(local_d8 + local_e8 * 8);
      }
      else {
        puVar30 = (undefined8 *)(local_d8 + local_e8 * 8);
      }
      local_e8 = local_e8 + 1;
      *puVar30 = this_03;
      piVar1 = (int *)((long)plVar28 + 0x14);
      plVar28 = (long *)*plVar28;
      fVar46 = *(float *)(*(long *)(this_03 + 0x40) + (long)((*piVar1 + -1) * 5) * 4);
      if (fVar51 <= fVar46) {
        fVar51 = fVar46;
      }
    } while (plVar28 != (long *)0x0);
  }
  if ((lVar15 == 0) || (plVar28 = *(long **)(lVar15 + 8), plVar28 == (long *)0x0)) {
LAB_00d06d08:
    if ((lVar16 != 0) && (plVar28 = *(long **)(lVar16 + 8), plVar28 != (long *)0x0)) {
      do {
        pcVar41 = (char *)plVar28[5];
        local_110 = &PTR__String_01c67868;
        if (pcVar41 == (char *)0x0) {
          local_108 = (char *)0x0;
          local_100 = (char *)0x0;
        }
        else {
          local_108 = (char *)strlen(pcVar41);
          lVar11 = (long)local_108 + 1;
          plVar32 = (long *)SpineExtension::getInstance();
          local_100 = (char *)(**(code **)(*plVar32 + 0x18))
                                        (plVar32,lVar11,
                                         "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                         ,0x39);
          memcpy(local_100,pcVar41,(long)local_108 + 1);
        }
        this_06 = (Skin *)SkeletonData::findSkin(param_2,(String *)&local_110);
        pcVar41 = local_100;
        local_110 = &PTR__String_01c67868;
        if (local_100 != (char *)0x0) {
          plVar32 = (long *)SpineExtension::getInstance();
          (**(code **)(*plVar32 + 0x28))
                    (plVar32,pcVar41,
                     "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                     ,0xc9);
        }
        SpineObject::~SpineObject((SpineObject *)&local_110);
        for (plVar32 = (long *)plVar28[1]; plVar32 != (long *)0x0; plVar32 = (long *)*plVar32) {
          pcVar41 = (char *)plVar32[5];
          local_110 = &PTR__String_01c67868;
          if (pcVar41 == (char *)0x0) {
            local_108 = (char *)0x0;
            local_100 = (char *)0x0;
          }
          else {
            local_108 = (char *)strlen(pcVar41);
            lVar11 = (long)local_108 + 1;
            plVar22 = (long *)SpineExtension::getInstance();
            local_100 = (char *)(**(code **)(*plVar22 + 0x18))
                                          (plVar22,lVar11,
                                           "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                           ,0x39);
            memcpy(local_100,pcVar41,(long)local_108 + 1);
          }
          iVar6 = SkeletonData::findSlotIndex(param_2,(String *)&local_110);
          pcVar41 = local_100;
          local_110 = &PTR__String_01c67868;
          if (local_100 != (char *)0x0) {
            plVar22 = (long *)SpineExtension::getInstance();
            (**(code **)(*plVar22 + 0x28))
                      (plVar22,pcVar41,
                       "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                       ,0xc9);
          }
          SpineObject::~SpineObject((SpineObject *)&local_110);
          plVar22 = (long *)plVar32[1];
          if (plVar22 != (long *)0x0) {
            do {
              while( true ) {
                pcVar41 = (char *)plVar22[5];
                local_110 = &PTR__String_01c67868;
                if (pcVar41 == (char *)0x0) {
                  local_108 = (char *)0x0;
                  local_100 = (char *)0x0;
                }
                else {
                  local_108 = (char *)strlen(pcVar41);
                  lVar11 = (long)local_108 + 1;
                  plVar24 = (long *)SpineExtension::getInstance();
                  local_100 = (char *)(**(code **)(*plVar24 + 0x18))
                                                (plVar24,lVar11,
                                                 "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                                 ,0x39);
                  memcpy(local_100,pcVar41,(long)local_108 + 1);
                }
                lVar11 = Skin::getAttachment(this_06,(long)iVar6,(String *)&local_110);
                pcVar41 = local_100;
                local_110 = &PTR__String_01c67868;
                if (local_100 != (char *)0x0) {
                  plVar24 = (long *)SpineExtension::getInstance();
                  (**(code **)(*plVar24 + 0x28))
                            (plVar24,pcVar41,
                             "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                             ,0xc9);
                }
                SpineObject::~SpineObject((SpineObject *)&local_110);
                if (lVar11 == 0) break;
                lVar12 = *(long *)(lVar11 + 0x30);
                uVar44 = *(ulong *)(lVar11 + 0x50);
                if (lVar12 != 0) {
                  auVar2._8_8_ = 0;
                  auVar2._0_8_ = uVar44;
                  uVar44 = SUB168(auVar2 * ZEXT816(0xaaaaaaaaaaaaaaab),8) & 0xfffffffffffffffe;
                }
                this_07 = SpineObject::operator_new
                                    (0x78,
                                     "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonJson.cpp"
                                     ,0x42f);
                DeformTimeline::DeformTimeline(this_07,*(int *)((long)plVar22 + 0x14));
                *(long *)(this_07 + 0x70) = lVar11;
                *(int *)(this_07 + 0x28) = iVar6;
                pJVar43 = (Json *)plVar22[1];
                if (pJVar43 != (Json *)0x0) {
                  pcVar41 = (char *)(long)(int)uVar44;
                  uVar26 = (uint)((float)pcVar41 * 1.75);
                  if (uVar26 < 9) {
                    uVar26 = 8;
                  }
                  uVar33 = -(ulong)(uVar26 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar26 << 2;
                  uVar37 = uVar44 & 0xffffffff;
                  uVar21 = 0;
                  lVar13 = uVar37 - (uVar44 & 7);
                  do {
                    lVar14 = Json::getItem(pJVar43,"vertices");
                    local_110 = &PTR__Vector_01c8d048;
                    local_108 = (char *)0x0;
                    local_100 = (char *)0x0;
                    local_f8 = (void *)0x0;
                    if (lVar14 == 0) {
                      if (lVar12 == 0) {
                        local_108 = (char *)0x0;
                        pcVar19 = *(char **)(lVar11 + 0x50);
                        if (pcVar19 != (char *)0x0) {
                          local_110 = &PTR__Vector_01c8d048;
                          local_100 = pcVar19;
                          plVar24 = (long *)SpineExtension::getInstance();
                          pvVar35 = (void *)(**(code **)(*plVar24 + 0x20))
                                                      (plVar24,0,(long)pcVar19 << 2,
                                                                                                              
                                                  "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                                                  ,0x5e);
                          uVar40 = *(ulong *)(lVar11 + 0x50);
                          local_f8 = pvVar35;
                          if (uVar40 != 0) {
                            uVar39 = 0;
                            do {
                              if (local_108 == local_100) {
                                uVar27 = (uint)((float)local_108 * 1.75);
                                uVar10 = *(undefined4 *)(*(long *)(lVar11 + 0x60) + uVar39 * 4);
                                if (uVar27 < 9) {
                                  uVar27 = 8;
                                }
                                local_100 = (char *)(long)(int)uVar27;
                                plVar24 = (long *)SpineExtension::getInstance();
                                pvVar35 = (void *)(**(code **)(*plVar24 + 0x20))
                                                            (plVar24,pvVar35,
                                                             -(ulong)(uVar27 >> 0x1f) &
                                                             0xfffffffc00000000 | (ulong)uVar27 << 2
                                                             ,
                                                  "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                                                  ,0x6a);
                                *(undefined4 *)((long)pvVar35 + (long)local_108 * 4) = uVar10;
                                uVar40 = *(ulong *)(lVar11 + 0x50);
                                local_f8 = pvVar35;
                              }
                              else {
                                *(undefined4 *)((long)pvVar35 + (long)local_108 * 4) =
                                     *(undefined4 *)(*(long *)(lVar11 + 0x60) + uVar39 * 4);
                              }
                              local_108 = local_108 + 1;
                              uVar39 = uVar39 + 1;
                            } while (uVar39 < uVar40);
                          }
                        }
                      }
                      else {
                        local_108 = pcVar41;
                        if ((uVar44 & 0xffffffff) != 0) {
                          local_100 = (char *)(long)(int)uVar26;
                          plVar24 = (long *)SpineExtension::getInstance();
                          local_f8 = (void *)(**(code **)(*plVar24 + 0x20))
                                                       (plVar24,0,uVar33,
                                                                                                                
                                                  "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                                                  ,0x52);
                          if (local_108 != (char *)0x0) {
                            memset(local_f8,0,(long)local_108 << 2);
                          }
                        }
                      }
                    }
                    else {
                      iVar7 = Json::getInt(pJVar43,"offset",0);
                      pvVar35 = local_f8;
                      pcVar19 = local_108;
                      local_108 = pcVar41;
                      if (local_100 < pcVar41) {
                        local_100 = (char *)(long)(int)uVar26;
                        plVar24 = (long *)SpineExtension::getInstance();
                        local_f8 = (void *)(**(code **)(*plVar24 + 0x20))
                                                     (plVar24,pvVar35,uVar33,
                                                                                                            
                                                  "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                                                  ,0x52);
                      }
                      if (pcVar19 <= local_108 && (long)local_108 - (long)pcVar19 != 0) {
                        memset((void *)((long)local_f8 + (long)pcVar19 * 4),0,
                               ((long)local_108 - (long)pcVar19) * 4);
                      }
                      plVar24 = *(long **)(lVar14 + 8);
                      if (*(float *)(this + 0x30) == 1.0) {
                        if (plVar24 != (long *)0x0) {
                          puVar34 = (undefined4 *)((long)local_f8 + (long)iVar7 * 4);
                          do {
                            *puVar34 = *(undefined4 *)((long)plVar24 + 0x24);
                            plVar24 = (long *)*plVar24;
                            puVar34 = puVar34 + 1;
                          } while (plVar24 != (long *)0x0);
                        }
                      }
                      else if (plVar24 != (long *)0x0) {
                        *(float *)((long)local_f8 + (long)iVar7 * 4) =
                             *(float *)((long)plVar24 + 0x24) * *(float *)(this + 0x30);
                        plVar24 = (long *)*plVar24;
                        if (plVar24 != (long *)0x0) {
                          pfVar29 = (float *)((long)local_f8 + (long)iVar7 * 4);
                          do {
                            pfVar29 = pfVar29 + 1;
                            *pfVar29 = *(float *)((long)plVar24 + 0x24) * *(float *)(this + 0x30);
                            plVar24 = (long *)*plVar24;
                          } while (plVar24 != (long *)0x0);
                        }
                      }
                      if (lVar12 == 0 && 0 < (int)uVar44) {
                        pvVar35 = *(void **)(lVar11 + 0x60);
                        if ((uVar37 < 8) ||
                           ((local_f8 < (void *)((long)pvVar35 + uVar37 * 4) &&
                            (pvVar35 < (void *)((long)local_f8 + uVar37 * 4))))) {
                          lVar14 = 0;
                        }
                        else {
                          puVar30 = (undefined8 *)((long)pvVar35 + 0x10);
                          puVar38 = (undefined8 *)((long)local_f8 + 0x10);
                          lVar14 = lVar13;
                          do {
                            puVar4 = puVar30 + -1;
                            uVar47 = puVar30[-2];
                            uVar49 = puVar30[1];
                            uVar48 = *puVar30;
                            puVar30 = puVar30 + 4;
                            lVar14 = lVar14 + -8;
                            puVar38[-1] = CONCAT44((float)((ulong)*puVar4 >> 0x20) +
                                                   (float)((ulong)puVar38[-1] >> 0x20),
                                                   (float)*puVar4 + (float)puVar38[-1]);
                            puVar38[-2] = CONCAT44((float)((ulong)uVar47 >> 0x20) +
                                                   (float)((ulong)puVar38[-2] >> 0x20),
                                                   (float)uVar47 + (float)puVar38[-2]);
                            puVar38[1] = CONCAT44((float)((ulong)uVar49 >> 0x20) +
                                                  (float)((ulong)puVar38[1] >> 0x20),
                                                  (float)uVar49 + (float)puVar38[1]);
                            *puVar38 = CONCAT44((float)((ulong)uVar48 >> 0x20) +
                                                (float)((ulong)*puVar38 >> 0x20),
                                                (float)uVar48 + (float)*puVar38);
                            puVar38 = puVar38 + 4;
                          } while (lVar14 != 0);
                          lVar14 = lVar13;
                          if ((uVar44 & 7) == 0) goto LAB_00d07318;
                        }
                        lVar15 = uVar37 - lVar14;
                        pfVar29 = (float *)((long)local_f8 + lVar14 * 4);
                        pfVar36 = (float *)((long)pvVar35 + lVar14 * 4);
                        do {
                          lVar15 = lVar15 + -1;
                          *pfVar29 = *pfVar36 + *pfVar29;
                          pfVar29 = pfVar29 + 1;
                          pfVar36 = pfVar36 + 1;
                        } while (lVar15 != 0);
                      }
                    }
LAB_00d07318:
                    fVar46 = (float)Json::getFloat(pJVar43,"time",0.0);
                    DeformTimeline::setFrame(this_07,(int)uVar21,fVar46,(Vector *)&local_110);
                    readCurve(pJVar43,(CurveTimeline *)this_07,uVar21);
                    pvVar35 = local_f8;
                    local_110 = &PTR__Vector_01c8d048;
                    local_108 = (char *)0x0;
                    if (local_f8 != (void *)0x0) {
                      plVar24 = (long *)SpineExtension::getInstance();
                      (**(code **)(*plVar24 + 0x28))
                                (plVar24,pvVar35,
                                 "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                                 ,0xce);
                    }
                    SpineObject::~SpineObject((SpineObject *)&local_110);
                    pJVar43 = *(Json **)pJVar43;
                    uVar21 = uVar21 + 1;
                  } while (pJVar43 != (Json *)0x0);
                }
                lVar11 = local_d8;
                if (local_e8 == local_e0) {
                  uVar26 = (uint)((float)local_e8 * 1.75);
                  if (uVar26 < 9) {
                    uVar26 = 8;
                  }
                  local_e0 = (ulong)(int)uVar26;
                  plVar24 = (long *)SpineExtension::getInstance();
                  local_d8 = (**(code **)(*plVar24 + 0x20))
                                       (plVar24,lVar11,
                                        -(ulong)(uVar26 >> 0x1f) & 0xfffffff800000000 |
                                        (ulong)uVar26 << 3,
                                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                                        ,0x6a);
                  puVar30 = (undefined8 *)(local_d8 + local_e8 * 8);
                }
                else {
                  puVar30 = (undefined8 *)(local_d8 + local_e8 * 8);
                }
                local_e8 = local_e8 + 1;
                *puVar30 = this_07;
                fVar46 = *(float *)(*(long *)(this_07 + 0x48) +
                                    (long)*(int *)((long)plVar22 + 0x14) * 4 + -4);
                if (fVar51 <= fVar46) {
                  fVar51 = fVar46;
                }
                plVar22 = (long *)*plVar22;
                if (plVar22 == (long *)0x0) goto LAB_00d074d0;
              }
              if (0 < (int)local_e8) {
                uVar44 = (long)(int)local_e8;
                do {
                  uVar21 = uVar44 - 1;
                  plVar24 = *(long **)(local_d8 + uVar21 * 8);
                  if (plVar24 != (long *)0x0) {
                    (**(code **)(*plVar24 + 8))();
                  }
                  uVar33 = local_e8 - 1;
                  if (uVar21 < uVar33) {
                    do {
                      lVar11 = uVar44 * 8;
                      uVar44 = uVar44 + 1;
                      puVar30 = (undefined8 *)(local_d8 + lVar11);
                      uVar47 = puVar30[-1];
                      puVar30[-1] = *puVar30;
                      *(undefined8 *)(local_d8 + lVar11) = uVar47;
                    } while (local_e8 != uVar44);
                  }
                  uVar44 = uVar21;
                  local_e8 = uVar33;
                } while (0 < (long)uVar21);
              }
              plVar22 = (long *)*plVar22;
            } while (plVar22 != (long *)0x0);
          }
LAB_00d074d0:
        }
        plVar28 = (long *)*plVar28;
      } while (plVar28 != (long *)0x0);
    }
    if (local_1e8 != 0) {
      this_08 = SpineObject::operator_new
                          (0x48,
                           "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonJson.cpp"
                           ,0x45e);
      DrawOrderTimeline::DrawOrderTimeline(this_08,*(int *)(local_1e8 + 0x14));
      pJVar43 = *(Json **)(local_1e8 + 8);
      if (pJVar43 != (Json *)0x0) {
        uVar44 = 0;
        do {
          local_110 = &PTR__Vector_01c8e510;
          local_108 = (char *)0x0;
          local_100 = (char *)0x0;
          local_f8 = (void *)0x0;
          lVar11 = Json::getItem(pJVar43,"offsets");
          if (lVar11 == 0) {
LAB_00d07c18:
            fVar46 = (float)Json::getFloat(pJVar43,"time",0.0);
            DrawOrderTimeline::setFrame(this_08,uVar44,fVar46,(Vector *)&local_110);
            bVar5 = false;
          }
          else {
            local_d0 = &PTR__Vector_01c8e510;
            local_c0 = (void *)0x0;
            local_b8 = 0;
            local_c8 = (void *)0x0;
            pvVar35 = (void *)(*(long *)(param_2 + 0x48) - (long)*(int *)(lVar11 + 0x14));
            if (pvVar35 == (void *)0x0) {
              pvVar31 = (void *)0x0;
              pvVar35 = (void *)0x0;
            }
            else {
              local_c0 = pvVar35;
              plVar28 = (long *)SpineExtension::getInstance();
              local_b8 = (**(code **)(*plVar28 + 0x20))
                                   (plVar28,0,(long)pvVar35 * 4,
                                    "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                                    ,0x5e);
              pvVar31 = (void *)(*(long *)(param_2 + 0x48) - (long)*(int *)(lVar11 + 0x14));
              pvVar35 = local_c8;
            }
            lVar12 = local_b8;
            local_c8 = pvVar31;
            if (local_c0 < pvVar31) {
              uVar26 = (uint)((float)pvVar31 * 1.75);
              if (uVar26 < 9) {
                uVar26 = 8;
              }
              local_c0 = (void *)(long)(int)uVar26;
              plVar28 = (long *)SpineExtension::getInstance();
              local_b8 = (**(code **)(*plVar28 + 0x20))
                                   (plVar28,lVar12,
                                    -(ulong)(uVar26 >> 0x1f) & 0xfffffffc00000000 |
                                    (ulong)uVar26 << 2,
                                    "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                                    ,0x52);
            }
            if (pvVar35 <= local_c8 && (long)local_c8 - (long)pvVar35 != 0) {
              memset((void *)(local_b8 + (long)pvVar35 * 4),0,((long)local_c8 - (long)pvVar35) * 4);
            }
            pvVar35 = local_f8;
            pcVar41 = *(char **)(param_2 + 0x48);
            if (local_100 < pcVar41) {
              local_100 = pcVar41;
              plVar28 = (long *)SpineExtension::getInstance();
              local_f8 = (void *)(**(code **)(*plVar28 + 0x20))
                                           (plVar28,pvVar35,(long)pcVar41 << 2,
                                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                                            ,0x5e);
              pcVar41 = *(char **)(param_2 + 0x48);
            }
            pvVar35 = local_f8;
            pcVar19 = local_108;
            local_108 = pcVar41;
            if (local_100 < pcVar41) {
              uVar26 = (uint)((float)pcVar41 * 1.75);
              if (uVar26 < 9) {
                uVar26 = 8;
              }
              local_100 = (char *)(long)(int)uVar26;
              plVar28 = (long *)SpineExtension::getInstance();
              local_f8 = (void *)(**(code **)(*plVar28 + 0x20))
                                           (plVar28,pvVar35,
                                            -(ulong)(uVar26 >> 0x1f) & 0xfffffffc00000000 |
                                            (ulong)uVar26 << 2,
                                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                                            ,0x52);
            }
            if (pcVar19 <= local_108 && (long)local_108 - (long)pcVar19 != 0) {
              memset((void *)((long)local_f8 + (long)pcVar19 * 4),0,
                     ((long)local_108 - (long)pcVar19) * 4);
            }
            iVar6 = (int)*(ulong *)(param_2 + 0x48);
            if (0 < iVar6) {
              memset((void *)((long)local_f8 + ((long)iVar6 - (ulong)(iVar6 - 1)) * 4 + -4),0xff,
                     (*(ulong *)(param_2 + 0x48) & 0xffffffff) << 2);
            }
            pJVar42 = *(Json **)(lVar11 + 8);
            if (pJVar42 == (Json *)0x0) {
              uVar21 = 0;
              lVar11 = 0;
            }
            else {
              lVar11 = 0;
              uVar21 = 0;
              do {
                pcVar41 = (char *)Json::getString(pJVar42,"slot",(char *)0x0);
                if (pcVar41 == (char *)0x0) {
                  local_120 = 0;
                  local_118 = (void *)0x0;
                  local_128 = &PTR__String_01c67868;
                }
                else {
                  local_128 = &PTR__String_01c67868;
                  local_120 = strlen(pcVar41);
                  lVar12 = local_120 + 1;
                  plVar28 = (long *)SpineExtension::getInstance();
                  local_118 = (void *)(**(code **)(*plVar28 + 0x18))
                                                (plVar28,lVar12,
                                                 "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                                 ,0x39);
                  memcpy(local_118,pcVar41,local_120 + 1);
                }
                iVar6 = SkeletonData::findSlotIndex(param_2,(String *)&local_128);
                pvVar35 = local_118;
                local_128 = &PTR__String_01c67868;
                if (local_118 != (void *)0x0) {
                  plVar28 = (long *)SpineExtension::getInstance();
                  (**(code **)(*plVar28 + 0x28))
                            (plVar28,pvVar35,
                             "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                             ,0xc9);
                }
                SpineObject::~SpineObject((SpineObject *)&local_128);
                if (iVar6 == -1) {
                  if (0 < (int)local_e8) {
                    uVar21 = (long)(int)local_e8;
                    do {
                      uVar33 = uVar21 - 1;
                      plVar28 = *(long **)(local_d8 + uVar33 * 8);
                      if (plVar28 != (long *)0x0) {
                        (**(code **)(*plVar28 + 8))();
                      }
                      uVar37 = local_e8 - 1;
                      if (uVar33 < uVar37) {
                        do {
                          lVar11 = uVar21 * 8;
                          uVar21 = uVar21 + 1;
                          puVar30 = (undefined8 *)(local_d8 + lVar11);
                          uVar47 = puVar30[-1];
                          puVar30[-1] = *puVar30;
                          *(undefined8 *)(local_d8 + lVar11) = uVar47;
                        } while (local_e8 != uVar21);
                      }
                      uVar21 = uVar33;
                      local_e8 = uVar37;
                    } while (0 < (long)uVar33);
                  }
                  local_120 = 0x10;
                  local_128 = &PTR__String_01c67868;
                  plVar28 = (long *)SpineExtension::getInstance();
                  local_118 = (void *)(**(code **)(*plVar28 + 0x18))
                                                (plVar28,0x11,
                                                 "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                                 ,0x39);
                  memcpy(local_118,"Slot not found: ",local_120 + 1);
                  pcVar41 = (char *)Json::getString(pJVar42,"slot",(char *)0x0);
                  if (pcVar41 == (char *)0x0) {
                    local_138 = 0;
                    local_130 = (void *)0x0;
                    local_140 = &PTR__String_01c67868;
                  }
                  else {
                    local_140 = &PTR__String_01c67868;
                    local_138 = strlen(pcVar41);
                    lVar11 = local_138 + 1;
                    plVar28 = (long *)SpineExtension::getInstance();
                    local_130 = (void *)(**(code **)(*plVar28 + 0x18))
                                                  (plVar28,lVar11,
                                                                                                      
                                                  "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                                  ,0x39);
                    memcpy(local_130,pcVar41,local_138 + 1);
                  }
                  setError(this,(Json *)0x0,(String *)&local_128,(String *)&local_140);
                  pvVar35 = local_130;
                  local_140 = &PTR__String_01c67868;
                  if (local_130 != (void *)0x0) {
                    plVar28 = (long *)SpineExtension::getInstance();
                    (**(code **)(*plVar28 + 0x28))
                              (plVar28,pvVar35,
                               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                               ,0xc9);
                  }
                  SpineObject::~SpineObject((SpineObject *)&local_140);
                  pvVar35 = local_118;
                  local_128 = &PTR__String_01c67868;
                  if (local_118 != (void *)0x0) {
                    plVar28 = (long *)SpineExtension::getInstance();
                    (**(code **)(*plVar28 + 0x28))
                              (plVar28,pvVar35,
                               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                               ,0xc9);
                  }
                  SpineObject::~SpineObject((SpineObject *)&local_128);
                  bVar5 = true;
                  goto LAB_00d07bd8;
                }
                uVar33 = (ulong)iVar6;
                if (uVar21 != uVar33) {
                  uVar40 = uVar33 - uVar21;
                  lVar12 = lVar11 + uVar33;
                  uVar37 = uVar21;
                  if (uVar40 < 8) {
LAB_00d078c4:
                    puVar34 = (undefined4 *)(local_b8 + lVar11 * 4);
                    do {
                      uVar40 = uVar37 + 1;
                      *puVar34 = (int)uVar37;
                      puVar34 = puVar34 + 1;
                      uVar37 = uVar40;
                    } while (uVar33 != uVar40);
                  }
                  else {
                    uVar39 = uVar40 & 0xfffffffffffffff8;
                    iVar6 = (int)uVar21;
                    lVar13 = lVar11 * 4;
                    lVar11 = lVar11 + uVar39;
                    uVar47 = CONCAT44(iVar6 + 1,iVar6);
                    uVar48 = CONCAT44(iVar6 + 3,iVar6 + 2);
                    puVar30 = (undefined8 *)(local_b8 + lVar13 + 0x10);
                    uVar37 = uVar39;
                    do {
                      iVar6 = (int)((ulong)uVar47 >> 0x20);
                      iVar7 = (int)((ulong)uVar48 >> 0x20);
                      puVar30[-1] = uVar48;
                      puVar30[-2] = uVar47;
                      puVar30[1] = CONCAT44(iVar7 + 4,(int)uVar48 + 4);
                      *puVar30 = CONCAT44(iVar6 + 4,(int)uVar47 + 4);
                      uVar47 = CONCAT44(iVar6 + 8,(int)uVar47 + 8);
                      uVar48 = CONCAT44(iVar7 + 8,(int)uVar48 + 8);
                      uVar37 = uVar37 - 8;
                      puVar30 = puVar30 + 4;
                    } while (uVar37 != 0);
                    uVar37 = uVar21 + uVar39;
                    if (uVar40 != uVar39) goto LAB_00d078c4;
                  }
                  lVar11 = lVar12 - uVar21;
                  uVar21 = uVar33;
                }
                iVar6 = Json::getInt(pJVar42,"offset",0);
                *(int *)((long)local_f8 + (uVar21 + (long)iVar6) * 4) = (int)uVar21;
                pJVar42 = *(Json **)pJVar42;
                uVar21 = uVar21 + 1;
              } while (pJVar42 != (Json *)0x0);
            }
            uVar37 = *(ulong *)(param_2 + 0x48);
            uVar33 = uVar37 - uVar21;
            lVar12 = lVar11;
            if (uVar21 <= uVar37 && uVar33 != 0) {
              if (7 < uVar33) {
                uVar39 = uVar33 & 0xfffffffffffffff8;
                iVar6 = (int)uVar21;
                lVar12 = lVar11 * 4;
                lVar11 = lVar11 + uVar39;
                uVar21 = uVar21 + uVar39;
                uVar47 = CONCAT44(iVar6 + 1,iVar6);
                uVar48 = CONCAT44(iVar6 + 3,iVar6 + 2);
                puVar30 = (undefined8 *)(local_b8 + lVar12 + 0x10);
                uVar40 = uVar39;
                do {
                  iVar6 = (int)((ulong)uVar47 >> 0x20);
                  iVar7 = (int)((ulong)uVar48 >> 0x20);
                  puVar30[-1] = uVar48;
                  puVar30[-2] = uVar47;
                  puVar30[1] = CONCAT44(iVar7 + 4,(int)uVar48 + 4);
                  *puVar30 = CONCAT44(iVar6 + 4,(int)uVar47 + 4);
                  uVar47 = CONCAT44(iVar6 + 8,(int)uVar47 + 8);
                  uVar48 = CONCAT44(iVar7 + 8,(int)uVar48 + 8);
                  uVar40 = uVar40 - 8;
                  puVar30 = puVar30 + 4;
                } while (uVar40 != 0);
                lVar12 = lVar11;
                if (uVar33 == uVar39) goto LAB_00d079a4;
              }
              do {
                uVar33 = uVar21 + 1;
                lVar12 = lVar11 + 1;
                *(int *)(local_b8 + lVar11 * 4) = (int)uVar21;
                lVar11 = lVar12;
                uVar21 = uVar33;
              } while (uVar33 < uVar37);
            }
LAB_00d079a4:
            if ((int)uVar37 < 1) {
              bVar5 = false;
            }
            else {
              lVar11 = (long)(int)uVar37;
              do {
                while (lVar13 = lVar11 + -1, *(int *)((long)local_f8 + lVar11 * 4 + -4) != -1) {
                  lVar11 = lVar13;
                  if (lVar13 < 1) goto LAB_00d079fc;
                }
                lVar12 = lVar12 + -1;
                *(undefined4 *)((long)local_f8 + lVar11 * 4 + -4) =
                     *(undefined4 *)(local_b8 + lVar12 * 4);
                lVar11 = lVar13;
              } while (0 < lVar13);
LAB_00d079fc:
              bVar5 = false;
            }
LAB_00d07bd8:
            lVar11 = local_b8;
            local_d0 = &PTR__Vector_01c8e510;
            local_c8 = (void *)0x0;
            if (local_b8 != 0) {
              plVar28 = (long *)SpineExtension::getInstance();
              (**(code **)(*plVar28 + 0x28))
                        (plVar28,lVar11,
                         "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                         ,0xce);
            }
            SpineObject::~SpineObject((SpineObject *)&local_d0);
            if (!bVar5) goto LAB_00d07c18;
            bVar5 = true;
          }
          pvVar35 = local_f8;
          local_110 = &PTR__Vector_01c8e510;
          local_108 = (char *)0x0;
          if (local_f8 != (void *)0x0) {
            plVar28 = (long *)SpineExtension::getInstance();
            (**(code **)(*plVar28 + 0x28))
                      (plVar28,pvVar35,
                       "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",
                       0xce);
          }
          SpineObject::~SpineObject((SpineObject *)&local_110);
          if (bVar5) goto LAB_00d0881c;
          pJVar43 = *(Json **)pJVar43;
          uVar44 = uVar44 + 1;
        } while (pJVar43 != (Json *)0x0);
      }
      lVar11 = local_d8;
      if (local_e8 == local_e0) {
        uVar26 = (uint)((float)local_e8 * 1.75);
        if (uVar26 < 9) {
          uVar26 = 8;
        }
        local_e0 = (ulong)(int)uVar26;
        plVar28 = (long *)SpineExtension::getInstance();
        local_d8 = (**(code **)(*plVar28 + 0x20))
                             (plVar28,lVar11,
                              -(ulong)(uVar26 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar26 << 3,
                              "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                              ,0x6a);
        puVar30 = (undefined8 *)(local_d8 + local_e8 * 8);
      }
      else {
        puVar30 = (undefined8 *)(local_d8 + local_e8 * 8);
      }
      local_e8 = local_e8 + 1;
      *puVar30 = this_08;
      fVar46 = *(float *)(*(long *)(this_08 + 0x20) + (long)*(int *)(local_1e8 + 0x14) * 4 + -4);
      if (fVar51 <= fVar46) {
        fVar51 = fVar46;
      }
    }
    if (lVar17 != 0) {
      this_09 = SpineObject::operator_new
                          (0x48,
                           "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonJson.cpp"
                           ,0x48e);
      EventTimeline::EventTimeline(this_09,*(int *)(lVar17 + 0x14));
      pJVar43 = *(Json **)(lVar17 + 8);
      if (pJVar43 != (Json *)0x0) {
        uVar44 = 0;
        do {
          pcVar41 = (char *)Json::getString(pJVar43,"name",(char *)0x0);
          if (pcVar41 == (char *)0x0) {
            local_108 = (char *)0x0;
            local_100 = (char *)0x0;
            local_110 = &PTR__String_01c67868;
          }
          else {
            local_110 = &PTR__String_01c67868;
            local_108 = (char *)strlen(pcVar41);
            lVar11 = (long)local_108 + 1;
            plVar28 = (long *)SpineExtension::getInstance();
            local_100 = (char *)(**(code **)(*plVar28 + 0x18))
                                          (plVar28,lVar11,
                                           "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                           ,0x39);
            memcpy(local_100,pcVar41,(long)local_108 + 1);
          }
          pEVar25 = (EventData *)SkeletonData::findEvent(param_2,(String *)&local_110);
          pcVar41 = local_100;
          local_110 = &PTR__String_01c67868;
          if (local_100 != (char *)0x0) {
            plVar28 = (long *)SpineExtension::getInstance();
            (**(code **)(*plVar28 + 0x28))
                      (plVar28,pcVar41,
                       "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                       ,0xc9);
          }
          SpineObject::~SpineObject((SpineObject *)&local_110);
          if (pEVar25 == (EventData *)0x0) {
            if (0 < (int)local_e8) {
              uVar44 = (long)(int)local_e8;
              do {
                uVar21 = uVar44 - 1;
                plVar28 = *(long **)(local_d8 + uVar21 * 8);
                if (plVar28 != (long *)0x0) {
                  (**(code **)(*plVar28 + 8))();
                }
                uVar33 = local_e8 - 1;
                if (uVar21 < uVar33) {
                  do {
                    lVar11 = uVar44 * 8;
                    uVar44 = uVar44 + 1;
                    puVar30 = (undefined8 *)(local_d8 + lVar11);
                    uVar47 = puVar30[-1];
                    puVar30[-1] = *puVar30;
                    *(undefined8 *)(local_d8 + lVar11) = uVar47;
                  } while (local_e8 != uVar44);
                }
                uVar44 = uVar21;
                local_e8 = uVar33;
              } while (0 < (long)uVar21);
            }
            local_110 = &PTR__String_01c67868;
            local_108 = (char *)0x11;
            plVar28 = (long *)SpineExtension::getInstance();
            local_100 = (char *)(**(code **)(*plVar28 + 0x18))
                                          (plVar28,0x12,
                                           "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                           ,0x39);
            builtin_strncpy(local_100,"Event not found: ",0x12);
            pcVar41 = (char *)Json::getString(pJVar43,"name",(char *)0x0);
            goto joined_r0x00d0872c;
          }
          this_10 = SpineObject::operator_new
                              (0x40,
                               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonJson.cpp"
                               ,0x499);
          fVar46 = (float)Json::getFloat(pJVar43,"time",0.0);
          Event::Event(this_10,fVar46,pEVar25);
          uVar10 = Json::getInt(pJVar43,"int",*(int *)(pEVar25 + 0x20));
          *(undefined4 *)(this_10 + 0x14) = uVar10;
          uVar10 = Json::getFloat(pJVar43,"float",*(float *)(pEVar25 + 0x24));
          *(undefined4 *)(this_10 + 0x18) = uVar10;
          pcVar41 = (char *)Json::getString(pJVar43,"string",*(char **)(pEVar25 + 0x38));
          pcVar19 = *(char **)(this_10 + 0x30);
          if (pcVar19 == pcVar41) {
LAB_00d082a4:
            lVar11 = *(long *)(pEVar25 + 0x48);
          }
          else {
            if (pcVar19 != (char *)0x0) {
              plVar28 = (long *)SpineExtension::getInstance();
              (**(code **)(*plVar28 + 0x28))
                        (plVar28,pcVar19,
                         "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                         ,0x8a);
            }
            if (pcVar41 != (char *)0x0) {
              sVar20 = strlen(pcVar41);
              *(size_t *)(this_10 + 0x28) = sVar20;
              plVar28 = (long *)SpineExtension::getInstance();
              pvVar35 = (void *)(**(code **)(*plVar28 + 0x18))
                                          (plVar28,sVar20 + 1,
                                           "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                           ,0x91);
              *(void **)(this_10 + 0x30) = pvVar35;
              memcpy(pvVar35,pcVar41,*(long *)(this_10 + 0x28) + 1);
              goto LAB_00d082a4;
            }
            *(undefined8 *)(this_10 + 0x28) = 0;
            *(undefined8 *)(this_10 + 0x30) = 0;
            lVar11 = *(long *)(pEVar25 + 0x48);
          }
          if (lVar11 != 0) {
            uVar10 = Json::getFloat(pJVar43,"volume",1.0);
            *(undefined4 *)(this_10 + 0x38) = uVar10;
            uVar10 = Json::getFloat(pJVar43,"balance",0.0);
            *(undefined4 *)(this_10 + 0x3c) = uVar10;
          }
          EventTimeline::setFrame(this_09,uVar44,this_10);
          pJVar43 = *(Json **)pJVar43;
          uVar44 = uVar44 + 1;
        } while (pJVar43 != (Json *)0x0);
      }
      lVar11 = local_d8;
      if (local_e8 == local_e0) {
        uVar26 = (uint)((float)local_e8 * 1.75);
        if (uVar26 < 9) {
          uVar26 = 8;
        }
        local_e0 = (ulong)(int)uVar26;
        plVar28 = (long *)SpineExtension::getInstance();
        local_d8 = (**(code **)(*plVar28 + 0x20))
                             (plVar28,lVar11,
                              -(ulong)(uVar26 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar26 << 3,
                              "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                              ,0x6a);
        puVar30 = (undefined8 *)(local_d8 + local_e8 * 8);
      }
      else {
        puVar30 = (undefined8 *)(local_d8 + local_e8 * 8);
      }
      local_e8 = local_e8 + 1;
      *puVar30 = this_09;
      fVar46 = *(float *)(*(long *)(this_09 + 0x20) + (long)*(int *)(lVar17 + 0x14) * 4 + -4);
      if (fVar51 <= fVar46) {
        fVar51 = fVar46;
      }
    }
    this_11 = SpineObject::operator_new
                        (0x60,
                         "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonJson.cpp"
                         ,0x4a8);
    pcVar41 = *(char **)(param_1 + 0x28);
    local_110 = &PTR__String_01c67868;
    if (pcVar41 == (char *)0x0) {
      local_108 = (char *)0x0;
      local_100 = (char *)0x0;
    }
    else {
      local_108 = (char *)strlen(pcVar41);
      lVar11 = (long)local_108 + 1;
      plVar28 = (long *)SpineExtension::getInstance();
      local_100 = (char *)(**(code **)(*plVar28 + 0x18))
                                    (plVar28,lVar11,
                                     "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                     ,0x39);
      memcpy(local_100,pcVar41,(long)local_108 + 1);
    }
    Animation::Animation(this_11,(String *)&local_110,(Vector *)&local_f0,fVar51);
    pcVar41 = local_100;
    local_110 = &PTR__String_01c67868;
    if (local_100 != (char *)0x0) {
      plVar28 = (long *)SpineExtension::getInstance();
      (**(code **)(*plVar28 + 0x28))
                (plVar28,pcVar41,
                 "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",
                 0xc9);
    }
    SpineObject::~SpineObject((SpineObject *)&local_110);
  }
  else {
    while( true ) {
      pcVar41 = (char *)plVar28[5];
      local_110 = &PTR__String_01c67868;
      if (pcVar41 == (char *)0x0) {
        local_108 = (char *)0x0;
        local_100 = (char *)0x0;
      }
      else {
        local_108 = (char *)strlen(pcVar41);
        lVar11 = (long)local_108 + 1;
        plVar32 = (long *)SpineExtension::getInstance();
        local_100 = (char *)(**(code **)(*plVar32 + 0x18))
                                      (plVar32,lVar11,
                                       "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                       ,0x39);
        memcpy(local_100,pcVar41,(long)local_108 + 1);
      }
      lVar11 = SkeletonData::findPathConstraint(param_2,(String *)&local_110);
      pcVar41 = local_100;
      local_110 = &PTR__String_01c67868;
      if (local_100 != (char *)0x0) {
        plVar32 = (long *)SpineExtension::getInstance();
        (**(code **)(*plVar32 + 0x28))
                  (plVar32,pcVar41,
                   "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",
                   0xc9);
      }
      SpineObject::~SpineObject((SpineObject *)&local_110);
      if (lVar11 == 0) break;
      if (*(ulong *)(param_2 + 0x110) != 0) {
        uVar44 = 0;
        do {
          if (*(long *)(*(long *)(param_2 + 0x120) + uVar44 * 8) == lVar11) goto LAB_00d069dc;
          uVar44 = uVar44 + 1;
        } while (uVar44 < *(ulong *)(param_2 + 0x110));
      }
      uVar44 = 0;
LAB_00d069dc:
      plVar32 = (long *)plVar28[1];
joined_r0x00d069e4:
      if (plVar32 != (long *)0x0) {
        do {
          pcVar41 = (char *)plVar32[5];
          iVar6 = strcmp(pcVar41,"position");
          if ((iVar6 == 0) || (iVar6 = strcmp(pcVar41,"spacing"), iVar6 == 0)) {
            iVar6 = strcmp(pcVar41,"spacing");
            if (iVar6 == 0) {
              this_05 = SpineObject::operator_new
                                  (0x50,
                                   "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonJson.cpp"
                                   ,0x3ef);
              PathConstraintSpacingTimeline::PathConstraintSpacingTimeline
                        ((PathConstraintSpacingTimeline *)this_05,*(int *)((long)plVar32 + 0x14));
              fVar46 = 1.0;
              if (*(uint *)(lVar11 + 0x5c) < 2) goto LAB_00d06be0;
            }
            else {
              this_05 = SpineObject::operator_new
                                  (0x50,
                                   "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonJson.cpp"
                                   ,0x3f5);
              PathConstraintPositionTimeline::PathConstraintPositionTimeline
                        (this_05,*(int *)((long)plVar32 + 0x14));
              fVar46 = 1.0;
              if (*(int *)(lVar11 + 0x58) == 0) {
LAB_00d06be0:
                fVar46 = *(float *)(this + 0x30);
              }
            }
            *(int *)(this_05 + 0x48) = (int)uVar44;
            pJVar43 = (Json *)plVar32[1];
            if (pJVar43 != (Json *)0x0) {
              uVar21 = 0;
              do {
                fVar52 = (float)Json::getFloat(pJVar43,"time",0.0);
                fVar45 = (float)Json::getFloat(pJVar43,pcVar41,0.0);
                PathConstraintPositionTimeline::setFrame(this_05,(int)uVar21,fVar52,fVar46 * fVar45)
                ;
                readCurve(pJVar43,(CurveTimeline *)this_05,uVar21);
                pJVar43 = *(Json **)pJVar43;
                uVar21 = uVar21 + 1;
              } while (pJVar43 != (Json *)0x0);
            }
            lVar12 = local_d8;
            if (local_e8 == local_e0) {
              uVar26 = (uint)((float)local_e8 * 1.75);
              if (uVar26 < 9) {
                uVar26 = 8;
              }
              local_e0 = (ulong)(int)uVar26;
              plVar22 = (long *)SpineExtension::getInstance();
              local_d8 = (**(code **)(*plVar22 + 0x20))
                                   (plVar22,lVar12,
                                    -(ulong)(uVar26 >> 0x1f) & 0xfffffff800000000 |
                                    (ulong)uVar26 << 3,
                                    "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                                    ,0x6a);
              puVar30 = (undefined8 *)(local_d8 + local_e8 * 8);
            }
            else {
              puVar30 = (undefined8 *)(local_d8 + local_e8 * 8);
            }
            *puVar30 = this_05;
            iVar6 = *(int *)((long)plVar32 + 0x14);
            lVar12 = *(long *)(this_05 + 0x40);
            iVar7 = 2;
          }
          else {
            iVar6 = strcmp(pcVar41,"mix");
            if (iVar6 != 0) goto code_r0x00d06b90;
            this_04 = SpineObject::operator_new
                                (0x50,
                                 "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonJson.cpp"
                                 ,0x407);
            PathConstraintMixTimeline::PathConstraintMixTimeline
                      (this_04,*(int *)((long)plVar32 + 0x14));
            *(int *)(this_04 + 0x48) = (int)uVar44;
            pJVar43 = (Json *)plVar32[1];
            if (pJVar43 != (Json *)0x0) {
              uVar21 = 0;
              do {
                fVar46 = (float)Json::getFloat(pJVar43,"time",0.0);
                fVar52 = (float)Json::getFloat(pJVar43,"rotateMix",1.0);
                fVar45 = (float)Json::getFloat(pJVar43,"translateMix",1.0);
                PathConstraintMixTimeline::setFrame(this_04,(int)uVar21,fVar46,fVar52,fVar45);
                readCurve(pJVar43,(CurveTimeline *)this_04,uVar21);
                pJVar43 = *(Json **)pJVar43;
                uVar21 = uVar21 + 1;
              } while (pJVar43 != (Json *)0x0);
            }
            lVar12 = local_d8;
            if (local_e8 == local_e0) {
              uVar26 = (uint)((float)local_e8 * 1.75);
              if (uVar26 < 9) {
                uVar26 = 8;
              }
              local_e0 = (ulong)(int)uVar26;
              plVar22 = (long *)SpineExtension::getInstance();
              local_d8 = (**(code **)(*plVar22 + 0x20))
                                   (plVar22,lVar12,
                                    -(ulong)(uVar26 >> 0x1f) & 0xfffffff800000000 |
                                    (ulong)uVar26 << 3,
                                    "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                                    ,0x6a);
              puVar30 = (undefined8 *)(local_d8 + local_e8 * 8);
            }
            else {
              puVar30 = (undefined8 *)(local_d8 + local_e8 * 8);
            }
            *puVar30 = this_04;
            iVar6 = *(int *)((long)plVar32 + 0x14);
            lVar12 = *(long *)(this_04 + 0x40);
            iVar7 = 3;
          }
          local_e8 = local_e8 + 1;
          fVar46 = *(float *)(lVar12 + (long)((iVar6 + -1) * iVar7) * 4);
          if (fVar51 <= fVar46) {
            fVar51 = fVar46;
          }
          plVar32 = (long *)*plVar32;
          if (plVar32 == (long *)0x0) break;
        } while( true );
      }
      plVar28 = (long *)*plVar28;
      if (plVar28 == (long *)0x0) goto LAB_00d06d08;
    }
    if (0 < (int)local_e8) {
      uVar44 = (long)(int)local_e8;
      do {
        uVar21 = uVar44 - 1;
        plVar32 = *(long **)(local_d8 + uVar21 * 8);
        if (plVar32 != (long *)0x0) {
          (**(code **)(*plVar32 + 8))();
        }
        uVar33 = local_e8 - 1;
        if (uVar21 < uVar33) {
          do {
            lVar11 = uVar44 * 8;
            uVar44 = uVar44 + 1;
            puVar30 = (undefined8 *)(local_d8 + lVar11);
            uVar47 = puVar30[-1];
            puVar30[-1] = *puVar30;
            *(undefined8 *)(local_d8 + lVar11) = uVar47;
          } while (local_e8 != uVar44);
        }
        uVar44 = uVar21;
        local_e8 = uVar33;
      } while (0 < (long)uVar21);
    }
    local_110 = &PTR__String_01c67868;
    local_108 = (char *)0x1b;
    plVar32 = (long *)SpineExtension::getInstance();
    local_100 = (char *)(**(code **)(*plVar32 + 0x18))
                                  (plVar32,0x1c,
                                   "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                   ,0x39);
    builtin_strncpy(local_100,"Path constraint not found: ",0x1c);
LAB_00d08724:
    pcVar41 = (char *)plVar28[5];
joined_r0x00d0872c:
    if (pcVar41 == (char *)0x0) {
      local_d0 = &PTR__String_01c67868;
      local_c8 = (void *)0x0;
      local_c0 = (void *)0x0;
      setError(this,(Json *)0x0,(String *)&local_110,(String *)&local_d0);
      local_d0 = &PTR__String_01c67868;
    }
    else {
      local_d0 = &PTR__String_01c67868;
      local_c8 = (void *)strlen(pcVar41);
      lVar11 = (long)local_c8 + 1;
      plVar28 = (long *)SpineExtension::getInstance();
      local_c0 = (void *)(**(code **)(*plVar28 + 0x18))
                                   (plVar28,lVar11,
                                    "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                    ,0x39);
      memcpy(local_c0,pcVar41,(long)local_c8 + 1);
      pvVar35 = local_c0;
      setError(this,(Json *)0x0,(String *)&local_110,(String *)&local_d0);
      local_d0 = &PTR__String_01c67868;
      if (pvVar35 != (void *)0x0) {
LAB_00d08794:
        local_d0 = &PTR__String_01c67868;
        plVar28 = (long *)SpineExtension::getInstance();
        (**(code **)(*plVar28 + 0x28))
                  (plVar28,pvVar35,
                   "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",
                   0xc9);
      }
    }
LAB_00d087d4:
    SpineObject::~SpineObject((SpineObject *)&local_d0);
LAB_00d087e8:
    pcVar41 = local_100;
    local_110 = &PTR__String_01c67868;
    if (local_100 != (char *)0x0) {
      plVar28 = (long *)SpineExtension::getInstance();
      (**(code **)(*plVar28 + 0x28))
                (plVar28,pcVar41,
                 "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",
                 0xc9);
    }
    SpineObject::~SpineObject((SpineObject *)&local_110);
LAB_00d0881c:
    this_11 = (Animation *)0x0;
  }
  lVar11 = local_d8;
  local_f0 = &PTR__Vector_01c8cfd8;
  local_e8 = 0;
  if (local_d8 != 0) {
    plVar28 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar28 + 0x28))
              (plVar28,lVar11,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",0xce);
  }
  SpineObject::~SpineObject((SpineObject *)&local_f0);
  if (*(long *)(lVar3 + 0x28) == local_b0) {
    return this_11;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x00d055ac:
  plVar32 = (long *)plVar28[1];
  if (plVar32 != (long *)0x0) {
    do {
      pcVar41 = (char *)plVar32[5];
      iVar7 = strcmp(pcVar41,"attachment");
      if (iVar7 != 0) {
        iVar7 = strcmp(pcVar41,"color");
        if (iVar7 == 0) {
          this_01 = SpineObject::operator_new
                              (0x50,
                               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonJson.cpp"
                               ,0x347);
          ColorTimeline::ColorTimeline(this_01,*(int *)((long)plVar32 + 0x14));
          *(int *)(this_01 + 0x28) = iVar6;
          pJVar43 = (Json *)plVar32[1];
          if (pJVar43 != (Json *)0x0) {
            uVar44 = 0;
            do {
              pcVar41 = (char *)Json::getString(pJVar43,"color",(char *)0x0);
              fVar45 = (float)Json::getFloat(pJVar43,"time",0.0);
              sVar20 = strlen(pcVar41);
              fVar52 = fVar46;
              if (1 < sVar20) {
                local_d0 = (undefined **)
                           (CONCAT62((int6)((ulong)local_d0 >> 0x10),*(undefined2 *)pcVar41) &
                           0xffffffffff00ffff);
                uVar21 = strtoul((char *)&local_d0,(char **)&local_110,0x10);
                fVar52 = -1.0;
                if (*(char *)local_110 == '\0') {
                  fVar52 = (float)(int)uVar21 / 255.0;
                }
              }
              sVar20 = strlen(pcVar41);
              fVar53 = fVar46;
              if (3 < sVar20) {
                local_d0 = (undefined **)
                           (CONCAT62((int6)((ulong)local_d0 >> 0x10),*(undefined2 *)(pcVar41 + 2)) &
                           0xffffffffff00ffff);
                uVar21 = strtoul((char *)&local_d0,(char **)&local_110,0x10);
                fVar53 = -1.0;
                if (*(char *)local_110 == '\0') {
                  fVar53 = (float)(int)uVar21 / 255.0;
                }
              }
              sVar20 = strlen(pcVar41);
              fVar54 = fVar46;
              if (5 < sVar20) {
                local_d0 = (undefined **)
                           (CONCAT62((int6)((ulong)local_d0 >> 0x10),*(undefined2 *)(pcVar41 + 4)) &
                           0xffffffffff00ffff);
                uVar21 = strtoul((char *)&local_d0,(char **)&local_110,0x10);
                fVar54 = -1.0;
                if (*(char *)local_110 == '\0') {
                  fVar54 = (float)(int)uVar21 / 255.0;
                }
              }
              sVar20 = strlen(pcVar41);
              fVar55 = fVar46;
              if (7 < sVar20) {
                local_d0 = (undefined **)
                           (CONCAT62((int6)((ulong)local_d0 >> 0x10),*(undefined2 *)(pcVar41 + 6)) &
                           0xffffffffff00ffff);
                uVar21 = strtoul((char *)&local_d0,(char **)&local_110,0x10);
                fVar55 = -1.0;
                if (*(char *)local_110 == '\0') {
                  fVar55 = (float)(int)uVar21 / 255.0;
                }
              }
              ColorTimeline::setFrame(this_01,(int)uVar44,fVar45,fVar52,fVar53,fVar54,fVar55);
              readCurve(pJVar43,(CurveTimeline *)this_01,uVar44);
              pJVar43 = *(Json **)pJVar43;
              uVar44 = uVar44 + 1;
            } while (pJVar43 != (Json *)0x0);
          }
          lVar12 = local_d8;
          if (local_e8 == local_e0) {
            uVar26 = (uint)((float)local_e8 * 1.75);
            if (uVar26 < 9) {
              uVar26 = 8;
            }
            local_e0 = (ulong)(int)uVar26;
            plVar22 = (long *)SpineExtension::getInstance();
            local_d8 = (**(code **)(*plVar22 + 0x20))
                                 (plVar22,lVar12,
                                  -(ulong)(uVar26 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar26 << 3
                                  ,
                                  "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                                  ,0x6a);
            puVar30 = (undefined8 *)(local_d8 + local_e8 * 8);
          }
          else {
            puVar30 = (undefined8 *)(local_d8 + local_e8 * 8);
          }
          local_e8 = local_e8 + 1;
          *puVar30 = this_01;
          iVar7 = (*(int *)((long)plVar32 + 0x14) + -1) * 5;
          pTVar18 = (TwoColorTimeline *)(this_01 + 0x48);
          goto LAB_00d05df0;
        }
        iVar7 = strcmp(pcVar41,"twoColor");
        if (iVar7 == 0) {
          pTVar18 = SpineObject::operator_new
                              (0x50,
                               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonJson.cpp"
                               ,0x356);
          TwoColorTimeline::TwoColorTimeline(pTVar18,*(int *)((long)plVar32 + 0x14));
          *(int *)(pTVar18 + 0x48) = iVar6;
          pJVar43 = (Json *)plVar32[1];
          if (pJVar43 != (Json *)0x0) {
            uVar44 = 0;
            do {
              pcVar41 = (char *)Json::getString(pJVar43,"light",(char *)0x0);
              pcVar19 = (char *)Json::getString(pJVar43,"dark",(char *)0x0);
              fVar45 = (float)Json::getFloat(pJVar43,"time",0.0);
              sVar20 = strlen(pcVar41);
              fVar52 = fVar46;
              if (1 < sVar20) {
                local_d0 = (undefined **)
                           (CONCAT62((int6)((ulong)local_d0 >> 0x10),*(undefined2 *)pcVar41) &
                           0xffffffffff00ffff);
                uVar21 = strtoul((char *)&local_d0,(char **)&local_110,0x10);
                fVar52 = -1.0;
                if (*(char *)local_110 == '\0') {
                  fVar52 = (float)(int)uVar21 / 255.0;
                }
              }
              sVar20 = strlen(pcVar41);
              fVar53 = fVar46;
              if (3 < sVar20) {
                local_d0 = (undefined **)
                           (CONCAT62((int6)((ulong)local_d0 >> 0x10),*(undefined2 *)(pcVar41 + 2)) &
                           0xffffffffff00ffff);
                uVar21 = strtoul((char *)&local_d0,(char **)&local_110,0x10);
                fVar53 = -1.0;
                if (*(char *)local_110 == '\0') {
                  fVar53 = (float)(int)uVar21 / 255.0;
                }
              }
              sVar20 = strlen(pcVar41);
              fVar54 = fVar46;
              if (5 < sVar20) {
                local_d0 = (undefined **)
                           (CONCAT62((int6)((ulong)local_d0 >> 0x10),*(undefined2 *)(pcVar41 + 4)) &
                           0xffffffffff00ffff);
                uVar21 = strtoul((char *)&local_d0,(char **)&local_110,0x10);
                fVar54 = -1.0;
                if (*(char *)local_110 == '\0') {
                  fVar54 = (float)(int)uVar21 / 255.0;
                }
              }
              sVar20 = strlen(pcVar41);
              fVar55 = fVar46;
              if (7 < sVar20) {
                local_d0 = (undefined **)
                           (CONCAT62((int6)((ulong)local_d0 >> 0x10),*(undefined2 *)(pcVar41 + 6)) &
                           0xffffffffff00ffff);
                uVar21 = strtoul((char *)&local_d0,(char **)&local_110,0x10);
                fVar55 = -1.0;
                if (*(char *)local_110 == '\0') {
                  fVar55 = (float)(int)uVar21 / 255.0;
                }
              }
              sVar20 = strlen(pcVar19);
              fVar56 = fVar46;
              if (1 < sVar20) {
                local_d0 = (undefined **)
                           (CONCAT62((int6)((ulong)local_d0 >> 0x10),*(undefined2 *)pcVar19) &
                           0xffffffffff00ffff);
                uVar21 = strtoul((char *)&local_d0,(char **)&local_110,0x10);
                fVar56 = -1.0;
                if (*(char *)local_110 == '\0') {
                  fVar56 = (float)(int)uVar21 / 255.0;
                }
              }
              sVar20 = strlen(pcVar19);
              fVar57 = fVar46;
              if (3 < sVar20) {
                local_d0 = (undefined **)
                           (CONCAT62((int6)((ulong)local_d0 >> 0x10),*(undefined2 *)(pcVar19 + 2)) &
                           0xffffffffff00ffff);
                uVar21 = strtoul((char *)&local_d0,(char **)&local_110,0x10);
                fVar57 = -1.0;
                if (*(char *)local_110 == '\0') {
                  fVar57 = (float)(int)uVar21 / 255.0;
                }
              }
              sVar20 = strlen(pcVar19);
              fVar50 = fVar46;
              if (5 < sVar20) {
                local_d0 = (undefined **)
                           (CONCAT62((int6)((ulong)local_d0 >> 0x10),*(undefined2 *)(pcVar19 + 4)) &
                           0xffffffffff00ffff);
                uVar21 = strtoul((char *)&local_d0,(char **)&local_110,0x10);
                fVar50 = -1.0;
                if (*(char *)local_110 == '\0') {
                  fVar50 = (float)(int)uVar21 / 255.0;
                }
              }
              TwoColorTimeline::setFrame
                        (pTVar18,(int)uVar44,fVar45,fVar52,fVar53,fVar54,fVar55,fVar56,fVar57,fVar50
                        );
              readCurve(pJVar43,(CurveTimeline *)pTVar18,uVar44);
              pJVar43 = *(Json **)pJVar43;
              uVar44 = uVar44 + 1;
            } while (pJVar43 != (Json *)0x0);
          }
          lVar12 = local_d8;
          if (local_e8 == local_e0) {
            uVar26 = (uint)((float)local_e8 * 1.75);
            if (uVar26 < 9) {
              uVar26 = 8;
            }
            local_e0 = (ulong)(int)uVar26;
            plVar22 = (long *)SpineExtension::getInstance();
            local_d8 = (**(code **)(*plVar22 + 0x20))
                                 (plVar22,lVar12,
                                  -(ulong)(uVar26 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar26 << 3
                                  ,
                                  "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                                  ,0x6a);
            puVar30 = (undefined8 *)(local_d8 + local_e8 * 8);
          }
          else {
            puVar30 = (undefined8 *)(local_d8 + local_e8 * 8);
          }
          local_e8 = local_e8 + 1;
          *puVar30 = pTVar18;
          iVar7 = (*(int *)((long)plVar32 + 0x14) + -1) * 8;
          pTVar18 = pTVar18 + 0x40;
          goto LAB_00d05df0;
        }
        if (0 < (int)local_e8) {
          uVar44 = (long)(int)local_e8;
          do {
            uVar21 = uVar44 - 1;
            plVar28 = *(long **)(local_d8 + uVar21 * 8);
            if (plVar28 != (long *)0x0) {
              (**(code **)(*plVar28 + 8))();
            }
            uVar33 = local_e8 - 1;
            if (uVar21 < uVar33) {
              do {
                lVar11 = uVar44 * 8;
                uVar44 = uVar44 + 1;
                puVar30 = (undefined8 *)(local_d8 + lVar11);
                uVar47 = puVar30[-1];
                puVar30[-1] = *puVar30;
                *(undefined8 *)(local_d8 + lVar11) = uVar47;
              } while (local_e8 != uVar44);
            }
            uVar44 = uVar21;
            local_e8 = uVar33;
          } while (0 < (long)uVar21);
        }
        local_110 = &PTR__String_01c67868;
        local_108 = (char *)0x22;
        plVar28 = (long *)SpineExtension::getInstance();
        local_100 = (char *)(**(code **)(*plVar28 + 0x18))
                                      (plVar28,0x23,
                                       "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                       ,0x39);
        builtin_strncpy(local_100,"Invalid timeline type for a slot: ",0x23);
        pcVar41 = (char *)plVar32[5];
        goto joined_r0x00d07dc0;
      }
      this_00 = SpineObject::operator_new
                          (0x50,
                           "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonJson.cpp"
                           ,0x339);
      AttachmentTimeline::AttachmentTimeline(this_00,*(int *)((long)plVar32 + 0x14));
      *(long *)(this_00 + 8) = (long)iVar6;
      pJVar43 = (Json *)plVar32[1];
      if (pJVar43 != (Json *)0x0) {
        iVar7 = 0;
        do {
          lVar12 = Json::getItem(pJVar43,"name");
          if (*(int *)(lVar12 + 0x10) == 2) {
            pcVar41 = "";
LAB_00d059fc:
            local_110 = &PTR__String_01c67868;
            local_108 = (char *)strlen(pcVar41);
            lVar12 = (long)local_108 + 1;
            plVar22 = (long *)SpineExtension::getInstance();
            local_100 = (char *)(**(code **)(*plVar22 + 0x18))
                                          (plVar22,lVar12,
                                           "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                           ,0x39);
            memcpy(local_100,pcVar41,(long)local_108 + 1);
          }
          else {
            pcVar41 = *(char **)(lVar12 + 0x18);
            local_110 = &PTR__String_01c67868;
            if (pcVar41 != (char *)0x0) goto LAB_00d059fc;
            local_108 = (char *)0x0;
            local_100 = (char *)0x0;
          }
          fVar52 = (float)Json::getFloat(pJVar43,"time",0.0);
          AttachmentTimeline::setFrame(this_00,iVar7,fVar52,(String *)&local_110);
          pcVar41 = local_100;
          local_110 = &PTR__String_01c67868;
          if (local_100 != (char *)0x0) {
            plVar22 = (long *)SpineExtension::getInstance();
            (**(code **)(*plVar22 + 0x28))
                      (plVar22,pcVar41,
                       "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                       ,0xc9);
          }
          SpineObject::~SpineObject((SpineObject *)&local_110);
          pJVar43 = *(Json **)pJVar43;
          iVar7 = iVar7 + 1;
        } while (pJVar43 != (Json *)0x0);
      }
      lVar12 = local_d8;
      if (local_e8 == local_e0) {
        uVar26 = (uint)((float)local_e8 * 1.75);
        if (uVar26 < 9) {
          uVar26 = 8;
        }
        local_e0 = (ulong)(int)uVar26;
        plVar22 = (long *)SpineExtension::getInstance();
        local_d8 = (**(code **)(*plVar22 + 0x20))
                             (plVar22,lVar12,
                              -(ulong)(uVar26 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar26 << 3,
                              "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                              ,0x6a);
        puVar30 = (undefined8 *)(local_d8 + local_e8 * 8);
      }
      else {
        puVar30 = (undefined8 *)(local_d8 + local_e8 * 8);
      }
      local_e8 = local_e8 + 1;
      *puVar30 = this_00;
      pTVar18 = (TwoColorTimeline *)(this_00 + 0x28);
      iVar7 = *(int *)((long)plVar32 + 0x14) + -1;
LAB_00d05df0:
      plVar32 = (long *)*plVar32;
      fVar52 = *(float *)(*(long *)pTVar18 + (long)iVar7 * 4);
      if (fVar51 <= fVar52) {
        fVar51 = fVar52;
      }
    } while (plVar32 != (long *)0x0);
  }
  plVar28 = (long *)*plVar28;
  if (plVar28 == (long *)0x0) goto LAB_00d05e20;
  goto LAB_00d054f8;
code_r0x00d05f3c:
  plVar32 = (long *)plVar28[1];
  while (plVar32 != (long *)0x0) {
    pcVar41 = (char *)plVar32[5];
    iVar7 = strcmp(pcVar41,"rotate");
    if (iVar7 != 0) {
      iVar7 = strcmp(pcVar41,"scale");
      iVar8 = strcmp(pcVar41,"translate");
      iVar9 = strcmp(pcVar41,"shear");
      if (((iVar7 == 0) || (iVar8 == 0)) || (iVar9 == 0)) {
        if (iVar8 == 0) {
          fVar46 = *(float *)(this + 0x30);
          if (iVar7 == 0) goto LAB_00d060c4;
LAB_00d05fb0:
          if (iVar8 == 0) {
            this_12 = SpineObject::operator_new
                                (0x50,
                                 "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonJson.cpp"
                                 ,0x391);
            TranslateTimeline::TranslateTimeline
                      ((TranslateTimeline *)this_12,*(int *)((long)plVar32 + 0x14));
            fVar52 = 0.0;
          }
          else {
            fVar52 = 0.0;
            if (iVar9 == 0) {
              this_12 = SpineObject::operator_new
                                  (0x50,
                                   "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonJson.cpp"
                                   ,0x393);
              ShearTimeline::ShearTimeline(this_12,*(int *)((long)plVar32 + 0x14));
            }
            else {
              this_12 = (ShearTimeline *)0x0;
              fVar52 = 0.0;
            }
          }
        }
        else {
          fVar46 = 1.0;
          if (iVar7 != 0) goto LAB_00d05fb0;
LAB_00d060c4:
          this_12 = SpineObject::operator_new
                              (0x50,
                               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonJson.cpp"
                               ,0x38e);
          ScaleTimeline::ScaleTimeline((ScaleTimeline *)this_12,*(int *)((long)plVar32 + 0x14));
          fVar52 = 1.0;
        }
        *(int *)(this_12 + 0x48) = iVar6;
        pJVar43 = (Json *)plVar32[1];
        if (pJVar43 != (Json *)0x0) {
          uVar44 = 0;
          do {
            fVar45 = (float)Json::getFloat(pJVar43,"time",0.0);
            fVar53 = (float)Json::getFloat(pJVar43,"x",fVar52);
            fVar54 = (float)Json::getFloat(pJVar43,"y",fVar52);
            TranslateTimeline::setFrame
                      ((TranslateTimeline *)this_12,(int)uVar44,fVar45,fVar46 * fVar53,
                       fVar46 * fVar54);
            readCurve(pJVar43,(CurveTimeline *)this_12,uVar44);
            pJVar43 = *(Json **)pJVar43;
            uVar44 = uVar44 + 1;
          } while (pJVar43 != (Json *)0x0);
        }
        lVar11 = local_d8;
        if (local_e8 == local_e0) {
          uVar26 = (uint)((float)local_e8 * 1.75);
          if (uVar26 < 9) {
            uVar26 = 8;
          }
          local_e0 = (ulong)(int)uVar26;
          plVar22 = (long *)SpineExtension::getInstance();
          local_d8 = (**(code **)(*plVar22 + 0x20))
                               (plVar22,lVar11,
                                -(ulong)(uVar26 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar26 << 3,
                                "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                                ,0x6a);
          puVar30 = (undefined8 *)(local_d8 + local_e8 * 8);
        }
        else {
          puVar30 = (undefined8 *)(local_d8 + local_e8 * 8);
        }
        *puVar30 = this_12;
        pRVar23 = (RotateTimeline *)(this_12 + 0x40);
        iVar7 = (*(int *)((long)plVar32 + 0x14) + -1) * 3;
        goto LAB_00d06274;
      }
      if (0 < (int)local_e8) {
        uVar44 = (long)(int)local_e8;
        do {
          uVar21 = uVar44 - 1;
          plVar28 = *(long **)(local_d8 + uVar21 * 8);
          if (plVar28 != (long *)0x0) {
            (**(code **)(*plVar28 + 8))();
          }
          uVar33 = local_e8 - 1;
          if (uVar21 < uVar33) {
            do {
              lVar11 = uVar44 * 8;
              uVar44 = uVar44 + 1;
              puVar30 = (undefined8 *)(local_d8 + lVar11);
              uVar47 = puVar30[-1];
              puVar30[-1] = *puVar30;
              *(undefined8 *)(local_d8 + lVar11) = uVar47;
            } while (local_e8 != uVar44);
          }
          uVar44 = uVar21;
          local_e8 = uVar33;
        } while (0 < (long)uVar21);
      }
      local_108 = (char *)0x22;
      local_110 = &PTR__String_01c67868;
      plVar28 = (long *)SpineExtension::getInstance();
      local_100 = (char *)(**(code **)(*plVar28 + 0x18))
                                    (plVar28,0x23,
                                     "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                     ,0x39);
      builtin_strncpy(local_100,"Invalid timeline type for a bone: ",0x23);
      pcVar41 = (char *)plVar32[5];
      local_d0 = &PTR__String_01c67868;
      if (pcVar41 != (char *)0x0) {
        local_c8 = (void *)strlen(pcVar41);
        lVar11 = (long)local_c8 + 1;
        plVar28 = (long *)SpineExtension::getInstance();
        local_c0 = (void *)(**(code **)(*plVar28 + 0x18))
                                     (plVar28,lVar11,
                                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                      ,0x39);
        memcpy(local_c0,pcVar41,(long)local_c8 + 1);
        pvVar35 = local_c0;
        setError(this,(Json *)0x0,(String *)&local_110,(String *)&local_d0);
        local_d0 = &PTR__String_01c67868;
        if (pvVar35 == (void *)0x0) goto LAB_00d087d4;
        goto LAB_00d08794;
      }
      local_c8 = (void *)0x0;
      local_c0 = (void *)0x0;
      setError(this,(Json *)0x0,(String *)&local_110,(String *)&local_d0);
      local_d0 = &PTR__String_01c67868;
      goto LAB_00d087d4;
    }
    pRVar23 = SpineObject::operator_new
                        (0x50,
                         "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonJson.cpp"
                         ,0x37a);
    RotateTimeline::RotateTimeline(pRVar23,*(int *)((long)plVar32 + 0x14));
    *(int *)(pRVar23 + 0x28) = iVar6;
    pJVar43 = (Json *)plVar32[1];
    if (pJVar43 != (Json *)0x0) {
      uVar44 = 0;
      do {
        fVar46 = (float)Json::getFloat(pJVar43,"time",0.0);
        fVar52 = (float)Json::getFloat(pJVar43,"angle",0.0);
        RotateTimeline::setFrame(pRVar23,(int)uVar44,fVar46,fVar52);
        readCurve(pJVar43,(CurveTimeline *)pRVar23,uVar44);
        pJVar43 = *(Json **)pJVar43;
        uVar44 = uVar44 + 1;
      } while (pJVar43 != (Json *)0x0);
    }
    lVar11 = local_d8;
    if (local_e8 == local_e0) {
      uVar26 = (uint)((float)local_e8 * 1.75);
      if (uVar26 < 9) {
        uVar26 = 8;
      }
      local_e0 = (ulong)(int)uVar26;
      plVar22 = (long *)SpineExtension::getInstance();
      local_d8 = (**(code **)(*plVar22 + 0x20))
                           (plVar22,lVar11,
                            -(ulong)(uVar26 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar26 << 3,
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                            ,0x6a);
      puVar30 = (undefined8 *)(local_d8 + local_e8 * 8);
    }
    else {
      puVar30 = (undefined8 *)(local_d8 + local_e8 * 8);
    }
    *puVar30 = pRVar23;
    pRVar23 = pRVar23 + 0x48;
    iVar7 = *(int *)((long)plVar32 + 0x14) * 2 + -2;
LAB_00d06274:
    local_e8 = local_e8 + 1;
    plVar32 = (long *)*plVar32;
    fVar46 = *(float *)(*(long *)pRVar23 + (long)iVar7 * 4);
    if (fVar51 <= fVar46) {
      fVar51 = fVar46;
    }
  }
  plVar28 = (long *)*plVar28;
  if (plVar28 == (long *)0x0) goto LAB_00d0629c;
  goto LAB_00d05e80;
code_r0x00d06b90:
  plVar32 = (long *)*plVar32;
  goto joined_r0x00d069e4;
}

