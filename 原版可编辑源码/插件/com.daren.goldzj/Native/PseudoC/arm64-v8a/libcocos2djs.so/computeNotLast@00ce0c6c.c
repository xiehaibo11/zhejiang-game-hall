
/* spine::AnimationState::computeNotLast(spine::TrackEntry*) */

void __thiscall spine::AnimationState::computeNotLast(AnimationState *this,TrackEntry *param_1)

{
  int iVar1;
  RTTI *this_00;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  AttachmentTimeline *this_01;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar5 = *(long *)(param_1 + 0x20);
  lVar6 = *(long *)(lVar5 + 0x10);
  if (lVar6 != 0) {
    lVar7 = 0;
    do {
      this_00 = (RTTI *)(**(code **)(**(long **)(*(long *)(lVar5 + 0x20) + lVar7 * 8) + 0x10))();
      uVar2 = RTTI::isExactly(this_00,(RTTI *)AttachmentTimeline::rtti);
      if ((uVar2 & 1) != 0) {
        this_01 = *(AttachmentTimeline **)(*(long *)(lVar5 + 0x20) + lVar7 * 8);
        iVar1 = AttachmentTimeline::getSlotIndex(this_01);
        for (lVar4 = *(long *)(this + 0xa0); lVar4 != 0; lVar4 = *(long *)(lVar4 + 0x10)) {
          if (*(int *)(lVar4 + 8) == iVar1) {
            *(uint *)(*(long *)(param_1 + 0xb0) + lVar7 * 4) =
                 *(uint *)(*(long *)(param_1 + 0xb0) + lVar7 * 4) | 4;
            goto LAB_00ce0d98;
          }
        }
        iVar1 = AttachmentTimeline::getSlotIndex(this_01);
        for (lVar4 = *(long *)(this + 0xa0); lVar4 != 0; lVar4 = *(long *)(lVar4 + 0x10)) {
          if (*(int *)(lVar4 + 8) == iVar1) {
            *(int *)(lVar4 + 8) = iVar1;
            *(undefined1 *)(lVar4 + 0xc) = 1;
            goto LAB_00ce0d98;
          }
        }
        puVar3 = SpineObject::operator_new
                           (0x20,
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/HashMap.h"
                            ,0x73);
        *puVar3 = &PTR__SpineObject_01c8e348;
        puVar3[2] = 0;
        puVar3[3] = 0;
        *(int *)(puVar3 + 1) = iVar1;
        *(undefined1 *)((long)puVar3 + 0xc) = 1;
        lVar4 = *(long *)(this + 0xa0);
        *(undefined8 **)(this + 0xa0) = puVar3;
        if (lVar4 != 0) {
          *(undefined8 **)(lVar4 + 0x18) = puVar3;
          puVar3[2] = lVar4;
        }
        *(long *)(this + 0xa8) = *(long *)(this + 0xa8) + 1;
      }
LAB_00ce0d98:
      lVar7 = lVar7 + 1;
    } while (lVar7 != lVar6);
  }
  return;
}

