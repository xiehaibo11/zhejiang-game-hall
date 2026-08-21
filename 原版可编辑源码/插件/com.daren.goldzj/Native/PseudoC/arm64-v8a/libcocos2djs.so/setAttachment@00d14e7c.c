
/* spine::SkeletonRenderer::setAttachment(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

undefined8 __thiscall
spine::SkeletonRenderer::setAttachment
          (SkeletonRenderer *this,basic_string *param_1,basic_string *param_2)

{
  size_t sVar1;
  ulong uVar2;
  basic_string bVar3;
  long lVar4;
  void *pvVar5;
  long *plVar6;
  Skeleton *this_00;
  basic_string *pbVar7;
  undefined **local_78;
  size_t local_70;
  void *local_68;
  undefined **local_60;
  size_t local_58;
  void *local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  this_00 = *(Skeleton **)(this + 0x30);
  if (this_00 == (Skeleton *)0x0) goto LAB_00d15050;
  if (((byte)*param_1 & 1) == 0) {
    pbVar7 = param_1 + 1;
LAB_00d14ee4:
    local_60 = &PTR__String_01c67868;
    local_58 = strlen((char *)pbVar7);
    sVar1 = local_58 + 1;
    plVar6 = (long *)SpineExtension::getInstance();
    local_50 = (void *)(**(code **)(*plVar6 + 0x18))
                                 (plVar6,sVar1,
                                  "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                  ,0x39);
    memcpy(local_50,pbVar7,sVar1);
  }
  else {
    pbVar7 = *(basic_string **)(param_1 + 0x10);
    local_60 = &PTR__String_01c67868;
    if (pbVar7 != (basic_string *)0x0) goto LAB_00d14ee4;
    local_58 = 0;
    local_50 = (void *)0x0;
  }
  bVar3 = *param_2;
  uVar2 = (ulong)((byte)bVar3 >> 1);
  if (((byte)bVar3 & 1) != 0) {
    uVar2 = *(ulong *)(param_2 + 8);
  }
  if (uVar2 == 0) {
LAB_00d14fc8:
    local_78 = &PTR__String_01c67868;
    local_70 = 0;
    local_68 = (void *)0x0;
  }
  else {
    if (((byte)bVar3 & 1) == 0) {
      pbVar7 = param_2 + 1;
    }
    else {
      pbVar7 = *(basic_string **)(param_2 + 0x10);
      if (pbVar7 == (basic_string *)0x0) goto LAB_00d14fc8;
    }
    local_78 = &PTR__String_01c67868;
    local_70 = strlen((char *)pbVar7);
    sVar1 = local_70 + 1;
    plVar6 = (long *)SpineExtension::getInstance();
    local_68 = (void *)(**(code **)(*plVar6 + 0x18))
                                 (plVar6,sVar1,
                                  "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                  ,0x39);
    memcpy(local_68,pbVar7,sVar1);
  }
  Skeleton::setAttachment(this_00,(String *)&local_60,(String *)&local_78);
  pvVar5 = local_68;
  local_78 = &PTR__String_01c67868;
  if (local_68 != (void *)0x0) {
    plVar6 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar6 + 0x28))
              (plVar6,pvVar5,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",0xc9
              );
  }
  SpineObject::~SpineObject((SpineObject *)&local_78);
  pvVar5 = local_50;
  local_60 = &PTR__String_01c67868;
  if (local_50 != (void *)0x0) {
    plVar6 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar6 + 0x28))
              (plVar6,pvVar5,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",0xc9
              );
  }
  SpineObject::~SpineObject((SpineObject *)&local_60);
LAB_00d15050:
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}

