
/* spine::SkeletonJson::readSkeletonData(char const*) */

SkeletonData * __thiscall spine::SkeletonJson::readSkeletonData(SkeletonJson *this,char *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  void *pvVar7;
  Json *this_00;
  SkeletonData *this_01;
  Json *pJVar8;
  char *pcVar9;
  size_t sVar10;
  long lVar11;
  BoneData *pBVar12;
  BoneData *this_02;
  SlotData *pSVar13;
  long lVar14;
  IkConstraintData *this_03;
  long *plVar15;
  TransformConstraintData *this_04;
  PathConstraintData *this_05;
  Skin *pSVar16;
  long lVar17;
  Json *pJVar18;
  char *__s1;
  long *plVar19;
  LinkedMesh *this_06;
  MeshAttachment *pMVar20;
  MeshAttachment *this_07;
  EventData *this_08;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  MeshAttachment *pMVar24;
  uint uVar25;
  undefined4 *puVar26;
  undefined2 *puVar27;
  float *pfVar28;
  undefined1 *puVar29;
  undefined8 uVar30;
  ulong uVar31;
  char *pcVar32;
  ulong uVar33;
  char *__s;
  undefined4 uVar34;
  float fVar35;
  float fVar36;
  long local_128;
  Json *local_120;
  undefined **local_d0;
  size_t local_c8;
  char *local_c0;
  undefined **local_b8;
  size_t local_b0;
  void *local_a8;
  long local_a0;
  
  lVar2 = tpidr_el0;
  local_a0 = *(long *)(lVar2 + 0x28);
  puVar29 = *(undefined1 **)(this + 0x48);
  if (puVar29 != &DAT_0189703a) {
    if (puVar29 != (undefined1 *)0x0) {
      plVar6 = (long *)SpineExtension::getInstance();
      (**(code **)(*plVar6 + 0x28))
                (plVar6,puVar29,
                 "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",
                 0x8a);
    }
    *(undefined8 *)(this + 0x40) = 0;
    plVar6 = (long *)SpineExtension::getInstance();
    pvVar7 = (void *)(**(code **)(*plVar6 + 0x18))
                               (plVar6,1,
                                "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                ,0x91);
    *(void **)(this + 0x48) = pvVar7;
    memset(pvVar7,0,*(long *)(this + 0x40) + 1);
  }
  *(undefined8 *)(this + 0x18) = 0;
  this_00 = operator_new(0x30);
  Json::Json(this_00,param_1);
  this_01 = SpineObject::operator_new
                      (0x1c0,
                       "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonJson.cpp"
                       ,0x82);
  SkeletonData::SkeletonData(this_01);
  pJVar8 = (Json *)Json::getItem(this_00,"skeleton");
  if (pJVar8 != (Json *)0x0) {
    pcVar9 = (char *)Json::getString(pJVar8,"hash",(char *)0x0);
    pcVar32 = *(char **)(this_01 + 0x160);
    if (pcVar32 != pcVar9) {
      if (pcVar32 != (char *)0x0) {
        plVar6 = (long *)SpineExtension::getInstance();
        (**(code **)(*plVar6 + 0x28))
                  (plVar6,pcVar32,
                   "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",
                   0x8a);
      }
      if (pcVar9 == (char *)0x0) {
        *(undefined8 *)(this_01 + 0x158) = 0;
        *(undefined8 *)(this_01 + 0x160) = 0;
      }
      else {
        sVar10 = strlen(pcVar9);
        *(size_t *)(this_01 + 0x158) = sVar10;
        plVar6 = (long *)SpineExtension::getInstance();
        pvVar7 = (void *)(**(code **)(*plVar6 + 0x18))
                                   (plVar6,sVar10 + 1,
                                    "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                    ,0x91);
        *(void **)(this_01 + 0x160) = pvVar7;
        memcpy(pvVar7,pcVar9,*(long *)(this_01 + 0x158) + 1);
      }
    }
    pcVar9 = (char *)Json::getString(pJVar8,"spine",(char *)0x0);
    pcVar32 = *(char **)(this_01 + 0x148);
    if (pcVar32 != pcVar9) {
      if (pcVar32 != (char *)0x0) {
        plVar6 = (long *)SpineExtension::getInstance();
        (**(code **)(*plVar6 + 0x28))
                  (plVar6,pcVar32,
                   "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",
                   0x8a);
      }
      if (pcVar9 == (char *)0x0) {
        *(undefined8 *)(this_01 + 0x140) = 0;
        *(undefined8 *)(this_01 + 0x148) = 0;
      }
      else {
        sVar10 = strlen(pcVar9);
        *(size_t *)(this_01 + 0x140) = sVar10;
        plVar6 = (long *)SpineExtension::getInstance();
        pvVar7 = (void *)(**(code **)(*plVar6 + 0x18))
                                   (plVar6,sVar10 + 1,
                                    "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                    ,0x91);
        *(void **)(this_01 + 0x148) = pvVar7;
        memcpy(pvVar7,pcVar9,*(long *)(this_01 + 0x140) + 1);
      }
    }
    uVar34 = Json::getFloat(pJVar8,"x",0.0);
    *(undefined4 *)(this_01 + 0x128) = uVar34;
    uVar34 = Json::getFloat(pJVar8,"y",0.0);
    *(undefined4 *)(this_01 + 300) = uVar34;
    uVar34 = Json::getFloat(pJVar8,"width",0.0);
    *(undefined4 *)(this_01 + 0x130) = uVar34;
    uVar34 = Json::getFloat(pJVar8,"height",0.0);
    *(undefined4 *)(this_01 + 0x134) = uVar34;
    uVar34 = Json::getFloat(pJVar8,"fps",30.0);
    *(undefined4 *)(this_01 + 0x188) = uVar34;
    pcVar9 = (char *)Json::getString(pJVar8,"audio",(char *)0x0);
    pcVar32 = *(char **)(this_01 + 0x1b8);
    if (pcVar32 != pcVar9) {
      if (pcVar32 != (char *)0x0) {
        plVar6 = (long *)SpineExtension::getInstance();
        (**(code **)(*plVar6 + 0x28))
                  (plVar6,pcVar32,
                   "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",
                   0x8a);
      }
      if (pcVar9 == (char *)0x0) {
        *(undefined8 *)(this_01 + 0x1b0) = 0;
        *(undefined8 *)(this_01 + 0x1b8) = 0;
      }
      else {
        sVar10 = strlen(pcVar9);
        *(size_t *)(this_01 + 0x1b0) = sVar10;
        plVar6 = (long *)SpineExtension::getInstance();
        pvVar7 = (void *)(**(code **)(*plVar6 + 0x18))
                                   (plVar6,sVar10 + 1,
                                    "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                    ,0x91);
        *(void **)(this_01 + 0x1b8) = pvVar7;
        memcpy(pvVar7,pcVar9,*(long *)(this_01 + 0x1b0) + 1);
      }
    }
    pcVar9 = (char *)Json::getString(pJVar8,"images",(char *)0x0);
    pcVar32 = *(char **)(this_01 + 0x1a0);
    if (pcVar32 != pcVar9) {
      if (pcVar32 != (char *)0x0) {
        plVar6 = (long *)SpineExtension::getInstance();
        (**(code **)(*plVar6 + 0x28))
                  (plVar6,pcVar32,
                   "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",
                   0x8a);
      }
      if (pcVar9 == (char *)0x0) {
        *(undefined8 *)(this_01 + 0x198) = 0;
        *(undefined8 *)(this_01 + 0x1a0) = 0;
      }
      else {
        sVar10 = strlen(pcVar9);
        *(size_t *)(this_01 + 0x198) = sVar10;
        plVar6 = (long *)SpineExtension::getInstance();
        pvVar7 = (void *)(**(code **)(*plVar6 + 0x18))
                                   (plVar6,sVar10 + 1,
                                    "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                    ,0x91);
        *(void **)(this_01 + 0x1a0) = pvVar7;
        memcpy(pvVar7,pcVar9,*(long *)(this_01 + 0x198) + 1);
      }
    }
  }
  lVar11 = Json::getItem(this_00,"bones");
  uVar21 = (ulong)*(int *)(lVar11 + 0x14);
  uVar22 = *(ulong *)(this_01 + 0x28);
  *(ulong *)(this_01 + 0x28) = uVar21;
  if (*(ulong *)(this_01 + 0x30) < uVar21) {
    uVar25 = (uint)((float)uVar21 * 1.75);
    uVar30 = *(undefined8 *)(this_01 + 0x38);
    if (uVar25 < 9) {
      uVar25 = 8;
    }
    *(long *)(this_01 + 0x30) = (long)(int)uVar25;
    plVar6 = (long *)SpineExtension::getInstance();
    uVar30 = (**(code **)(*plVar6 + 0x20))
                       (plVar6,uVar30,
                        -(ulong)(uVar25 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar25 << 3,
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",
                        0x52);
    uVar21 = *(ulong *)(this_01 + 0x28);
    *(undefined8 *)(this_01 + 0x38) = uVar30;
  }
  if (uVar22 < uVar21) {
    do {
      *(undefined8 *)(*(long *)(this_01 + 0x38) + uVar22 * 8) = 0;
      uVar22 = uVar22 + 1;
    } while (uVar21 != uVar22);
  }
  pJVar8 = *(Json **)(lVar11 + 8);
  if (pJVar8 != (Json *)0x0) {
    lVar11 = 0;
    do {
      pcVar9 = (char *)Json::getString(pJVar8,"parent",(char *)0x0);
      if (pcVar9 == (char *)0x0) {
        pBVar12 = (BoneData *)0x0;
      }
      else {
        local_d0 = &PTR__String_01c67868;
        local_c8 = strlen(pcVar9);
        lVar14 = local_c8 + 1;
        plVar6 = (long *)SpineExtension::getInstance();
        local_c0 = (char *)(**(code **)(*plVar6 + 0x18))
                                     (plVar6,lVar14,
                                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                      ,0x39);
        memcpy(local_c0,pcVar9,local_c8 + 1);
        pBVar12 = (BoneData *)SkeletonData::findBone(this_01,(String *)&local_d0);
        pcVar32 = local_c0;
        local_d0 = &PTR__String_01c67868;
        if (local_c0 != (char *)0x0) {
          plVar6 = (long *)SpineExtension::getInstance();
          (**(code **)(*plVar6 + 0x28))
                    (plVar6,pcVar32,
                     "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                     ,0xc9);
        }
        SpineObject::~SpineObject((SpineObject *)&local_d0);
        if (pBVar12 == (BoneData *)0x0) {
          (**(code **)(*(long *)this_01 + 8))();
          local_c8 = 0x17;
          local_d0 = &PTR__String_01c67868;
          plVar6 = (long *)SpineExtension::getInstance();
          local_c0 = (char *)(**(code **)(*plVar6 + 0x18))
                                       (plVar6,0x18,
                                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                        ,0x39);
          builtin_strncpy(local_c0,"Parent bone not found: ",0x18);
          local_b8 = &PTR__String_01c67868;
          local_b0 = strlen(pcVar9);
          sVar10 = local_b0 + 1;
          plVar6 = (long *)SpineExtension::getInstance();
          local_a8 = (void *)(**(code **)(*plVar6 + 0x18))
                                       (plVar6,sVar10,
                                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                        ,0x39);
          memcpy(local_a8,pcVar9,sVar10);
          setError(this,this_00,(String *)&local_d0,(String *)&local_b8);
          pvVar7 = local_a8;
          local_b8 = &PTR__String_01c67868;
          if (local_a8 != (void *)0x0) {
            plVar6 = (long *)SpineExtension::getInstance();
            (**(code **)(*plVar6 + 0x28))
                      (plVar6,pvVar7,
                       "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                       ,0xc9);
          }
          SpineObject::~SpineObject((SpineObject *)&local_b8);
          pcVar9 = local_c0;
          goto joined_r0x00d047ac;
        }
      }
      this_02 = SpineObject::operator_new
                          (0x58,
                           "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonJson.cpp"
                           ,0xa4);
      pcVar9 = (char *)Json::getString(pJVar8,"name",(char *)0x0);
      if (pcVar9 == (char *)0x0) {
        local_c8 = 0;
        local_c0 = (char *)0x0;
        local_d0 = &PTR__String_01c67868;
      }
      else {
        local_d0 = &PTR__String_01c67868;
        local_c8 = strlen(pcVar9);
        lVar14 = local_c8 + 1;
        plVar6 = (long *)SpineExtension::getInstance();
        local_c0 = (char *)(**(code **)(*plVar6 + 0x18))
                                     (plVar6,lVar14,
                                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                      ,0x39);
        memcpy(local_c0,pcVar9,local_c8 + 1);
      }
      BoneData::BoneData(this_02,(int)lVar11,(String *)&local_d0,pBVar12);
      pcVar9 = local_c0;
      local_d0 = &PTR__String_01c67868;
      if (local_c0 != (char *)0x0) {
        plVar6 = (long *)SpineExtension::getInstance();
        (**(code **)(*plVar6 + 0x28))
                  (plVar6,pcVar9,
                   "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",
                   0xc9);
      }
      SpineObject::~SpineObject((SpineObject *)&local_d0);
      fVar35 = (float)Json::getFloat(pJVar8,"length",0.0);
      *(float *)(this_02 + 0x30) = fVar35 * *(float *)(this + 0x30);
      fVar35 = (float)Json::getFloat(pJVar8,"x",0.0);
      *(float *)(this_02 + 0x34) = fVar35 * *(float *)(this + 0x30);
      fVar35 = (float)Json::getFloat(pJVar8,"y",0.0);
      *(float *)(this_02 + 0x38) = fVar35 * *(float *)(this + 0x30);
      uVar34 = Json::getFloat(pJVar8,"rotation",0.0);
      *(undefined4 *)(this_02 + 0x3c) = uVar34;
      uVar34 = Json::getFloat(pJVar8,"scaleX",1.0);
      *(undefined4 *)(this_02 + 0x40) = uVar34;
      uVar34 = Json::getFloat(pJVar8,"scaleY",1.0);
      *(undefined4 *)(this_02 + 0x44) = uVar34;
      uVar34 = Json::getFloat(pJVar8,"shearX",0.0);
      *(undefined4 *)(this_02 + 0x48) = uVar34;
      uVar34 = Json::getFloat(pJVar8,"shearY",0.0);
      *(undefined4 *)(this_02 + 0x4c) = uVar34;
      pcVar9 = (char *)Json::getString(pJVar8,"transform","normal");
      *(undefined4 *)(this_02 + 0x50) = 0;
      iVar4 = strcmp(pcVar9,"normal");
      if (iVar4 == 0) {
        uVar34 = 0;
LAB_00d00474:
        *(undefined4 *)(this_02 + 0x50) = uVar34;
      }
      else {
        iVar4 = strcmp(pcVar9,"onlyTranslation");
        if (iVar4 == 0) {
          uVar34 = 1;
          goto LAB_00d00474;
        }
        iVar4 = strcmp(pcVar9,"noRotationOrReflection");
        if (iVar4 == 0) {
          uVar34 = 2;
          goto LAB_00d00474;
        }
        iVar4 = strcmp(pcVar9,"noScale");
        if (iVar4 == 0) {
          uVar34 = 3;
          goto LAB_00d00474;
        }
        iVar4 = strcmp(pcVar9,"noScaleOrReflection");
        if (iVar4 == 0) {
          uVar34 = 4;
          goto LAB_00d00474;
        }
      }
      bVar3 = Json::getBoolean(pJVar8,"skin",false);
      this_02[0x54] = (BoneData)(bVar3 & 1);
      *(BoneData **)(*(long *)(this_01 + 0x38) + lVar11 * 8) = this_02;
      pJVar8 = *(Json **)pJVar8;
      lVar11 = lVar11 + 1;
    } while (pJVar8 != (Json *)0x0);
  }
  lVar11 = Json::getItem(this_00,"slots");
  if (lVar11 != 0) {
    uVar21 = (ulong)*(int *)(lVar11 + 0x14);
    uVar22 = *(ulong *)(this_01 + 0x50);
    if (uVar22 < uVar21) {
      uVar30 = *(undefined8 *)(this_01 + 0x58);
      *(ulong *)(this_01 + 0x50) = uVar21;
      plVar6 = (long *)SpineExtension::getInstance();
      uVar30 = (**(code **)(*plVar6 + 0x20))
                         (plVar6,uVar30,uVar21 << 3,
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                          ,0x5e);
      *(undefined8 *)(this_01 + 0x58) = uVar30;
      uVar21 = (ulong)*(int *)(lVar11 + 0x14);
      uVar22 = *(ulong *)(this_01 + 0x50);
    }
    uVar33 = *(ulong *)(this_01 + 0x48);
    *(ulong *)(this_01 + 0x48) = uVar21;
    if (uVar22 < uVar21) {
      uVar25 = (uint)((float)uVar21 * 1.75);
      uVar30 = *(undefined8 *)(this_01 + 0x58);
      if (uVar25 < 9) {
        uVar25 = 8;
      }
      *(long *)(this_01 + 0x50) = (long)(int)uVar25;
      plVar6 = (long *)SpineExtension::getInstance();
      uVar30 = (**(code **)(*plVar6 + 0x20))
                         (plVar6,uVar30,
                          -(ulong)(uVar25 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar25 << 3,
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                          ,0x52);
      uVar21 = *(ulong *)(this_01 + 0x48);
      *(undefined8 *)(this_01 + 0x58) = uVar30;
    }
    if (uVar33 < uVar21) {
      do {
        *(undefined8 *)(*(long *)(this_01 + 0x58) + uVar33 * 8) = 0;
        uVar33 = uVar33 + 1;
      } while (uVar21 != uVar33);
    }
    pJVar8 = *(Json **)(lVar11 + 8);
    if (pJVar8 != (Json *)0x0) {
      lVar11 = 0;
      fVar35 = -1.0;
      do {
        pcVar9 = (char *)Json::getString(pJVar8,"bone",(char *)0x0);
        if (pcVar9 == (char *)0x0) {
          local_c8 = 0;
          local_c0 = (void *)0x0;
          local_d0 = &PTR__String_01c67868;
        }
        else {
          local_d0 = &PTR__String_01c67868;
          local_c8 = strlen(pcVar9);
          lVar14 = local_c8 + 1;
          plVar6 = (long *)SpineExtension::getInstance();
          local_c0 = (char *)(**(code **)(*plVar6 + 0x18))
                                       (plVar6,lVar14,
                                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                        ,0x39);
          memcpy(local_c0,pcVar9,local_c8 + 1);
        }
        pBVar12 = (BoneData *)SkeletonData::findBone(this_01,(String *)&local_d0);
        pcVar32 = local_c0;
        local_d0 = &PTR__String_01c67868;
        if (local_c0 != (void *)0x0) {
          plVar6 = (long *)SpineExtension::getInstance();
          (**(code **)(*plVar6 + 0x28))
                    (plVar6,pcVar32,
                     "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                     ,0xc9);
        }
        SpineObject::~SpineObject((SpineObject *)&local_d0);
        if (pBVar12 == (BoneData *)0x0) {
          (**(code **)(*(long *)this_01 + 8))(this_01);
          local_c8 = 0x15;
          local_d0 = &PTR__String_01c67868;
          plVar6 = (long *)SpineExtension::getInstance();
          local_c0 = (char *)(**(code **)(*plVar6 + 0x18))
                                       (plVar6,0x16,
                                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                        ,0x39);
          builtin_strncpy(local_c0,"Slot bone not found: ",0x16);
          local_b8 = &PTR__String_01c67868;
          if (pcVar9 == (char *)0x0) {
            local_b0 = 0;
            local_a8 = (void *)0x0;
            setError(this,this_00,(String *)&local_d0,(String *)&local_b8);
            local_b8 = &PTR__String_01c67868;
          }
          else {
            local_b0 = strlen(pcVar9);
            lVar11 = local_b0 + 1;
            plVar6 = (long *)SpineExtension::getInstance();
            local_a8 = (void *)(**(code **)(*plVar6 + 0x18))
                                         (plVar6,lVar11,
                                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                          ,0x39);
            memcpy(local_a8,pcVar9,local_b0 + 1);
            pvVar7 = local_a8;
            setError(this,this_00,(String *)&local_d0,(String *)&local_b8);
            local_b8 = &PTR__String_01c67868;
            if (pvVar7 != (void *)0x0) {
              plVar6 = (long *)SpineExtension::getInstance();
              (**(code **)(*plVar6 + 0x28))
                        (plVar6,pvVar7,
                         "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                         ,0xc9);
            }
          }
          SpineObject::~SpineObject((SpineObject *)&local_b8);
          pcVar9 = local_c0;
          goto joined_r0x00d047ac;
        }
        pSVar13 = SpineObject::operator_new
                            (0x88,
                             "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonJson.cpp"
                             ,0xcf);
        pcVar9 = (char *)Json::getString(pJVar8,"name",(char *)0x0);
        local_d0 = &PTR__String_01c67868;
        if (pcVar9 == (char *)0x0) {
          local_c8 = 0;
          local_c0 = (char *)0x0;
        }
        else {
          local_c8 = strlen(pcVar9);
          lVar14 = local_c8 + 1;
          plVar6 = (long *)SpineExtension::getInstance();
          local_c0 = (char *)(**(code **)(*plVar6 + 0x18))
                                       (plVar6,lVar14,
                                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                        ,0x39);
          memcpy(local_c0,pcVar9,local_c8 + 1);
        }
        SlotData::SlotData(pSVar13,(int)lVar11,(String *)&local_d0,pBVar12);
        pcVar9 = local_c0;
        local_d0 = &PTR__String_01c67868;
        if (local_c0 != (char *)0x0) {
          plVar6 = (long *)SpineExtension::getInstance();
          (**(code **)(*plVar6 + 0x28))
                    (plVar6,pcVar9,
                     "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                     ,0xc9);
        }
        SpineObject::~SpineObject((SpineObject *)&local_d0);
        pcVar9 = (char *)Json::getString(pJVar8,"color",(char *)0x0);
        if (pcVar9 != (char *)0x0) {
          lVar14 = SlotData::getColor(pSVar13);
          sVar10 = strlen(pcVar9);
          fVar36 = fVar35;
          if (1 < sVar10) {
            local_b8 = (undefined **)
                       (CONCAT62((int6)((ulong)local_b8 >> 0x10),*(undefined2 *)pcVar9) &
                       0xffffffffff00ffff);
            uVar22 = strtoul((char *)&local_b8,(char **)&local_d0,0x10);
            fVar36 = -1.0;
            if (*(char *)local_d0 == '\0') {
              fVar36 = (float)(int)uVar22 / 255.0;
            }
          }
          *(float *)(lVar14 + 8) = fVar36;
          sVar10 = strlen(pcVar9);
          fVar36 = fVar35;
          if (3 < sVar10) {
            local_b8 = (undefined **)
                       (CONCAT62((int6)((ulong)local_b8 >> 0x10),*(undefined2 *)(pcVar9 + 2)) &
                       0xffffffffff00ffff);
            uVar22 = strtoul((char *)&local_b8,(char **)&local_d0,0x10);
            fVar36 = -1.0;
            if (*(char *)local_d0 == '\0') {
              fVar36 = (float)(int)uVar22 / 255.0;
            }
          }
          *(float *)(lVar14 + 0xc) = fVar36;
          sVar10 = strlen(pcVar9);
          fVar36 = fVar35;
          if (5 < sVar10) {
            local_b8 = (undefined **)
                       (CONCAT62((int6)((ulong)local_b8 >> 0x10),*(undefined2 *)(pcVar9 + 4)) &
                       0xffffffffff00ffff);
            uVar22 = strtoul((char *)&local_b8,(char **)&local_d0,0x10);
            fVar36 = -1.0;
            if (*(char *)local_d0 == '\0') {
              fVar36 = (float)(int)uVar22 / 255.0;
            }
          }
          *(float *)(lVar14 + 0x10) = fVar36;
          sVar10 = strlen(pcVar9);
          fVar36 = fVar35;
          if (7 < sVar10) {
            local_b8 = (undefined **)
                       (CONCAT62((int6)((ulong)local_b8 >> 0x10),*(undefined2 *)(pcVar9 + 6)) &
                       0xffffffffff00ffff);
            uVar22 = strtoul((char *)&local_b8,(char **)&local_d0,0x10);
            fVar36 = -1.0;
            if (*(char *)local_d0 == '\0') {
              fVar36 = (float)(int)uVar22 / 255.0;
            }
          }
          *(float *)(lVar14 + 0x14) = fVar36;
        }
        pcVar9 = (char *)Json::getString(pJVar8,"dark",(char *)0x0);
        if (pcVar9 != (char *)0x0) {
          lVar14 = SlotData::getDarkColor(pSVar13);
          sVar10 = strlen(pcVar9);
          fVar36 = fVar35;
          if (1 < sVar10) {
            local_b8 = (undefined **)
                       (CONCAT62((int6)((ulong)local_b8 >> 0x10),*(undefined2 *)pcVar9) &
                       0xffffffffff00ffff);
            uVar22 = strtoul((char *)&local_b8,(char **)&local_d0,0x10);
            fVar36 = -1.0;
            if (*(char *)local_d0 == '\0') {
              fVar36 = (float)(int)uVar22 / 255.0;
            }
          }
          *(float *)(lVar14 + 8) = fVar36;
          sVar10 = strlen(pcVar9);
          fVar36 = fVar35;
          if (3 < sVar10) {
            local_b8 = (undefined **)
                       (CONCAT62((int6)((ulong)local_b8 >> 0x10),*(undefined2 *)(pcVar9 + 2)) &
                       0xffffffffff00ffff);
            uVar22 = strtoul((char *)&local_b8,(char **)&local_d0,0x10);
            fVar36 = -1.0;
            if (*(char *)local_d0 == '\0') {
              fVar36 = (float)(int)uVar22 / 255.0;
            }
          }
          *(float *)(lVar14 + 0xc) = fVar36;
          sVar10 = strlen(pcVar9);
          fVar36 = fVar35;
          if (5 < sVar10) {
            local_b8 = (undefined **)
                       (CONCAT62((int6)((ulong)local_b8 >> 0x10),*(undefined2 *)(pcVar9 + 4)) &
                       0xffffffffff00ffff);
            uVar22 = strtoul((char *)&local_b8,(char **)&local_d0,0x10);
            fVar36 = -1.0;
            if (*(char *)local_d0 == '\0') {
              fVar36 = (float)(int)uVar22 / 255.0;
            }
          }
          *(float *)(lVar14 + 0x10) = fVar36;
          *(undefined4 *)(lVar14 + 0x14) = 0x3f800000;
          SlotData::setHasDarkColor(pSVar13,true);
        }
        lVar14 = Json::getItem(pJVar8,"attachment");
        if (lVar14 != 0) {
          pcVar9 = *(char **)(lVar14 + 0x18);
          local_d0 = &PTR__String_01c67868;
          if (pcVar9 == (char *)0x0) {
            local_c8 = 0;
            local_c0 = (char *)0x0;
          }
          else {
            local_c8 = strlen(pcVar9);
            lVar14 = local_c8 + 1;
            plVar6 = (long *)SpineExtension::getInstance();
            local_c0 = (char *)(**(code **)(*plVar6 + 0x18))
                                         (plVar6,lVar14,
                                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                          ,0x39);
            memcpy(local_c0,pcVar9,local_c8 + 1);
          }
          SlotData::setAttachmentName(pSVar13,(String *)&local_d0);
          pcVar9 = local_c0;
          local_d0 = &PTR__String_01c67868;
          if (local_c0 != (char *)0x0) {
            plVar6 = (long *)SpineExtension::getInstance();
            (**(code **)(*plVar6 + 0x28))
                      (plVar6,pcVar9,
                       "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                       ,0xc9);
          }
          SpineObject::~SpineObject((SpineObject *)&local_d0);
        }
        lVar14 = Json::getItem(pJVar8,"blend");
        if (lVar14 != 0) {
          pcVar9 = *(char **)(lVar14 + 0x18);
          iVar4 = strcmp(pcVar9,"additive");
          if (iVar4 == 0) {
            uVar34 = 1;
          }
          else {
            iVar4 = strcmp(pcVar9,"multiply");
            if (iVar4 == 0) {
              uVar34 = 2;
            }
            else {
              iVar4 = strcmp(pcVar9,"screen");
              if (iVar4 != 0) goto LAB_00d00b08;
              uVar34 = 3;
            }
          }
          *(undefined4 *)(pSVar13 + 0x80) = uVar34;
        }
LAB_00d00b08:
        *(SlotData **)(*(long *)(this_01 + 0x58) + lVar11 * 8) = pSVar13;
        pJVar8 = *(Json **)pJVar8;
        lVar11 = lVar11 + 1;
      } while (pJVar8 != (Json *)0x0);
    }
  }
  lVar11 = Json::getItem(this_00,"ik");
  if (lVar11 != 0) {
    uVar21 = (ulong)*(int *)(lVar11 + 0x14);
    uVar22 = *(ulong *)(this_01 + 0xd8);
    if (uVar22 < uVar21) {
      uVar30 = *(undefined8 *)(this_01 + 0xe0);
      *(ulong *)(this_01 + 0xd8) = uVar21;
      plVar6 = (long *)SpineExtension::getInstance();
      uVar30 = (**(code **)(*plVar6 + 0x20))
                         (plVar6,uVar30,uVar21 << 3,
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                          ,0x5e);
      *(undefined8 *)(this_01 + 0xe0) = uVar30;
      uVar21 = (ulong)*(int *)(lVar11 + 0x14);
      uVar22 = *(ulong *)(this_01 + 0xd8);
    }
    uVar33 = *(ulong *)(this_01 + 0xd0);
    *(ulong *)(this_01 + 0xd0) = uVar21;
    if (uVar22 < uVar21) {
      uVar25 = (uint)((float)uVar21 * 1.75);
      uVar30 = *(undefined8 *)(this_01 + 0xe0);
      if (uVar25 < 9) {
        uVar25 = 8;
      }
      *(long *)(this_01 + 0xd8) = (long)(int)uVar25;
      plVar6 = (long *)SpineExtension::getInstance();
      uVar30 = (**(code **)(*plVar6 + 0x20))
                         (plVar6,uVar30,
                          -(ulong)(uVar25 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar25 << 3,
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                          ,0x52);
      uVar21 = *(ulong *)(this_01 + 0xd0);
      *(undefined8 *)(this_01 + 0xe0) = uVar30;
    }
    if (uVar33 < uVar21) {
      do {
        *(undefined8 *)(*(long *)(this_01 + 0xe0) + uVar33 * 8) = 0;
        uVar33 = uVar33 + 1;
      } while (uVar21 != uVar33);
    }
    pJVar8 = *(Json **)(lVar11 + 8);
    if (pJVar8 != (Json *)0x0) {
      lVar11 = 0;
      do {
        this_03 = SpineObject::operator_new
                            (0x68,
                             "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonJson.cpp"
                             ,0xfb);
        pcVar9 = (char *)Json::getString(pJVar8,"name",(char *)0x0);
        if (pcVar9 == (char *)0x0) {
          local_c8 = 0;
          local_c0 = (void *)0x0;
          local_d0 = &PTR__String_01c67868;
        }
        else {
          local_d0 = &PTR__String_01c67868;
          local_c8 = strlen(pcVar9);
          lVar14 = local_c8 + 1;
          plVar6 = (long *)SpineExtension::getInstance();
          local_c0 = (char *)(**(code **)(*plVar6 + 0x18))
                                       (plVar6,lVar14,
                                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                        ,0x39);
          memcpy(local_c0,pcVar9,local_c8 + 1);
        }
        IkConstraintData::IkConstraintData(this_03,(String *)&local_d0);
        pcVar9 = local_c0;
        local_d0 = &PTR__String_01c67868;
        if (local_c0 != (void *)0x0) {
          plVar6 = (long *)SpineExtension::getInstance();
          (**(code **)(*plVar6 + 0x28))
                    (plVar6,pcVar9,
                     "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                     ,0xc9);
        }
        SpineObject::~SpineObject((SpineObject *)&local_d0);
        iVar4 = Json::getInt(pJVar8,"order",0);
        ConstraintData::setOrder((ConstraintData *)this_03,(long)iVar4);
        bVar3 = Json::getBoolean(pJVar8,"skin",false);
        ConstraintData::setSkinRequired((ConstraintData *)this_03,(bool)(bVar3 & 1));
        lVar14 = Json::getItem(pJVar8,"bones");
        uVar21 = (ulong)*(int *)(lVar14 + 0x14);
        uVar22 = *(ulong *)(this_03 + 0x40);
        if (uVar22 < uVar21) {
          uVar30 = *(undefined8 *)(this_03 + 0x48);
          *(ulong *)(this_03 + 0x40) = uVar21;
          plVar6 = (long *)SpineExtension::getInstance();
          uVar30 = (**(code **)(*plVar6 + 0x20))
                             (plVar6,uVar30,uVar21 << 3,
                              "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                              ,0x5e);
          *(undefined8 *)(this_03 + 0x48) = uVar30;
          uVar21 = (ulong)*(int *)(lVar14 + 0x14);
          uVar22 = *(ulong *)(this_03 + 0x40);
        }
        uVar33 = *(ulong *)(this_03 + 0x38);
        *(ulong *)(this_03 + 0x38) = uVar21;
        if (uVar22 < uVar21) {
          uVar25 = (uint)((float)uVar21 * 1.75);
          uVar30 = *(undefined8 *)(this_03 + 0x48);
          if (uVar25 < 9) {
            uVar25 = 8;
          }
          *(long *)(this_03 + 0x40) = (long)(int)uVar25;
          plVar6 = (long *)SpineExtension::getInstance();
          uVar30 = (**(code **)(*plVar6 + 0x20))
                             (plVar6,uVar30,
                              -(ulong)(uVar25 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar25 << 3,
                              "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                              ,0x52);
          uVar21 = *(ulong *)(this_03 + 0x38);
          *(undefined8 *)(this_03 + 0x48) = uVar30;
        }
        if (uVar33 < uVar21) {
          do {
            *(undefined8 *)(*(long *)(this_03 + 0x48) + uVar33 * 8) = 0;
            uVar33 = uVar33 + 1;
          } while (uVar21 != uVar33);
        }
        plVar6 = *(long **)(lVar14 + 8);
        if (plVar6 != (long *)0x0) {
          lVar14 = 0;
          do {
            pcVar9 = (char *)plVar6[3];
            local_d0 = &PTR__String_01c67868;
            if (pcVar9 == (char *)0x0) {
              local_c8 = 0;
              local_c0 = (void *)0x0;
            }
            else {
              local_c8 = strlen(pcVar9);
              lVar17 = local_c8 + 1;
              plVar15 = (long *)SpineExtension::getInstance();
              local_c0 = (char *)(**(code **)(*plVar15 + 0x18))
                                           (plVar15,lVar17,
                                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                            ,0x39);
              memcpy(local_c0,pcVar9,local_c8 + 1);
            }
            uVar30 = SkeletonData::findBone(this_01,(String *)&local_d0);
            pcVar9 = local_c0;
            local_d0 = &PTR__String_01c67868;
            *(undefined8 *)(*(long *)(this_03 + 0x48) + lVar14) = uVar30;
            if (local_c0 != (void *)0x0) {
              plVar15 = (long *)SpineExtension::getInstance();
              (**(code **)(*plVar15 + 0x28))
                        (plVar15,pcVar9,
                         "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                         ,0xc9);
            }
            SpineObject::~SpineObject((SpineObject *)&local_d0);
            if (*(long *)(*(long *)(this_03 + 0x48) + lVar14) == 0) {
              if (this_01 != (SkeletonData *)0x0) {
                (**(code **)(*(long *)this_01 + 8))();
              }
              local_d0 = &PTR__String_01c67868;
              local_c8 = 0x13;
              plVar15 = (long *)SpineExtension::getInstance();
              local_c0 = (char *)(**(code **)(*plVar15 + 0x18))
                                           (plVar15,0x14,
                                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                            ,0x39);
              builtin_strncpy(local_c0,"IK bone not found: ",0x14);
              goto LAB_00d041e8;
            }
            plVar6 = (long *)*plVar6;
            lVar14 = lVar14 + 8;
          } while (plVar6 != (long *)0x0);
        }
        pcVar9 = (char *)Json::getString(pJVar8,"target",(char *)0x0);
        local_d0 = &PTR__String_01c67868;
        if (pcVar9 == (char *)0x0) {
          local_c8 = 0;
          local_c0 = (char *)0x0;
        }
        else {
          local_c8 = strlen(pcVar9);
          lVar14 = local_c8 + 1;
          plVar6 = (long *)SpineExtension::getInstance();
          local_c0 = (char *)(**(code **)(*plVar6 + 0x18))
                                       (plVar6,lVar14,
                                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                        ,0x39);
          memcpy(local_c0,pcVar9,local_c8 + 1);
        }
        uVar30 = SkeletonData::findBone(this_01,(String *)&local_d0);
        pcVar32 = local_c0;
        *(undefined8 *)(this_03 + 0x50) = uVar30;
        local_d0 = &PTR__String_01c67868;
        if (local_c0 != (char *)0x0) {
          plVar6 = (long *)SpineExtension::getInstance();
          (**(code **)(*plVar6 + 0x28))
                    (plVar6,pcVar32,
                     "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                     ,0xc9);
        }
        SpineObject::~SpineObject((SpineObject *)&local_d0);
        if (*(long *)(this_03 + 0x50) == 0) {
          if (this_01 == (SkeletonData *)0x0) goto LAB_00d0463c;
          lVar11 = *(long *)this_01;
          goto LAB_00d04634;
        }
        uVar34 = Json::getFloat(pJVar8,"mix",1.0);
        *(undefined4 *)(this_03 + 0x60) = uVar34;
        fVar35 = (float)Json::getFloat(pJVar8,"softness",0.0);
        *(float *)(this_03 + 100) = fVar35 * *(float *)(this + 0x30);
        iVar4 = Json::getInt(pJVar8,"bendPositive",1);
        uVar34 = 1;
        if (iVar4 == 0) {
          uVar34 = 0xffffffff;
        }
        *(undefined4 *)(this_03 + 0x58) = uVar34;
        iVar4 = Json::getInt(pJVar8,"compress",0);
        this_03[0x5c] = (IkConstraintData)(iVar4 != 0);
        iVar4 = Json::getInt(pJVar8,"stretch",0);
        this_03[0x5d] = (IkConstraintData)(iVar4 != 0);
        iVar4 = Json::getInt(pJVar8,"uniform",0);
        this_03[0x5e] = (IkConstraintData)(iVar4 != 0);
        *(IkConstraintData **)(*(long *)(this_01 + 0xe0) + lVar11 * 8) = this_03;
        pJVar8 = *(Json **)pJVar8;
        lVar11 = lVar11 + 1;
      } while (pJVar8 != (Json *)0x0);
    }
  }
  lVar11 = Json::getItem(this_00,"transform");
  if (lVar11 != 0) {
    uVar21 = (ulong)*(int *)(lVar11 + 0x14);
    uVar22 = *(ulong *)(this_01 + 0xf8);
    if (uVar22 < uVar21) {
      uVar30 = *(undefined8 *)(this_01 + 0x100);
      *(ulong *)(this_01 + 0xf8) = uVar21;
      plVar6 = (long *)SpineExtension::getInstance();
      uVar30 = (**(code **)(*plVar6 + 0x20))
                         (plVar6,uVar30,uVar21 << 3,
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                          ,0x5e);
      *(undefined8 *)(this_01 + 0x100) = uVar30;
      uVar21 = (ulong)*(int *)(lVar11 + 0x14);
      uVar22 = *(ulong *)(this_01 + 0xf8);
    }
    uVar33 = *(ulong *)(this_01 + 0xf0);
    *(ulong *)(this_01 + 0xf0) = uVar21;
    if (uVar22 < uVar21) {
      uVar25 = (uint)((float)uVar21 * 1.75);
      uVar30 = *(undefined8 *)(this_01 + 0x100);
      if (uVar25 < 9) {
        uVar25 = 8;
      }
      *(long *)(this_01 + 0xf8) = (long)(int)uVar25;
      plVar6 = (long *)SpineExtension::getInstance();
      uVar30 = (**(code **)(*plVar6 + 0x20))
                         (plVar6,uVar30,
                          -(ulong)(uVar25 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar25 << 3,
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                          ,0x52);
      uVar21 = *(ulong *)(this_01 + 0xf0);
      *(undefined8 *)(this_01 + 0x100) = uVar30;
    }
    if (uVar33 < uVar21) {
      do {
        *(undefined8 *)(*(long *)(this_01 + 0x100) + uVar33 * 8) = 0;
        uVar33 = uVar33 + 1;
      } while (uVar21 != uVar33);
    }
    pJVar8 = *(Json **)(lVar11 + 8);
    if (pJVar8 != (Json *)0x0) {
      lVar11 = 0;
LAB_00d01194:
      this_04 = SpineObject::operator_new
                          (0x88,
                           "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonJson.cpp"
                           ,0x127);
      pcVar9 = (char *)Json::getString(pJVar8,"name",(char *)0x0);
      if (pcVar9 == (char *)0x0) {
        local_c8 = 0;
        local_c0 = (void *)0x0;
        local_d0 = &PTR__String_01c67868;
      }
      else {
        local_d0 = &PTR__String_01c67868;
        local_c8 = strlen(pcVar9);
        lVar14 = local_c8 + 1;
        plVar6 = (long *)SpineExtension::getInstance();
        local_c0 = (char *)(**(code **)(*plVar6 + 0x18))
                                     (plVar6,lVar14,
                                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                      ,0x39);
        memcpy(local_c0,pcVar9,local_c8 + 1);
      }
      TransformConstraintData::TransformConstraintData(this_04,(String *)&local_d0);
      pcVar9 = local_c0;
      local_d0 = &PTR__String_01c67868;
      if (local_c0 != (void *)0x0) {
        plVar6 = (long *)SpineExtension::getInstance();
        (**(code **)(*plVar6 + 0x28))
                  (plVar6,pcVar9,
                   "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",
                   0xc9);
      }
      SpineObject::~SpineObject((SpineObject *)&local_d0);
      iVar4 = Json::getInt(pJVar8,"order",0);
      ConstraintData::setOrder((ConstraintData *)this_04,(long)iVar4);
      bVar3 = Json::getBoolean(pJVar8,"skin",false);
      ConstraintData::setSkinRequired((ConstraintData *)this_04,(bool)(bVar3 & 1));
      lVar14 = Json::getItem(pJVar8,"bones");
      uVar21 = (ulong)*(int *)(lVar14 + 0x14);
      uVar22 = *(ulong *)(this_04 + 0x40);
      if (uVar22 < uVar21) {
        uVar30 = *(undefined8 *)(this_04 + 0x48);
        *(ulong *)(this_04 + 0x40) = uVar21;
        plVar6 = (long *)SpineExtension::getInstance();
        uVar30 = (**(code **)(*plVar6 + 0x20))
                           (plVar6,uVar30,uVar21 << 3,
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                            ,0x5e);
        *(undefined8 *)(this_04 + 0x48) = uVar30;
        uVar21 = (ulong)*(int *)(lVar14 + 0x14);
        uVar22 = *(ulong *)(this_04 + 0x40);
      }
      uVar33 = *(ulong *)(this_04 + 0x38);
      *(ulong *)(this_04 + 0x38) = uVar21;
      if (uVar22 < uVar21) {
        uVar25 = (uint)((float)uVar21 * 1.75);
        uVar30 = *(undefined8 *)(this_04 + 0x48);
        if (uVar25 < 9) {
          uVar25 = 8;
        }
        *(long *)(this_04 + 0x40) = (long)(int)uVar25;
        plVar6 = (long *)SpineExtension::getInstance();
        uVar30 = (**(code **)(*plVar6 + 0x20))
                           (plVar6,uVar30,
                            -(ulong)(uVar25 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar25 << 3,
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                            ,0x52);
        uVar21 = *(ulong *)(this_04 + 0x38);
        *(undefined8 *)(this_04 + 0x48) = uVar30;
      }
      if (uVar33 < uVar21) {
        do {
          *(undefined8 *)(*(long *)(this_04 + 0x48) + uVar33 * 8) = 0;
          uVar33 = uVar33 + 1;
        } while (uVar21 != uVar33);
      }
      plVar6 = *(long **)(lVar14 + 8);
      if (plVar6 != (long *)0x0) {
        lVar14 = 0;
LAB_00d01368:
        pcVar9 = (char *)plVar6[3];
        local_d0 = &PTR__String_01c67868;
        if (pcVar9 == (char *)0x0) {
          local_c8 = 0;
          local_c0 = (void *)0x0;
        }
        else {
          local_c8 = strlen(pcVar9);
          lVar17 = local_c8 + 1;
          plVar15 = (long *)SpineExtension::getInstance();
          local_c0 = (char *)(**(code **)(*plVar15 + 0x18))
                                       (plVar15,lVar17,
                                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                        ,0x39);
          memcpy(local_c0,pcVar9,local_c8 + 1);
        }
        uVar30 = SkeletonData::findBone(this_01,(String *)&local_d0);
        pcVar9 = local_c0;
        local_d0 = &PTR__String_01c67868;
        *(undefined8 *)(*(long *)(this_04 + 0x48) + lVar14) = uVar30;
        if (local_c0 != (void *)0x0) {
          plVar15 = (long *)SpineExtension::getInstance();
          (**(code **)(*plVar15 + 0x28))
                    (plVar15,pcVar9,
                     "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                     ,0xc9);
        }
        SpineObject::~SpineObject((SpineObject *)&local_d0);
        if (*(long *)(*(long *)(this_04 + 0x48) + lVar14) != 0) goto code_r0x00d01414;
        if (this_01 != (SkeletonData *)0x0) {
          (**(code **)(*(long *)this_01 + 8))();
        }
        local_d0 = &PTR__String_01c67868;
        local_c8 = 0x1a;
        plVar15 = (long *)SpineExtension::getInstance();
        local_c0 = (char *)(**(code **)(*plVar15 + 0x18))
                                     (plVar15,0x1b,
                                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                      ,0x39);
        builtin_strncpy(local_c0,"Transform bone not found: ",0x1b);
LAB_00d041e8:
        pcVar9 = (char *)plVar6[3];
        goto LAB_00d041ec;
      }
LAB_00d01420:
      pcVar9 = (char *)Json::getString(pJVar8,"target",(char *)0x0);
      local_d0 = &PTR__String_01c67868;
      if (pcVar9 == (char *)0x0) {
        local_c8 = 0;
        local_c0 = (char *)0x0;
      }
      else {
        local_c8 = strlen(pcVar9);
        lVar14 = local_c8 + 1;
        plVar6 = (long *)SpineExtension::getInstance();
        local_c0 = (char *)(**(code **)(*plVar6 + 0x18))
                                     (plVar6,lVar14,
                                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                      ,0x39);
        memcpy(local_c0,pcVar9,local_c8 + 1);
      }
      uVar30 = SkeletonData::findBone(this_01,(String *)&local_d0);
      pcVar32 = local_c0;
      *(undefined8 *)(this_04 + 0x50) = uVar30;
      local_d0 = &PTR__String_01c67868;
      if (local_c0 != (char *)0x0) {
        plVar6 = (long *)SpineExtension::getInstance();
        (**(code **)(*plVar6 + 0x28))
                  (plVar6,pcVar32,
                   "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",
                   0xc9);
      }
      SpineObject::~SpineObject((SpineObject *)&local_d0);
      if (*(long *)(this_04 + 0x50) != 0) goto code_r0x00d014dc;
      if (this_01 != (SkeletonData *)0x0) {
        lVar11 = *(long *)this_01;
LAB_00d04634:
        (**(code **)(lVar11 + 8))(this_01);
      }
LAB_00d0463c:
      local_d0 = &PTR__String_01c67868;
      local_c8 = 0x17;
      plVar6 = (long *)SpineExtension::getInstance();
      local_c0 = (char *)(**(code **)(*plVar6 + 0x18))
                                   (plVar6,0x18,
                                    "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                    ,0x39);
      builtin_strncpy(local_c0,"Target bone not found: ",0x18);
LAB_00d041ec:
      local_b8 = &PTR__String_01c67868;
      if (pcVar9 == (char *)0x0) {
        local_b0 = 0;
        local_a8 = (void *)0x0;
        setError(this,this_00,(String *)&local_d0,(String *)&local_b8);
        local_b8 = &PTR__String_01c67868;
      }
      else {
        local_b0 = strlen(pcVar9);
        lVar11 = local_b0 + 1;
        plVar6 = (long *)SpineExtension::getInstance();
        local_a8 = (void *)(**(code **)(*plVar6 + 0x18))
                                     (plVar6,lVar11,
                                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                      ,0x39);
        memcpy(local_a8,pcVar9,local_b0 + 1);
        pvVar7 = local_a8;
        setError(this,this_00,(String *)&local_d0,(String *)&local_b8);
        local_b8 = &PTR__String_01c67868;
        if (pvVar7 != (void *)0x0) {
          plVar6 = (long *)SpineExtension::getInstance();
          (**(code **)(*plVar6 + 0x28))
                    (plVar6,pvVar7,
                     "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                     ,0xc9);
        }
      }
      SpineObject::~SpineObject((SpineObject *)&local_b8);
      pcVar9 = local_c0;
      goto joined_r0x00d047ac;
    }
  }
LAB_00d01648:
  lVar11 = Json::getItem(this_00,"path");
  if (lVar11 != 0) {
    uVar21 = (ulong)*(int *)(lVar11 + 0x14);
    uVar22 = *(ulong *)(this_01 + 0x118);
    if (uVar22 < uVar21) {
      uVar30 = *(undefined8 *)(this_01 + 0x120);
      *(ulong *)(this_01 + 0x118) = uVar21;
      plVar6 = (long *)SpineExtension::getInstance();
      uVar30 = (**(code **)(*plVar6 + 0x20))
                         (plVar6,uVar30,uVar21 << 3,
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                          ,0x5e);
      *(undefined8 *)(this_01 + 0x120) = uVar30;
      uVar21 = (ulong)*(int *)(lVar11 + 0x14);
      uVar22 = *(ulong *)(this_01 + 0x118);
    }
    uVar33 = *(ulong *)(this_01 + 0x110);
    *(ulong *)(this_01 + 0x110) = uVar21;
    if (uVar22 < uVar21) {
      uVar25 = (uint)((float)uVar21 * 1.75);
      uVar30 = *(undefined8 *)(this_01 + 0x120);
      if (uVar25 < 9) {
        uVar25 = 8;
      }
      *(long *)(this_01 + 0x118) = (long)(int)uVar25;
      plVar6 = (long *)SpineExtension::getInstance();
      uVar30 = (**(code **)(*plVar6 + 0x20))
                         (plVar6,uVar30,
                          -(ulong)(uVar25 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar25 << 3,
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                          ,0x52);
      uVar21 = *(ulong *)(this_01 + 0x110);
      *(undefined8 *)(this_01 + 0x120) = uVar30;
    }
    if (uVar33 < uVar21) {
      do {
        *(undefined8 *)(*(long *)(this_01 + 0x120) + uVar33 * 8) = 0;
        uVar33 = uVar33 + 1;
      } while (uVar21 != uVar33);
    }
    pJVar8 = *(Json **)(lVar11 + 8);
    if (pJVar8 != (Json *)0x0) {
      lVar11 = 0;
      do {
        this_05 = SpineObject::operator_new
                            (0x78,
                             "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonJson.cpp"
                             ,0x15b);
        pcVar9 = (char *)Json::getString(pJVar8,"name",(char *)0x0);
        if (pcVar9 == (char *)0x0) {
          local_c8 = 0;
          local_c0 = (void *)0x0;
          local_d0 = &PTR__String_01c67868;
        }
        else {
          local_d0 = &PTR__String_01c67868;
          local_c8 = strlen(pcVar9);
          lVar14 = local_c8 + 1;
          plVar6 = (long *)SpineExtension::getInstance();
          local_c0 = (char *)(**(code **)(*plVar6 + 0x18))
                                       (plVar6,lVar14,
                                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                        ,0x39);
          memcpy(local_c0,pcVar9,local_c8 + 1);
        }
        PathConstraintData::PathConstraintData(this_05,(String *)&local_d0);
        pcVar9 = local_c0;
        local_d0 = &PTR__String_01c67868;
        if (local_c0 != (void *)0x0) {
          plVar6 = (long *)SpineExtension::getInstance();
          (**(code **)(*plVar6 + 0x28))
                    (plVar6,pcVar9,
                     "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                     ,0xc9);
        }
        SpineObject::~SpineObject((SpineObject *)&local_d0);
        iVar4 = Json::getInt(pJVar8,"order",0);
        ConstraintData::setOrder((ConstraintData *)this_05,(long)iVar4);
        bVar3 = Json::getBoolean(pJVar8,"skin",false);
        ConstraintData::setSkinRequired((ConstraintData *)this_05,(bool)(bVar3 & 1));
        lVar14 = Json::getItem(pJVar8,"bones");
        uVar21 = (ulong)*(int *)(lVar14 + 0x14);
        uVar22 = *(ulong *)(this_05 + 0x40);
        if (uVar22 < uVar21) {
          uVar30 = *(undefined8 *)(this_05 + 0x48);
          *(ulong *)(this_05 + 0x40) = uVar21;
          plVar6 = (long *)SpineExtension::getInstance();
          uVar30 = (**(code **)(*plVar6 + 0x20))
                             (plVar6,uVar30,uVar21 << 3,
                              "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                              ,0x5e);
          *(undefined8 *)(this_05 + 0x48) = uVar30;
          uVar21 = (ulong)*(int *)(lVar14 + 0x14);
          uVar22 = *(ulong *)(this_05 + 0x40);
        }
        uVar33 = *(ulong *)(this_05 + 0x38);
        *(ulong *)(this_05 + 0x38) = uVar21;
        if (uVar22 < uVar21) {
          uVar25 = (uint)((float)uVar21 * 1.75);
          uVar30 = *(undefined8 *)(this_05 + 0x48);
          if (uVar25 < 9) {
            uVar25 = 8;
          }
          *(long *)(this_05 + 0x40) = (long)(int)uVar25;
          plVar6 = (long *)SpineExtension::getInstance();
          uVar30 = (**(code **)(*plVar6 + 0x20))
                             (plVar6,uVar30,
                              -(ulong)(uVar25 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar25 << 3,
                              "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                              ,0x52);
          uVar21 = *(ulong *)(this_05 + 0x38);
          *(undefined8 *)(this_05 + 0x48) = uVar30;
        }
        if (uVar33 < uVar21) {
          do {
            *(undefined8 *)(*(long *)(this_05 + 0x48) + uVar33 * 8) = 0;
            uVar33 = uVar33 + 1;
          } while (uVar21 != uVar33);
        }
        plVar6 = *(long **)(lVar14 + 8);
        if (plVar6 != (long *)0x0) {
          lVar14 = 0;
          do {
            pcVar9 = (char *)plVar6[3];
            local_d0 = &PTR__String_01c67868;
            if (pcVar9 == (char *)0x0) {
              local_c8 = 0;
              local_c0 = (void *)0x0;
            }
            else {
              local_c8 = strlen(pcVar9);
              lVar17 = local_c8 + 1;
              plVar15 = (long *)SpineExtension::getInstance();
              local_c0 = (char *)(**(code **)(*plVar15 + 0x18))
                                           (plVar15,lVar17,
                                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                            ,0x39);
              memcpy(local_c0,pcVar9,local_c8 + 1);
            }
            uVar30 = SkeletonData::findBone(this_01,(String *)&local_d0);
            pcVar9 = local_c0;
            local_d0 = &PTR__String_01c67868;
            *(undefined8 *)(*(long *)(this_05 + 0x48) + lVar14) = uVar30;
            if (local_c0 != (void *)0x0) {
              plVar15 = (long *)SpineExtension::getInstance();
              (**(code **)(*plVar15 + 0x28))
                        (plVar15,pcVar9,
                         "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                         ,0xc9);
            }
            SpineObject::~SpineObject((SpineObject *)&local_d0);
            if (*(long *)(*(long *)(this_05 + 0x48) + lVar14) == 0) {
              if (this_01 != (SkeletonData *)0x0) {
                (**(code **)(*(long *)this_01 + 8))();
              }
              local_d0 = &PTR__String_01c67868;
              local_c8 = 0x15;
              plVar15 = (long *)SpineExtension::getInstance();
              local_c0 = (char *)(**(code **)(*plVar15 + 0x18))
                                           (plVar15,0x16,
                                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                            ,0x39);
              builtin_strncpy(local_c0,"Path bone not found: ",0x16);
              pcVar9 = (char *)plVar6[3];
              goto LAB_00d04314;
            }
            plVar6 = (long *)*plVar6;
            lVar14 = lVar14 + 8;
          } while (plVar6 != (long *)0x0);
        }
        pcVar9 = (char *)Json::getString(pJVar8,"target",(char *)0x0);
        local_d0 = &PTR__String_01c67868;
        if (pcVar9 == (char *)0x0) {
          local_c8 = 0;
          local_c0 = (char *)0x0;
        }
        else {
          local_c8 = strlen(pcVar9);
          lVar14 = local_c8 + 1;
          plVar6 = (long *)SpineExtension::getInstance();
          local_c0 = (char *)(**(code **)(*plVar6 + 0x18))
                                       (plVar6,lVar14,
                                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                        ,0x39);
          memcpy(local_c0,pcVar9,local_c8 + 1);
        }
        uVar30 = SkeletonData::findSlot(this_01,(String *)&local_d0);
        pcVar32 = local_c0;
        *(undefined8 *)(this_05 + 0x50) = uVar30;
        local_d0 = &PTR__String_01c67868;
        if (local_c0 != (char *)0x0) {
          plVar6 = (long *)SpineExtension::getInstance();
          (**(code **)(*plVar6 + 0x28))
                    (plVar6,pcVar32,
                     "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                     ,0xc9);
        }
        SpineObject::~SpineObject((SpineObject *)&local_d0);
        if (*(long *)(this_05 + 0x50) == 0) {
          if (this_01 != (SkeletonData *)0x0) {
            (**(code **)(*(long *)this_01 + 8))();
          }
          local_d0 = &PTR__String_01c67868;
          local_c8 = 0x17;
          plVar6 = (long *)SpineExtension::getInstance();
          local_c0 = (char *)(**(code **)(*plVar6 + 0x18))
                                       (plVar6,0x18,
                                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                        ,0x39);
          builtin_strncpy(local_c0,"Target slot not found: ",0x18);
LAB_00d04314:
          local_b8 = &PTR__String_01c67868;
          if (pcVar9 == (char *)0x0) {
            local_b0 = 0;
            local_a8 = (void *)0x0;
            setError(this,this_00,(String *)&local_d0,(String *)&local_b8);
            local_b8 = &PTR__String_01c67868;
          }
          else {
            local_b0 = strlen(pcVar9);
            lVar11 = local_b0 + 1;
            plVar6 = (long *)SpineExtension::getInstance();
            local_a8 = (void *)(**(code **)(*plVar6 + 0x18))
                                         (plVar6,lVar11,
                                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                          ,0x39);
            memcpy(local_a8,pcVar9,local_b0 + 1);
            pvVar7 = local_a8;
            setError(this,this_00,(String *)&local_d0,(String *)&local_b8);
            local_b8 = &PTR__String_01c67868;
            if (pvVar7 != (void *)0x0) {
              plVar6 = (long *)SpineExtension::getInstance();
              (**(code **)(*plVar6 + 0x28))
                        (plVar6,pvVar7,
                         "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                         ,0xc9);
            }
          }
          SpineObject::~SpineObject((SpineObject *)&local_b8);
          pcVar9 = local_c0;
joined_r0x00d047ac:
          local_d0 = &PTR__String_01c67868;
          local_c0 = pcVar9;
          if (pcVar9 != (char *)0x0) {
            local_d0 = &PTR__String_01c67868;
            plVar6 = (long *)SpineExtension::getInstance();
            (**(code **)(*plVar6 + 0x28))
                      (plVar6,pcVar9,
                       "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                       ,0xc9);
          }
          SpineObject::~SpineObject((SpineObject *)&local_d0);
          this_01 = (SkeletonData *)0x0;
          goto LAB_00d047dc;
        }
        pcVar9 = (char *)Json::getString(pJVar8,"positionMode","percent");
        iVar4 = strcmp(pcVar9,"fixed");
        if (iVar4 == 0) {
          uVar34 = 0;
LAB_00d01b14:
          *(undefined4 *)(this_05 + 0x58) = uVar34;
        }
        else {
          iVar4 = strcmp(pcVar9,"percent");
          if (iVar4 == 0) {
            uVar34 = 1;
            goto LAB_00d01b14;
          }
        }
        pcVar9 = (char *)Json::getString(pJVar8,"spacingMode","length");
        iVar4 = strcmp(pcVar9,"length");
        if (iVar4 == 0) {
          uVar34 = 0;
LAB_00d01b7c:
          *(undefined4 *)(this_05 + 0x5c) = uVar34;
        }
        else {
          iVar4 = strcmp(pcVar9,"fixed");
          if (iVar4 == 0) {
            uVar34 = 1;
            goto LAB_00d01b7c;
          }
          iVar4 = strcmp(pcVar9,"percent");
          if (iVar4 == 0) {
            uVar34 = 2;
            goto LAB_00d01b7c;
          }
        }
        pcVar9 = (char *)Json::getString(pJVar8,"rotateMode","tangent");
        iVar4 = strcmp(pcVar9,"tangent");
        if (iVar4 == 0) {
          uVar34 = 0;
LAB_00d01c04:
          *(undefined4 *)(this_05 + 0x60) = uVar34;
        }
        else {
          iVar4 = strcmp(pcVar9,"chain");
          if (iVar4 == 0) {
            uVar34 = 1;
            goto LAB_00d01c04;
          }
          iVar4 = strcmp(pcVar9,"chainScale");
          if (iVar4 == 0) {
            uVar34 = 2;
            goto LAB_00d01c04;
          }
        }
        uVar34 = Json::getFloat(pJVar8,"rotation",0.0);
        *(undefined4 *)(this_05 + 100) = uVar34;
        fVar35 = (float)Json::getFloat(pJVar8,"position",0.0);
        *(float *)(this_05 + 0x68) = fVar35;
        if (*(int *)(this_05 + 0x58) == 0) {
          *(float *)(this_05 + 0x68) = fVar35 * *(float *)(this + 0x30);
        }
        fVar35 = (float)Json::getFloat(pJVar8,"spacing",0.0);
        *(float *)(this_05 + 0x6c) = fVar35;
        if (*(uint *)(this_05 + 0x5c) < 2) {
          *(float *)(this_05 + 0x6c) = fVar35 * *(float *)(this + 0x30);
        }
        uVar34 = Json::getFloat(pJVar8,"rotateMix",1.0);
        *(undefined4 *)(this_05 + 0x70) = uVar34;
        uVar34 = Json::getFloat(pJVar8,"translateMix",1.0);
        *(undefined4 *)(this_05 + 0x74) = uVar34;
        *(PathConstraintData **)(*(long *)(this_01 + 0x120) + lVar11 * 8) = this_05;
        pJVar8 = *(Json **)pJVar8;
        lVar11 = lVar11 + 1;
      } while (pJVar8 != (Json *)0x0);
    }
  }
  lVar11 = Json::getItem(this_00,"skins");
  if (lVar11 != 0) {
    uVar21 = (ulong)*(int *)(lVar11 + 0x14);
    uVar22 = *(ulong *)(this_01 + 0x70);
    if (uVar22 < uVar21) {
      uVar30 = *(undefined8 *)(this_01 + 0x78);
      *(ulong *)(this_01 + 0x70) = uVar21;
      plVar6 = (long *)SpineExtension::getInstance();
      uVar30 = (**(code **)(*plVar6 + 0x20))
                         (plVar6,uVar30,uVar21 << 3,
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                          ,0x5e);
      *(undefined8 *)(this_01 + 0x78) = uVar30;
      uVar21 = (ulong)*(int *)(lVar11 + 0x14);
      uVar22 = *(ulong *)(this_01 + 0x70);
    }
    uVar33 = *(ulong *)(this_01 + 0x68);
    *(ulong *)(this_01 + 0x68) = uVar21;
    if (uVar22 < uVar21) {
      uVar25 = (uint)((float)uVar21 * 1.75);
      uVar30 = *(undefined8 *)(this_01 + 0x78);
      if (uVar25 < 9) {
        uVar25 = 8;
      }
      *(long *)(this_01 + 0x70) = (long)(int)uVar25;
      plVar6 = (long *)SpineExtension::getInstance();
      uVar30 = (**(code **)(*plVar6 + 0x20))
                         (plVar6,uVar30,
                          -(ulong)(uVar25 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar25 << 3,
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                          ,0x52);
      uVar21 = *(ulong *)(this_01 + 0x68);
      *(undefined8 *)(this_01 + 0x78) = uVar30;
    }
    if (uVar33 < uVar21) {
      do {
        *(undefined8 *)(*(long *)(this_01 + 0x78) + uVar33 * 8) = 0;
        uVar33 = uVar33 + 1;
      } while (uVar21 != uVar33);
    }
    local_120 = *(Json **)(lVar11 + 8);
    if (local_120 != (Json *)0x0) {
      local_128 = 0;
      fVar35 = -1.0;
      do {
        pcVar9 = (char *)Json::getString(local_120,"name","");
        if (*pcVar9 == '\0') {
          pcVar9 = *(char **)(local_120 + 0x28);
        }
        pSVar16 = SpineObject::operator_new
                            (0x88,
                             "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonJson.cpp"
                             ,0x1a0);
        if (pcVar9 == (char *)0x0) {
          local_c8 = 0;
          local_c0 = (char *)0x0;
          local_d0 = &PTR__String_01c67868;
        }
        else {
          local_d0 = &PTR__String_01c67868;
          local_c8 = strlen(pcVar9);
          lVar11 = local_c8 + 1;
          plVar6 = (long *)SpineExtension::getInstance();
          local_c0 = (char *)(**(code **)(*plVar6 + 0x18))
                                       (plVar6,lVar11,
                                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                        ,0x39);
          memcpy(local_c0,pcVar9,local_c8 + 1);
        }
        Skin::Skin(pSVar16,(String *)&local_d0);
        pcVar32 = local_c0;
        local_d0 = &PTR__String_01c67868;
        if (local_c0 != (char *)0x0) {
          plVar6 = (long *)SpineExtension::getInstance();
          (**(code **)(*plVar6 + 0x28))
                    (plVar6,pcVar32,
                     "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                     ,0xc9);
        }
        SpineObject::~SpineObject((SpineObject *)&local_d0);
        lVar11 = Json::getItem(local_120,"bones");
        if (lVar11 != 0) {
          for (plVar6 = *(long **)(lVar11 + 8); plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
            pcVar32 = (char *)plVar6[3];
            local_d0 = &PTR__String_01c67868;
            if (pcVar32 == (char *)0x0) {
              local_c8 = 0;
              local_c0 = (char *)0x0;
            }
            else {
              local_c8 = strlen(pcVar32);
              lVar11 = local_c8 + 1;
              plVar15 = (long *)SpineExtension::getInstance();
              local_c0 = (char *)(**(code **)(*plVar15 + 0x18))
                                           (plVar15,lVar11,
                                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                            ,0x39);
              memcpy(local_c0,pcVar32,local_c8 + 1);
            }
            lVar11 = SkeletonData::findBone(this_01,(String *)&local_d0);
            pcVar32 = local_c0;
            local_d0 = &PTR__String_01c67868;
            if (local_c0 != (char *)0x0) {
              plVar15 = (long *)SpineExtension::getInstance();
              (**(code **)(*plVar15 + 0x28))
                        (plVar15,pcVar32,
                         "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                         ,0xc9);
            }
            SpineObject::~SpineObject((SpineObject *)&local_d0);
            if (lVar11 == 0) {
              if (this_01 != (SkeletonData *)0x0) {
                (**(code **)(*(long *)this_01 + 8))(this_01);
              }
              local_d0 = &PTR__String_01c67868;
              local_c8 = 0x15;
              plVar15 = (long *)SpineExtension::getInstance();
              local_c0 = (char *)(**(code **)(*plVar15 + 0x18))
                                           (plVar15,0x16,
                                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                            ,0x39);
              builtin_strncpy(local_c0,"Skin bone not found: ",0x16);
              goto LAB_00d046e0;
            }
            lVar14 = Skin::getBones(pSVar16);
            uVar22 = *(ulong *)(lVar14 + 8);
            if (uVar22 == *(ulong *)(lVar14 + 0x10)) {
              uVar25 = (uint)((float)uVar22 * 1.75);
              uVar30 = *(undefined8 *)(lVar14 + 0x18);
              if (uVar25 < 9) {
                uVar25 = 8;
              }
              *(long *)(lVar14 + 0x10) = (long)(int)uVar25;
              plVar15 = (long *)SpineExtension::getInstance();
              lVar17 = (**(code **)(*plVar15 + 0x20))
                                 (plVar15,uVar30,
                                  -(ulong)(uVar25 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar25 << 3
                                  ,
                                  "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                                  ,0x6a);
              lVar23 = *(long *)(lVar14 + 8);
              *(long *)(lVar14 + 0x18) = lVar17;
              *(long *)(lVar14 + 8) = lVar23 + 1;
              plVar15 = (long *)(lVar17 + lVar23 * 8);
            }
            else {
              *(ulong *)(lVar14 + 8) = uVar22 + 1;
              plVar15 = (long *)(*(long *)(lVar14 + 0x18) + uVar22 * 8);
            }
            *plVar15 = lVar11;
          }
        }
        lVar11 = Json::getItem(local_120,"ik");
        if (lVar11 != 0) {
          for (plVar6 = *(long **)(lVar11 + 8); plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
            pcVar32 = (char *)plVar6[3];
            local_d0 = &PTR__String_01c67868;
            if (pcVar32 == (char *)0x0) {
              local_c8 = 0;
              local_c0 = (char *)0x0;
            }
            else {
              local_c8 = strlen(pcVar32);
              lVar11 = local_c8 + 1;
              plVar15 = (long *)SpineExtension::getInstance();
              local_c0 = (char *)(**(code **)(*plVar15 + 0x18))
                                           (plVar15,lVar11,
                                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                            ,0x39);
              memcpy(local_c0,pcVar32,local_c8 + 1);
            }
            lVar11 = SkeletonData::findIkConstraint(this_01,(String *)&local_d0);
            pcVar32 = local_c0;
            local_d0 = &PTR__String_01c67868;
            if (local_c0 != (char *)0x0) {
              plVar15 = (long *)SpineExtension::getInstance();
              (**(code **)(*plVar15 + 0x28))
                        (plVar15,pcVar32,
                         "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                         ,0xc9);
            }
            SpineObject::~SpineObject((SpineObject *)&local_d0);
            if (lVar11 == 0) {
              if (this_01 != (SkeletonData *)0x0) {
                (**(code **)(*(long *)this_01 + 8))(this_01);
              }
              local_d0 = &PTR__String_01c67868;
              local_c8 = 0x1e;
              plVar15 = (long *)SpineExtension::getInstance();
              local_c0 = (char *)(**(code **)(*plVar15 + 0x18))
                                           (plVar15,0x1f,
                                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                            ,0x39);
              builtin_strncpy(local_c0,"Skin IK constraint not found: ",0x1f);
              goto LAB_00d046e0;
            }
            lVar14 = Skin::getConstraints(pSVar16);
            uVar22 = *(ulong *)(lVar14 + 8);
            if (uVar22 == *(ulong *)(lVar14 + 0x10)) {
              uVar25 = (uint)((float)uVar22 * 1.75);
              uVar30 = *(undefined8 *)(lVar14 + 0x18);
              if (uVar25 < 9) {
                uVar25 = 8;
              }
              *(long *)(lVar14 + 0x10) = (long)(int)uVar25;
              plVar15 = (long *)SpineExtension::getInstance();
              lVar17 = (**(code **)(*plVar15 + 0x20))
                                 (plVar15,uVar30,
                                  -(ulong)(uVar25 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar25 << 3
                                  ,
                                  "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                                  ,0x6a);
              lVar23 = *(long *)(lVar14 + 8);
              *(long *)(lVar14 + 0x18) = lVar17;
              *(long *)(lVar14 + 8) = lVar23 + 1;
              plVar15 = (long *)(lVar17 + lVar23 * 8);
            }
            else {
              *(ulong *)(lVar14 + 8) = uVar22 + 1;
              plVar15 = (long *)(*(long *)(lVar14 + 0x18) + uVar22 * 8);
            }
            *plVar15 = lVar11;
          }
        }
        lVar11 = Json::getItem(local_120,"transform");
        if (lVar11 != 0) {
          for (plVar6 = *(long **)(lVar11 + 8); plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
            pcVar32 = (char *)plVar6[3];
            local_d0 = &PTR__String_01c67868;
            if (pcVar32 == (char *)0x0) {
              local_c8 = 0;
              local_c0 = (char *)0x0;
            }
            else {
              local_c8 = strlen(pcVar32);
              lVar11 = local_c8 + 1;
              plVar15 = (long *)SpineExtension::getInstance();
              local_c0 = (char *)(**(code **)(*plVar15 + 0x18))
                                           (plVar15,lVar11,
                                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                            ,0x39);
              memcpy(local_c0,pcVar32,local_c8 + 1);
            }
            lVar11 = SkeletonData::findTransformConstraint(this_01,(String *)&local_d0);
            pcVar32 = local_c0;
            local_d0 = &PTR__String_01c67868;
            if (local_c0 != (char *)0x0) {
              plVar15 = (long *)SpineExtension::getInstance();
              (**(code **)(*plVar15 + 0x28))
                        (plVar15,pcVar32,
                         "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                         ,0xc9);
            }
            SpineObject::~SpineObject((SpineObject *)&local_d0);
            if (lVar11 == 0) {
              if (this_01 != (SkeletonData *)0x0) {
                (**(code **)(*(long *)this_01 + 8))(this_01);
              }
              local_d0 = &PTR__String_01c67868;
              local_c8 = 0x25;
              plVar15 = (long *)SpineExtension::getInstance();
              local_c0 = (char *)(**(code **)(*plVar15 + 0x18))
                                           (plVar15,0x26,
                                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                            ,0x39);
              builtin_strncpy(local_c0,"Skin transform constraint not found: ",0x26);
              goto LAB_00d046e0;
            }
            lVar14 = Skin::getConstraints(pSVar16);
            uVar22 = *(ulong *)(lVar14 + 8);
            if (uVar22 == *(ulong *)(lVar14 + 0x10)) {
              uVar25 = (uint)((float)uVar22 * 1.75);
              uVar30 = *(undefined8 *)(lVar14 + 0x18);
              if (uVar25 < 9) {
                uVar25 = 8;
              }
              *(long *)(lVar14 + 0x10) = (long)(int)uVar25;
              plVar15 = (long *)SpineExtension::getInstance();
              lVar17 = (**(code **)(*plVar15 + 0x20))
                                 (plVar15,uVar30,
                                  -(ulong)(uVar25 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar25 << 3
                                  ,
                                  "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                                  ,0x6a);
              lVar23 = *(long *)(lVar14 + 8);
              *(long *)(lVar14 + 0x18) = lVar17;
              *(long *)(lVar14 + 8) = lVar23 + 1;
              plVar15 = (long *)(lVar17 + lVar23 * 8);
            }
            else {
              *(ulong *)(lVar14 + 8) = uVar22 + 1;
              plVar15 = (long *)(*(long *)(lVar14 + 0x18) + uVar22 * 8);
            }
            *plVar15 = lVar11;
          }
        }
        lVar11 = Json::getItem(local_120,"path");
        if (lVar11 != 0) {
          plVar6 = *(long **)(lVar11 + 8);
joined_r0x00d02308:
          if (plVar6 != (long *)0x0) {
            pcVar32 = (char *)plVar6[3];
            local_d0 = &PTR__String_01c67868;
            if (pcVar32 == (char *)0x0) {
              local_c8 = 0;
              local_c0 = (char *)0x0;
            }
            else {
              local_c8 = strlen(pcVar32);
              lVar11 = local_c8 + 1;
              plVar15 = (long *)SpineExtension::getInstance();
              local_c0 = (char *)(**(code **)(*plVar15 + 0x18))
                                           (plVar15,lVar11,
                                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                            ,0x39);
              memcpy(local_c0,pcVar32,local_c8 + 1);
            }
            lVar11 = SkeletonData::findPathConstraint(this_01,(String *)&local_d0);
            pcVar32 = local_c0;
            local_d0 = &PTR__String_01c67868;
            if (local_c0 != (char *)0x0) {
              plVar15 = (long *)SpineExtension::getInstance();
              (**(code **)(*plVar15 + 0x28))
                        (plVar15,pcVar32,
                         "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                         ,0xc9);
            }
            SpineObject::~SpineObject((SpineObject *)&local_d0);
            if (lVar11 != 0) goto code_r0x00d023b0;
            if (this_01 != (SkeletonData *)0x0) {
              (**(code **)(*(long *)this_01 + 8))(this_01);
            }
            local_d0 = &PTR__String_01c67868;
            local_c8 = 0x20;
            plVar15 = (long *)SpineExtension::getInstance();
            local_c0 = (char *)(**(code **)(*plVar15 + 0x18))
                                         (plVar15,0x21,
                                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                          ,0x39);
            builtin_strncpy(local_c0,"Skin path constraint not found: ",0x21);
LAB_00d046e0:
            pcVar9 = *(char **)((long)plVar6 + 0x18);
            local_b8 = &PTR__String_01c67868;
            if (pcVar9 == (char *)0x0) {
              local_b0 = 0;
              local_a8 = (void *)0x0;
              setError(this,this_00,(String *)&local_d0,(String *)&local_b8);
              local_b8 = &PTR__String_01c67868;
            }
            else {
              local_b0 = strlen(pcVar9);
              lVar11 = local_b0 + 1;
              plVar6 = (long *)SpineExtension::getInstance();
              local_a8 = (void *)(**(code **)(*plVar6 + 0x18))
                                           (plVar6,lVar11,
                                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                            ,0x39);
              memcpy(local_a8,pcVar9,local_b0 + 1);
              pvVar7 = local_a8;
              setError(this,this_00,(String *)&local_d0,(String *)&local_b8);
              local_b8 = &PTR__String_01c67868;
              if (pvVar7 != (void *)0x0) {
                plVar6 = (long *)SpineExtension::getInstance();
                (**(code **)(*plVar6 + 0x28))
                          (plVar6,pvVar7,
                           "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                           ,0xc9);
              }
            }
            SpineObject::~SpineObject((SpineObject *)&local_b8);
            pcVar9 = local_c0;
            goto joined_r0x00d047ac;
          }
        }
        *(Skin **)(*(long *)(this_01 + 0x78) + local_128 * 8) = pSVar16;
        iVar4 = strcmp(pcVar9,"default");
        if (iVar4 == 0) {
          *(Skin **)(this_01 + 0x80) = pSVar16;
        }
        pJVar18 = (Json *)Json::getItem(local_120,"attachments");
        pJVar8 = local_120;
        if (pJVar18 != (Json *)0x0) {
          pJVar8 = pJVar18;
        }
        for (plVar6 = *(long **)(pJVar8 + 8); plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
          pcVar9 = (char *)plVar6[5];
          local_d0 = &PTR__String_01c67868;
          if (pcVar9 == (char *)0x0) {
            local_c8 = 0;
            local_c0 = (char *)0x0;
          }
          else {
            local_c8 = strlen(pcVar9);
            lVar11 = local_c8 + 1;
            plVar15 = (long *)SpineExtension::getInstance();
            local_c0 = (char *)(**(code **)(*plVar15 + 0x18))
                                         (plVar15,lVar11,
                                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                          ,0x39);
            memcpy(local_c0,pcVar9,local_c8 + 1);
          }
          pSVar13 = (SlotData *)SkeletonData::findSlot(this_01,(String *)&local_d0);
          pcVar9 = local_c0;
          local_d0 = &PTR__String_01c67868;
          if (local_c0 != (char *)0x0) {
            plVar15 = (long *)SpineExtension::getInstance();
            (**(code **)(*plVar15 + 0x28))
                      (plVar15,pcVar9,
                       "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                       ,0xc9);
          }
          SpineObject::~SpineObject((SpineObject *)&local_d0);
          for (pJVar8 = (Json *)plVar6[1]; pJVar8 != (Json *)0x0; pJVar8 = *(Json **)pJVar8) {
            __s = *(char **)(pJVar8 + 0x28);
            pcVar9 = (char *)Json::getString(pJVar8,"name",__s);
            pcVar32 = (char *)Json::getString(pJVar8,"path",pcVar9);
            __s1 = (char *)Json::getString(pJVar8,"type","region");
            iVar4 = strcmp(__s1,"region");
            if (iVar4 == 0) {
              plVar15 = *(long **)(this + 8);
              local_d0 = &PTR__String_01c67868;
              if (pcVar9 == (char *)0x0) {
                local_c8 = 0;
                local_c0 = (char *)0x0;
              }
              else {
                local_c8 = strlen(pcVar9);
                lVar11 = local_c8 + 1;
                plVar19 = (long *)SpineExtension::getInstance();
                local_c0 = (char *)(**(code **)(*plVar19 + 0x18))
                                             (plVar19,lVar11,
                                              "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                              ,0x39);
                memcpy(local_c0,pcVar9,local_c8 + 1);
              }
              local_b8 = &PTR__String_01c67868;
              if (pcVar32 == (char *)0x0) {
                local_b0 = 0;
                local_a8 = (void *)0x0;
              }
              else {
                local_b0 = strlen(pcVar32);
                lVar11 = local_b0 + 1;
                plVar19 = (long *)SpineExtension::getInstance();
                local_a8 = (void *)(**(code **)(*plVar19 + 0x18))
                                             (plVar19,lVar11,
                                              "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                              ,0x39);
                memcpy(local_a8,pcVar32,local_b0 + 1);
              }
              pMVar20 = (MeshAttachment *)
                        (**(code **)(*plVar15 + 0x18))(plVar15,pSVar16,&local_d0,&local_b8);
              pvVar7 = local_a8;
              local_b8 = &PTR__String_01c67868;
              if (local_a8 != (void *)0x0) {
                plVar15 = (long *)SpineExtension::getInstance();
                (**(code **)(*plVar15 + 0x28))
                          (plVar15,pvVar7,
                           "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                           ,0xc9);
              }
              SpineObject::~SpineObject((SpineObject *)&local_b8);
              pcVar9 = local_c0;
              local_d0 = &PTR__String_01c67868;
              if (local_c0 != (char *)0x0) {
                plVar15 = (long *)SpineExtension::getInstance();
                (**(code **)(*plVar15 + 0x28))
                          (plVar15,pcVar9,
                           "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                           ,0xc9);
              }
              SpineObject::~SpineObject((SpineObject *)&local_d0);
              if (pMVar20 != (MeshAttachment *)0x0) {
                pcVar9 = *(char **)(pMVar20 + 200);
                if (pcVar9 != pcVar32) {
                  if (pcVar9 != (char *)0x0) {
                    plVar15 = (long *)SpineExtension::getInstance();
                    (**(code **)(*plVar15 + 0x28))
                              (plVar15,pcVar9,
                               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                               ,0x8a);
                  }
                  if (pcVar32 == (char *)0x0) {
                    *(undefined8 *)(pMVar20 + 0xc0) = 0;
                    *(undefined8 *)(pMVar20 + 200) = 0;
                  }
                  else {
                    sVar10 = strlen(pcVar32);
                    *(size_t *)(pMVar20 + 0xc0) = sVar10;
                    plVar15 = (long *)SpineExtension::getInstance();
                    pvVar7 = (void *)(**(code **)(*plVar15 + 0x18))
                                               (plVar15,sVar10 + 1,
                                                "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                                ,0x91);
                    *(void **)(pMVar20 + 200) = pvVar7;
                    memcpy(pvVar7,pcVar32,*(long *)(pMVar20 + 0xc0) + 1);
                  }
                }
                fVar36 = (float)Json::getFloat(pJVar8,"x",0.0);
                *(float *)(pMVar20 + 0x40) = fVar36 * *(float *)(this + 0x30);
                fVar36 = (float)Json::getFloat(pJVar8,"y",0.0);
                *(float *)(pMVar20 + 0x44) = fVar36 * *(float *)(this + 0x30);
                uVar34 = Json::getFloat(pJVar8,"scaleX",1.0);
                *(undefined4 *)(pMVar20 + 0x4c) = uVar34;
                uVar34 = Json::getFloat(pJVar8,"scaleY",1.0);
                *(undefined4 *)(pMVar20 + 0x50) = uVar34;
                uVar34 = Json::getFloat(pJVar8,"rotation",0.0);
                *(undefined4 *)(pMVar20 + 0x48) = uVar34;
                fVar36 = (float)Json::getFloat(pJVar8,"width",32.0);
                *(float *)(pMVar20 + 0x54) = fVar36 * *(float *)(this + 0x30);
                fVar36 = (float)Json::getFloat(pJVar8,"height",32.0);
                *(float *)(pMVar20 + 0x58) = fVar36 * *(float *)(this + 0x30);
                pcVar9 = (char *)Json::getString(pJVar8,"color",(char *)0x0);
                if (pcVar9 != (char *)0x0) {
                  sVar10 = strlen(pcVar9);
                  fVar36 = fVar35;
                  if (1 < sVar10) {
                    local_b8 = (undefined **)
                               (CONCAT62((int6)((ulong)local_b8 >> 0x10),*(undefined2 *)pcVar9) &
                               0xffffffffff00ffff);
                    uVar22 = strtoul((char *)&local_b8,(char **)&local_d0,0x10);
                    fVar36 = -1.0;
                    if (*(char *)local_d0 == '\0') {
                      fVar36 = (float)(int)uVar22 / 255.0;
                    }
                  }
                  lVar11 = RegionAttachment::getColor((RegionAttachment *)pMVar20);
                  *(float *)(lVar11 + 8) = fVar36;
                  sVar10 = strlen(pcVar9);
                  fVar36 = fVar35;
                  if (3 < sVar10) {
                    local_b8 = (undefined **)
                               (CONCAT62((int6)((ulong)local_b8 >> 0x10),*(undefined2 *)(pcVar9 + 2)
                                        ) & 0xffffffffff00ffff);
                    uVar22 = strtoul((char *)&local_b8,(char **)&local_d0,0x10);
                    fVar36 = -1.0;
                    if (*(char *)local_d0 == '\0') {
                      fVar36 = (float)(int)uVar22 / 255.0;
                    }
                  }
                  lVar11 = RegionAttachment::getColor((RegionAttachment *)pMVar20);
                  *(float *)(lVar11 + 0xc) = fVar36;
                  sVar10 = strlen(pcVar9);
                  fVar36 = fVar35;
                  if (5 < sVar10) {
                    local_b8 = (undefined **)
                               (CONCAT62((int6)((ulong)local_b8 >> 0x10),*(undefined2 *)(pcVar9 + 4)
                                        ) & 0xffffffffff00ffff);
                    uVar22 = strtoul((char *)&local_b8,(char **)&local_d0,0x10);
                    fVar36 = -1.0;
                    if (*(char *)local_d0 == '\0') {
                      fVar36 = (float)(int)uVar22 / 255.0;
                    }
                  }
                  lVar11 = RegionAttachment::getColor((RegionAttachment *)pMVar20);
                  *(float *)(lVar11 + 0x10) = fVar36;
                  sVar10 = strlen(pcVar9);
                  fVar36 = fVar35;
                  if (7 < sVar10) {
                    local_b8 = (undefined **)
                               (CONCAT62((int6)((ulong)local_b8 >> 0x10),*(undefined2 *)(pcVar9 + 6)
                                        ) & 0xffffffffff00ffff);
                    uVar22 = strtoul((char *)&local_b8,(char **)&local_d0,0x10);
                    fVar36 = -1.0;
                    if (*(char *)local_d0 == '\0') {
                      fVar36 = (float)(int)uVar22 / 255.0;
                    }
                  }
                  lVar11 = RegionAttachment::getColor((RegionAttachment *)pMVar20);
                  *(float *)(lVar11 + 0x14) = fVar36;
                }
                RegionAttachment::updateOffset((RegionAttachment *)pMVar20);
                goto LAB_00d03894;
              }
            }
            else {
              iVar4 = strcmp(__s1,"mesh");
              if ((iVar4 == 0) || (iVar4 = strcmp(__s1,"linkedmesh"), iVar4 == 0)) {
                plVar15 = *(long **)(this + 8);
                local_d0 = &PTR__String_01c67868;
                if (pcVar9 == (char *)0x0) {
                  local_c8 = 0;
                  local_c0 = (char *)0x0;
                }
                else {
                  local_c8 = strlen(pcVar9);
                  lVar11 = local_c8 + 1;
                  plVar19 = (long *)SpineExtension::getInstance();
                  local_c0 = (char *)(**(code **)(*plVar19 + 0x18))
                                               (plVar19,lVar11,
                                                "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                                ,0x39);
                  memcpy(local_c0,pcVar9,local_c8 + 1);
                }
                local_b8 = &PTR__String_01c67868;
                if (pcVar32 == (char *)0x0) {
                  local_b0 = 0;
                  local_a8 = (void *)0x0;
                }
                else {
                  local_b0 = strlen(pcVar32);
                  lVar11 = local_b0 + 1;
                  plVar19 = (long *)SpineExtension::getInstance();
                  local_a8 = (void *)(**(code **)(*plVar19 + 0x18))
                                               (plVar19,lVar11,
                                                "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                                ,0x39);
                  memcpy(local_a8,pcVar32,local_b0 + 1);
                }
                pMVar20 = (MeshAttachment *)
                          (**(code **)(*plVar15 + 0x20))(plVar15,pSVar16,&local_d0,&local_b8);
                pvVar7 = local_a8;
                local_b8 = &PTR__String_01c67868;
                if (local_a8 != (void *)0x0) {
                  plVar15 = (long *)SpineExtension::getInstance();
                  (**(code **)(*plVar15 + 0x28))
                            (plVar15,pvVar7,
                             "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                             ,0xc9);
                }
                SpineObject::~SpineObject((SpineObject *)&local_b8);
                pcVar9 = local_c0;
                local_d0 = &PTR__String_01c67868;
                if (local_c0 != (char *)0x0) {
                  plVar15 = (long *)SpineExtension::getInstance();
                  (**(code **)(*plVar15 + 0x28))
                            (plVar15,pcVar9,
                             "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                             ,0xc9);
                }
                SpineObject::~SpineObject((SpineObject *)&local_d0);
                if (pMVar20 == (MeshAttachment *)0x0) goto LAB_00d03954;
                pcVar9 = *(char **)(pMVar20 + 0x148);
                if (pcVar9 != pcVar32) {
                  if (pcVar9 != (char *)0x0) {
                    plVar15 = (long *)SpineExtension::getInstance();
                    (**(code **)(*plVar15 + 0x28))
                              (plVar15,pcVar9,
                               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                               ,0x8a);
                  }
                  if (pcVar32 == (char *)0x0) {
                    *(undefined8 *)(pMVar20 + 0x140) = 0;
                    *(undefined8 *)(pMVar20 + 0x148) = 0;
                  }
                  else {
                    sVar10 = strlen(pcVar32);
                    *(size_t *)(pMVar20 + 0x140) = sVar10;
                    plVar15 = (long *)SpineExtension::getInstance();
                    pvVar7 = (void *)(**(code **)(*plVar15 + 0x18))
                                               (plVar15,sVar10 + 1,
                                                "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                                ,0x91);
                    *(void **)(pMVar20 + 0x148) = pvVar7;
                    memcpy(pvVar7,pcVar32,*(long *)(pMVar20 + 0x140) + 1);
                  }
                }
                pcVar9 = (char *)Json::getString(pJVar8,"color",(char *)0x0);
                if (pcVar9 != (char *)0x0) {
                  sVar10 = strlen(pcVar9);
                  fVar36 = fVar35;
                  if (1 < sVar10) {
                    local_b8 = (undefined **)
                               (CONCAT62((int6)((ulong)local_b8 >> 0x10),*(undefined2 *)pcVar9) &
                               0xffffffffff00ffff);
                    uVar22 = strtoul((char *)&local_b8,(char **)&local_d0,0x10);
                    fVar36 = -1.0;
                    if (*(char *)local_d0 == '\0') {
                      fVar36 = (float)(int)uVar22 / 255.0;
                    }
                  }
                  lVar11 = MeshAttachment::getColor(pMVar20);
                  *(float *)(lVar11 + 8) = fVar36;
                  sVar10 = strlen(pcVar9);
                  fVar36 = fVar35;
                  if (3 < sVar10) {
                    local_b8 = (undefined **)
                               (CONCAT62((int6)((ulong)local_b8 >> 0x10),*(undefined2 *)(pcVar9 + 2)
                                        ) & 0xffffffffff00ffff);
                    uVar22 = strtoul((char *)&local_b8,(char **)&local_d0,0x10);
                    fVar36 = -1.0;
                    if (*(char *)local_d0 == '\0') {
                      fVar36 = (float)(int)uVar22 / 255.0;
                    }
                  }
                  lVar11 = MeshAttachment::getColor(pMVar20);
                  *(float *)(lVar11 + 0xc) = fVar36;
                  sVar10 = strlen(pcVar9);
                  fVar36 = fVar35;
                  if (5 < sVar10) {
                    local_b8 = (undefined **)
                               (CONCAT62((int6)((ulong)local_b8 >> 0x10),*(undefined2 *)(pcVar9 + 4)
                                        ) & 0xffffffffff00ffff);
                    uVar22 = strtoul((char *)&local_b8,(char **)&local_d0,0x10);
                    fVar36 = -1.0;
                    if (*(char *)local_d0 == '\0') {
                      fVar36 = (float)(int)uVar22 / 255.0;
                    }
                  }
                  lVar11 = MeshAttachment::getColor(pMVar20);
                  *(float *)(lVar11 + 0x10) = fVar36;
                  sVar10 = strlen(pcVar9);
                  fVar36 = fVar35;
                  if (7 < sVar10) {
                    local_b8 = (undefined **)
                               (CONCAT62((int6)((ulong)local_b8 >> 0x10),*(undefined2 *)(pcVar9 + 6)
                                        ) & 0xffffffffff00ffff);
                    uVar22 = strtoul((char *)&local_b8,(char **)&local_d0,0x10);
                    fVar36 = -1.0;
                    if (*(char *)local_d0 == '\0') {
                      fVar36 = (float)(int)uVar22 / 255.0;
                    }
                  }
                  lVar11 = MeshAttachment::getColor(pMVar20);
                  *(float *)(lVar11 + 0x14) = fVar36;
                }
                fVar36 = (float)Json::getFloat(pJVar8,"width",32.0);
                *(float *)(pMVar20 + 0x160) = fVar36 * *(float *)(this + 0x30);
                fVar36 = (float)Json::getFloat(pJVar8,"height",32.0);
                *(float *)(pMVar20 + 0x164) = fVar36 * *(float *)(this + 0x30);
                lVar11 = Json::getItem(pJVar8,"parent");
                if (lVar11 == 0) {
                  lVar11 = Json::getItem(pJVar8,"triangles");
                  uVar21 = (ulong)*(int *)(lVar11 + 0x14);
                  uVar22 = *(ulong *)(pMVar20 + 0x108);
                  if (uVar22 < uVar21) {
                    uVar30 = *(undefined8 *)(pMVar20 + 0x110);
                    *(ulong *)(pMVar20 + 0x108) = uVar21;
                    plVar15 = (long *)SpineExtension::getInstance();
                    uVar30 = (**(code **)(*plVar15 + 0x20))
                                       (plVar15,uVar30,uVar21 << 1,
                                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                                        ,0x5e);
                    *(undefined8 *)(pMVar20 + 0x110) = uVar30;
                    uVar21 = (ulong)*(int *)(lVar11 + 0x14);
                    uVar22 = *(ulong *)(pMVar20 + 0x108);
                  }
                  uVar33 = *(ulong *)(pMVar20 + 0x100);
                  *(ulong *)(pMVar20 + 0x100) = uVar21;
                  if (uVar22 < uVar21) {
                    uVar25 = (uint)((float)uVar21 * 1.75);
                    uVar30 = *(undefined8 *)(pMVar20 + 0x110);
                    if (uVar25 < 9) {
                      uVar25 = 8;
                    }
                    *(long *)(pMVar20 + 0x108) = (long)(int)uVar25;
                    plVar15 = (long *)SpineExtension::getInstance();
                    uVar30 = (**(code **)(*plVar15 + 0x20))
                                       (plVar15,uVar30,
                                        -(ulong)(uVar25 >> 0x1f) & 0xfffffffe00000000 |
                                        (ulong)uVar25 << 1,
                                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                                        ,0x52);
                    *(undefined8 *)(pMVar20 + 0x110) = uVar30;
                    lVar14 = *(ulong *)(pMVar20 + 0x100) - uVar33;
                    if (*(ulong *)(pMVar20 + 0x100) < uVar33 || lVar14 == 0) goto LAB_00d02ec0;
LAB_00d02ed4:
                    memset((void *)(*(long *)(pMVar20 + 0x110) + uVar33 * 2),0,lVar14 << 1);
                    plVar15 = *(long **)(lVar11 + 8);
                  }
                  else {
                    lVar14 = uVar21 - uVar33;
                    if (uVar33 <= uVar21 && lVar14 != 0) goto LAB_00d02ed4;
LAB_00d02ec0:
                    plVar15 = *(long **)(lVar11 + 8);
                  }
                  if (plVar15 != (long *)0x0) {
                    puVar27 = *(undefined2 **)(pMVar20 + 0x110);
                    do {
                      *puVar27 = (short)(int)plVar15[4];
                      plVar15 = (long *)*plVar15;
                      puVar27 = puVar27 + 1;
                    } while (plVar15 != (long *)0x0);
                  }
                  lVar11 = Json::getItem(pJVar8,"uvs");
                  uVar21 = (ulong)*(int *)(lVar11 + 0x14);
                  uVar22 = *(ulong *)(pMVar20 + 0xe8);
                  if (uVar22 < uVar21) {
                    uVar30 = *(undefined8 *)(pMVar20 + 0xf0);
                    *(ulong *)(pMVar20 + 0xe8) = uVar21;
                    plVar15 = (long *)SpineExtension::getInstance();
                    uVar30 = (**(code **)(*plVar15 + 0x20))
                                       (plVar15,uVar30,uVar21 << 2,
                                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                                        ,0x5e);
                    uVar22 = *(ulong *)(pMVar20 + 0xe8);
                    *(undefined8 *)(pMVar20 + 0xf0) = uVar30;
                  }
                  uVar31 = *(ulong *)(pMVar20 + 0xe0);
                  *(ulong *)(pMVar20 + 0xe0) = uVar21;
                  uVar33 = uVar21;
                  if (uVar22 < uVar21) {
                    uVar25 = (uint)((float)uVar21 * 1.75);
                    uVar30 = *(undefined8 *)(pMVar20 + 0xf0);
                    if (uVar25 < 9) {
                      uVar25 = 8;
                    }
                    *(long *)(pMVar20 + 0xe8) = (long)(int)uVar25;
                    plVar15 = (long *)SpineExtension::getInstance();
                    uVar30 = (**(code **)(*plVar15 + 0x20))
                                       (plVar15,uVar30,
                                        -(ulong)(uVar25 >> 0x1f) & 0xfffffffc00000000 |
                                        (ulong)uVar25 << 2,
                                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                                        ,0x52);
                    uVar33 = *(ulong *)(pMVar20 + 0xe0);
                    *(undefined8 *)(pMVar20 + 0xf0) = uVar30;
                  }
                  if (uVar31 <= uVar33 && uVar33 - uVar31 != 0) {
                    memset((void *)(*(long *)(pMVar20 + 0xf0) + uVar31 * 4),0,(uVar33 - uVar31) * 4)
                    ;
                  }
                  plVar15 = *(long **)(lVar11 + 8);
                  if (plVar15 != (long *)0x0) {
                    puVar26 = *(undefined4 **)(pMVar20 + 0xf0);
                    do {
                      *puVar26 = *(undefined4 *)((long)plVar15 + 0x24);
                      plVar15 = (long *)*plVar15;
                      puVar26 = puVar26 + 1;
                    } while (plVar15 != (long *)0x0);
                  }
                  readVertices(this,pJVar8,(VertexAttachment *)pMVar20,uVar21);
                  MeshAttachment::updateUVs(pMVar20);
                  uVar34 = Json::getInt(pJVar8,"hull",0);
                  *(undefined4 *)(pMVar20 + 0x180) = uVar34;
                  lVar11 = Json::getItem(pJVar8,"edges");
                  if (lVar11 != 0) {
                    uVar21 = (ulong)*(int *)(lVar11 + 0x14);
                    uVar22 = *(ulong *)(pMVar20 + 0x128);
                    if (uVar22 < uVar21) {
                      uVar30 = *(undefined8 *)(pMVar20 + 0x130);
                      *(ulong *)(pMVar20 + 0x128) = uVar21;
                      plVar15 = (long *)SpineExtension::getInstance();
                      uVar30 = (**(code **)(*plVar15 + 0x20))
                                         (plVar15,uVar30,uVar21 << 1,
                                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                                          ,0x5e);
                      *(undefined8 *)(pMVar20 + 0x130) = uVar30;
                      uVar21 = (ulong)*(int *)(lVar11 + 0x14);
                      uVar22 = *(ulong *)(pMVar20 + 0x128);
                    }
                    uVar33 = *(ulong *)(pMVar20 + 0x120);
                    *(ulong *)(pMVar20 + 0x120) = uVar21;
                    if (uVar22 < uVar21) {
                      uVar25 = (uint)((float)uVar21 * 1.75);
                      uVar30 = *(undefined8 *)(pMVar20 + 0x130);
                      if (uVar25 < 9) {
                        uVar25 = 8;
                      }
                      *(long *)(pMVar20 + 0x128) = (long)(int)uVar25;
                      plVar15 = (long *)SpineExtension::getInstance();
                      uVar30 = (**(code **)(*plVar15 + 0x20))
                                         (plVar15,uVar30,
                                          -(ulong)(uVar25 >> 0x1f) & 0xfffffffe00000000 |
                                          (ulong)uVar25 << 1,
                                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                                          ,0x52);
                      uVar21 = *(ulong *)(pMVar20 + 0x120);
                      *(undefined8 *)(pMVar20 + 0x130) = uVar30;
                    }
                    if (uVar33 <= uVar21 && uVar21 - uVar33 != 0) {
                      memset((void *)(*(long *)(pMVar20 + 0x130) + uVar33 * 2),0,
                             (uVar21 - uVar33) * 2);
                    }
                    plVar15 = *(long **)(lVar11 + 8);
                    if (plVar15 != (long *)0x0) {
                      puVar27 = *(undefined2 **)(pMVar20 + 0x130);
                      do {
                        *puVar27 = (short)(int)plVar15[4];
                        plVar15 = (long *)*plVar15;
                        puVar27 = puVar27 + 1;
                      } while (plVar15 != (long *)0x0);
                    }
                  }
                  goto LAB_00d03894;
                }
                iVar4 = Json::getInt(pJVar8,"deform",1);
                this_06 = SpineObject::operator_new
                                    (0x50,
                                     "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonJson.cpp"
                                     ,0x254);
                pcVar9 = (char *)Json::getString(pJVar8,"skin",(char *)0x0);
                local_d0 = &PTR__String_01c67868;
                if (pcVar9 == (char *)0x0) {
                  local_c8 = 0;
                  local_c0 = (char *)0x0;
                }
                else {
                  local_c8 = strlen(pcVar9);
                  lVar14 = local_c8 + 1;
                  plVar15 = (long *)SpineExtension::getInstance();
                  local_c0 = (char *)(**(code **)(*plVar15 + 0x18))
                                               (plVar15,lVar14,
                                                "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                                ,0x39);
                  memcpy(local_c0,pcVar9,local_c8 + 1);
                }
                iVar5 = SlotData::getIndex(pSVar13);
                pcVar9 = *(char **)(lVar11 + 0x18);
                local_b8 = &PTR__String_01c67868;
                if (pcVar9 == (char *)0x0) {
                  local_b0 = 0;
                  local_a8 = (void *)0x0;
                }
                else {
                  local_b0 = strlen(pcVar9);
                  lVar11 = local_b0 + 1;
                  plVar15 = (long *)SpineExtension::getInstance();
                  local_a8 = (void *)(**(code **)(*plVar15 + 0x18))
                                               (plVar15,lVar11,
                                                "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                                ,0x39);
                  memcpy(local_a8,pcVar9,local_b0 + 1);
                }
                LinkedMesh::LinkedMesh
                          (this_06,pMVar20,(String *)&local_d0,(long)iVar5,(String *)&local_b8,
                           iVar4 != 0);
                pvVar7 = local_a8;
                local_b8 = &PTR__String_01c67868;
                if (local_a8 != (void *)0x0) {
                  plVar15 = (long *)SpineExtension::getInstance();
                  (**(code **)(*plVar15 + 0x28))
                            (plVar15,pvVar7,
                             "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                             ,0xc9);
                }
                SpineObject::~SpineObject((SpineObject *)&local_b8);
                pcVar9 = local_c0;
                local_d0 = &PTR__String_01c67868;
                if (local_c0 != (char *)0x0) {
                  plVar15 = (long *)SpineExtension::getInstance();
                  (**(code **)(*plVar15 + 0x28))
                            (plVar15,pcVar9,
                             "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                             ,0xc9);
                }
                SpineObject::~SpineObject((SpineObject *)&local_d0);
                uVar22 = *(ulong *)(this + 0x18);
                if (uVar22 == *(ulong *)(this + 0x20)) {
                  uVar25 = (uint)((float)uVar22 * 1.75);
                  uVar30 = *(undefined8 *)(this + 0x28);
                  if (uVar25 < 9) {
                    uVar25 = 8;
                  }
                  *(long *)(this + 0x20) = (long)(int)uVar25;
                  plVar15 = (long *)SpineExtension::getInstance();
                  lVar11 = (**(code **)(*plVar15 + 0x20))
                                     (plVar15,uVar30,
                                      -(ulong)(uVar25 >> 0x1f) & 0xfffffff800000000 |
                                      (ulong)uVar25 << 3,
                                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                                      ,0x6a);
                  lVar14 = *(long *)(this + 0x18);
                  *(long *)(this + 0x28) = lVar11;
                  *(long *)(this + 0x18) = lVar14 + 1;
                  *(LinkedMesh **)(lVar11 + lVar14 * 8) = this_06;
                }
                else {
                  *(ulong *)(this + 0x18) = uVar22 + 1;
                  *(LinkedMesh **)(*(long *)(this + 0x28) + uVar22 * 8) = this_06;
                }
              }
              else {
                iVar4 = strcmp(__s1,"boundingbox");
                if (iVar4 == 0) {
                  plVar15 = *(long **)(this + 8);
                  local_d0 = &PTR__String_01c67868;
                  if (pcVar9 == (char *)0x0) {
                    local_c8 = 0;
                    local_c0 = (char *)0x0;
                  }
                  else {
                    local_c8 = strlen(pcVar9);
                    lVar11 = local_c8 + 1;
                    plVar19 = (long *)SpineExtension::getInstance();
                    local_c0 = (char *)(**(code **)(*plVar19 + 0x18))
                                                 (plVar19,lVar11,
                                                  "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                                  ,0x39);
                    memcpy(local_c0,pcVar9,local_c8 + 1);
                  }
                  pMVar20 = (MeshAttachment *)
                            (**(code **)(*plVar15 + 0x28))(plVar15,pSVar16,&local_d0);
                  pcVar9 = local_c0;
                  local_d0 = &PTR__String_01c67868;
                  if (local_c0 != (char *)0x0) {
                    plVar15 = (long *)SpineExtension::getInstance();
                    (**(code **)(*plVar15 + 0x28))
                              (plVar15,pcVar9,
                               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                               ,0xc9);
                  }
                  SpineObject::~SpineObject((SpineObject *)&local_d0);
LAB_00d035d4:
                  iVar4 = Json::getInt(pJVar8,"vertexCount",0);
                  readVertices(this,pJVar8,(VertexAttachment *)pMVar20,(long)(iVar4 << 1));
                }
                else {
                  iVar4 = strcmp(__s1,"path");
                  if (iVar4 == 0) {
                    plVar15 = *(long **)(this + 8);
                    local_d0 = &PTR__String_01c67868;
                    if (pcVar9 == (char *)0x0) {
                      local_c8 = 0;
                      local_c0 = (char *)0x0;
                    }
                    else {
                      local_c8 = strlen(pcVar9);
                      lVar11 = local_c8 + 1;
                      plVar19 = (long *)SpineExtension::getInstance();
                      local_c0 = (char *)(**(code **)(*plVar19 + 0x18))
                                                   (plVar19,lVar11,
                                                                                                        
                                                  "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                                  ,0x39);
                      memcpy(local_c0,pcVar9,local_c8 + 1);
                    }
                    pMVar20 = (MeshAttachment *)
                              (**(code **)(*plVar15 + 0x30))(plVar15,pSVar16,&local_d0);
                    pcVar9 = local_c0;
                    local_d0 = &PTR__String_01c67868;
                    if (local_c0 != (char *)0x0) {
                      plVar15 = (long *)SpineExtension::getInstance();
                      (**(code **)(*plVar15 + 0x28))
                                (plVar15,pcVar9,
                                 "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                 ,0xc9);
                    }
                    SpineObject::~SpineObject((SpineObject *)&local_d0);
                    iVar4 = Json::getInt(pJVar8,"closed",0);
                    *(bool *)(pMVar20 + 0xa0) = iVar4 != 0;
                    iVar4 = Json::getInt(pJVar8,"constantSpeed",1);
                    *(bool *)(pMVar20 + 0xa1) = iVar4 != 0;
                    iVar4 = Json::getInt(pJVar8,"vertexCount",0);
                    readVertices(this,pJVar8,(VertexAttachment *)pMVar20,(long)(iVar4 << 1));
                    uVar22 = *(ulong *)(pMVar20 + 0x90);
                    uVar21 = (ulong)(iVar4 / 3);
                    if (uVar22 < uVar21) {
                      uVar30 = *(undefined8 *)(pMVar20 + 0x98);
                      *(ulong *)(pMVar20 + 0x90) = uVar21;
                      plVar15 = (long *)SpineExtension::getInstance();
                      uVar30 = (**(code **)(*plVar15 + 0x20))
                                         (plVar15,uVar30,uVar21 << 2,
                                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                                          ,0x5e);
                      uVar22 = *(ulong *)(pMVar20 + 0x90);
                      *(undefined8 *)(pMVar20 + 0x98) = uVar30;
                    }
                    uVar33 = *(ulong *)(pMVar20 + 0x88);
                    *(ulong *)(pMVar20 + 0x88) = uVar21;
                    if (uVar22 < uVar21) {
                      uVar25 = (uint)((float)uVar21 * 1.75);
                      uVar30 = *(undefined8 *)(pMVar20 + 0x98);
                      if (uVar25 < 9) {
                        uVar25 = 8;
                      }
                      *(long *)(pMVar20 + 0x90) = (long)(int)uVar25;
                      plVar15 = (long *)SpineExtension::getInstance();
                      uVar30 = (**(code **)(*plVar15 + 0x20))
                                         (plVar15,uVar30,
                                          -(ulong)(uVar25 >> 0x1f) & 0xfffffffc00000000 |
                                          (ulong)uVar25 << 2,
                                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                                          ,0x52);
                      uVar21 = *(ulong *)(pMVar20 + 0x88);
                      *(undefined8 *)(pMVar20 + 0x98) = uVar30;
                    }
                    if (uVar33 <= uVar21 && uVar21 - uVar33 != 0) {
                      memset((void *)(*(long *)(pMVar20 + 0x98) + uVar33 * 4),0,
                             (uVar21 - uVar33) * 4);
                    }
                    lVar11 = Json::getItem(pJVar8,"lengths");
                    plVar15 = *(long **)(lVar11 + 8);
                    if (plVar15 != (long *)0x0) {
                      pfVar28 = *(float **)(pMVar20 + 0x98);
                      do {
                        *pfVar28 = *(float *)((long)plVar15 + 0x24) * *(float *)(this + 0x30);
                        plVar15 = (long *)*plVar15;
                        pfVar28 = pfVar28 + 1;
                      } while (plVar15 != (long *)0x0);
                    }
                  }
                  else {
                    iVar4 = strcmp(__s1,"clipping");
                    if (iVar4 == 0) {
                      plVar15 = *(long **)(this + 8);
                      local_d0 = &PTR__String_01c67868;
                      if (pcVar9 == (char *)0x0) {
                        local_c8 = 0;
                        local_c0 = (char *)0x0;
                      }
                      else {
                        local_c8 = strlen(pcVar9);
                        lVar11 = local_c8 + 1;
                        plVar19 = (long *)SpineExtension::getInstance();
                        local_c0 = (char *)(**(code **)(*plVar19 + 0x18))
                                                     (plVar19,lVar11,
                                                                                                            
                                                  "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                                  ,0x39);
                        memcpy(local_c0,pcVar9,local_c8 + 1);
                      }
                      pMVar20 = (MeshAttachment *)
                                (**(code **)(*plVar15 + 0x40))(plVar15,pSVar16,&local_d0);
                      pcVar9 = local_c0;
                      local_d0 = &PTR__String_01c67868;
                      if (local_c0 != (char *)0x0) {
                        plVar15 = (long *)SpineExtension::getInstance();
                        (**(code **)(*plVar15 + 0x28))
                                  (plVar15,pcVar9,
                                   "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                   ,0xc9);
                      }
                      SpineObject::~SpineObject((SpineObject *)&local_d0);
                      pcVar9 = (char *)Json::getString(pJVar8,"end",(char *)0x0);
                      if (pcVar9 != (char *)0x0) {
                        local_d0 = &PTR__String_01c67868;
                        local_c8 = strlen(pcVar9);
                        lVar11 = local_c8 + 1;
                        plVar15 = (long *)SpineExtension::getInstance();
                        local_c0 = (char *)(**(code **)(*plVar15 + 0x18))
                                                     (plVar15,lVar11,
                                                                                                            
                                                  "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                                  ,0x39);
                        memcpy(local_c0,pcVar9,local_c8 + 1);
                        uVar30 = SkeletonData::findSlot(this_01,(String *)&local_d0);
                        pcVar9 = local_c0;
                        *(undefined8 *)(pMVar20 + 0x80) = uVar30;
                        local_d0 = &PTR__String_01c67868;
                        if (local_c0 != (char *)0x0) {
                          plVar15 = (long *)SpineExtension::getInstance();
                          (**(code **)(*plVar15 + 0x28))
                                    (plVar15,pcVar9,
                                     "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                     ,0xc9);
                        }
                        SpineObject::~SpineObject((SpineObject *)&local_d0);
                      }
                      goto LAB_00d035d4;
                    }
                    iVar4 = strcmp(__s1,"point");
                    if (iVar4 != 0) {
                      if (this_01 != (SkeletonData *)0x0) {
                        (**(code **)(*(long *)this_01 + 8))();
                      }
                      local_c8 = 0x19;
                      local_d0 = &PTR__String_01c67868;
                      plVar6 = (long *)SpineExtension::getInstance();
                      local_c0 = (char *)(**(code **)(*plVar6 + 0x18))
                                                   (plVar6,0x1a,
                                                                                                        
                                                  "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                                  ,0x39);
                      builtin_strncpy(local_c0,"Unknown attachment type: ",0x1a);
                      local_b8 = &PTR__String_01c67868;
                      if (__s1 == (char *)0x0) {
                        local_b0 = 0;
                        local_a8 = (void *)0x0;
                        setError(this,this_00,(String *)&local_d0,(String *)&local_b8);
                        local_b8 = &PTR__String_01c67868;
                      }
                      else {
                        local_b0 = strlen(__s1);
                        lVar11 = local_b0 + 1;
                        plVar6 = (long *)SpineExtension::getInstance();
                        local_a8 = (void *)(**(code **)(*plVar6 + 0x18))
                                                     (plVar6,lVar11,
                                                                                                            
                                                  "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                                  ,0x39);
                        memcpy(local_a8,__s1,local_b0 + 1);
                        pvVar7 = local_a8;
                        setError(this,this_00,(String *)&local_d0,(String *)&local_b8);
                        local_b8 = &PTR__String_01c67868;
                        if (pvVar7 != (void *)0x0) {
                          plVar6 = (long *)SpineExtension::getInstance();
                          (**(code **)(*plVar6 + 0x28))
                                    (plVar6,pvVar7,
                                     "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                     ,0xc9);
                        }
                      }
                      SpineObject::~SpineObject((SpineObject *)&local_b8);
                      pcVar9 = local_c0;
                      goto joined_r0x00d047ac;
                    }
                    plVar15 = *(long **)(this + 8);
                    local_d0 = &PTR__String_01c67868;
                    if (pcVar9 == (char *)0x0) {
                      local_c8 = 0;
                      local_c0 = (char *)0x0;
                    }
                    else {
                      local_c8 = strlen(pcVar9);
                      lVar11 = local_c8 + 1;
                      plVar19 = (long *)SpineExtension::getInstance();
                      local_c0 = (char *)(**(code **)(*plVar19 + 0x18))
                                                   (plVar19,lVar11,
                                                                                                        
                                                  "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                                  ,0x39);
                      memcpy(local_c0,pcVar9,local_c8 + 1);
                    }
                    pMVar20 = (MeshAttachment *)
                              (**(code **)(*plVar15 + 0x38))(plVar15,pSVar16,&local_d0);
                    pcVar9 = local_c0;
                    local_d0 = &PTR__String_01c67868;
                    if (local_c0 != (char *)0x0) {
                      plVar15 = (long *)SpineExtension::getInstance();
                      (**(code **)(*plVar15 + 0x28))
                                (plVar15,pcVar9,
                                 "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                 ,0xc9);
                    }
                    SpineObject::~SpineObject((SpineObject *)&local_d0);
                    fVar36 = (float)Json::getFloat(pJVar8,"x",0.0);
                    *(float *)(pMVar20 + 0x24) = fVar36 * *(float *)(this + 0x30);
                    fVar36 = (float)Json::getFloat(pJVar8,"y",0.0);
                    *(float *)(pMVar20 + 0x28) = fVar36 * *(float *)(this + 0x30);
                    uVar34 = Json::getFloat(pJVar8,"rotation",0.0);
                    *(undefined4 *)(pMVar20 + 0x2c) = uVar34;
                  }
                }
LAB_00d03894:
                (**(code **)(**(long **)(this + 8) + 0x48))(*(long **)(this + 8),pMVar20);
              }
              iVar4 = SlotData::getIndex(pSVar13);
              local_d0 = &PTR__String_01c67868;
              if (__s == (char *)0x0) {
                local_c8 = 0;
                local_c0 = (char *)0x0;
              }
              else {
                local_c8 = strlen(__s);
                lVar11 = local_c8 + 1;
                plVar15 = (long *)SpineExtension::getInstance();
                local_c0 = (char *)(**(code **)(*plVar15 + 0x18))
                                             (plVar15,lVar11,
                                              "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                              ,0x39);
                memcpy(local_c0,__s,local_c8 + 1);
              }
              Skin::setAttachment(pSVar16,(long)iVar4,(String *)&local_d0,(Attachment *)pMVar20);
              pcVar9 = local_c0;
              local_d0 = &PTR__String_01c67868;
              if (local_c0 != (char *)0x0) {
                plVar15 = (long *)SpineExtension::getInstance();
                (**(code **)(*plVar15 + 0x28))
                          (plVar15,pcVar9,
                           "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                           ,0xc9);
              }
              SpineObject::~SpineObject((SpineObject *)&local_d0);
            }
LAB_00d03954:
          }
        }
        local_120 = *(Json **)local_120;
        local_128 = local_128 + 1;
      } while (local_120 != (Json *)0x0);
    }
  }
  uVar22 = *(ulong *)(this + 0x18);
  if (0 < (int)uVar22) {
    uVar21 = 0;
    do {
      lVar11 = *(long *)(*(long *)(this + 0x28) + uVar21 * 8);
      if (*(long *)(lVar11 + 0x18) == 0) {
        pSVar16 = (Skin *)SkeletonData::getDefaultSkin(this_01);
      }
      else {
        pSVar16 = (Skin *)SkeletonData::findSkin(this_01,(String *)(lVar11 + 0x10));
      }
      if ((pSVar16 != (Skin *)0x0) &&
         (pMVar20 = (MeshAttachment *)
                    Skin::getAttachment(pSVar16,*(ulong *)(lVar11 + 0x28),(String *)(lVar11 + 0x30))
         , pMVar20 != (MeshAttachment *)0x0)) {
        if (*(char *)(lVar11 + 0x48) == '\0') {
          this_07 = *(MeshAttachment **)(lVar11 + 8);
          pMVar24 = this_07;
        }
        else {
          this_07 = *(MeshAttachment **)(lVar11 + 8);
          pMVar24 = pMVar20;
        }
        *(MeshAttachment **)(this_07 + 0x70) = pMVar24;
        MeshAttachment::setParentMesh(this_07,pMVar20);
        MeshAttachment::updateUVs(*(MeshAttachment **)(lVar11 + 8));
        (**(code **)(**(long **)(this + 8) + 0x48))
                  (*(long **)(this + 8),*(undefined8 *)(lVar11 + 8));
      }
      uVar21 = uVar21 + 1;
    } while ((uVar22 & 0xffffffff) != uVar21);
    uVar22 = *(ulong *)(this + 0x18);
    if (0 < (int)uVar22) {
      uVar21 = (long)(int)uVar22;
      do {
        uVar31 = uVar21 - 1;
        plVar6 = *(long **)(*(long *)(this + 0x28) + uVar31 * 8);
        uVar33 = uVar22;
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 8))();
          uVar33 = *(ulong *)(this + 0x18);
        }
        uVar22 = uVar33 - 1;
        *(ulong *)(this + 0x18) = uVar22;
        if (uVar31 < uVar22) {
          do {
            lVar11 = uVar21 * 8;
            uVar21 = uVar21 + 1;
            puVar1 = (undefined8 *)(*(long *)(this + 0x28) + lVar11);
            uVar30 = puVar1[-1];
            puVar1[-1] = *puVar1;
            *(undefined8 *)(*(long *)(this + 0x28) + lVar11) = uVar30;
          } while (uVar33 != uVar21);
        }
        uVar21 = uVar31;
      } while (0 < (long)uVar31);
    }
  }
  *(undefined8 *)(this + 0x18) = 0;
  lVar11 = Json::getItem(this_00,"events");
  if (lVar11 != 0) {
    uVar21 = (ulong)*(int *)(lVar11 + 0x14);
    uVar22 = *(ulong *)(this_01 + 0x98);
    if (uVar22 < uVar21) {
      uVar30 = *(undefined8 *)(this_01 + 0xa0);
      *(ulong *)(this_01 + 0x98) = uVar21;
      plVar6 = (long *)SpineExtension::getInstance();
      uVar30 = (**(code **)(*plVar6 + 0x20))
                         (plVar6,uVar30,uVar21 << 3,
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                          ,0x5e);
      *(undefined8 *)(this_01 + 0xa0) = uVar30;
      uVar21 = (ulong)*(int *)(lVar11 + 0x14);
      uVar22 = *(ulong *)(this_01 + 0x98);
    }
    uVar33 = *(ulong *)(this_01 + 0x90);
    *(ulong *)(this_01 + 0x90) = uVar21;
    if (uVar22 < uVar21) {
      uVar25 = (uint)((float)uVar21 * 1.75);
      uVar30 = *(undefined8 *)(this_01 + 0xa0);
      if (uVar25 < 9) {
        uVar25 = 8;
      }
      *(long *)(this_01 + 0x98) = (long)(int)uVar25;
      plVar6 = (long *)SpineExtension::getInstance();
      uVar30 = (**(code **)(*plVar6 + 0x20))
                         (plVar6,uVar30,
                          -(ulong)(uVar25 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar25 << 3,
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                          ,0x52);
      uVar21 = *(ulong *)(this_01 + 0x90);
      *(undefined8 *)(this_01 + 0xa0) = uVar30;
    }
    if (uVar33 < uVar21) {
      do {
        *(undefined8 *)(*(long *)(this_01 + 0xa0) + uVar33 * 8) = 0;
        uVar33 = uVar33 + 1;
      } while (uVar21 != uVar33);
    }
    pJVar8 = *(Json **)(lVar11 + 8);
    if (pJVar8 != (Json *)0x0) {
      lVar11 = 0;
      do {
        this_08 = SpineObject::operator_new
                            (0x60,
                             "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonJson.cpp"
                             ,0x2ba);
        pcVar9 = *(char **)(pJVar8 + 0x28);
        if (pcVar9 == (char *)0x0) {
          local_c8 = 0;
          local_c0 = (char *)0x0;
          local_d0 = &PTR__String_01c67868;
        }
        else {
          local_d0 = &PTR__String_01c67868;
          local_c8 = strlen(pcVar9);
          lVar14 = local_c8 + 1;
          plVar6 = (long *)SpineExtension::getInstance();
          local_c0 = (char *)(**(code **)(*plVar6 + 0x18))
                                       (plVar6,lVar14,
                                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                        ,0x39);
          memcpy(local_c0,pcVar9,local_c8 + 1);
        }
        EventData::EventData(this_08,(String *)&local_d0);
        pcVar9 = local_c0;
        local_d0 = &PTR__String_01c67868;
        if (local_c0 != (char *)0x0) {
          plVar6 = (long *)SpineExtension::getInstance();
          (**(code **)(*plVar6 + 0x28))
                    (plVar6,pcVar9,
                     "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                     ,0xc9);
        }
        SpineObject::~SpineObject((SpineObject *)&local_d0);
        uVar34 = Json::getInt(pJVar8,"int",0);
        *(undefined4 *)(this_08 + 0x20) = uVar34;
        uVar34 = Json::getFloat(pJVar8,"float",0.0);
        *(undefined4 *)(this_08 + 0x24) = uVar34;
        pcVar9 = (char *)Json::getString(pJVar8,"string",(char *)0x0);
        pcVar32 = *(char **)(this_08 + 0x38);
        if (pcVar32 != pcVar9) {
          if (pcVar32 != (char *)0x0) {
            plVar6 = (long *)SpineExtension::getInstance();
            (**(code **)(*plVar6 + 0x28))
                      (plVar6,pcVar32,
                       "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                       ,0x8a);
          }
          if (pcVar9 == (char *)0x0) {
            *(undefined8 *)(this_08 + 0x30) = 0;
            *(undefined8 *)(this_08 + 0x38) = 0;
          }
          else {
            sVar10 = strlen(pcVar9);
            *(size_t *)(this_08 + 0x30) = sVar10;
            plVar6 = (long *)SpineExtension::getInstance();
            pvVar7 = (void *)(**(code **)(*plVar6 + 0x18))
                                       (plVar6,sVar10 + 1,
                                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                        ,0x91);
            *(void **)(this_08 + 0x38) = pvVar7;
            memcpy(pvVar7,pcVar9,*(long *)(this_08 + 0x30) + 1);
          }
        }
        pcVar9 = (char *)Json::getString(pJVar8,"audio",(char *)0x0);
        pcVar32 = *(char **)(this_08 + 0x50);
        if (pcVar32 == pcVar9) {
          if (pcVar9 != (char *)0x0) goto LAB_00d03dbc;
        }
        else {
          if (pcVar32 != (char *)0x0) {
            plVar6 = (long *)SpineExtension::getInstance();
            (**(code **)(*plVar6 + 0x28))
                      (plVar6,pcVar32,
                       "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                       ,0x8a);
          }
          if (pcVar9 == (char *)0x0) {
            *(undefined8 *)(this_08 + 0x48) = 0;
            *(undefined8 *)(this_08 + 0x50) = 0;
          }
          else {
            sVar10 = strlen(pcVar9);
            *(size_t *)(this_08 + 0x48) = sVar10;
            plVar6 = (long *)SpineExtension::getInstance();
            pvVar7 = (void *)(**(code **)(*plVar6 + 0x18))
                                       (plVar6,sVar10 + 1,
                                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                        ,0x91);
            *(void **)(this_08 + 0x50) = pvVar7;
            memcpy(pvVar7,pcVar9,*(long *)(this_08 + 0x48) + 1);
LAB_00d03dbc:
            uVar34 = Json::getFloat(pJVar8,"volume",1.0);
            *(undefined4 *)(this_08 + 0x58) = uVar34;
            uVar34 = Json::getFloat(pJVar8,"balance",0.0);
            *(undefined4 *)(this_08 + 0x5c) = uVar34;
          }
        }
        *(EventData **)(*(long *)(this_01 + 0xa0) + lVar11) = this_08;
        pJVar8 = *(Json **)pJVar8;
        lVar11 = lVar11 + 8;
      } while (pJVar8 != (Json *)0x0);
    }
  }
  lVar11 = Json::getItem(this_00,"animations");
  if (lVar11 != 0) {
    uVar21 = (ulong)*(int *)(lVar11 + 0x14);
    uVar22 = *(ulong *)(this_01 + 0xb8);
    if (uVar22 < uVar21) {
      uVar30 = *(undefined8 *)(this_01 + 0xc0);
      *(ulong *)(this_01 + 0xb8) = uVar21;
      plVar6 = (long *)SpineExtension::getInstance();
      uVar30 = (**(code **)(*plVar6 + 0x20))
                         (plVar6,uVar30,uVar21 << 3,
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                          ,0x5e);
      *(undefined8 *)(this_01 + 0xc0) = uVar30;
      uVar21 = (ulong)*(int *)(lVar11 + 0x14);
      uVar22 = *(ulong *)(this_01 + 0xb8);
    }
    uVar33 = *(ulong *)(this_01 + 0xb0);
    *(ulong *)(this_01 + 0xb0) = uVar21;
    if (uVar22 < uVar21) {
      uVar25 = (uint)((float)uVar21 * 1.75);
      uVar30 = *(undefined8 *)(this_01 + 0xc0);
      if (uVar25 < 9) {
        uVar25 = 8;
      }
      *(long *)(this_01 + 0xb8) = (long)(int)uVar25;
      plVar6 = (long *)SpineExtension::getInstance();
      uVar30 = (**(code **)(*plVar6 + 0x20))
                         (plVar6,uVar30,
                          -(ulong)(uVar25 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar25 << 3,
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                          ,0x52);
      uVar21 = *(ulong *)(this_01 + 0xb0);
      *(undefined8 *)(this_01 + 0xc0) = uVar30;
    }
    if (uVar33 < uVar21) {
      do {
        *(undefined8 *)(*(long *)(this_01 + 0xc0) + uVar33 * 8) = 0;
        uVar33 = uVar33 + 1;
      } while (uVar21 != uVar33);
    }
    pJVar8 = *(Json **)(lVar11 + 8);
    if (pJVar8 != (Json *)0x0) {
      iVar4 = 0;
      do {
        lVar11 = readAnimation(this,pJVar8,this_01);
        if (lVar11 != 0) {
          *(long *)(*(long *)(this_01 + 0xc0) + (long)iVar4 * 8) = lVar11;
          iVar4 = iVar4 + 1;
        }
        pJVar8 = *(Json **)pJVar8;
      } while (pJVar8 != (Json *)0x0);
    }
  }
  Json::~Json(this_00);
  operator_delete(this_00);
LAB_00d047dc:
  if (*(long *)(lVar2 + 0x28) == local_a0) {
    return this_01;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x00d01414:
  plVar6 = (long *)*plVar6;
  lVar14 = lVar14 + 8;
  if (plVar6 == (long *)0x0) goto LAB_00d01420;
  goto LAB_00d01368;
code_r0x00d014dc:
  iVar4 = Json::getInt(pJVar8,"local",0);
  this_04[0x81] = (TransformConstraintData)(iVar4 != 0);
  iVar4 = Json::getInt(pJVar8,"relative",0);
  this_04[0x80] = (TransformConstraintData)(iVar4 != 0);
  uVar34 = Json::getFloat(pJVar8,"rotation",0.0);
  *(undefined4 *)(this_04 + 0x68) = uVar34;
  fVar35 = (float)Json::getFloat(pJVar8,"x",0.0);
  *(float *)(this_04 + 0x6c) = fVar35 * *(float *)(this + 0x30);
  fVar35 = (float)Json::getFloat(pJVar8,"y",0.0);
  *(float *)(this_04 + 0x70) = fVar35 * *(float *)(this + 0x30);
  uVar34 = Json::getFloat(pJVar8,"scaleX",0.0);
  *(undefined4 *)(this_04 + 0x74) = uVar34;
  uVar34 = Json::getFloat(pJVar8,"scaleY",0.0);
  *(undefined4 *)(this_04 + 0x78) = uVar34;
  uVar34 = Json::getFloat(pJVar8,"shearY",0.0);
  *(undefined4 *)(this_04 + 0x7c) = uVar34;
  uVar34 = Json::getFloat(pJVar8,"rotateMix",1.0);
  *(undefined4 *)(this_04 + 0x58) = uVar34;
  uVar34 = Json::getFloat(pJVar8,"translateMix",1.0);
  *(undefined4 *)(this_04 + 0x5c) = uVar34;
  uVar34 = Json::getFloat(pJVar8,"scaleMix",1.0);
  *(undefined4 *)(this_04 + 0x60) = uVar34;
  uVar34 = Json::getFloat(pJVar8,"shearMix",1.0);
  *(undefined4 *)(this_04 + 100) = uVar34;
  *(TransformConstraintData **)(*(long *)(this_01 + 0x100) + lVar11 * 8) = this_04;
  pJVar8 = *(Json **)pJVar8;
  lVar11 = lVar11 + 1;
  if (pJVar8 == (Json *)0x0) goto LAB_00d01648;
  goto LAB_00d01194;
code_r0x00d023b0:
  lVar14 = Skin::getConstraints(pSVar16);
  uVar22 = *(ulong *)(lVar14 + 8);
  if (uVar22 == *(ulong *)(lVar14 + 0x10)) {
    uVar25 = (uint)((float)uVar22 * 1.75);
    uVar30 = *(undefined8 *)(lVar14 + 0x18);
    if (uVar25 < 9) {
      uVar25 = 8;
    }
    *(long *)(lVar14 + 0x10) = (long)(int)uVar25;
    plVar15 = (long *)SpineExtension::getInstance();
    lVar17 = (**(code **)(*plVar15 + 0x20))
                       (plVar15,uVar30,
                        -(ulong)(uVar25 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar25 << 3,
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",
                        0x6a);
    lVar23 = *(long *)(lVar14 + 8);
    *(long *)(lVar14 + 0x18) = lVar17;
    *(long *)(lVar14 + 8) = lVar23 + 1;
    plVar15 = (long *)(lVar17 + lVar23 * 8);
  }
  else {
    *(ulong *)(lVar14 + 8) = uVar22 + 1;
    plVar15 = (long *)(*(long *)(lVar14 + 0x18) + uVar22 * 8);
  }
  *plVar15 = lVar11;
  plVar6 = (long *)*plVar6;
  goto joined_r0x00d02308;
}

