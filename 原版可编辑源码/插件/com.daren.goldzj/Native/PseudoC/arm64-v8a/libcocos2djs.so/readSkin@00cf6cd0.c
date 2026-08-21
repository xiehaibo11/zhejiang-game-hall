
/* spine::SkeletonBinary::readSkin(spine::SkeletonBinary::DataInput*, bool, spine::SkeletonData*,
   bool) */

Skin * __thiscall
spine::SkeletonBinary::readSkin
          (SkeletonBinary *this,DataInput *param_1,bool param_2,SkeletonData *param_3,bool param_4)

{
  size_t __n;
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  long *plVar4;
  long lVar5;
  Attachment *pAVar6;
  uint uVar7;
  byte *pbVar8;
  long lVar9;
  undefined8 *puVar10;
  byte *pbVar11;
  uint uVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  undefined8 uVar16;
  uint uVar17;
  undefined8 uVar18;
  DataInput *pDVar19;
  char *pcVar20;
  Skin *local_b0;
  undefined **local_a8;
  size_t local_a0;
  void *local_98;
  undefined **local_90;
  size_t local_88;
  undefined8 *local_80;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  if (param_2) {
    pbVar8 = *(byte **)(param_1 + 8);
    *(byte **)(param_1 + 8) = pbVar8 + 1;
    uVar14 = *pbVar8 & 0x7f;
    if ((char)*pbVar8 < '\0') {
      *(byte **)(param_1 + 8) = pbVar8 + 2;
      uVar14 = uVar14 | (pbVar8[1] & 0x7f) << 7;
      if ((char)pbVar8[1] < '\0') {
        *(byte **)(param_1 + 8) = pbVar8 + 3;
        uVar14 = uVar14 | (pbVar8[2] & 0x7f) << 0xe;
        if ((char)pbVar8[2] < '\0') {
          *(byte **)(param_1 + 8) = pbVar8 + 4;
          uVar14 = uVar14 | (pbVar8[3] & 0x7f) << 0x15;
          if ((char)pbVar8[3] < '\0') {
            *(byte **)(param_1 + 8) = pbVar8 + 5;
            uVar14 = uVar14 | (uint)pbVar8[4] << 0x1c;
          }
        }
      }
    }
    if (uVar14 == 0) {
      local_b0 = (Skin *)0x0;
      goto LAB_00cf78d8;
    }
    local_b0 = SpineObject::operator_new
                         (0x88,
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonBinary.cpp"
                          ,0x1c3);
    local_88 = 7;
    local_90 = &PTR__String_01c67868;
    plVar4 = (long *)SpineExtension::getInstance();
    local_80 = (undefined8 *)
               (**(code **)(*plVar4 + 0x18))
                         (plVar4,8,
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                          ,0x39);
    *local_80 = 0x746c7561666564;
    Skin::Skin(local_b0,(String *)&local_90);
    puVar10 = local_80;
    local_90 = &PTR__String_01c67868;
    if (local_80 != (undefined8 *)0x0) {
      plVar4 = (long *)SpineExtension::getInstance();
      (**(code **)(*plVar4 + 0x28))
                (plVar4,puVar10,
                 "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",
                 0xc9);
    }
    SpineObject::~SpineObject((SpineObject *)&local_90);
  }
  else {
    local_b0 = SpineObject::operator_new
                         (0x88,
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonBinary.cpp"
                          ,0x1c5);
    pDVar19 = param_1 + 8;
    pbVar8 = *(byte **)pDVar19;
    *(byte **)pDVar19 = pbVar8 + 1;
    uVar14 = *pbVar8 & 0x7f;
    if ((char)*pbVar8 < '\0') {
      *(byte **)pDVar19 = pbVar8 + 2;
      uVar14 = uVar14 | (pbVar8[1] & 0x7f) << 7;
      if ((char)pbVar8[1] < '\0') {
        *(byte **)pDVar19 = pbVar8 + 3;
        uVar14 = uVar14 | (pbVar8[2] & 0x7f) << 0xe;
        if ((char)pbVar8[2] < '\0') {
          *(byte **)pDVar19 = pbVar8 + 4;
          uVar14 = uVar14 | (pbVar8[3] & 0x7f) << 0x15;
          if ((char)pbVar8[3] < '\0') {
            *(byte **)pDVar19 = pbVar8 + 5;
            uVar14 = uVar14 | (uint)pbVar8[4] << 0x1c;
          }
        }
      }
    }
    if (uVar14 == 0) {
LAB_00cf6f38:
      local_90 = &PTR__String_01c67868;
      local_88 = 0;
      local_80 = (undefined8 *)0x0;
    }
    else {
      pcVar20 = *(char **)(*(long *)(param_3 + 0x180) + (long)(int)(uVar14 - 1) * 8);
      local_90 = &PTR__String_01c67868;
      if (pcVar20 == (char *)0x0) goto LAB_00cf6f38;
      local_88 = strlen(pcVar20);
      __n = local_88 + 1;
      plVar4 = (long *)SpineExtension::getInstance();
      local_80 = (undefined8 *)
                 (**(code **)(*plVar4 + 0x18))
                           (plVar4,__n,
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                            ,0x39);
      memcpy(local_80,pcVar20,__n);
    }
    Skin::Skin(local_b0,(String *)&local_90);
    puVar10 = local_80;
    local_90 = &PTR__String_01c67868;
    if (local_80 != (undefined8 *)0x0) {
      plVar4 = (long *)SpineExtension::getInstance();
      (**(code **)(*plVar4 + 0x28))
                (plVar4,puVar10,
                 "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",
                 0xc9);
    }
    SpineObject::~SpineObject((SpineObject *)&local_90);
    pbVar11 = *(byte **)pDVar19;
    pbVar8 = pbVar11 + 1;
    *(byte **)pDVar19 = pbVar8;
    uVar14 = *pbVar11 & 0x7f;
    if ((char)*pbVar11 < '\0') {
      pbVar8 = pbVar11 + 2;
      *(byte **)pDVar19 = pbVar8;
      uVar14 = uVar14 | (pbVar11[1] & 0x7f) << 7;
      if ((char)pbVar11[1] < '\0') {
        pbVar8 = pbVar11 + 3;
        *(byte **)pDVar19 = pbVar8;
        uVar14 = uVar14 | (pbVar11[2] & 0x7f) << 0xe;
        if ((char)pbVar11[2] < '\0') {
          pbVar8 = pbVar11 + 4;
          *(byte **)pDVar19 = pbVar8;
          uVar14 = uVar14 | (pbVar11[3] & 0x7f) << 0x15;
          if ((char)pbVar11[3] < '\0') {
            pbVar8 = pbVar11 + 5;
            *(byte **)pDVar19 = pbVar8;
            uVar14 = uVar14 | (uint)pbVar11[4] << 0x1c;
          }
        }
      }
    }
    if (0 < (int)uVar14) {
      do {
        lVar5 = Skin::getBones(local_b0);
        pbVar8 = *(byte **)pDVar19;
        *(byte **)pDVar19 = pbVar8 + 1;
        uVar7 = *pbVar8 & 0x7f;
        if ((char)*pbVar8 < '\0') {
          *(byte **)pDVar19 = pbVar8 + 2;
          uVar7 = uVar7 | (pbVar8[1] & 0x7f) << 7;
          if ((char)pbVar8[1] < '\0') {
            *(byte **)pDVar19 = pbVar8 + 3;
            uVar7 = uVar7 | (pbVar8[2] & 0x7f) << 0xe;
            if ((char)pbVar8[2] < '\0') {
              *(byte **)pDVar19 = pbVar8 + 4;
              uVar7 = uVar7 | (pbVar8[3] & 0x7f) << 0x15;
              if ((char)pbVar8[3] < '\0') {
                *(byte **)pDVar19 = pbVar8 + 5;
                uVar7 = uVar7 | (uint)pbVar8[4] << 0x1c;
              }
            }
          }
        }
        uVar1 = *(ulong *)(lVar5 + 8);
        lVar13 = *(long *)(param_3 + 0x38);
        if (uVar1 == *(ulong *)(lVar5 + 0x10)) {
          uVar16 = *(undefined8 *)(lVar13 + (long)(int)uVar7 * 8);
          uVar7 = (uint)((float)uVar1 * 1.75);
          uVar18 = *(undefined8 *)(lVar5 + 0x18);
          if (uVar7 < 9) {
            uVar7 = 8;
          }
          *(long *)(lVar5 + 0x10) = (long)(int)uVar7;
          plVar4 = (long *)SpineExtension::getInstance();
          lVar13 = (**(code **)(*plVar4 + 0x20))
                             (plVar4,uVar18,
                              -(ulong)(uVar7 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar7 << 3,
                              "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                              ,0x6a);
          lVar9 = *(long *)(lVar5 + 8);
          *(long *)(lVar5 + 0x18) = lVar13;
          *(long *)(lVar5 + 8) = lVar9 + 1;
          puVar10 = (undefined8 *)(lVar13 + lVar9 * 8);
        }
        else {
          *(ulong *)(lVar5 + 8) = uVar1 + 1;
          uVar16 = *(undefined8 *)(lVar13 + (long)(int)uVar7 * 8);
          puVar10 = (undefined8 *)(*(long *)(lVar5 + 0x18) + uVar1 * 8);
        }
        uVar14 = uVar14 - 1;
        *puVar10 = uVar16;
      } while (uVar14 != 0);
      pbVar8 = *(byte **)pDVar19;
    }
    pbVar11 = pbVar8 + 1;
    *(byte **)pDVar19 = pbVar11;
    uVar14 = *pbVar8 & 0x7f;
    if ((char)*pbVar8 < '\0') {
      pbVar11 = pbVar8 + 2;
      *(byte **)pDVar19 = pbVar11;
      uVar14 = uVar14 | (pbVar8[1] & 0x7f) << 7;
      if ((char)pbVar8[1] < '\0') {
        pbVar11 = pbVar8 + 3;
        *(byte **)pDVar19 = pbVar11;
        uVar14 = uVar14 | (pbVar8[2] & 0x7f) << 0xe;
        if ((char)pbVar8[2] < '\0') {
          pbVar11 = pbVar8 + 4;
          *(byte **)pDVar19 = pbVar11;
          uVar14 = uVar14 | (pbVar8[3] & 0x7f) << 0x15;
          if ((char)pbVar8[3] < '\0') {
            pbVar11 = pbVar8 + 5;
            *(byte **)pDVar19 = pbVar11;
            uVar14 = uVar14 | (uint)pbVar8[4] << 0x1c;
          }
        }
      }
    }
    if (0 < (int)uVar14) {
      do {
        lVar5 = Skin::getConstraints(local_b0);
        pbVar8 = *(byte **)pDVar19;
        *(byte **)pDVar19 = pbVar8 + 1;
        uVar7 = *pbVar8 & 0x7f;
        if ((char)*pbVar8 < '\0') {
          *(byte **)pDVar19 = pbVar8 + 2;
          uVar7 = uVar7 | (pbVar8[1] & 0x7f) << 7;
          if ((char)pbVar8[1] < '\0') {
            *(byte **)pDVar19 = pbVar8 + 3;
            uVar7 = uVar7 | (pbVar8[2] & 0x7f) << 0xe;
            if ((char)pbVar8[2] < '\0') {
              *(byte **)pDVar19 = pbVar8 + 4;
              uVar7 = uVar7 | (pbVar8[3] & 0x7f) << 0x15;
              if ((char)pbVar8[3] < '\0') {
                *(byte **)pDVar19 = pbVar8 + 5;
                uVar7 = uVar7 | (uint)pbVar8[4] << 0x1c;
              }
            }
          }
        }
        uVar1 = *(ulong *)(lVar5 + 8);
        uVar16 = *(undefined8 *)(*(long *)(param_3 + 0xe0) + (long)(int)uVar7 * 8);
        if (uVar1 == *(ulong *)(lVar5 + 0x10)) {
          uVar7 = (uint)((float)uVar1 * 1.75);
          uVar18 = *(undefined8 *)(lVar5 + 0x18);
          if (uVar7 < 9) {
            uVar7 = 8;
          }
          *(long *)(lVar5 + 0x10) = (long)(int)uVar7;
          plVar4 = (long *)SpineExtension::getInstance();
          lVar13 = (**(code **)(*plVar4 + 0x20))
                             (plVar4,uVar18,
                              -(ulong)(uVar7 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar7 << 3,
                              "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                              ,0x6a);
          lVar9 = *(long *)(lVar5 + 8);
          *(long *)(lVar5 + 0x18) = lVar13;
          *(long *)(lVar5 + 8) = lVar9 + 1;
          puVar10 = (undefined8 *)(lVar13 + lVar9 * 8);
        }
        else {
          *(ulong *)(lVar5 + 8) = uVar1 + 1;
          puVar10 = (undefined8 *)(*(long *)(lVar5 + 0x18) + uVar1 * 8);
        }
        uVar14 = uVar14 - 1;
        *puVar10 = uVar16;
      } while (uVar14 != 0);
      pbVar11 = *(byte **)pDVar19;
    }
    pbVar8 = pbVar11 + 1;
    *(byte **)pDVar19 = pbVar8;
    uVar14 = *pbVar11 & 0x7f;
    if ((char)*pbVar11 < '\0') {
      pbVar8 = pbVar11 + 2;
      *(byte **)pDVar19 = pbVar8;
      uVar14 = uVar14 | (pbVar11[1] & 0x7f) << 7;
      if ((char)pbVar11[1] < '\0') {
        pbVar8 = pbVar11 + 3;
        *(byte **)pDVar19 = pbVar8;
        uVar14 = uVar14 | (pbVar11[2] & 0x7f) << 0xe;
        if ((char)pbVar11[2] < '\0') {
          pbVar8 = pbVar11 + 4;
          *(byte **)pDVar19 = pbVar8;
          uVar14 = uVar14 | (pbVar11[3] & 0x7f) << 0x15;
          if ((char)pbVar11[3] < '\0') {
            pbVar8 = pbVar11 + 5;
            *(byte **)pDVar19 = pbVar8;
            uVar14 = uVar14 | (uint)pbVar11[4] << 0x1c;
          }
        }
      }
    }
    if (0 < (int)uVar14) {
      do {
        lVar5 = Skin::getConstraints(local_b0);
        pbVar8 = *(byte **)pDVar19;
        *(byte **)pDVar19 = pbVar8 + 1;
        uVar7 = *pbVar8 & 0x7f;
        if ((char)*pbVar8 < '\0') {
          *(byte **)pDVar19 = pbVar8 + 2;
          uVar7 = uVar7 | (pbVar8[1] & 0x7f) << 7;
          if ((char)pbVar8[1] < '\0') {
            *(byte **)pDVar19 = pbVar8 + 3;
            uVar7 = uVar7 | (pbVar8[2] & 0x7f) << 0xe;
            if ((char)pbVar8[2] < '\0') {
              *(byte **)pDVar19 = pbVar8 + 4;
              uVar7 = uVar7 | (pbVar8[3] & 0x7f) << 0x15;
              if ((char)pbVar8[3] < '\0') {
                *(byte **)pDVar19 = pbVar8 + 5;
                uVar7 = uVar7 | (uint)pbVar8[4] << 0x1c;
              }
            }
          }
        }
        uVar1 = *(ulong *)(lVar5 + 8);
        uVar16 = *(undefined8 *)(*(long *)(param_3 + 0x100) + (long)(int)uVar7 * 8);
        if (uVar1 == *(ulong *)(lVar5 + 0x10)) {
          uVar7 = (uint)((float)uVar1 * 1.75);
          uVar18 = *(undefined8 *)(lVar5 + 0x18);
          if (uVar7 < 9) {
            uVar7 = 8;
          }
          *(long *)(lVar5 + 0x10) = (long)(int)uVar7;
          plVar4 = (long *)SpineExtension::getInstance();
          lVar13 = (**(code **)(*plVar4 + 0x20))
                             (plVar4,uVar18,
                              -(ulong)(uVar7 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar7 << 3,
                              "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                              ,0x6a);
          lVar9 = *(long *)(lVar5 + 8);
          *(long *)(lVar5 + 0x18) = lVar13;
          *(long *)(lVar5 + 8) = lVar9 + 1;
          puVar10 = (undefined8 *)(lVar13 + lVar9 * 8);
        }
        else {
          *(ulong *)(lVar5 + 8) = uVar1 + 1;
          puVar10 = (undefined8 *)(*(long *)(lVar5 + 0x18) + uVar1 * 8);
        }
        uVar14 = uVar14 - 1;
        *puVar10 = uVar16;
      } while (uVar14 != 0);
      pbVar8 = *(byte **)pDVar19;
    }
    pbVar11 = pbVar8 + 1;
    *(byte **)pDVar19 = pbVar11;
    uVar14 = *pbVar8 & 0x7f;
    if ((char)*pbVar8 < '\0') {
      pbVar11 = pbVar8 + 2;
      *(byte **)pDVar19 = pbVar11;
      uVar14 = uVar14 | (pbVar8[1] & 0x7f) << 7;
      if ((char)pbVar8[1] < '\0') {
        pbVar11 = pbVar8 + 3;
        *(byte **)pDVar19 = pbVar11;
        uVar14 = uVar14 | (pbVar8[2] & 0x7f) << 0xe;
        if ((char)pbVar8[2] < '\0') {
          pbVar11 = pbVar8 + 4;
          *(byte **)pDVar19 = pbVar11;
          uVar14 = uVar14 | (pbVar8[3] & 0x7f) << 0x15;
          if ((char)pbVar8[3] < '\0') {
            pbVar11 = pbVar8 + 5;
            *(byte **)pDVar19 = pbVar11;
            uVar14 = uVar14 | (uint)pbVar8[4] << 0x1c;
          }
        }
      }
    }
    if (0 < (int)uVar14) {
      do {
        lVar5 = Skin::getConstraints(local_b0);
        pbVar8 = *(byte **)pDVar19;
        *(byte **)pDVar19 = pbVar8 + 1;
        uVar7 = *pbVar8 & 0x7f;
        if ((char)*pbVar8 < '\0') {
          *(byte **)pDVar19 = pbVar8 + 2;
          uVar7 = uVar7 | (pbVar8[1] & 0x7f) << 7;
          if ((char)pbVar8[1] < '\0') {
            *(byte **)pDVar19 = pbVar8 + 3;
            uVar7 = uVar7 | (pbVar8[2] & 0x7f) << 0xe;
            if ((char)pbVar8[2] < '\0') {
              *(byte **)pDVar19 = pbVar8 + 4;
              uVar7 = uVar7 | (pbVar8[3] & 0x7f) << 0x15;
              if ((char)pbVar8[3] < '\0') {
                *(byte **)pDVar19 = pbVar8 + 5;
                uVar7 = uVar7 | (uint)pbVar8[4] << 0x1c;
              }
            }
          }
        }
        uVar1 = *(ulong *)(lVar5 + 8);
        uVar16 = *(undefined8 *)(*(long *)(param_3 + 0x120) + (long)(int)uVar7 * 8);
        if (uVar1 == *(ulong *)(lVar5 + 0x10)) {
          uVar7 = (uint)((float)uVar1 * 1.75);
          uVar18 = *(undefined8 *)(lVar5 + 0x18);
          if (uVar7 < 9) {
            uVar7 = 8;
          }
          *(long *)(lVar5 + 0x10) = (long)(int)uVar7;
          plVar4 = (long *)SpineExtension::getInstance();
          lVar13 = (**(code **)(*plVar4 + 0x20))
                             (plVar4,uVar18,
                              -(ulong)(uVar7 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar7 << 3,
                              "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                              ,0x6a);
          lVar9 = *(long *)(lVar5 + 8);
          *(long *)(lVar5 + 0x18) = lVar13;
          *(long *)(lVar5 + 8) = lVar9 + 1;
          puVar10 = (undefined8 *)(lVar13 + lVar9 * 8);
        }
        else {
          *(ulong *)(lVar5 + 8) = uVar1 + 1;
          puVar10 = (undefined8 *)(*(long *)(lVar5 + 0x18) + uVar1 * 8);
        }
        uVar14 = uVar14 - 1;
        *puVar10 = uVar16;
      } while (uVar14 != 0);
      pbVar11 = *(byte **)pDVar19;
    }
    *(byte **)pDVar19 = pbVar11 + 1;
    uVar14 = *pbVar11 & 0x7f;
    if ((char)*pbVar11 < '\0') {
      *(byte **)pDVar19 = pbVar11 + 2;
      uVar14 = uVar14 | (pbVar11[1] & 0x7f) << 7;
      if ((char)pbVar11[1] < '\0') {
        *(byte **)pDVar19 = pbVar11 + 3;
        uVar14 = uVar14 | (pbVar11[2] & 0x7f) << 0xe;
        if ((char)pbVar11[2] < '\0') {
          *(byte **)pDVar19 = pbVar11 + 4;
          uVar14 = uVar14 | (pbVar11[3] & 0x7f) << 0x15;
          if ((char)pbVar11[3] < '\0') {
            *(byte **)pDVar19 = pbVar11 + 5;
            uVar14 = uVar14 | (uint)pbVar11[4] << 0x1c;
          }
        }
      }
    }
  }
  if (0 < (int)uVar14) {
    uVar7 = 0;
    do {
      pbVar11 = *(byte **)(param_1 + 8);
      pbVar8 = pbVar11 + 1;
      *(byte **)(param_1 + 8) = pbVar8;
      uVar17 = *pbVar11 & 0x7f;
      if ((char)*pbVar11 < '\0') {
        pbVar8 = pbVar11 + 2;
        *(byte **)(param_1 + 8) = pbVar8;
        uVar17 = uVar17 | (pbVar11[1] & 0x7f) << 7;
        if ((char)pbVar11[1] < '\0') {
          pbVar8 = pbVar11 + 3;
          *(byte **)(param_1 + 8) = pbVar8;
          uVar17 = uVar17 | (pbVar11[2] & 0x7f) << 0xe;
          if ((char)pbVar11[2] < '\0') {
            pbVar8 = pbVar11 + 4;
            *(byte **)(param_1 + 8) = pbVar8;
            uVar17 = uVar17 | (pbVar11[3] & 0x7f) << 0x15;
            if ((char)pbVar11[3] < '\0') {
              pbVar8 = pbVar11 + 5;
              *(byte **)(param_1 + 8) = pbVar8;
              uVar17 = uVar17 | (uint)pbVar11[4] << 0x1c;
            }
          }
        }
      }
      pbVar11 = pbVar8 + 1;
      *(byte **)(param_1 + 8) = pbVar11;
      uVar15 = *pbVar8 & 0x7f;
      if ((char)*pbVar8 < '\0') {
        pbVar11 = pbVar8 + 2;
        *(byte **)(param_1 + 8) = pbVar11;
        uVar15 = uVar15 | (pbVar8[1] & 0x7f) << 7;
        if ((char)pbVar8[1] < '\0') {
          pbVar11 = pbVar8 + 3;
          *(byte **)(param_1 + 8) = pbVar11;
          uVar15 = uVar15 | (pbVar8[2] & 0x7f) << 0xe;
          if ((char)pbVar8[2] < '\0') {
            pbVar11 = pbVar8 + 4;
            *(byte **)(param_1 + 8) = pbVar11;
            uVar15 = uVar15 | (pbVar8[3] & 0x7f) << 0x15;
            if ((char)pbVar8[3] < '\0') {
              pbVar11 = pbVar8 + 5;
              *(byte **)(param_1 + 8) = pbVar11;
              uVar15 = uVar15 | (uint)pbVar8[4] << 0x1c;
            }
          }
        }
      }
      if (0 < (int)uVar15) {
        do {
          uVar15 = uVar15 - 1;
          *(byte **)(param_1 + 8) = pbVar11 + 1;
          uVar12 = *pbVar11 & 0x7f;
          if ((char)*pbVar11 < '\0') {
            *(byte **)(param_1 + 8) = pbVar11 + 2;
            uVar12 = uVar12 | (pbVar11[1] & 0x7f) << 7;
            if ((char)pbVar11[1] < '\0') {
              *(byte **)(param_1 + 8) = pbVar11 + 3;
              uVar12 = uVar12 | (pbVar11[2] & 0x7f) << 0xe;
              if ((char)pbVar11[2] < '\0') {
                *(byte **)(param_1 + 8) = pbVar11 + 4;
                uVar12 = uVar12 | (pbVar11[3] & 0x7f) << 0x15;
                if ((char)pbVar11[3] < '\0') {
                  *(byte **)(param_1 + 8) = pbVar11 + 5;
                  uVar12 = uVar12 | (uint)pbVar11[4] << 0x1c;
                }
              }
            }
          }
          if (uVar12 == 0) {
LAB_00cf77c4:
            local_90 = &PTR__String_01c67868;
            local_88 = 0;
            local_80 = (undefined8 *)0x0;
          }
          else {
            pcVar20 = *(char **)(*(long *)(param_3 + 0x180) + (long)(int)(uVar12 - 1) * 8);
            local_90 = &PTR__String_01c67868;
            if (pcVar20 == (char *)0x0) goto LAB_00cf77c4;
            local_88 = strlen(pcVar20);
            lVar5 = local_88 + 1;
            plVar4 = (long *)SpineExtension::getInstance();
            local_80 = (undefined8 *)
                       (**(code **)(*plVar4 + 0x18))
                                 (plVar4,lVar5,
                                  "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                  ,0x39);
            memcpy(local_80,pcVar20,local_88 + 1);
          }
          pAVar6 = (Attachment *)
                   readAttachment(this,param_1,local_b0,uVar17,(String *)&local_90,param_3,param_4);
          if (pAVar6 != (Attachment *)0x0) {
            local_a8 = &PTR__String_01c67868;
            if (local_80 == (undefined8 *)0x0) {
              local_a0 = 0;
              local_98 = (void *)0x0;
            }
            else {
              local_a0 = local_88;
              lVar5 = local_88 + 1;
              plVar4 = (long *)SpineExtension::getInstance();
              local_98 = (void *)(**(code **)(*plVar4 + 0x18))
                                           (plVar4,lVar5,
                                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                            ,0x47);
              memcpy(local_98,local_80,local_88 + 1);
            }
            Skin::setAttachment(local_b0,(long)(int)uVar17,(String *)&local_a8,pAVar6);
            pvVar3 = local_98;
            local_a8 = &PTR__String_01c67868;
            if (local_98 != (void *)0x0) {
              plVar4 = (long *)SpineExtension::getInstance();
              (**(code **)(*plVar4 + 0x28))
                        (plVar4,pvVar3,
                         "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                         ,0xc9);
            }
            SpineObject::~SpineObject((SpineObject *)&local_a8);
          }
          puVar10 = local_80;
          local_90 = &PTR__String_01c67868;
          if (local_80 != (undefined8 *)0x0) {
            plVar4 = (long *)SpineExtension::getInstance();
            (**(code **)(*plVar4 + 0x28))
                      (plVar4,puVar10,
                       "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                       ,0xc9);
          }
          SpineObject::~SpineObject((SpineObject *)&local_90);
          if (uVar15 == 0) break;
          pbVar11 = *(byte **)(param_1 + 8);
        } while( true );
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar14);
  }
LAB_00cf78d8:
  if (*(long *)(lVar2 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_b0;
}

