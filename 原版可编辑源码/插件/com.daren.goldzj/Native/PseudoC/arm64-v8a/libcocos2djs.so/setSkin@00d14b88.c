
/* spine::SkeletonRenderer::setSkin(char const*) */

void __thiscall spine::SkeletonRenderer::setSkin(SkeletonRenderer *this,char *param_1)

{
  size_t __n;
  long lVar1;
  void *pvVar2;
  long *plVar3;
  Skeleton *this_00;
  undefined **local_60;
  size_t local_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this_00 = *(Skeleton **)(this + 0x30);
  if (this_00 != (Skeleton *)0x0) {
    local_60 = &PTR__String_01c67868;
    if (param_1 == (char *)0x0) {
      local_58 = 0;
      local_50 = (void *)0x0;
    }
    else {
      local_58 = strlen(param_1);
      __n = local_58 + 1;
      plVar3 = (long *)SpineExtension::getInstance();
      local_50 = (void *)(**(code **)(*plVar3 + 0x18))
                                   (plVar3,__n,
                                    "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                    ,0x39);
      memcpy(local_50,param_1,__n);
    }
    Skeleton::setSkin(this_00,(String *)&local_60);
    pvVar2 = local_50;
    local_60 = &PTR__String_01c67868;
    if (local_50 != (void *)0x0) {
      plVar3 = (long *)SpineExtension::getInstance();
      (**(code **)(*plVar3 + 0x28))
                (plVar3,pvVar2,
                 "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",
                 0xc9);
    }
    SpineObject::~SpineObject((SpineObject *)&local_60);
    Skeleton::setSlotsToSetupPose(*(Skeleton **)(this + 0x30));
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

