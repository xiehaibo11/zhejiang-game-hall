
/* spine::SkeletonRenderer::getAttachment(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) const */

undefined8 __thiscall
spine::SkeletonRenderer::getAttachment
          (SkeletonRenderer *this,basic_string *param_1,basic_string *param_2)

{
  size_t sVar1;
  long lVar2;
  void *pvVar3;
  long *plVar4;
  undefined8 uVar5;
  Skeleton *this_00;
  basic_string *pbVar6;
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
  uVar5 = 0;
  if (this_00 == (Skeleton *)0x0) goto LAB_00d14e44;
  if (((byte)*param_1 & 1) == 0) {
    pbVar6 = param_1 + 1;
LAB_00d14cf8:
    local_60 = &PTR__String_01c67868;
    local_58 = strlen((char *)pbVar6);
    sVar1 = local_58 + 1;
    plVar4 = (long *)SpineExtension::getInstance();
    local_50 = (void *)(**(code **)(*plVar4 + 0x18))
                                 (plVar4,sVar1,
                                  "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                  ,0x39);
    memcpy(local_50,pbVar6,sVar1);
    if (((byte)*param_2 & 1) == 0) goto LAB_00d14d40;
LAB_00d14d64:
    pbVar6 = *(basic_string **)(param_2 + 0x10);
    local_78 = &PTR__String_01c67868;
    if (pbVar6 != (basic_string *)0x0) goto LAB_00d14d7c;
    local_70 = 0;
    local_68 = (void *)0x0;
  }
  else {
    pbVar6 = *(basic_string **)(param_1 + 0x10);
    local_60 = &PTR__String_01c67868;
    if (pbVar6 != (basic_string *)0x0) goto LAB_00d14cf8;
    local_58 = 0;
    local_50 = (void *)0x0;
    if (((byte)*param_2 & 1) != 0) goto LAB_00d14d64;
LAB_00d14d40:
    pbVar6 = param_2 + 1;
LAB_00d14d7c:
    local_78 = &PTR__String_01c67868;
    local_70 = strlen((char *)pbVar6);
    sVar1 = local_70 + 1;
    plVar4 = (long *)SpineExtension::getInstance();
    local_68 = (void *)(**(code **)(*plVar4 + 0x18))
                                 (plVar4,sVar1,
                                  "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                  ,0x39);
    memcpy(local_68,pbVar6,sVar1);
  }
  uVar5 = Skeleton::getAttachment(this_00,(String *)&local_60,(String *)&local_78);
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
LAB_00d14e44:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

