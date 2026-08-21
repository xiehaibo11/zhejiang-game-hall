
/* spine::Skin::~Skin() */

void __thiscall spine::Skin::~Skin(Skin *this)

{
  long lVar1;
  void *pvVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  Attachment *this_00;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined **local_88;
  undefined8 local_80;
  void *local_78;
  Attachment *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar6 = *(ulong *)(this + 0x30);
  *(undefined ***)this = &PTR__Skin_01c8f628;
  if (uVar6 != 0) {
    uVar10 = 0;
    uVar9 = 0;
    do {
      plVar5 = (long *)(*(long *)(this + 0x40) + uVar9 * 0x20 + 0x18);
      while ((ulong)plVar5[-2] <= uVar10) {
        uVar9 = uVar9 + 1;
        uVar10 = 0;
        plVar5 = plVar5 + 4;
        if (uVar6 <= uVar9) goto LAB_00d09afc;
      }
      lVar8 = *plVar5;
      plVar5 = (long *)(lVar8 + uVar10 * 0x28 + 0x18);
      local_88 = &PTR__String_01c67868;
      if (*plVar5 == 0) {
        local_80 = 0;
        local_78 = (void *)0x0;
      }
      else {
        lVar11 = lVar8 + uVar10 * 0x28;
        local_80 = *(undefined8 *)(lVar11 + 0x10);
        lVar7 = *(long *)(lVar11 + 0x10);
        plVar4 = (long *)SpineExtension::getInstance();
        local_78 = (void *)(**(code **)(*plVar4 + 0x18))
                                     (plVar4,lVar7 + 1,
                                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                      ,0x47);
        memcpy(local_78,(void *)*plVar5,*(long *)(lVar11 + 0x10) + 1);
      }
      this_00 = *(Attachment **)(lVar8 + uVar10 * 0x28 + 0x20);
      local_70 = this_00;
      if (this_00 != (Attachment *)0x0) {
        Attachment::dereference(this_00);
        iVar3 = Attachment::getRefCount(this_00);
        if (iVar3 == 0) {
          (**(code **)(*(long *)this_00 + 8))(this_00);
        }
      }
      pvVar2 = local_78;
      local_88 = &PTR__String_01c67868;
      uVar10 = uVar10 + 1;
      if (local_78 != (void *)0x0) {
        plVar5 = (long *)SpineExtension::getInstance();
        (**(code **)(*plVar5 + 0x28))
                  (plVar5,pvVar2,
                   "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",
                   0xc9);
      }
      SpineObject::~SpineObject((SpineObject *)&local_88);
      uVar6 = *(ulong *)(this + 0x30);
    } while (uVar9 < uVar6);
  }
LAB_00d09afc:
  *(undefined ***)(this + 0x68) = &PTR__Vector_01c8d400;
  lVar8 = *(long *)(this + 0x80);
  *(undefined8 *)(this + 0x70) = 0;
  if (lVar8 != 0) {
    plVar5 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar5 + 0x28))
              (plVar5,lVar8,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",0xce);
  }
  SpineObject::~SpineObject((SpineObject *)(this + 0x68));
  *(undefined ***)(this + 0x48) = &PTR__Vector_01c8d0f0;
  lVar8 = *(long *)(this + 0x60);
  *(undefined8 *)(this + 0x50) = 0;
  if (lVar8 != 0) {
    plVar5 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar5 + 0x28))
              (plVar5,lVar8,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",0xce);
  }
  SpineObject::~SpineObject((SpineObject *)(this + 0x48));
  uVar6 = *(ulong *)(this + 0x30);
  *(undefined ***)(this + 0x28) = &PTR__Vector_01c8f678;
  *(undefined ***)(this + 0x20) = &PTR__AttachmentMap_01c8f608;
  if (uVar6 != 0) {
    uVar9 = 0;
    lVar8 = -1;
    do {
      (*(code *)**(undefined8 **)(*(long *)(this + 0x40) + (uVar6 + lVar8) * 0x20))();
      uVar6 = *(ulong *)(this + 0x30);
      uVar9 = uVar9 + 1;
      lVar8 = lVar8 + -1;
    } while (uVar9 < uVar6);
  }
  lVar8 = *(long *)(this + 0x40);
  *(undefined8 *)(this + 0x30) = 0;
  if (lVar8 != 0) {
    plVar5 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar5 + 0x28))
              (plVar5,lVar8,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",0xce);
  }
  SpineObject::~SpineObject((SpineObject *)(this + 0x28));
  SpineObject::~SpineObject((SpineObject *)(this + 0x20));
  *(undefined ***)(this + 8) = &PTR__String_01c67868;
  lVar8 = *(long *)(this + 0x18);
  if (lVar8 != 0) {
    plVar5 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar5 + 0x28))
              (plVar5,lVar8,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",0xc9
              );
  }
  SpineObject::~SpineObject((SpineObject *)(this + 8));
  SpineObject::~SpineObject((SpineObject *)this);
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

