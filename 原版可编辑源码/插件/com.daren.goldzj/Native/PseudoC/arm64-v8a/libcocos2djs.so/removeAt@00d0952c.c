
/* spine::Vector<spine::Skin::AttachmentMap::Entry>::removeAt(unsigned long) */

void __thiscall
spine::Vector<spine::Skin::AttachmentMap::Entry>::removeAt
          (Vector<spine::Skin::AttachmentMap::Entry> *this,ulong param_1)

{
  void *pvVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  SpineObject *this_00;
  undefined1 *puVar7;
  long lVar8;
  undefined1 auStack_b8 [16];
  long local_a8;
  long *local_a0;
  undefined **local_98;
  undefined8 local_90;
  undefined **local_88;
  long local_80;
  void *local_78;
  undefined8 local_70;
  long local_68;
  
  lVar8 = tpidr_el0;
  local_68 = *(long *)(lVar8 + 0x28);
  uVar3 = *(long *)(this + 8) - 1;
  *(ulong *)(this + 8) = uVar3;
  uVar5 = param_1;
  if ((uVar3 != param_1) && (uVar5 = uVar3, param_1 < uVar3)) {
    local_a0 = &local_80;
    puVar7 = (undefined1 *)(param_1 * 0x28);
    local_98 = &PTR__String_01c67868;
    local_a8 = lVar8;
    do {
      lVar8 = *(long *)(this + 0x18);
      puVar4 = (undefined8 *)(puVar7 + lVar8);
      local_90 = *puVar4;
      local_88 = local_98;
      if (puVar4[3] == 0) {
        puVar4 = (undefined8 *)(lVar8 + param_1 * 0x28);
        *local_a0 = 0;
        local_a0[1] = 0;
        lVar6 = lVar8;
      }
      else {
        local_80 = puVar4[2];
        lVar6 = puVar4[2];
        plVar2 = (long *)SpineExtension::getInstance();
        local_78 = (void *)(**(code **)(*plVar2 + 0x18))
                                     (plVar2,lVar6 + 1,
                                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                      ,0x47);
        memcpy(local_78,(void *)puVar4[3],puVar4[2] + 1);
        puVar4 = (undefined8 *)(puVar7 + *(long *)(this + 0x18));
        lVar6 = *(long *)(this + 0x18);
      }
      local_70 = *(undefined8 *)(puVar7 + lVar8 + 0x20);
      *puVar4 = *(undefined8 *)(puVar7 + lVar6 + 0x28);
      lVar8 = puVar4[3];
      if (lVar8 != 0) {
        plVar2 = (long *)SpineExtension::getInstance();
        (**(code **)(*plVar2 + 0x28))
                  (plVar2,lVar8,
                   "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",
                   0x7a);
      }
      if (*(long *)(puVar7 + lVar6 + 0x40) == 0) {
        *(undefined8 *)(puVar7 + lVar6 + 0x10) = 0;
        *(undefined8 *)(puVar7 + lVar6 + 0x18) = 0;
      }
      else {
        lVar8 = *(long *)(puVar7 + lVar6 + 0x38);
        *(long *)(puVar7 + lVar6 + 0x10) = lVar8;
        plVar2 = (long *)SpineExtension::getInstance();
        pvVar1 = (void *)(**(code **)(*plVar2 + 0x18))
                                   (plVar2,lVar8 + 1,
                                    "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                    ,0x81);
        puVar4[3] = pvVar1;
        memcpy(pvVar1,*(void **)(puVar7 + lVar6 + 0x40),*(long *)(puVar7 + lVar6 + 0x38) + 1);
      }
      *(undefined8 *)(puVar7 + lVar6 + 0x20) = *(undefined8 *)(puVar7 + lVar6 + 0x48);
      lVar8 = *(long *)(this + 0x18);
      *(undefined8 *)(puVar7 + lVar8 + 0x28) = local_90;
      if (auStack_b8 + -lVar8 != puVar7) {
        lVar6 = *(long *)(puVar7 + lVar8 + 0x40);
        if (lVar6 != 0) {
          plVar2 = (long *)SpineExtension::getInstance();
          (**(code **)(*plVar2 + 0x28))
                    (plVar2,lVar6,
                     "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                     ,0x7a);
        }
        if (local_78 == (void *)0x0) {
          *(undefined8 *)(puVar7 + lVar8 + 0x38) = 0;
          *(undefined8 *)(puVar7 + lVar8 + 0x40) = 0;
        }
        else {
          *(long *)(puVar7 + lVar8 + 0x38) = local_80;
          lVar6 = local_80 + 1;
          plVar2 = (long *)SpineExtension::getInstance();
          pvVar1 = (void *)(**(code **)(*plVar2 + 0x18))
                                     (plVar2,lVar6,
                                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                      ,0x81);
          *(void **)(puVar7 + lVar8 + 0x40) = pvVar1;
          memcpy(pvVar1,local_78,local_80 + 1);
        }
      }
      pvVar1 = local_78;
      param_1 = param_1 + 1;
      *(undefined8 *)(puVar7 + lVar8 + 0x48) = local_70;
      local_88 = &PTR__String_01c67868;
      if (local_78 != (void *)0x0) {
        plVar2 = (long *)SpineExtension::getInstance();
        (**(code **)(*plVar2 + 0x28))
                  (plVar2,pvVar1,
                   "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",
                   0xc9);
      }
      SpineObject::~SpineObject((SpineObject *)&local_88);
      puVar7 = puVar7 + 0x28;
      uVar5 = *(ulong *)(this + 8);
      lVar8 = local_a8;
    } while (param_1 < *(ulong *)(this + 8));
  }
  lVar6 = *(long *)(this + 0x18) + uVar5 * 0x28;
  this_00 = (SpineObject *)(lVar6 + 8);
  *(undefined ***)this_00 = &PTR__String_01c67868;
  lVar6 = *(long *)(lVar6 + 0x18);
  if (lVar6 != 0) {
    plVar2 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar2 + 0x28))
              (plVar2,lVar6,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",0xc9
              );
  }
  SpineObject::~SpineObject(this_00);
  if (*(long *)(lVar8 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

