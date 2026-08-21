
/* spine::AnimationState::computeHold(spine::TrackEntry*) */

void __thiscall spine::AnimationState::computeHold(AnimationState *this,TrackEntry *param_1)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  RTTI *pRVar5;
  undefined4 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  
  lVar14 = *(long *)(param_1 + 0x20);
  uVar12 = *(ulong *)(param_1 + 0xa0);
  lVar13 = *(long *)(param_1 + 0x38);
  uVar15 = *(ulong *)(lVar14 + 0x10);
  *(ulong *)(param_1 + 0xa0) = uVar15;
  uVar7 = uVar15;
  if (*(ulong *)(param_1 + 0xa8) < uVar15) {
    uVar10 = (uint)((float)uVar15 * 1.75);
    uVar11 = *(undefined8 *)(param_1 + 0xb0);
    if (uVar10 < 9) {
      uVar10 = 8;
    }
    *(long *)(param_1 + 0xa8) = (long)(int)uVar10;
    plVar3 = (long *)SpineExtension::getInstance();
    uVar11 = (**(code **)(*plVar3 + 0x20))
                       (plVar3,uVar11,
                        -(ulong)(uVar10 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar10 << 2,
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",
                        0x52);
    uVar7 = *(ulong *)(param_1 + 0xa0);
    *(undefined8 *)(param_1 + 0xb0) = uVar11;
  }
  if (uVar12 <= uVar7 && uVar7 - uVar12 != 0) {
    memset((void *)(*(long *)(param_1 + 0xb0) + uVar12 * 4),0,(uVar7 - uVar12) * 4);
  }
  uVar12 = *(ulong *)(param_1 + 0xc0);
  *(ulong *)(param_1 + 0xc0) = uVar15;
  uVar7 = uVar15;
  if (*(ulong *)(param_1 + 200) < uVar15) {
    uVar10 = (uint)((float)uVar15 * 1.75);
    uVar11 = *(undefined8 *)(param_1 + 0xd0);
    if (uVar10 < 9) {
      uVar10 = 8;
    }
    *(long *)(param_1 + 200) = (long)(int)uVar10;
    plVar3 = (long *)SpineExtension::getInstance();
    uVar11 = (**(code **)(*plVar3 + 0x20))
                       (plVar3,uVar11,
                        -(ulong)(uVar10 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar10 << 3,
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",
                        0x52);
    uVar7 = *(ulong *)(param_1 + 0xc0);
    *(undefined8 *)(param_1 + 0xd0) = uVar11;
  }
  if (uVar12 < uVar7) {
    do {
      *(undefined8 *)(*(long *)(param_1 + 0xd0) + uVar12 * 8) = 0;
      uVar12 = uVar12 + 1;
    } while (uVar7 != uVar12);
  }
  if ((lVar13 == 0) || (*(char *)(lVar13 + 0x45) == '\0')) {
    if (uVar15 != 0) {
      uVar12 = 0;
      do {
        plVar3 = *(long **)(*(long *)(lVar14 + 0x20) + uVar12 * 8);
        iVar2 = (**(code **)(*plVar3 + 0x20))(plVar3);
        lVar9 = *(long *)(this + 0xa0);
        lVar8 = lVar9;
        if (lVar9 != 0) {
          do {
            if (*(int *)(lVar8 + 8) == iVar2) {
              uVar6 = 0;
              goto LAB_00ce0c3c;
            }
            plVar1 = (long *)(lVar8 + 0x10);
            lVar8 = *plVar1;
          } while (*plVar1 != 0);
          do {
            if (*(int *)(lVar9 + 8) == iVar2) {
              *(int *)(lVar9 + 8) = iVar2;
              *(undefined1 *)(lVar9 + 0xc) = 1;
              goto joined_r0x00ce0b84;
            }
            lVar9 = *(long *)(lVar9 + 0x10);
          } while (lVar9 != 0);
        }
        puVar4 = SpineObject::operator_new
                           (0x20,
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/HashMap.h"
                            ,0x73);
        *puVar4 = &PTR__SpineObject_01c8e348;
        puVar4[2] = 0;
        puVar4[3] = 0;
        *(int *)(puVar4 + 1) = iVar2;
        *(undefined1 *)((long)puVar4 + 0xc) = 1;
        lVar8 = *(long *)(this + 0xa0);
        *(undefined8 **)(this + 0xa0) = puVar4;
        if (lVar8 != 0) {
          *(undefined8 **)(lVar8 + 0x18) = puVar4;
          puVar4[2] = lVar8;
        }
        *(long *)(this + 0xa8) = *(long *)(this + 0xa8) + 1;
joined_r0x00ce0b84:
        if (lVar13 == 0) {
LAB_00ce0c38:
          uVar6 = 1;
LAB_00ce0c3c:
          *(undefined4 *)(*(long *)(param_1 + 0xb0) + uVar12 * 4) = uVar6;
        }
        else {
          pRVar5 = (RTTI *)(**(code **)(*plVar3 + 0x10))(plVar3);
          uVar7 = RTTI::isExactly(pRVar5,(RTTI *)AttachmentTimeline::rtti);
          if ((uVar7 & 1) != 0) goto LAB_00ce0c38;
          pRVar5 = (RTTI *)(**(code **)(*plVar3 + 0x10))(plVar3);
          uVar7 = RTTI::isExactly(pRVar5,(RTTI *)DrawOrderTimeline::rtti);
          if ((uVar7 & 1) != 0) goto LAB_00ce0c38;
          pRVar5 = (RTTI *)(**(code **)(*plVar3 + 0x10))(plVar3);
          uVar7 = RTTI::isExactly(pRVar5,(RTTI *)EventTimeline::rtti);
          if (((uVar7 & 1) != 0) ||
             (uVar7 = Animation::hasTimeline(*(Animation **)(lVar13 + 0x20),iVar2), lVar8 = lVar13,
             (uVar7 & 1) == 0)) goto LAB_00ce0c38;
          do {
            lVar8 = *(long *)(lVar8 + 0x38);
            if (lVar8 == 0) goto LAB_00ce0ad0;
            uVar7 = Animation::hasTimeline(*(Animation **)(lVar8 + 0x20),iVar2);
          } while ((uVar7 & 1) != 0);
          if (*(float *)(param_1 + 0x84) <= 0.0) {
LAB_00ce0ad0:
            uVar6 = 2;
            goto LAB_00ce0c3c;
          }
          *(undefined4 *)(*(long *)(param_1 + 0xb0) + uVar12 * 4) = 3;
          *(TrackEntry **)(*(long *)(param_1 + 0xd0) + uVar12 * 8) = param_1;
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < uVar15);
    }
  }
  else if (uVar15 != 0) {
    uVar12 = 0;
    do {
      iVar2 = (**(code **)(**(long **)(*(long *)(lVar14 + 0x20) + uVar12 * 8) + 0x20))();
      lVar8 = *(long *)(this + 0xa0);
      lVar13 = lVar8;
      if (lVar8 != 0) {
        do {
          if (*(int *)(lVar13 + 8) == iVar2) goto LAB_00ce0a9c;
          plVar3 = (long *)(lVar13 + 0x10);
          lVar13 = *plVar3;
        } while (*plVar3 != 0);
        do {
          if (*(int *)(lVar8 + 8) == iVar2) {
            *(int *)(lVar8 + 8) = iVar2;
            *(undefined1 *)(lVar8 + 0xc) = 1;
            goto LAB_00ce0a9c;
          }
          lVar8 = *(long *)(lVar8 + 0x10);
        } while (lVar8 != 0);
      }
      puVar4 = SpineObject::operator_new
                         (0x20,
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/HashMap.h"
                          ,0x73);
      *puVar4 = &PTR__SpineObject_01c8e348;
      puVar4[2] = 0;
      puVar4[3] = 0;
      *(int *)(puVar4 + 1) = iVar2;
      *(undefined1 *)((long)puVar4 + 0xc) = 1;
      lVar13 = *(long *)(this + 0xa0);
      *(undefined8 **)(this + 0xa0) = puVar4;
      if (lVar13 != 0) {
        *(undefined8 **)(lVar13 + 0x18) = puVar4;
        puVar4[2] = lVar13;
      }
      *(long *)(this + 0xa8) = *(long *)(this + 0xa8) + 1;
LAB_00ce0a9c:
      *(undefined4 *)(*(long *)(param_1 + 0xb0) + uVar12 * 4) = 2;
      uVar12 = uVar12 + 1;
    } while (uVar12 != uVar15);
  }
  return;
}

