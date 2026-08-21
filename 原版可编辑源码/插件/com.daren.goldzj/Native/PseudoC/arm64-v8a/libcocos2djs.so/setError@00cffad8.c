
/* spine::SkeletonJson::setError(spine::Json*, spine::String const&, spine::String const&) */

void __thiscall
spine::SkeletonJson::setError(SkeletonJson *this,Json *param_1,String *param_2,String *param_3)

{
  long lVar1;
  void *__src;
  long lVar2;
  void *pvVar3;
  long lVar4;
  long *plVar5;
  void *pvVar6;
  void *pvVar7;
  long lVar8;
  undefined **local_80;
  long local_78;
  void *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  local_80 = &PTR__String_01c67868;
  if (*(long *)(param_2 + 0x10) == 0) {
    pvVar6 = (void *)0x0;
    lVar8 = 0;
    local_70 = (void *)0x0;
  }
  else {
    lVar8 = *(long *)(param_2 + 8);
    local_78 = lVar8;
    plVar5 = (long *)SpineExtension::getInstance();
    pvVar6 = (void *)(**(code **)(*plVar5 + 0x18))
                               (plVar5,lVar8 + 1,
                                "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                ,0x47);
    local_70 = pvVar6;
    memcpy(pvVar6,*(void **)(param_2 + 0x10),*(long *)(param_2 + 8) + 1);
  }
  lVar2 = *(long *)(param_3 + 8);
  pvVar3 = *(void **)(param_3 + 0x10);
  local_78 = lVar8 + lVar2;
  lVar1 = local_78 + 1;
  plVar5 = (long *)SpineExtension::getInstance();
  pvVar7 = (void *)(**(code **)(*plVar5 + 0x20))
                             (plVar5,pvVar6,lVar1,
                              "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                              ,0xa6);
  __src = pvVar7;
  if (pvVar3 != pvVar6) {
    __src = *(void **)(param_3 + 0x10);
  }
  local_70 = pvVar7;
  memcpy((void *)((long)pvVar7 + lVar8),__src,lVar2 + 1);
  if (this + 0x38 != (SkeletonJson *)&local_80) {
    lVar8 = *(long *)(this + 0x48);
    if (lVar8 != 0) {
      plVar5 = (long *)SpineExtension::getInstance();
      (**(code **)(*plVar5 + 0x28))
                (plVar5,lVar8,
                 "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",
                 0x7a);
      pvVar7 = local_70;
    }
    if (pvVar7 == (void *)0x0) {
      *(undefined8 *)(this + 0x40) = 0;
      *(undefined8 *)(this + 0x48) = 0;
      local_80 = &PTR__String_01c67868;
      goto LAB_00cffc8c;
    }
    *(long *)(this + 0x40) = local_78;
    lVar8 = local_78 + 1;
    plVar5 = (long *)SpineExtension::getInstance();
    pvVar6 = (void *)(**(code **)(*plVar5 + 0x18))
                               (plVar5,lVar8,
                                "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                ,0x81);
    *(void **)(this + 0x48) = pvVar6;
    memcpy(pvVar6,local_70,local_78 + 1);
    pvVar7 = local_70;
  }
  local_80 = &PTR__String_01c67868;
  if (pvVar7 != (void *)0x0) {
    plVar5 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar5 + 0x28))
              (plVar5,pvVar7,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",0xc9
              );
  }
LAB_00cffc8c:
  SpineObject::~SpineObject((SpineObject *)&local_80);
  if (param_1 != (Json *)0x0) {
    Json::~Json(param_1);
    operator_delete(param_1);
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

