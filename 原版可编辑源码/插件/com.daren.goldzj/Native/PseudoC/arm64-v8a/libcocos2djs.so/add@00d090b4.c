
/* spine::Vector<spine::Skin::AttachmentMap::Entry>::add(spine::Skin::AttachmentMap::Entry const&)
    */

void __thiscall
spine::Vector<spine::Skin::AttachmentMap::Entry>::add
          (Vector<spine::Skin::AttachmentMap::Entry> *this,Entry *param_1)

{
  size_t __n;
  long lVar1;
  bool bVar2;
  long *plVar3;
  void *pvVar4;
  long lVar5;
  void *__dest;
  uint uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  undefined **local_88;
  long local_80;
  void *local_78;
  undefined8 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar12 = *(ulong *)(this + 8);
  if (uVar12 == *(ulong *)(this + 0x10)) {
    uVar11 = *(undefined8 *)param_1;
    local_88 = &PTR__String_01c67868;
    if (*(long *)(param_1 + 0x18) == 0) {
      lVar13 = 0;
      local_80 = 0;
      local_78 = (void *)0x0;
      bVar2 = true;
    }
    else {
      lVar13 = *(long *)(param_1 + 0x10);
      local_80 = lVar13;
      plVar3 = (long *)SpineExtension::getInstance();
      pvVar4 = (void *)(**(code **)(*plVar3 + 0x18))
                                 (plVar3,lVar13 + 1,
                                  "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                  ,0x47);
      local_78 = pvVar4;
      memcpy(pvVar4,*(void **)(param_1 + 0x18),*(long *)(param_1 + 0x10) + 1);
      uVar12 = *(ulong *)(this + 8);
      bVar2 = pvVar4 == (void *)0x0;
    }
    uVar10 = *(undefined8 *)(param_1 + 0x20);
    uVar6 = (uint)((float)uVar12 * 1.75);
    uVar9 = *(undefined8 *)(this + 0x18);
    if (uVar6 < 9) {
      uVar6 = 8;
    }
    *(long *)(this + 0x10) = (long)(int)uVar6;
    local_70 = uVar10;
    plVar3 = (long *)SpineExtension::getInstance();
    lVar5 = (**(code **)(*plVar3 + 0x20))
                      (plVar3,uVar9,((long)(int)uVar6 + (long)(int)uVar6 * 4) * 8,
                       "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",
                       0x6a);
    lVar7 = *(long *)(this + 8);
    *(long *)(this + 0x18) = lVar5;
    puVar8 = (undefined8 *)(lVar5 + lVar7 * 0x28);
    *(long *)(this + 8) = lVar7 + 1;
    *puVar8 = uVar11;
    puVar8[1] = &PTR__String_01c67868;
    if (bVar2) {
      lVar5 = lVar5 + lVar7 * 0x28;
      *(undefined8 *)(lVar5 + 0x10) = 0;
      *(undefined8 *)(lVar5 + 0x18) = 0;
      *(undefined8 *)(lVar5 + 0x20) = uVar10;
      local_88 = &PTR__String_01c67868;
    }
    else {
      lVar5 = lVar5 + lVar7 * 0x28;
      *(long *)(lVar5 + 0x10) = lVar13;
      __n = local_80 + 1;
      plVar3 = (long *)SpineExtension::getInstance();
      __dest = (void *)(**(code **)(*plVar3 + 0x18))
                                 (plVar3,__n,
                                  "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                  ,0x47);
      pvVar4 = local_78;
      *(void **)(lVar5 + 0x18) = __dest;
      memcpy(__dest,local_78,__n);
      *(undefined8 *)(lVar5 + 0x20) = uVar10;
      local_88 = &PTR__String_01c67868;
      if (pvVar4 != (void *)0x0) {
        local_88 = &PTR__String_01c67868;
        plVar3 = (long *)SpineExtension::getInstance();
        (**(code **)(*plVar3 + 0x28))
                  (plVar3,pvVar4,
                   "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",
                   0xc9);
      }
    }
    SpineObject::~SpineObject((SpineObject *)&local_88);
  }
  else {
    *(ulong *)(this + 8) = uVar12 + 1;
    lVar13 = *(long *)(this + 0x18);
    puVar8 = (undefined8 *)(lVar13 + uVar12 * 0x28);
    *puVar8 = *(undefined8 *)param_1;
    puVar8[1] = &PTR__String_01c67868;
    if (*(long *)(param_1 + 0x18) == 0) {
      lVar5 = lVar13 + uVar12 * 0x28;
      *(undefined8 *)(lVar5 + 0x10) = 0;
      *(undefined8 *)(lVar5 + 0x18) = 0;
    }
    else {
      lVar7 = lVar13 + uVar12 * 0x28;
      *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(param_1 + 0x10);
      lVar5 = *(long *)(param_1 + 0x10);
      plVar3 = (long *)SpineExtension::getInstance();
      pvVar4 = (void *)(**(code **)(*plVar3 + 0x18))
                                 (plVar3,lVar5 + 1,
                                  "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                  ,0x47);
      *(void **)(lVar7 + 0x18) = pvVar4;
      memcpy(pvVar4,*(void **)(param_1 + 0x18),*(long *)(param_1 + 0x10) + 1);
    }
    *(undefined8 *)(lVar13 + uVar12 * 0x28 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

