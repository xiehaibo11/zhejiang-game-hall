
/* spine::Vector<spine::String>::add(spine::String const&) */

void __thiscall spine::Vector<spine::String>::add(Vector<spine::String> *this,String *param_1)

{
  long lVar1;
  long *plVar2;
  void *pvVar3;
  undefined8 *puVar4;
  void *__dest;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined **local_60;
  long local_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar5 = *(ulong *)(this + 8);
  if (uVar5 == *(ulong *)(this + 0x10)) {
    local_60 = &PTR__String_01c67868;
    if (*(long *)(param_1 + 0x10) == 0) {
      local_58 = 0;
      local_50 = (void *)0x0;
    }
    else {
      lVar9 = *(long *)(param_1 + 8);
      local_58 = lVar9;
      plVar2 = (long *)SpineExtension::getInstance();
      local_50 = (void *)(**(code **)(*plVar2 + 0x18))
                                   (plVar2,lVar9 + 1,
                                    "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                    ,0x47);
      memcpy(local_50,*(void **)(param_1 + 0x10),*(long *)(param_1 + 8) + 1);
      uVar5 = *(ulong *)(this + 8);
    }
    uVar7 = (uint)((float)uVar5 * 1.75);
    uVar8 = *(undefined8 *)(this + 0x18);
    if (uVar7 < 9) {
      uVar7 = 8;
    }
    *(long *)(this + 0x10) = (long)(int)uVar7;
    plVar2 = (long *)SpineExtension::getInstance();
    lVar9 = (**(code **)(*plVar2 + 0x20))
                      (plVar2,uVar8,(long)(int)uVar7 * 0x18,
                       "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",
                       0x6a);
    lVar6 = *(long *)(this + 8);
    *(long *)(this + 0x18) = lVar9;
    *(long *)(this + 8) = lVar6 + 1;
    puVar4 = SpineObject::operator_new(0x18,(void *)(lVar9 + lVar6 * 0x18));
    lVar9 = local_58;
    *puVar4 = &PTR__String_01c67868;
    if (local_50 == (void *)0x0) {
      puVar4[1] = 0;
      puVar4[2] = 0;
      local_60 = &PTR__String_01c67868;
    }
    else {
      puVar4[1] = local_58;
      plVar2 = (long *)SpineExtension::getInstance();
      __dest = (void *)(**(code **)(*plVar2 + 0x18))
                                 (plVar2,lVar9 + 1,
                                  "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                  ,0x47);
      pvVar3 = local_50;
      puVar4[2] = __dest;
      memcpy(__dest,local_50,local_58 + 1);
      local_60 = &PTR__String_01c67868;
      if (pvVar3 != (void *)0x0) {
        plVar2 = (long *)SpineExtension::getInstance();
        (**(code **)(*plVar2 + 0x28))
                  (plVar2,pvVar3,
                   "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",
                   0xc9);
      }
    }
    SpineObject::~SpineObject((SpineObject *)&local_60);
  }
  else {
    *(ulong *)(this + 8) = uVar5 + 1;
    puVar4 = SpineObject::operator_new(0x18,(void *)(*(long *)(this + 0x18) + uVar5 * 0x18));
    *puVar4 = &PTR__String_01c67868;
    if (*(long *)(param_1 + 0x10) == 0) {
      puVar4[1] = 0;
      puVar4[2] = 0;
    }
    else {
      puVar4[1] = *(undefined8 *)(param_1 + 8);
      lVar9 = *(long *)(param_1 + 8);
      plVar2 = (long *)SpineExtension::getInstance();
      pvVar3 = (void *)(**(code **)(*plVar2 + 0x18))
                                 (plVar2,lVar9 + 1,
                                  "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                  ,0x47);
      puVar4[2] = pvVar3;
      memcpy(pvVar3,*(void **)(param_1 + 0x10),*(long *)(param_1 + 8) + 1);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

