
/* spine::SkeletonBinary::setError(char const*, char const*) */

void __thiscall spine::SkeletonBinary::setError(SkeletonBinary *this,char *param_1,char *param_2)

{
  long lVar1;
  size_t sVar2;
  long *plVar3;
  void *pvVar4;
  long lVar5;
  undefined **local_160;
  size_t local_158;
  void *local_150;
  char acStack_148 [256];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  strcpy(acStack_148,param_1);
  if (param_2 != (char *)0x0) {
    sVar2 = strlen(param_1);
    strncat(acStack_148 + (int)sVar2,param_2,(long)(0xff00000000 - (sVar2 << 0x20)) >> 0x20);
  }
  local_160 = &PTR__String_01c67868;
  local_158 = strlen(acStack_148);
  sVar2 = local_158 + 1;
  plVar3 = (long *)SpineExtension::getInstance();
  local_150 = (void *)(**(code **)(*plVar3 + 0x18))
                                (plVar3,sVar2,
                                 "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                 ,0x39);
  memcpy(local_150,acStack_148,sVar2);
  if (this + 0x30 != (SkeletonBinary *)&local_160) {
    lVar5 = *(long *)(this + 0x40);
    if (lVar5 != 0) {
      plVar3 = (long *)SpineExtension::getInstance();
      (**(code **)(*plVar3 + 0x28))
                (plVar3,lVar5,
                 "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",
                 0x7a);
    }
    if (local_150 == (void *)0x0) {
      *(undefined8 *)(this + 0x38) = 0;
      *(undefined8 *)(this + 0x40) = 0;
    }
    else {
      *(size_t *)(this + 0x38) = local_158;
      lVar5 = local_158 + 1;
      plVar3 = (long *)SpineExtension::getInstance();
      pvVar4 = (void *)(**(code **)(*plVar3 + 0x18))
                                 (plVar3,lVar5,
                                  "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                  ,0x81);
      *(void **)(this + 0x40) = pvVar4;
      memcpy(pvVar4,local_150,local_158 + 1);
    }
  }
  pvVar4 = local_150;
  local_160 = &PTR__String_01c67868;
  if (local_150 != (void *)0x0) {
    plVar3 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar3 + 0x28))
              (plVar3,pvVar4,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",0xc9
              );
  }
  SpineObject::~SpineObject((SpineObject *)&local_160);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

