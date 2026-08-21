
/* spine::SkeletonJson::readVertices(spine::Json*, spine::VertexAttachment*, unsigned long) */

void __thiscall
spine::SkeletonJson::readVertices
          (SkeletonJson *this,Json *param_1,VertexAttachment *param_2,ulong param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  uint uVar6;
  SkeletonJson *pSVar7;
  float *pfVar8;
  ulong uVar9;
  undefined4 *puVar10;
  long lVar11;
  float *pfVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined4 uVar18;
  float *pfVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  undefined **local_f0;
  undefined **ppuStack_e8;
  ulong local_e0;
  ulong local_d8;
  long local_d0;
  undefined **local_c8;
  ulong local_c0;
  ulong local_b8;
  long local_b0;
  undefined **local_a0;
  ulong local_98;
  ulong local_90;
  float *local_88;
  long local_80;
  
  lVar2 = tpidr_el0;
  local_80 = *(long *)(lVar2 + 0x28);
  local_a0 = &PTR__Vector_01c8d048;
  local_98 = 0;
  local_90 = 0;
  local_88 = (float *)0x0;
  VertexAttachment::setWorldVerticesLength(param_2,param_3);
  lVar3 = Json::getItem(param_1,"vertices");
  iVar1 = *(int *)(lVar3 + 0x14);
  uVar16 = (ulong)iVar1;
  if (iVar1 == 0) {
    plVar4 = *(long **)(lVar3 + 8);
    local_98 = uVar16;
    pfVar12 = local_88;
  }
  else {
    local_90 = uVar16;
    plVar4 = (long *)SpineExtension::getInstance();
    local_88 = (float *)(**(code **)(*plVar4 + 0x20))
                                  (plVar4,0,uVar16 << 2,
                                   "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                                   ,0x5e);
    local_98 = uVar16;
    memset(local_88,0,uVar16 << 2);
    plVar4 = *(long **)(lVar3 + 8);
    pfVar12 = local_88;
  }
  for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
    *pfVar12 = *(float *)((long)plVar4 + 0x24);
    pfVar12 = pfVar12 + 1;
  }
  if (uVar16 == param_3) {
    pSVar7 = this + 0x30;
    if (((*(float *)pSVar7 != 1.0) && (iVar1 != 0)) &&
       (*local_88 = *(float *)pSVar7 * *local_88, 1 < param_3)) {
      uVar16 = param_3 - 1;
      if (uVar16 < 8) {
        uVar13 = 1;
      }
      else if (((SkeletonJson *)(local_88 + 1) < this + 0x31) &&
              (pSVar7 < (SkeletonJson *)(local_88 + param_3))) {
        uVar13 = 1;
      }
      else {
        fVar21 = *(float *)pSVar7;
        uVar14 = uVar16 & 0xfffffffffffffff8;
        uVar13 = uVar14 | 1;
        pfVar12 = local_88 + 5;
        uVar9 = uVar14;
        do {
          uVar9 = uVar9 - 8;
          *(ulong *)(pfVar12 + -2) =
               CONCAT44(fVar21 * (float)((ulong)*(undefined8 *)(pfVar12 + -2) >> 0x20),
                        fVar21 * (float)*(undefined8 *)(pfVar12 + -2));
          *(ulong *)(pfVar12 + -4) =
               CONCAT44(fVar21 * (float)((ulong)*(undefined8 *)(pfVar12 + -4) >> 0x20),
                        fVar21 * (float)*(undefined8 *)(pfVar12 + -4));
          *(ulong *)(pfVar12 + 2) =
               CONCAT44(fVar21 * (float)((ulong)*(undefined8 *)(pfVar12 + 2) >> 0x20),
                        fVar21 * (float)*(undefined8 *)(pfVar12 + 2));
          *(ulong *)pfVar12 =
               CONCAT44(fVar21 * (float)((ulong)*(undefined8 *)pfVar12 >> 0x20),
                        fVar21 * (float)*(undefined8 *)pfVar12);
          pfVar12 = pfVar12 + 8;
        } while (uVar9 != 0);
        if (uVar16 == uVar14) goto LAB_00d0515c;
      }
      do {
        uVar16 = uVar13 + 1;
        local_88[uVar13] = *(float *)pSVar7 * local_88[uVar13];
        uVar13 = uVar16;
      } while (uVar16 < param_3);
    }
LAB_00d0515c:
    lVar3 = VertexAttachment::getVertices(param_2);
    uVar16 = local_98;
    *(undefined8 *)(lVar3 + 8) = 0;
    if (*(ulong *)(lVar3 + 0x10) < local_98) {
      uVar15 = *(undefined8 *)(lVar3 + 0x18);
      *(ulong *)(lVar3 + 0x10) = local_98;
      plVar4 = (long *)SpineExtension::getInstance();
      uVar15 = (**(code **)(*plVar4 + 0x20))
                         (plVar4,uVar15,uVar16 << 2,
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                          ,0x5e);
      *(undefined8 *)(lVar3 + 0x18) = uVar15;
    }
    else if (local_98 == 0) goto LAB_00d05264;
    uVar16 = 0;
    uVar9 = *(ulong *)(lVar3 + 8);
    do {
      if (uVar9 == *(ulong *)(lVar3 + 0x10)) {
        uVar6 = (uint)((float)uVar9 * 1.75);
        fVar21 = local_88[uVar16];
        uVar15 = *(undefined8 *)(lVar3 + 0x18);
        if (uVar6 < 9) {
          uVar6 = 8;
        }
        *(long *)(lVar3 + 0x10) = (long)(int)uVar6;
        plVar4 = (long *)SpineExtension::getInstance();
        lVar5 = (**(code **)(*plVar4 + 0x20))
                          (plVar4,uVar15,
                           -(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar6 << 2,
                           "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                           ,0x6a);
        lVar11 = *(long *)(lVar3 + 8);
        *(long *)(lVar3 + 0x18) = lVar5;
        uVar13 = lVar11 + 1;
        *(ulong *)(lVar3 + 8) = uVar13;
        pfVar12 = (float *)(lVar5 + lVar11 * 4);
      }
      else {
        uVar13 = uVar9 + 1;
        *(ulong *)(lVar3 + 8) = uVar13;
        fVar21 = local_88[uVar16];
        pfVar12 = (float *)(*(long *)(lVar3 + 0x18) + uVar9 * 4);
      }
      *pfVar12 = fVar21;
      uVar16 = uVar16 + 1;
      uVar9 = uVar13;
    } while (uVar16 < local_98);
    goto LAB_00d05264;
  }
  uVar9 = param_3 * 3;
  local_f0 = &PTR__Vertices_01c8f598;
  ppuStack_e8 = &PTR__Vector_01c8f5d0;
  local_d8 = 0;
  local_d0 = 0;
  local_e0 = 0;
  local_c8 = &PTR__Vector_01c8d048;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  if (uVar9 == 0) {
    if (param_3 * 9 == 0) goto LAB_00d04b68;
LAB_00d04b20:
    lVar5 = local_d0;
    local_b8 = param_3 * 9;
    plVar4 = (long *)SpineExtension::getInstance();
    lVar3 = (**(code **)(*plVar4 + 0x20))
                      (plVar4,0,param_3 * 0x24,
                       "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",
                       0x5e);
    local_b0 = lVar3;
    pfVar12 = local_88;
  }
  else {
    local_d8 = uVar9;
    plVar4 = (long *)SpineExtension::getInstance();
    local_d0 = (**(code **)(*plVar4 + 0x20))
                         (plVar4,0,param_3 * 0x18,
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                          ,0x5e);
    if (param_3 * 9 != 0) goto LAB_00d04b20;
LAB_00d04b68:
    lVar3 = 0;
    lVar5 = local_d0;
    pfVar12 = local_88;
  }
  local_88 = pfVar12;
  if (iVar1 != 0) {
    uVar13 = 0;
    uVar14 = 0;
    do {
      uVar17 = uVar14 + 1;
      fVar21 = pfVar12[uVar14];
      if (uVar13 == uVar9) {
        uVar6 = (uint)((float)uVar9 * 1.75);
        if (uVar6 < 9) {
          uVar6 = 8;
        }
        local_d8 = (ulong)(int)uVar6;
        plVar4 = (long *)SpineExtension::getInstance();
        lVar5 = (**(code **)(*plVar4 + 0x20))
                          (plVar4,lVar5,
                           -(ulong)(uVar6 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar6 << 3,
                           "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                           ,0x6a);
        plVar4 = (long *)(lVar5 + uVar9 * 8);
        local_d0 = lVar5;
        uVar13 = uVar9;
      }
      else {
        plVar4 = (long *)(lVar5 + uVar13 * 8);
      }
      local_e0 = uVar13 + 1;
      uVar9 = uVar17 + (long)((int)fVar21 << 2);
      *plVar4 = (long)(int)fVar21;
      if (uVar17 < uVar9) {
        pfVar19 = pfVar12 + uVar14 + 4;
        do {
          uVar13 = local_e0;
          fVar21 = pfVar19[-3];
          if (local_e0 == local_d8) {
            uVar6 = (uint)((float)local_e0 * 1.75);
            if (uVar6 < 9) {
              uVar6 = 8;
            }
            local_d8 = (ulong)(int)uVar6;
            plVar4 = (long *)SpineExtension::getInstance();
            lVar5 = (**(code **)(*plVar4 + 0x20))
                              (plVar4,lVar5,
                               -(ulong)(uVar6 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar6 << 3,
                               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                               ,0x6a);
            local_d0 = lVar5;
          }
          uVar14 = local_c0;
          local_e0 = uVar13 + 1;
          *(long *)(lVar5 + uVar13 * 8) = (long)(int)fVar21;
          fVar21 = pfVar19[-2];
          fVar22 = *(float *)(this + 0x30);
          uVar13 = local_b8;
          if (local_c0 == local_b8) {
            uVar6 = (uint)((float)local_c0 * 1.75);
            if (uVar6 < 9) {
              uVar6 = 8;
            }
            uVar13 = (ulong)(int)uVar6;
            local_b8 = uVar13;
            plVar4 = (long *)SpineExtension::getInstance();
            lVar3 = (**(code **)(*plVar4 + 0x20))
                              (plVar4,lVar3,
                               -(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar6 << 2,
                               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                               ,0x6a);
            local_b0 = lVar3;
          }
          local_c0 = uVar14 + 1;
          *(float *)(lVar3 + uVar14 * 4) = fVar21 * fVar22;
          fVar21 = pfVar19[-1];
          fVar22 = *(float *)(this + 0x30);
          if (local_c0 == uVar13) {
            uVar6 = (uint)((float)uVar13 * 1.75);
            if (uVar6 < 9) {
              uVar6 = 8;
            }
            local_b8 = (long)(int)uVar6;
            plVar4 = (long *)SpineExtension::getInstance();
            lVar3 = (**(code **)(*plVar4 + 0x20))
                              (plVar4,lVar3,
                               -(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar6 << 2,
                               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                               ,0x6a);
            uVar14 = uVar13 + 1;
            pfVar8 = (float *)(lVar3 + uVar13 * 4);
            uVar13 = (long)(int)uVar6;
            local_b0 = lVar3;
          }
          else {
            uVar14 = uVar14 + 2;
            pfVar8 = (float *)(lVar3 + local_c0 * 4);
          }
          *pfVar8 = fVar21 * fVar22;
          if (uVar14 == uVar13) {
            uVar6 = (uint)((float)uVar13 * 1.75);
            fVar21 = *pfVar19;
            if (uVar6 < 9) {
              uVar6 = 8;
            }
            local_b8 = (ulong)(int)uVar6;
            local_c0 = uVar14;
            plVar4 = (long *)SpineExtension::getInstance();
            lVar3 = (**(code **)(*plVar4 + 0x20))
                              (plVar4,lVar3,
                               -(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar6 << 2,
                               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                               ,0x6a);
            pfVar8 = (float *)(lVar3 + uVar13 * 4);
            local_b0 = lVar3;
            uVar14 = uVar13;
          }
          else {
            fVar21 = *pfVar19;
            pfVar8 = (float *)(lVar3 + uVar14 * 4);
          }
          local_c0 = uVar14 + 1;
          uVar17 = uVar17 + 4;
          pfVar19 = pfVar19 + 4;
          *pfVar8 = fVar21;
        } while (uVar17 < uVar9);
      }
      uVar13 = local_e0;
      uVar9 = local_d8;
      uVar14 = uVar17;
    } while (uVar17 < uVar16);
  }
  lVar3 = VertexAttachment::getVertices(param_2);
  uVar16 = local_c0;
  *(undefined8 *)(lVar3 + 8) = 0;
  if (*(ulong *)(lVar3 + 0x10) < local_c0) {
    uVar15 = *(undefined8 *)(lVar3 + 0x18);
    *(ulong *)(lVar3 + 0x10) = local_c0;
    plVar4 = (long *)SpineExtension::getInstance();
    uVar15 = (**(code **)(*plVar4 + 0x20))
                       (plVar4,uVar15,uVar16 << 2,
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",
                        0x5e);
    *(undefined8 *)(lVar3 + 0x18) = uVar15;
LAB_00d04e90:
    uVar16 = 0;
    uVar9 = *(ulong *)(lVar3 + 8);
    do {
      if (uVar9 == *(ulong *)(lVar3 + 0x10)) {
        uVar6 = (uint)((float)uVar9 * 1.75);
        uVar18 = *(undefined4 *)(local_b0 + uVar16 * 4);
        uVar15 = *(undefined8 *)(lVar3 + 0x18);
        if (uVar6 < 9) {
          uVar6 = 8;
        }
        *(long *)(lVar3 + 0x10) = (long)(int)uVar6;
        plVar4 = (long *)SpineExtension::getInstance();
        lVar5 = (**(code **)(*plVar4 + 0x20))
                          (plVar4,uVar15,
                           -(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar6 << 2,
                           "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                           ,0x6a);
        lVar11 = *(long *)(lVar3 + 8);
        *(long *)(lVar3 + 0x18) = lVar5;
        uVar13 = lVar11 + 1;
        *(ulong *)(lVar3 + 8) = uVar13;
        puVar10 = (undefined4 *)(lVar5 + lVar11 * 4);
      }
      else {
        uVar13 = uVar9 + 1;
        *(ulong *)(lVar3 + 8) = uVar13;
        uVar18 = *(undefined4 *)(local_b0 + uVar16 * 4);
        puVar10 = (undefined4 *)(*(long *)(lVar3 + 0x18) + uVar9 * 4);
      }
      *puVar10 = uVar18;
      uVar16 = uVar16 + 1;
      uVar9 = uVar13;
    } while (uVar16 < local_c0);
  }
  else if (local_c0 != 0) goto LAB_00d04e90;
  lVar3 = VertexAttachment::getBones(param_2);
  uVar16 = local_e0;
  *(undefined8 *)(lVar3 + 8) = 0;
  if (*(ulong *)(lVar3 + 0x10) < local_e0) {
    uVar15 = *(undefined8 *)(lVar3 + 0x18);
    *(ulong *)(lVar3 + 0x10) = local_e0;
    plVar4 = (long *)SpineExtension::getInstance();
    uVar15 = (**(code **)(*plVar4 + 0x20))
                       (plVar4,uVar15,uVar16 << 3,
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",
                        0x5e);
    *(undefined8 *)(lVar3 + 0x18) = uVar15;
LAB_00d04f9c:
    uVar16 = 0;
    do {
      uVar9 = *(ulong *)(lVar3 + 8);
      if (uVar9 == *(ulong *)(lVar3 + 0x10)) {
        uVar6 = (uint)((float)uVar9 * 1.75);
        uVar20 = *(undefined8 *)(local_d0 + uVar16 * 8);
        uVar15 = *(undefined8 *)(lVar3 + 0x18);
        if (uVar6 < 9) {
          uVar6 = 8;
        }
        *(long *)(lVar3 + 0x10) = (long)(int)uVar6;
        plVar4 = (long *)SpineExtension::getInstance();
        lVar5 = (**(code **)(*plVar4 + 0x20))
                          (plVar4,uVar15,
                           -(ulong)(uVar6 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar6 << 3,
                           "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                           ,0x6a);
        lVar11 = *(long *)(lVar3 + 8);
        *(long *)(lVar3 + 0x18) = lVar5;
        *(long *)(lVar3 + 8) = lVar11 + 1;
        *(undefined8 *)(lVar5 + lVar11 * 8) = uVar20;
      }
      else {
        *(ulong *)(lVar3 + 8) = uVar9 + 1;
        *(undefined8 *)(*(long *)(lVar3 + 0x18) + uVar9 * 8) =
             *(undefined8 *)(local_d0 + uVar16 * 8);
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 < local_e0);
  }
  else if (local_e0 != 0) goto LAB_00d04f9c;
  lVar3 = local_b0;
  local_f0 = &PTR__Vertices_01c8f598;
  local_c8 = &PTR__Vector_01c8d048;
  local_c0 = 0;
  if (local_b0 != 0) {
    plVar4 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar4 + 0x28))
              (plVar4,lVar3,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",0xce);
  }
  SpineObject::~SpineObject((SpineObject *)&local_c8);
  lVar3 = local_d0;
  ppuStack_e8 = &PTR__Vector_01c8f5d0;
  local_e0 = 0;
  if (local_d0 != 0) {
    plVar4 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar4 + 0x28))
              (plVar4,lVar3,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",0xce);
  }
  SpineObject::~SpineObject((SpineObject *)((ulong)&local_f0 | 8));
  SpineObject::~SpineObject((SpineObject *)&local_f0);
LAB_00d05264:
  pfVar12 = local_88;
  local_a0 = &PTR__Vector_01c8d048;
  local_98 = 0;
  if (local_88 != (float *)0x0) {
    plVar4 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar4 + 0x28))
              (plVar4,pfVar12,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",0xce);
  }
  SpineObject::~SpineObject((SpineObject *)&local_a0);
  if (*(long *)(lVar2 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

