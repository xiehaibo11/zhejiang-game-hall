
/* spine::SkeletonAnimation::setMix(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, float) */

void __thiscall
spine::SkeletonAnimation::setMix
          (SkeletonAnimation *this,basic_string *param_1,basic_string *param_2,float param_3)

{
  size_t sVar1;
  long lVar2;
  void *pvVar3;
  AnimationStateData *this_00;
  long *plVar4;
  basic_string *pbVar5;
  undefined **local_78;
  size_t local_70;
  void *local_68;
  undefined **local_60;
  size_t local_58;
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (*(AnimationState **)(this + 0xb0) == (AnimationState *)0x0) goto LAB_00d0ee44;
  this_00 = (AnimationStateData *)AnimationState::getData(*(AnimationState **)(this + 0xb0));
  if (((byte)*param_1 & 1) == 0) {
    pbVar5 = param_1 + 1;
LAB_00d0ecf8:
    local_60 = &PTR__String_01c67868;
    local_58 = strlen((char *)pbVar5);
    sVar1 = local_58 + 1;
    plVar4 = (long *)SpineExtension::getInstance();
    local_50 = (void *)(**(code **)(*plVar4 + 0x18))
                                 (plVar4,sVar1,
                                  "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                  ,0x39);
    memcpy(local_50,pbVar5,sVar1);
    if (((byte)*param_2 & 1) == 0) goto LAB_00d0ed40;
LAB_00d0ed64:
    pbVar5 = *(basic_string **)(param_2 + 0x10);
    local_78 = &PTR__String_01c67868;
    if (pbVar5 != (basic_string *)0x0) goto LAB_00d0ed7c;
    local_70 = 0;
    local_68 = (void *)0x0;
  }
  else {
    pbVar5 = *(basic_string **)(param_1 + 0x10);
    local_60 = &PTR__String_01c67868;
    if (pbVar5 != (basic_string *)0x0) goto LAB_00d0ecf8;
    local_58 = 0;
    local_50 = (void *)0x0;
    if (((byte)*param_2 & 1) != 0) goto LAB_00d0ed64;
LAB_00d0ed40:
    pbVar5 = param_2 + 1;
LAB_00d0ed7c:
    local_78 = &PTR__String_01c67868;
    local_70 = strlen((char *)pbVar5);
    sVar1 = local_70 + 1;
    plVar4 = (long *)SpineExtension::getInstance();
    local_68 = (void *)(**(code **)(*plVar4 + 0x18))
                                 (plVar4,sVar1,
                                  "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                  ,0x39);
    memcpy(local_68,pbVar5,sVar1);
  }
  AnimationStateData::setMix(this_00,(String *)&local_60,(String *)&local_78,param_3);
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
LAB_00d0ee44:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

