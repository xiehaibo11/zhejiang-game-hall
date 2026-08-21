
/* spine::Skeleton::sortPathConstraintAttachment(spine::Skin*, unsigned long, spine::Bone&) */

void __thiscall
spine::Skeleton::sortPathConstraintAttachment
          (Skeleton *this,Skin *param_1,ulong param_2,Bone *param_3)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong *puVar7;
  ulong uVar8;
  long lVar9;
  undefined **local_a0;
  undefined8 local_98;
  void *local_90;
  Attachment *local_88;
  long local_80;
  ulong local_78;
  ulong local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  Skin::getAttachments();
  uVar5 = *(ulong *)(local_80 + 8);
  if (local_78 < uVar5) {
    do {
      plVar3 = (long *)(*(long *)(local_80 + 0x18) + local_78 * 0x20 + 0x18);
      uVar8 = local_70;
      while ((ulong)plVar3[-2] <= uVar8) {
        local_78 = local_78 + 1;
        uVar8 = 0;
        plVar3 = plVar3 + 4;
        local_70 = 0;
        if (uVar5 <= local_78) goto LAB_00cf3808;
      }
      lVar9 = *plVar3;
      local_70 = uVar8 + 1;
      puVar7 = (ulong *)(lVar9 + uVar8 * 0x28);
      uVar5 = *puVar7;
      puVar7 = puVar7 + 3;
      local_a0 = &PTR__String_01c67868;
      if (*puVar7 == 0) {
        local_98 = 0;
        local_90 = (void *)0x0;
      }
      else {
        lVar6 = lVar9 + uVar8 * 0x28;
        local_98 = *(undefined8 *)(lVar6 + 0x10);
        lVar4 = *(long *)(lVar6 + 0x10);
        plVar3 = (long *)SpineExtension::getInstance();
        local_90 = (void *)(**(code **)(*plVar3 + 0x18))
                                     (plVar3,lVar4 + 1,
                                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                      ,0x47);
        memcpy(local_90,(void *)*puVar7,*(long *)(lVar6 + 0x10) + 1);
      }
      local_88 = *(Attachment **)(lVar9 + uVar8 * 0x28 + 0x20);
      if (uVar5 == param_2) {
        sortPathConstraintAttachment(this,local_88,param_3);
      }
      pvVar2 = local_90;
      local_a0 = &PTR__String_01c67868;
      if (local_90 != (void *)0x0) {
        plVar3 = (long *)SpineExtension::getInstance();
        (**(code **)(*plVar3 + 0x28))
                  (plVar3,pvVar2,
                   "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",
                   0xc9);
      }
      SpineObject::~SpineObject((SpineObject *)&local_a0);
      uVar5 = *(ulong *)(local_80 + 8);
    } while (local_78 < uVar5);
  }
LAB_00cf3808:
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

