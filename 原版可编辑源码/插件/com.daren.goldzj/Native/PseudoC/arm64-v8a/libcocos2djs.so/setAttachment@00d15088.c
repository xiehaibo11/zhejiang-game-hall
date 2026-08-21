
/* spine::SkeletonRenderer::setAttachment(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char const*) */

undefined8 __thiscall
spine::SkeletonRenderer::setAttachment(SkeletonRenderer *this,basic_string *param_1,char *param_2)

{
  size_t sVar1;
  long lVar2;
  void *pvVar3;
  long *plVar4;
  Skeleton *this_00;
  basic_string *__s;
  undefined **local_78;
  size_t local_70;
  void *local_68;
  undefined **local_60;
  size_t local_58;
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  this_00 = *(Skeleton **)(this + 0x30);
  if (this_00 == (Skeleton *)0x0) goto LAB_00d15208;
  if (((byte)*param_1 & 1) == 0) {
    __s = param_1 + 1;
LAB_00d150f0:
    local_60 = &PTR__String_01c67868;
    local_58 = strlen((char *)__s);
    sVar1 = local_58 + 1;
    plVar4 = (long *)SpineExtension::getInstance();
    local_50 = (void *)(**(code **)(*plVar4 + 0x18))
                                 (plVar4,sVar1,
                                  "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                  ,0x39);
    memcpy(local_50,__s,sVar1);
  }
  else {
    __s = *(basic_string **)(param_1 + 0x10);
    local_60 = &PTR__String_01c67868;
    if (__s != (basic_string *)0x0) goto LAB_00d150f0;
    local_58 = 0;
    local_50 = (void *)0x0;
  }
  local_78 = &PTR__String_01c67868;
  if (param_2 == (char *)0x0) {
    local_70 = 0;
    local_68 = (void *)0x0;
  }
  else {
    local_70 = strlen(param_2);
    sVar1 = local_70 + 1;
    plVar4 = (long *)SpineExtension::getInstance();
    local_68 = (void *)(**(code **)(*plVar4 + 0x18))
                                 (plVar4,sVar1,
                                  "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                  ,0x39);
    memcpy(local_68,param_2,sVar1);
  }
  Skeleton::setAttachment(this_00,(String *)&local_60,(String *)&local_78);
  pvVar3 = local_68;
  local_78 = &PTR__String_01c67868;
  if (local_68 != (void *)0x0) {
    plVar4 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar4 + 0x28))
              (plVar4,pvVar3,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",0xc9
              );
  }
  SpineObject::~SpineObject((SpineObject *)&local_78);
  pvVar3 = local_50;
  local_60 = &PTR__String_01c67868;
  if (local_50 != (void *)0x0) {
    plVar4 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar4 + 0x28))
              (plVar4,pvVar3,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",0xc9
              );
  }
  SpineObject::~SpineObject((SpineObject *)&local_60);
LAB_00d15208:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

