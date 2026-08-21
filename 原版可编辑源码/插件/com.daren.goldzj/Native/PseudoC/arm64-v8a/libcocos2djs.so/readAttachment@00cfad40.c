
/* spine::SkeletonBinary::readAttachment(spine::SkeletonBinary::DataInput*, spine::Skin*, int,
   spine::String const&, spine::SkeletonData*, bool) */

VertexAttachment * __thiscall
spine::SkeletonBinary::readAttachment
          (SkeletonBinary *this,DataInput *param_1,Skin *param_2,int param_3,String *param_4,
          SkeletonData *param_5,bool param_6)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  long lVar8;
  size_t sVar9;
  long *plVar10;
  void *pvVar11;
  long *plVar12;
  Vector *pVVar13;
  LinkedMesh *this_00;
  undefined1 *puVar14;
  float *pfVar15;
  long lVar16;
  undefined8 *puVar17;
  uint uVar18;
  uint uVar19;
  byte *pbVar20;
  ulong uVar21;
  byte *pbVar22;
  DataInput *pDVar23;
  undefined8 uVar24;
  VertexAttachment *this_01;
  ulong uVar25;
  long lVar26;
  char *pcVar27;
  float fVar28;
  undefined **local_100;
  size_t local_f8;
  void *local_f0;
  undefined **local_e8;
  size_t local_e0;
  void *local_d8;
  undefined **local_d0;
  size_t local_c8;
  void *local_c0;
  undefined **local_b8;
  size_t local_b0;
  void *local_a8;
  undefined **local_a0;
  size_t local_98;
  void *local_90;
  undefined **local_88;
  size_t local_80;
  void *local_78;
  long local_70;
  
  lVar8 = tpidr_el0;
  local_70 = *(long *)(lVar8 + 0x28);
  pDVar23 = param_1 + 8;
  pbVar20 = *(byte **)pDVar23;
  *(byte **)pDVar23 = pbVar20 + 1;
  uVar19 = *pbVar20 & 0x7f;
  if ((char)*pbVar20 < '\0') {
    *(byte **)pDVar23 = pbVar20 + 2;
    uVar19 = uVar19 | (pbVar20[1] & 0x7f) << 7;
    if ((char)pbVar20[1] < '\0') {
      *(byte **)pDVar23 = pbVar20 + 3;
      uVar19 = uVar19 | (pbVar20[2] & 0x7f) << 0xe;
      if ((char)pbVar20[2] < '\0') {
        *(byte **)pDVar23 = pbVar20 + 4;
        uVar19 = uVar19 | (pbVar20[3] & 0x7f) << 0x15;
        if ((char)pbVar20[3] < '\0') {
          *(byte **)pDVar23 = pbVar20 + 5;
          uVar19 = uVar19 | (uint)pbVar20[4] << 0x1c;
        }
      }
    }
  }
  if (uVar19 == 0) {
LAB_00cfae7c:
    local_88 = &PTR__String_01c67868;
    pvVar11 = (void *)0x0;
    sVar9 = 0;
    local_80 = 0;
    local_78 = (void *)0x0;
  }
  else {
    pcVar27 = *(char **)(*(long *)(param_5 + 0x180) + (long)(int)(uVar19 - 1) * 8);
    local_88 = &PTR__String_01c67868;
    if (pcVar27 == (char *)0x0) goto LAB_00cfae7c;
    sVar9 = strlen(pcVar27);
    local_80 = sVar9;
    plVar10 = (long *)SpineExtension::getInstance();
    pvVar11 = (void *)(**(code **)(*plVar10 + 0x18))
                                (plVar10,sVar9 + 1,
                                 "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                 ,0x39);
    local_78 = pvVar11;
    memcpy(pvVar11,pcVar27,sVar9 + 1);
  }
  if (((String *)&local_88 != param_4) && (sVar9 == 0)) {
    if (pvVar11 != (void *)0x0) {
      plVar10 = (long *)SpineExtension::getInstance();
      (**(code **)(*plVar10 + 0x28))
                (plVar10,pvVar11,
                 "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",
                 0x7a);
    }
    if (*(long *)(param_4 + 0x10) == 0) {
      local_80 = 0;
      local_78 = (void *)0x0;
    }
    else {
      local_80 = *(size_t *)(param_4 + 8);
      lVar26 = local_80 + 1;
      plVar10 = (long *)SpineExtension::getInstance();
      local_78 = (void *)(**(code **)(*plVar10 + 0x18))
                                   (plVar10,lVar26,
                                    "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                    ,0x81);
      memcpy(local_78,*(void **)(param_4 + 0x10),*(long *)(param_4 + 8) + 1);
    }
  }
  puVar14 = *(undefined1 **)pDVar23;
  *(undefined1 **)pDVar23 = puVar14 + 1;
  switch(*puVar14) {
  case 0:
    *(undefined1 **)pDVar23 = puVar14 + 2;
    uVar19 = (byte)puVar14[1] & 0x7f;
    if ((char)puVar14[1] < '\0') {
      *(undefined1 **)pDVar23 = puVar14 + 3;
      uVar19 = uVar19 | ((byte)puVar14[2] & 0x7f) << 7;
      if ((char)puVar14[2] < '\0') {
        *(undefined1 **)pDVar23 = puVar14 + 4;
        uVar19 = uVar19 | ((byte)puVar14[3] & 0x7f) << 0xe;
        if ((char)puVar14[3] < '\0') {
          *(undefined1 **)pDVar23 = puVar14 + 5;
          uVar19 = uVar19 | ((byte)puVar14[4] & 0x7f) << 0x15;
          if ((char)puVar14[4] < '\0') {
            *(undefined1 **)pDVar23 = puVar14 + 6;
            uVar19 = uVar19 | (uint)(byte)puVar14[5] << 0x1c;
          }
        }
      }
    }
    if (uVar19 == 0) {
LAB_00cfb804:
      local_a0 = &PTR__String_01c67868;
      local_98 = 0;
      local_90 = (void *)0x0;
LAB_00cfb80c:
      pvVar11 = local_90;
      if (local_90 != (void *)0x0) {
        plVar10 = (long *)SpineExtension::getInstance();
        (**(code **)(*plVar10 + 0x28))
                  (plVar10,pvVar11,
                   "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",
                   0x7a);
      }
      if (local_78 == (void *)0x0) {
        local_98 = 0;
        local_90 = (void *)0x0;
      }
      else {
        local_98 = local_80;
        lVar26 = local_80 + 1;
        plVar10 = (long *)SpineExtension::getInstance();
        local_90 = (void *)(**(code **)(*plVar10 + 0x18))
                                     (plVar10,lVar26,
                                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                      ,0x81);
        memcpy(local_90,local_78,local_80 + 1);
      }
    }
    else {
      pcVar27 = *(char **)(*(long *)(param_5 + 0x180) + (long)(int)(uVar19 - 1) * 8);
      local_a0 = &PTR__String_01c67868;
      if (pcVar27 == (char *)0x0) goto LAB_00cfb804;
      local_98 = strlen(pcVar27);
      lVar26 = local_98 + 1;
      plVar10 = (long *)SpineExtension::getInstance();
      local_90 = (void *)(**(code **)(*plVar10 + 0x18))
                                   (plVar10,lVar26,
                                    "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                    ,0x39);
      memcpy(local_90,pcVar27,local_98 + 1);
      if (local_98 == 0) goto LAB_00cfb80c;
    }
    plVar10 = *(long **)(this + 8);
    local_b8 = &PTR__String_01c67868;
    if (local_78 == (void *)0x0) {
      local_b0 = 0;
      local_a8 = (void *)0x0;
    }
    else {
      local_b0 = local_80;
      lVar26 = local_80 + 1;
      plVar12 = (long *)SpineExtension::getInstance();
      local_a8 = (void *)(**(code **)(*plVar12 + 0x18))
                                   (plVar12,lVar26,
                                    "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                    ,0x47);
      memcpy(local_a8,local_78,local_80 + 1);
    }
    local_d0 = &PTR__String_01c67868;
    if (local_90 == (void *)0x0) {
      local_c8 = 0;
      local_c0 = (void *)0x0;
    }
    else {
      local_c8 = local_98;
      lVar26 = local_98 + 1;
      plVar12 = (long *)SpineExtension::getInstance();
      local_c0 = (void *)(**(code **)(*plVar12 + 0x18))
                                   (plVar12,lVar26,
                                    "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                    ,0x47);
      memcpy(local_c0,local_90,local_98 + 1);
    }
    this_01 = (VertexAttachment *)
              (**(code **)(*plVar10 + 0x18))(plVar10,param_2,&local_b8,&local_d0);
    pvVar11 = local_c0;
    local_d0 = &PTR__String_01c67868;
    if (local_c0 != (void *)0x0) {
      plVar10 = (long *)SpineExtension::getInstance();
      (**(code **)(*plVar10 + 0x28))
                (plVar10,pvVar11,
                 "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",
                 0xc9);
    }
    SpineObject::~SpineObject((SpineObject *)&local_d0);
    pvVar11 = local_a8;
    local_b8 = &PTR__String_01c67868;
    if (local_a8 != (void *)0x0) {
      plVar10 = (long *)SpineExtension::getInstance();
      (**(code **)(*plVar10 + 0x28))
                (plVar10,pvVar11,
                 "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",
                 0xc9);
    }
    SpineObject::~SpineObject((SpineObject *)&local_b8);
    if (this_01 != (VertexAttachment *)0x0) {
      if ((RegionAttachment *)(this_01 + 0xb8) != (RegionAttachment *)&local_a0) {
        lVar26 = *(long *)(this_01 + 200);
        if (lVar26 != 0) {
          plVar10 = (long *)SpineExtension::getInstance();
          (**(code **)(*plVar10 + 0x28))
                    (plVar10,lVar26,
                     "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                     ,0x7a);
        }
        if (local_90 == (void *)0x0) {
          *(undefined8 *)(this_01 + 0xc0) = 0;
          *(undefined8 *)(this_01 + 200) = 0;
        }
        else {
          *(size_t *)(this_01 + 0xc0) = local_98;
          lVar26 = local_98 + 1;
          plVar10 = (long *)SpineExtension::getInstance();
          pvVar11 = (void *)(**(code **)(*plVar10 + 0x18))
                                      (plVar10,lVar26,
                                       "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                       ,0x81);
          *(void **)(this_01 + 200) = pvVar11;
          memcpy(pvVar11,local_90,local_98 + 1);
        }
      }
      puVar14 = *(undefined1 **)pDVar23;
      *(undefined1 **)pDVar23 = puVar14 + 1;
      uVar1 = *puVar14;
      *(undefined1 **)pDVar23 = puVar14 + 2;
      uVar2 = puVar14[1];
      *(undefined1 **)pDVar23 = puVar14 + 3;
      uVar3 = puVar14[2];
      *(undefined1 **)pDVar23 = puVar14 + 4;
      *(uint *)(this_01 + 0x48) = CONCAT31(CONCAT21(CONCAT11(uVar1,uVar2),uVar3),puVar14[3]);
      *(undefined1 **)pDVar23 = puVar14 + 5;
      uVar1 = puVar14[4];
      *(undefined1 **)pDVar23 = puVar14 + 6;
      uVar2 = puVar14[5];
      *(undefined1 **)pDVar23 = puVar14 + 7;
      uVar3 = puVar14[6];
      *(undefined1 **)pDVar23 = puVar14 + 8;
      fVar28 = *(float *)(this + 0x48);
      *(float *)(this_01 + 0x40) =
           fVar28 * (float)CONCAT31(CONCAT21(CONCAT11(uVar1,uVar2),uVar3),puVar14[7]);
      *(undefined1 **)pDVar23 = puVar14 + 9;
      uVar1 = puVar14[8];
      *(undefined1 **)pDVar23 = puVar14 + 10;
      uVar2 = puVar14[9];
      *(undefined1 **)pDVar23 = puVar14 + 0xb;
      uVar3 = puVar14[10];
      *(undefined1 **)pDVar23 = puVar14 + 0xc;
      *(float *)(this_01 + 0x44) =
           fVar28 * (float)CONCAT31(CONCAT21(CONCAT11(uVar1,uVar2),uVar3),puVar14[0xb]);
      *(undefined1 **)pDVar23 = puVar14 + 0xd;
      uVar1 = puVar14[0xc];
      *(undefined1 **)pDVar23 = puVar14 + 0xe;
      uVar2 = puVar14[0xd];
      *(undefined1 **)pDVar23 = puVar14 + 0xf;
      uVar3 = puVar14[0xe];
      *(undefined1 **)pDVar23 = puVar14 + 0x10;
      *(uint *)(this_01 + 0x4c) = CONCAT31(CONCAT21(CONCAT11(uVar1,uVar2),uVar3),puVar14[0xf]);
      *(undefined1 **)pDVar23 = puVar14 + 0x11;
      uVar1 = puVar14[0x10];
      *(undefined1 **)pDVar23 = puVar14 + 0x12;
      uVar2 = puVar14[0x11];
      *(undefined1 **)pDVar23 = puVar14 + 0x13;
      uVar3 = puVar14[0x12];
      *(undefined1 **)pDVar23 = puVar14 + 0x14;
      *(uint *)(this_01 + 0x50) = CONCAT31(CONCAT21(CONCAT11(uVar1,uVar2),uVar3),puVar14[0x13]);
      *(undefined1 **)pDVar23 = puVar14 + 0x15;
      uVar1 = puVar14[0x14];
      *(undefined1 **)pDVar23 = puVar14 + 0x16;
      uVar2 = puVar14[0x15];
      *(undefined1 **)pDVar23 = puVar14 + 0x17;
      uVar3 = puVar14[0x16];
      *(undefined1 **)pDVar23 = puVar14 + 0x18;
      *(float *)(this_01 + 0x54) =
           fVar28 * (float)CONCAT31(CONCAT21(CONCAT11(uVar1,uVar2),uVar3),puVar14[0x17]);
      *(undefined1 **)pDVar23 = puVar14 + 0x19;
      uVar1 = puVar14[0x18];
      *(undefined1 **)pDVar23 = puVar14 + 0x1a;
      uVar2 = puVar14[0x19];
      *(undefined1 **)pDVar23 = puVar14 + 0x1b;
      uVar3 = puVar14[0x1a];
      *(undefined1 **)pDVar23 = puVar14 + 0x1c;
      *(float *)(this_01 + 0x58) =
           fVar28 * (float)CONCAT31(CONCAT21(CONCAT11(uVar1,uVar2),uVar3),puVar14[0x1b]);
      lVar26 = RegionAttachment::getColor((RegionAttachment *)this_01);
      pbVar20 = *(byte **)pDVar23;
      *(byte **)pDVar23 = pbVar20 + 1;
      *(float *)(lVar26 + 8) = (float)*pbVar20 / 255.0;
      *(byte **)pDVar23 = pbVar20 + 2;
      fVar28 = (float)NEON_ucvtf((uint)pbVar20[1]);
      *(float *)(lVar26 + 0xc) = fVar28 / 255.0;
      *(byte **)pDVar23 = pbVar20 + 3;
      fVar28 = (float)NEON_ucvtf((uint)pbVar20[2]);
      *(float *)(lVar26 + 0x10) = fVar28 / 255.0;
      *(byte **)pDVar23 = pbVar20 + 4;
      fVar28 = (float)NEON_ucvtf((uint)pbVar20[3]);
      *(float *)(lVar26 + 0x14) = fVar28 / 255.0;
      RegionAttachment::updateOffset((RegionAttachment *)this_01);
      (**(code **)(**(long **)(this + 8) + 0x48))(*(long **)(this + 8),this_01);
    }
    break;
  case 1:
    *(undefined1 **)pDVar23 = puVar14 + 2;
    uVar19 = (byte)puVar14[1] & 0x7f;
    if ((char)puVar14[1] < '\0') {
      *(undefined1 **)pDVar23 = puVar14 + 3;
      uVar19 = uVar19 | ((byte)puVar14[2] & 0x7f) << 7;
      if ((char)puVar14[2] < '\0') {
        *(undefined1 **)pDVar23 = puVar14 + 4;
        uVar19 = uVar19 | ((byte)puVar14[3] & 0x7f) << 0xe;
        if ((char)puVar14[3] < '\0') {
          *(undefined1 **)pDVar23 = puVar14 + 5;
          uVar19 = uVar19 | ((byte)puVar14[4] & 0x7f) << 0x15;
          if ((char)puVar14[4] < '\0') {
            *(undefined1 **)pDVar23 = puVar14 + 6;
            uVar19 = uVar19 | (uint)(byte)puVar14[5] << 0x1c;
          }
        }
      }
    }
    plVar10 = *(long **)(this + 8);
    local_a0 = &PTR__String_01c67868;
    if (local_78 == (void *)0x0) {
      local_98 = 0;
      local_90 = (void *)0x0;
    }
    else {
      local_98 = local_80;
      lVar26 = local_80 + 1;
      plVar12 = (long *)SpineExtension::getInstance();
      local_90 = (void *)(**(code **)(*plVar12 + 0x18))
                                   (plVar12,lVar26,
                                    "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                    ,0x47);
      memcpy(local_90,local_78,local_80 + 1);
    }
    this_01 = (VertexAttachment *)(**(code **)(*plVar10 + 0x28))(plVar10,param_2,&local_a0);
    pvVar11 = local_90;
    local_a0 = &PTR__String_01c67868;
    if (local_90 != (void *)0x0) {
      plVar10 = (long *)SpineExtension::getInstance();
      (**(code **)(*plVar10 + 0x28))
                (plVar10,pvVar11,
                 "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",
                 0xc9);
    }
    SpineObject::~SpineObject((SpineObject *)&local_a0);
    readVertices(this,param_1,this_01,uVar19);
    goto joined_r0x00cfb6c4;
  case 2:
    *(undefined1 **)pDVar23 = puVar14 + 2;
    uVar19 = (byte)puVar14[1] & 0x7f;
    if ((char)puVar14[1] < '\0') {
      *(undefined1 **)pDVar23 = puVar14 + 3;
      uVar19 = uVar19 | ((byte)puVar14[2] & 0x7f) << 7;
      if ((char)puVar14[2] < '\0') {
        *(undefined1 **)pDVar23 = puVar14 + 4;
        uVar19 = uVar19 | ((byte)puVar14[3] & 0x7f) << 0xe;
        if ((char)puVar14[3] < '\0') {
          *(undefined1 **)pDVar23 = puVar14 + 5;
          uVar19 = uVar19 | ((byte)puVar14[4] & 0x7f) << 0x15;
          if ((char)puVar14[4] < '\0') {
            *(undefined1 **)pDVar23 = puVar14 + 6;
            uVar19 = uVar19 | (uint)(byte)puVar14[5] << 0x1c;
          }
        }
      }
    }
    if (uVar19 == 0) {
LAB_00cfb6ec:
      local_a0 = &PTR__String_01c67868;
      local_98 = 0;
      local_90 = (void *)0x0;
LAB_00cfb6f4:
      pvVar11 = local_90;
      if (local_90 != (void *)0x0) {
        plVar10 = (long *)SpineExtension::getInstance();
        (**(code **)(*plVar10 + 0x28))
                  (plVar10,pvVar11,
                   "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",
                   0x7a);
      }
      if (local_78 == (void *)0x0) {
        local_98 = 0;
        local_90 = (void *)0x0;
      }
      else {
        local_98 = local_80;
        lVar26 = local_80 + 1;
        plVar10 = (long *)SpineExtension::getInstance();
        local_90 = (void *)(**(code **)(*plVar10 + 0x18))
                                     (plVar10,lVar26,
                                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                      ,0x81);
        memcpy(local_90,local_78,local_80 + 1);
      }
    }
    else {
      pcVar27 = *(char **)(*(long *)(param_5 + 0x180) + (long)(int)(uVar19 - 1) * 8);
      local_a0 = &PTR__String_01c67868;
      if (pcVar27 == (char *)0x0) goto LAB_00cfb6ec;
      local_98 = strlen(pcVar27);
      lVar26 = local_98 + 1;
      plVar10 = (long *)SpineExtension::getInstance();
      local_90 = (void *)(**(code **)(*plVar10 + 0x18))
                                   (plVar10,lVar26,
                                    "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                    ,0x39);
      memcpy(local_90,pcVar27,local_98 + 1);
      if (local_98 == 0) goto LAB_00cfb6f4;
    }
    plVar10 = *(long **)(this + 8);
    local_b8 = &PTR__String_01c67868;
    if (local_78 == (void *)0x0) {
      local_b0 = 0;
      local_a8 = (void *)0x0;
    }
    else {
      local_b0 = local_80;
      lVar26 = local_80 + 1;
      plVar12 = (long *)SpineExtension::getInstance();
      local_a8 = (void *)(**(code **)(*plVar12 + 0x18))
                                   (plVar12,lVar26,
                                    "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                    ,0x47);
      memcpy(local_a8,local_78,local_80 + 1);
    }
    local_d0 = &PTR__String_01c67868;
    if (local_90 == (void *)0x0) {
      local_c8 = 0;
      local_c0 = (void *)0x0;
    }
    else {
      local_c8 = local_98;
      lVar26 = local_98 + 1;
      plVar12 = (long *)SpineExtension::getInstance();
      local_c0 = (void *)(**(code **)(*plVar12 + 0x18))
                                   (plVar12,lVar26,
                                    "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                    ,0x47);
      memcpy(local_c0,local_90,local_98 + 1);
    }
    this_01 = (VertexAttachment *)
              (**(code **)(*plVar10 + 0x20))(plVar10,param_2,&local_b8,&local_d0);
    pvVar11 = local_c0;
    local_d0 = &PTR__String_01c67868;
    if (local_c0 != (void *)0x0) {
      plVar10 = (long *)SpineExtension::getInstance();
      (**(code **)(*plVar10 + 0x28))
                (plVar10,pvVar11,
                 "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",
                 0xc9);
    }
    SpineObject::~SpineObject((SpineObject *)&local_d0);
    pvVar11 = local_a8;
    local_b8 = &PTR__String_01c67868;
    if (local_a8 != (void *)0x0) {
      plVar10 = (long *)SpineExtension::getInstance();
      (**(code **)(*plVar10 + 0x28))
                (plVar10,pvVar11,
                 "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",
                 0xc9);
    }
    SpineObject::~SpineObject((SpineObject *)&local_b8);
    if ((MeshAttachment *)(this_01 + 0x138) != (MeshAttachment *)&local_a0) {
      lVar26 = *(long *)(this_01 + 0x148);
      if (lVar26 != 0) {
        plVar10 = (long *)SpineExtension::getInstance();
        (**(code **)(*plVar10 + 0x28))
                  (plVar10,lVar26,
                   "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",
                   0x7a);
      }
      if (local_90 == (void *)0x0) {
        *(undefined8 *)(this_01 + 0x140) = 0;
        *(undefined8 *)(this_01 + 0x148) = 0;
      }
      else {
        *(size_t *)(this_01 + 0x140) = local_98;
        lVar26 = local_98 + 1;
        plVar10 = (long *)SpineExtension::getInstance();
        pvVar11 = (void *)(**(code **)(*plVar10 + 0x18))
                                    (plVar10,lVar26,
                                     "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                     ,0x81);
        *(void **)(this_01 + 0x148) = pvVar11;
        memcpy(pvVar11,local_90,local_98 + 1);
      }
    }
    lVar26 = MeshAttachment::getColor((MeshAttachment *)this_01);
    pbVar20 = *(byte **)pDVar23;
    *(byte **)pDVar23 = pbVar20 + 1;
    *(float *)(lVar26 + 8) = (float)*pbVar20 / 255.0;
    *(byte **)pDVar23 = pbVar20 + 2;
    fVar28 = (float)NEON_ucvtf((uint)pbVar20[1]);
    *(float *)(lVar26 + 0xc) = fVar28 / 255.0;
    *(byte **)pDVar23 = pbVar20 + 3;
    fVar28 = (float)NEON_ucvtf((uint)pbVar20[2]);
    *(float *)(lVar26 + 0x10) = fVar28 / 255.0;
    *(byte **)pDVar23 = pbVar20 + 4;
    fVar28 = (float)NEON_ucvtf((uint)pbVar20[3]);
    *(float *)(lVar26 + 0x14) = fVar28 / 255.0;
    *(byte **)pDVar23 = pbVar20 + 5;
    uVar19 = pbVar20[4] & 0x7f;
    if ((char)pbVar20[4] < '\0') {
      *(byte **)pDVar23 = pbVar20 + 6;
      uVar19 = uVar19 | (pbVar20[5] & 0x7f) << 7;
      if ((char)pbVar20[5] < '\0') {
        *(byte **)pDVar23 = pbVar20 + 7;
        uVar19 = uVar19 | (pbVar20[6] & 0x7f) << 0xe;
        if ((char)pbVar20[6] < '\0') {
          *(byte **)pDVar23 = pbVar20 + 8;
          uVar19 = uVar19 | (pbVar20[7] & 0x7f) << 0x15;
          if ((char)pbVar20[7] < '\0') {
            *(byte **)pDVar23 = pbVar20 + 9;
            uVar19 = uVar19 | (uint)pbVar20[8] << 0x1c;
          }
        }
      }
    }
    pVVar13 = (Vector *)MeshAttachment::getRegionUVs((MeshAttachment *)this_01);
    readFloatArray(this,param_1,uVar19 << 1,1.0,pVVar13);
    pVVar13 = (Vector *)MeshAttachment::getTriangles((MeshAttachment *)this_01);
    readShortArray(this,param_1,pVVar13);
    readVertices(this,param_1,this_01,uVar19);
    MeshAttachment::updateUVs((MeshAttachment *)this_01);
    pbVar20 = *(byte **)(param_1 + 8);
    *(byte **)(param_1 + 8) = pbVar20 + 1;
    uVar19 = *pbVar20 & 0x7f;
    if ((char)*pbVar20 < '\0') {
      *(byte **)pDVar23 = pbVar20 + 2;
      uVar19 = uVar19 | (pbVar20[1] & 0x7f) << 7;
      if ((char)pbVar20[1] < '\0') {
        *(byte **)pDVar23 = pbVar20 + 3;
        uVar19 = uVar19 | (pbVar20[2] & 0x7f) << 0xe;
        if ((char)pbVar20[2] < '\0') {
          *(byte **)pDVar23 = pbVar20 + 4;
          uVar19 = uVar19 | (pbVar20[3] & 0x7f) << 0x15;
          if ((char)pbVar20[3] < '\0') {
            *(byte **)pDVar23 = pbVar20 + 5;
            uVar19 = uVar19 | (uint)pbVar20[4] << 0x1c;
          }
        }
      }
    }
    *(uint *)(this_01 + 0x180) = uVar19 << 1;
    if (param_6) {
      pVVar13 = (Vector *)MeshAttachment::getEdges((MeshAttachment *)this_01);
      readShortArray(this,param_1,pVVar13);
      puVar14 = *(undefined1 **)(param_1 + 8);
      *(undefined1 **)(param_1 + 8) = puVar14 + 1;
      uVar1 = *puVar14;
      *(undefined1 **)(param_1 + 8) = puVar14 + 2;
      uVar2 = puVar14[1];
      *(undefined1 **)(param_1 + 8) = puVar14 + 3;
      uVar3 = puVar14[2];
      *(undefined1 **)(param_1 + 8) = puVar14 + 4;
      fVar28 = *(float *)(this + 0x48);
      *(float *)(this_01 + 0x160) =
           fVar28 * (float)CONCAT31(CONCAT21(CONCAT11(uVar1,uVar2),uVar3),puVar14[3]);
      *(undefined1 **)(param_1 + 8) = puVar14 + 5;
      uVar1 = puVar14[4];
      *(undefined1 **)(param_1 + 8) = puVar14 + 6;
      uVar2 = puVar14[5];
      *(undefined1 **)(param_1 + 8) = puVar14 + 7;
      uVar3 = puVar14[6];
      *(undefined1 **)(param_1 + 8) = puVar14 + 8;
      fVar28 = fVar28 * (float)CONCAT31(CONCAT21(CONCAT11(uVar1,uVar2),uVar3),puVar14[7]);
    }
    else {
      fVar28 = 0.0;
      *(undefined4 *)(this_01 + 0x160) = 0;
    }
    *(float *)(this_01 + 0x164) = fVar28;
    (**(code **)(**(long **)(this + 8) + 0x48))(*(long **)(this + 8),this_01);
    break;
  case 3:
    *(undefined1 **)pDVar23 = puVar14 + 2;
    uVar19 = (byte)puVar14[1] & 0x7f;
    if ((char)puVar14[1] < '\0') {
      *(undefined1 **)pDVar23 = puVar14 + 3;
      uVar19 = uVar19 | ((byte)puVar14[2] & 0x7f) << 7;
      if ((char)puVar14[2] < '\0') {
        *(undefined1 **)pDVar23 = puVar14 + 4;
        uVar19 = uVar19 | ((byte)puVar14[3] & 0x7f) << 0xe;
        if ((char)puVar14[3] < '\0') {
          *(undefined1 **)pDVar23 = puVar14 + 5;
          uVar19 = uVar19 | ((byte)puVar14[4] & 0x7f) << 0x15;
          if ((char)puVar14[4] < '\0') {
            *(undefined1 **)pDVar23 = puVar14 + 6;
            uVar19 = uVar19 | (uint)(byte)puVar14[5] << 0x1c;
          }
        }
      }
    }
    if (uVar19 == 0) {
LAB_00cfb778:
      local_a0 = &PTR__String_01c67868;
      local_98 = 0;
      local_90 = (void *)0x0;
LAB_00cfb780:
      pvVar11 = local_90;
      if (local_90 != (void *)0x0) {
        plVar10 = (long *)SpineExtension::getInstance();
        (**(code **)(*plVar10 + 0x28))
                  (plVar10,pvVar11,
                   "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",
                   0x7a);
      }
      if (local_78 == (void *)0x0) {
        local_98 = 0;
        local_90 = (void *)0x0;
      }
      else {
        local_98 = local_80;
        lVar26 = local_80 + 1;
        plVar10 = (long *)SpineExtension::getInstance();
        local_90 = (void *)(**(code **)(*plVar10 + 0x18))
                                     (plVar10,lVar26,
                                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                      ,0x81);
        memcpy(local_90,local_78,local_80 + 1);
      }
    }
    else {
      pcVar27 = *(char **)(*(long *)(param_5 + 0x180) + (long)(int)(uVar19 - 1) * 8);
      local_a0 = &PTR__String_01c67868;
      if (pcVar27 == (char *)0x0) goto LAB_00cfb778;
      local_98 = strlen(pcVar27);
      lVar26 = local_98 + 1;
      plVar10 = (long *)SpineExtension::getInstance();
      local_90 = (void *)(**(code **)(*plVar10 + 0x18))
                                   (plVar10,lVar26,
                                    "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                    ,0x39);
      memcpy(local_90,pcVar27,local_98 + 1);
      if (local_98 == 0) goto LAB_00cfb780;
    }
    plVar10 = *(long **)(this + 8);
    local_b8 = &PTR__String_01c67868;
    if (local_78 == (void *)0x0) {
      local_b0 = 0;
      local_a8 = (void *)0x0;
    }
    else {
      local_b0 = local_80;
      lVar26 = local_80 + 1;
      plVar12 = (long *)SpineExtension::getInstance();
      local_a8 = (void *)(**(code **)(*plVar12 + 0x18))
                                   (plVar12,lVar26,
                                    "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                    ,0x47);
      memcpy(local_a8,local_78,local_80 + 1);
    }
    local_d0 = &PTR__String_01c67868;
    if (local_90 == (void *)0x0) {
      local_c8 = 0;
      local_c0 = (void *)0x0;
    }
    else {
      local_c8 = local_98;
      lVar26 = local_98 + 1;
      plVar12 = (long *)SpineExtension::getInstance();
      local_c0 = (void *)(**(code **)(*plVar12 + 0x18))
                                   (plVar12,lVar26,
                                    "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                    ,0x47);
      memcpy(local_c0,local_90,local_98 + 1);
    }
    this_01 = (VertexAttachment *)
              (**(code **)(*plVar10 + 0x20))(plVar10,param_2,&local_b8,&local_d0);
    pvVar11 = local_c0;
    local_d0 = &PTR__String_01c67868;
    if (local_c0 != (void *)0x0) {
      plVar10 = (long *)SpineExtension::getInstance();
      (**(code **)(*plVar10 + 0x28))
                (plVar10,pvVar11,
                 "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",
                 0xc9);
    }
    SpineObject::~SpineObject((SpineObject *)&local_d0);
    pvVar11 = local_a8;
    local_b8 = &PTR__String_01c67868;
    if (local_a8 != (void *)0x0) {
      plVar10 = (long *)SpineExtension::getInstance();
      (**(code **)(*plVar10 + 0x28))
                (plVar10,pvVar11,
                 "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",
                 0xc9);
    }
    SpineObject::~SpineObject((SpineObject *)&local_b8);
    if ((MeshAttachment *)(this_01 + 0x138) != (MeshAttachment *)&local_a0) {
      lVar26 = *(long *)(this_01 + 0x148);
      if (lVar26 != 0) {
        plVar10 = (long *)SpineExtension::getInstance();
        (**(code **)(*plVar10 + 0x28))
                  (plVar10,lVar26,
                   "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",
                   0x7a);
      }
      if (local_90 == (void *)0x0) {
        *(undefined8 *)(this_01 + 0x140) = 0;
        *(undefined8 *)(this_01 + 0x148) = 0;
      }
      else {
        *(size_t *)(this_01 + 0x140) = local_98;
        lVar26 = local_98 + 1;
        plVar10 = (long *)SpineExtension::getInstance();
        pvVar11 = (void *)(**(code **)(*plVar10 + 0x18))
                                    (plVar10,lVar26,
                                     "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                     ,0x81);
        *(void **)(this_01 + 0x148) = pvVar11;
        memcpy(pvVar11,local_90,local_98 + 1);
      }
    }
    lVar26 = MeshAttachment::getColor((MeshAttachment *)this_01);
    pbVar22 = *(byte **)pDVar23;
    *(byte **)pDVar23 = pbVar22 + 1;
    *(float *)(lVar26 + 8) = (float)*pbVar22 / 255.0;
    *(byte **)pDVar23 = pbVar22 + 2;
    pbVar20 = pbVar22 + 5;
    fVar28 = (float)NEON_ucvtf((uint)pbVar22[1]);
    *(float *)(lVar26 + 0xc) = fVar28 / 255.0;
    *(byte **)pDVar23 = pbVar22 + 3;
    fVar28 = (float)NEON_ucvtf((uint)pbVar22[2]);
    *(float *)(lVar26 + 0x10) = fVar28 / 255.0;
    *(byte **)pDVar23 = pbVar22 + 4;
    fVar28 = (float)NEON_ucvtf((uint)pbVar22[3]);
    *(float *)(lVar26 + 0x14) = fVar28 / 255.0;
    *(byte **)pDVar23 = pbVar20;
    uVar19 = pbVar22[4] & 0x7f;
    if ((char)pbVar22[4] < '\0') {
      pbVar20 = pbVar22 + 6;
      *(byte **)pDVar23 = pbVar20;
      uVar19 = uVar19 | (pbVar22[5] & 0x7f) << 7;
      if ((char)pbVar22[5] < '\0') {
        pbVar20 = pbVar22 + 7;
        *(byte **)pDVar23 = pbVar20;
        uVar19 = uVar19 | (pbVar22[6] & 0x7f) << 0xe;
        if ((char)pbVar22[6] < '\0') {
          pbVar20 = pbVar22 + 8;
          *(byte **)pDVar23 = pbVar20;
          uVar19 = uVar19 | (pbVar22[7] & 0x7f) << 0x15;
          if ((char)pbVar22[7] < '\0') {
            pbVar20 = pbVar22 + 9;
            *(byte **)pDVar23 = pbVar20;
            uVar19 = uVar19 | (uint)pbVar22[8] << 0x1c;
          }
        }
      }
    }
    if (uVar19 == 0) {
LAB_00cfc368:
      local_b8 = &PTR__String_01c67868;
      local_b0 = 0;
      local_a8 = (void *)0x0;
    }
    else {
      pcVar27 = *(char **)(*(long *)(param_5 + 0x180) + (long)(int)(uVar19 - 1) * 8);
      local_b8 = &PTR__String_01c67868;
      if (pcVar27 == (char *)0x0) goto LAB_00cfc368;
      local_b0 = strlen(pcVar27);
      lVar26 = local_b0 + 1;
      plVar10 = (long *)SpineExtension::getInstance();
      local_a8 = (void *)(**(code **)(*plVar10 + 0x18))
                                   (plVar10,lVar26,
                                    "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                    ,0x39);
      memcpy(local_a8,pcVar27,local_b0 + 1);
      pbVar20 = *(byte **)pDVar23;
    }
    pbVar22 = pbVar20 + 1;
    *(byte **)pDVar23 = pbVar22;
    uVar19 = *pbVar20 & 0x7f;
    if ((char)*pbVar20 < '\0') {
      pbVar22 = pbVar20 + 2;
      *(byte **)pDVar23 = pbVar22;
      uVar19 = uVar19 | (pbVar20[1] & 0x7f) << 7;
      if ((char)pbVar20[1] < '\0') {
        pbVar22 = pbVar20 + 3;
        *(byte **)pDVar23 = pbVar22;
        uVar19 = uVar19 | (pbVar20[2] & 0x7f) << 0xe;
        if ((char)pbVar20[2] < '\0') {
          pbVar22 = pbVar20 + 4;
          *(byte **)pDVar23 = pbVar22;
          uVar19 = uVar19 | (pbVar20[3] & 0x7f) << 0x15;
          if ((char)pbVar20[3] < '\0') {
            pbVar22 = pbVar20 + 5;
            *(byte **)pDVar23 = pbVar22;
            uVar19 = uVar19 | (uint)pbVar20[4] << 0x1c;
          }
        }
      }
    }
    if (uVar19 == 0) {
LAB_00cfc43c:
      local_d0 = &PTR__String_01c67868;
      local_c8 = 0;
      local_c0 = (void *)0x0;
    }
    else {
      pcVar27 = *(char **)(*(long *)(param_5 + 0x180) + (long)(int)(uVar19 - 1) * 8);
      local_d0 = &PTR__String_01c67868;
      if (pcVar27 == (char *)0x0) goto LAB_00cfc43c;
      local_c8 = strlen(pcVar27);
      lVar26 = local_c8 + 1;
      plVar10 = (long *)SpineExtension::getInstance();
      local_c0 = (void *)(**(code **)(*plVar10 + 0x18))
                                   (plVar10,lVar26,
                                    "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                    ,0x39);
      memcpy(local_c0,pcVar27,local_c8 + 1);
      pbVar22 = *(byte **)pDVar23;
    }
    *(byte **)pDVar23 = pbVar22 + 1;
    bVar4 = *pbVar22;
    if (param_6) {
      *(byte **)pDVar23 = pbVar22 + 2;
      bVar5 = pbVar22[1];
      *(byte **)pDVar23 = pbVar22 + 3;
      bVar6 = pbVar22[2];
      *(byte **)pDVar23 = pbVar22 + 4;
      bVar7 = pbVar22[3];
      *(byte **)pDVar23 = pbVar22 + 5;
      fVar28 = *(float *)(this + 0x48);
      *(float *)(this_01 + 0x160) =
           fVar28 * (float)CONCAT31(CONCAT21(CONCAT11(bVar5,bVar6),bVar7),pbVar22[4]);
      *(byte **)pDVar23 = pbVar22 + 6;
      bVar5 = pbVar22[5];
      *(byte **)pDVar23 = pbVar22 + 7;
      bVar6 = pbVar22[6];
      *(byte **)pDVar23 = pbVar22 + 8;
      bVar7 = pbVar22[7];
      *(byte **)pDVar23 = pbVar22 + 9;
      *(float *)(this_01 + 0x164) =
           fVar28 * (float)CONCAT31(CONCAT21(CONCAT11(bVar5,bVar6),bVar7),pbVar22[8]);
    }
    this_00 = SpineObject::operator_new
                        (0x50,
                         "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonBinary.cpp"
                         ,0x22f);
    local_e8 = &PTR__String_01c67868;
    if (local_a8 == (void *)0x0) {
      local_e0 = 0;
      local_d8 = (void *)0x0;
    }
    else {
      local_e0 = local_b0;
      lVar26 = local_b0 + 1;
      plVar10 = (long *)SpineExtension::getInstance();
      local_d8 = (void *)(**(code **)(*plVar10 + 0x18))
                                   (plVar10,lVar26,
                                    "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                    ,0x47);
      memcpy(local_d8,local_a8,local_b0 + 1);
    }
    local_100 = &PTR__String_01c67868;
    if (local_c0 == (void *)0x0) {
      local_f8 = 0;
      local_f0 = (void *)0x0;
    }
    else {
      local_f8 = local_c8;
      lVar26 = local_c8 + 1;
      plVar10 = (long *)SpineExtension::getInstance();
      local_f0 = (void *)(**(code **)(*plVar10 + 0x18))
                                   (plVar10,lVar26,
                                    "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                    ,0x47);
      memcpy(local_f0,local_c0,local_c8 + 1);
    }
    LinkedMesh::LinkedMesh
              (this_00,(MeshAttachment *)this_01,(String *)&local_e8,(long)param_3,
               (String *)&local_100,bVar4 != 0);
    pvVar11 = local_f0;
    local_100 = &PTR__String_01c67868;
    if (local_f0 != (void *)0x0) {
      plVar10 = (long *)SpineExtension::getInstance();
      (**(code **)(*plVar10 + 0x28))
                (plVar10,pvVar11,
                 "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",
                 0xc9);
    }
    SpineObject::~SpineObject((SpineObject *)&local_100);
    pvVar11 = local_d8;
    local_e8 = &PTR__String_01c67868;
    if (local_d8 != (void *)0x0) {
      plVar10 = (long *)SpineExtension::getInstance();
      (**(code **)(*plVar10 + 0x28))
                (plVar10,pvVar11,
                 "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",
                 0xc9);
    }
    SpineObject::~SpineObject((SpineObject *)&local_e8);
    uVar21 = *(ulong *)(this + 0x18);
    if (uVar21 == *(ulong *)(this + 0x20)) {
      uVar19 = (uint)((float)uVar21 * 1.75);
      uVar24 = *(undefined8 *)(this + 0x28);
      if (uVar19 < 9) {
        uVar19 = 8;
      }
      *(long *)(this + 0x20) = (long)(int)uVar19;
      plVar10 = (long *)SpineExtension::getInstance();
      lVar26 = (**(code **)(*plVar10 + 0x20))
                         (plVar10,uVar24,
                          -(ulong)(uVar19 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar19 << 3,
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                          ,0x6a);
      lVar16 = *(long *)(this + 0x18);
      *(long *)(this + 0x28) = lVar26;
      *(long *)(this + 0x18) = lVar16 + 1;
      puVar17 = (undefined8 *)(lVar26 + lVar16 * 8);
    }
    else {
      *(ulong *)(this + 0x18) = uVar21 + 1;
      puVar17 = (undefined8 *)(*(long *)(this + 0x28) + uVar21 * 8);
    }
    pvVar11 = local_c0;
    *puVar17 = this_00;
    local_d0 = &PTR__String_01c67868;
    if (local_c0 != (void *)0x0) {
      plVar10 = (long *)SpineExtension::getInstance();
      (**(code **)(*plVar10 + 0x28))
                (plVar10,pvVar11,
                 "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",
                 0xc9);
    }
    SpineObject::~SpineObject((SpineObject *)&local_d0);
    pvVar11 = local_a8;
    local_b8 = &PTR__String_01c67868;
    if (local_a8 != (void *)0x0) {
      plVar10 = (long *)SpineExtension::getInstance();
      (**(code **)(*plVar10 + 0x28))
                (plVar10,pvVar11,
                 "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",
                 0xc9);
    }
    SpineObject::~SpineObject((SpineObject *)&local_b8);
    break;
  case 4:
    plVar10 = *(long **)(this + 8);
    local_a0 = &PTR__String_01c67868;
    if (local_78 == (void *)0x0) {
      local_98 = 0;
      local_90 = (void *)0x0;
    }
    else {
      local_98 = local_80;
      lVar26 = local_80 + 1;
      plVar12 = (long *)SpineExtension::getInstance();
      local_90 = (void *)(**(code **)(*plVar12 + 0x18))
                                   (plVar12,lVar26,
                                    "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                    ,0x47);
      memcpy(local_90,local_78,local_80 + 1);
    }
    this_01 = (VertexAttachment *)(**(code **)(*plVar10 + 0x30))(plVar10,param_2,&local_a0);
    pvVar11 = local_90;
    local_a0 = &PTR__String_01c67868;
    if (local_90 != (void *)0x0) {
      plVar10 = (long *)SpineExtension::getInstance();
      (**(code **)(*plVar10 + 0x28))
                (plVar10,pvVar11,
                 "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",
                 0xc9);
    }
    SpineObject::~SpineObject((SpineObject *)&local_a0);
    pcVar27 = *(char **)pDVar23;
    *(char **)pDVar23 = pcVar27 + 1;
    this_01[0xa0] = (VertexAttachment)(*pcVar27 != '\0');
    *(char **)pDVar23 = pcVar27 + 2;
    this_01[0xa1] = (VertexAttachment)(pcVar27[1] != '\0');
    *(char **)pDVar23 = pcVar27 + 3;
    uVar19 = (byte)pcVar27[2] & 0x7f;
    if (pcVar27[2] < '\0') {
      *(char **)pDVar23 = pcVar27 + 4;
      uVar19 = uVar19 | ((byte)pcVar27[3] & 0x7f) << 7;
      if (pcVar27[3] < '\0') {
        *(char **)pDVar23 = pcVar27 + 5;
        uVar19 = uVar19 | ((byte)pcVar27[4] & 0x7f) << 0xe;
        if (pcVar27[4] < '\0') {
          *(char **)pDVar23 = pcVar27 + 6;
          uVar19 = uVar19 | ((byte)pcVar27[5] & 0x7f) << 0x15;
          if (pcVar27[5] < '\0') {
            *(char **)pDVar23 = pcVar27 + 7;
            uVar19 = uVar19 | (uint)(byte)pcVar27[6] << 0x1c;
          }
        }
      }
    }
    readVertices(this,param_1,this_01,uVar19);
    uVar21 = *(ulong *)(this_01 + 0x88);
    uVar25 = (ulong)((int)uVar19 / 3);
    *(ulong *)(this_01 + 0x88) = uVar25;
    if (*(ulong *)(this_01 + 0x90) < uVar25) {
      uVar18 = (uint)((float)uVar25 * 1.75);
      uVar24 = *(undefined8 *)(this_01 + 0x98);
      if (uVar18 < 9) {
        uVar18 = 8;
      }
      *(long *)(this_01 + 0x90) = (long)(int)uVar18;
      plVar10 = (long *)SpineExtension::getInstance();
      uVar24 = (**(code **)(*plVar10 + 0x20))
                         (plVar10,uVar24,
                          -(ulong)(uVar18 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar18 << 2,
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                          ,0x52);
      *(undefined8 *)(this_01 + 0x98) = uVar24;
      lVar26 = *(ulong *)(this_01 + 0x88) - uVar21;
      if (uVar21 <= *(ulong *)(this_01 + 0x88) && lVar26 != 0) {
LAB_00cfb644:
        memset((void *)(*(long *)(this_01 + 0x98) + uVar21 * 4),0,lVar26 << 2);
      }
    }
    else {
      lVar26 = uVar25 - uVar21;
      if (uVar21 <= uVar25 && lVar26 != 0) goto LAB_00cfb644;
    }
    if (2 < (int)uVar19) {
      uVar21 = (ulong)(uint)((int)uVar19 / 3);
      puVar14 = (undefined1 *)(*(long *)pDVar23 + 2);
      pfVar15 = *(float **)(this_01 + 0x98);
      do {
        *(undefined1 **)pDVar23 = puVar14 + -1;
        uVar2 = puVar14[-2];
        *(undefined1 **)pDVar23 = puVar14;
        uVar3 = puVar14[-1];
        *(undefined1 **)pDVar23 = puVar14 + 1;
        uVar1 = *puVar14;
        *(undefined1 **)pDVar23 = puVar14 + 2;
        uVar21 = uVar21 - 1;
        *pfVar15 = *(float *)(this + 0x48) *
                   (float)CONCAT31(CONCAT21(CONCAT11(uVar2,uVar3),uVar1),puVar14[1]);
        puVar14 = puVar14 + 4;
        pfVar15 = pfVar15 + 1;
      } while (uVar21 != 0);
    }
joined_r0x00cfb6c4:
    if (param_6) {
      *(long *)pDVar23 = *(long *)pDVar23 + 4;
    }
    plVar10 = *(long **)(this + 8);
    goto LAB_00cfba38;
  case 5:
    plVar10 = *(long **)(this + 8);
    local_a0 = &PTR__String_01c67868;
    if (local_78 == (void *)0x0) {
      local_98 = 0;
      local_90 = (void *)0x0;
    }
    else {
      local_98 = local_80;
      lVar26 = local_80 + 1;
      plVar12 = (long *)SpineExtension::getInstance();
      local_90 = (void *)(**(code **)(*plVar12 + 0x18))
                                   (plVar12,lVar26,
                                    "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                    ,0x47);
      memcpy(local_90,local_78,local_80 + 1);
    }
    this_01 = (VertexAttachment *)(**(code **)(*plVar10 + 0x38))(plVar10,param_2,&local_a0);
    pvVar11 = local_90;
    local_a0 = &PTR__String_01c67868;
    if (local_90 != (void *)0x0) {
      plVar10 = (long *)SpineExtension::getInstance();
      (**(code **)(*plVar10 + 0x28))
                (plVar10,pvVar11,
                 "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",
                 0xc9);
    }
    SpineObject::~SpineObject((SpineObject *)&local_a0);
    puVar14 = *(undefined1 **)pDVar23;
    *(undefined1 **)pDVar23 = puVar14 + 1;
    uVar1 = *puVar14;
    *(undefined1 **)pDVar23 = puVar14 + 2;
    uVar2 = puVar14[1];
    *(undefined1 **)pDVar23 = puVar14 + 3;
    uVar3 = puVar14[2];
    *(undefined1 **)pDVar23 = puVar14 + 4;
    *(uint *)(this_01 + 0x2c) = CONCAT31(CONCAT21(CONCAT11(uVar1,uVar2),uVar3),puVar14[3]);
    *(undefined1 **)pDVar23 = puVar14 + 5;
    uVar1 = puVar14[4];
    *(undefined1 **)pDVar23 = puVar14 + 6;
    uVar2 = puVar14[5];
    *(undefined1 **)pDVar23 = puVar14 + 7;
    uVar3 = puVar14[6];
    *(undefined1 **)pDVar23 = puVar14 + 8;
    fVar28 = *(float *)(this + 0x48);
    *(float *)(this_01 + 0x24) =
         fVar28 * (float)CONCAT31(CONCAT21(CONCAT11(uVar1,uVar2),uVar3),puVar14[7]);
    *(undefined1 **)pDVar23 = puVar14 + 9;
    uVar1 = puVar14[8];
    *(undefined1 **)pDVar23 = puVar14 + 10;
    uVar2 = puVar14[9];
    *(undefined1 **)pDVar23 = puVar14 + 0xb;
    uVar3 = puVar14[10];
    *(undefined1 **)pDVar23 = puVar14 + 0xc;
    *(float *)(this_01 + 0x28) =
         fVar28 * (float)CONCAT31(CONCAT21(CONCAT11(uVar1,uVar2),uVar3),puVar14[0xb]);
    if (param_6) {
      *(undefined1 **)pDVar23 = puVar14 + 0x10;
    }
    plVar10 = *(long **)(this + 8);
    goto LAB_00cfba38;
  case 6:
    pbVar20 = puVar14 + 2;
    *(byte **)pDVar23 = pbVar20;
    uVar19 = (byte)puVar14[1] & 0x7f;
    if ((char)puVar14[1] < '\0') {
      pbVar20 = puVar14 + 3;
      *(byte **)pDVar23 = pbVar20;
      uVar19 = uVar19 | ((byte)puVar14[2] & 0x7f) << 7;
      if ((char)puVar14[2] < '\0') {
        pbVar20 = puVar14 + 4;
        *(byte **)pDVar23 = pbVar20;
        uVar19 = uVar19 | ((byte)puVar14[3] & 0x7f) << 0xe;
        if ((char)puVar14[3] < '\0') {
          pbVar20 = puVar14 + 5;
          *(byte **)pDVar23 = pbVar20;
          uVar19 = uVar19 | ((byte)puVar14[4] & 0x7f) << 0x15;
          if ((char)puVar14[4] < '\0') {
            pbVar20 = puVar14 + 6;
            *(byte **)pDVar23 = pbVar20;
            uVar19 = uVar19 | (uint)(byte)puVar14[5] << 0x1c;
          }
        }
      }
    }
    *(byte **)pDVar23 = pbVar20 + 1;
    uVar18 = *pbVar20 & 0x7f;
    if ((char)*pbVar20 < '\0') {
      *(byte **)pDVar23 = pbVar20 + 2;
      uVar18 = uVar18 | (pbVar20[1] & 0x7f) << 7;
      if ((char)pbVar20[1] < '\0') {
        *(byte **)pDVar23 = pbVar20 + 3;
        uVar18 = uVar18 | (pbVar20[2] & 0x7f) << 0xe;
        if ((char)pbVar20[2] < '\0') {
          *(byte **)pDVar23 = pbVar20 + 4;
          uVar18 = uVar18 | (pbVar20[3] & 0x7f) << 0x15;
          if ((char)pbVar20[3] < '\0') {
            *(byte **)pDVar23 = pbVar20 + 5;
            uVar18 = uVar18 | (uint)pbVar20[4] << 0x1c;
          }
        }
      }
    }
    this_01 = (VertexAttachment *)
              (**(code **)(**(long **)(this + 8) + 0x40))(*(long **)(this + 8),param_2,&local_88);
    readVertices(this,param_1,this_01,uVar18);
    *(undefined8 *)(this_01 + 0x80) =
         *(undefined8 *)(*(long *)(param_5 + 0x58) + (long)(int)uVar19 * 8);
    if (param_6) {
      *(long *)pDVar23 = *(long *)pDVar23 + 4;
    }
    plVar10 = *(long **)(this + 8);
LAB_00cfba38:
    (**(code **)(*plVar10 + 0x48))(plVar10,this_01);
    goto LAB_00cfc9e8;
  default:
    this_01 = (VertexAttachment *)0x0;
    goto LAB_00cfc9e8;
  }
  pvVar11 = local_90;
  local_a0 = &PTR__String_01c67868;
  if (local_90 != (void *)0x0) {
    plVar10 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar10 + 0x28))
              (plVar10,pvVar11,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",0xc9
              );
  }
  SpineObject::~SpineObject((SpineObject *)&local_a0);
LAB_00cfc9e8:
  pvVar11 = local_78;
  local_88 = &PTR__String_01c67868;
  if (local_78 != (void *)0x0) {
    plVar10 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar10 + 0x28))
              (plVar10,pvVar11,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",0xc9
              );
  }
  SpineObject::~SpineObject((SpineObject *)&local_88);
  if (*(long *)(lVar8 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this_01;
}

