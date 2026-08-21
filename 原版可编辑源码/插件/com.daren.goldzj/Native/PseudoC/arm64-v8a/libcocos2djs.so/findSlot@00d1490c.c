
/* spine::SkeletonRenderer::findSlot(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) const */

undefined8 __thiscall
spine::SkeletonRenderer::findSlot(SkeletonRenderer *this,basic_string *param_1)

{
  size_t __n;
  long lVar1;
  void *pvVar2;
  long *plVar3;
  undefined8 uVar4;
  Skeleton *this_00;
  basic_string *__s;
  undefined **local_50;
  size_t local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this_00 = *(Skeleton **)(this + 0x30);
  uVar4 = 0;
  if (this_00 == (Skeleton *)0x0) goto LAB_00d149fc;
  if (((byte)*param_1 & 1) == 0) {
    __s = param_1 + 1;
LAB_00d1496c:
    local_50 = &PTR__String_01c67868;
    local_48 = strlen((char *)__s);
    __n = local_48 + 1;
    plVar3 = (long *)SpineExtension::getInstance();
    local_40 = (void *)(**(code **)(*plVar3 + 0x18))
                                 (plVar3,__n,
                                  "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                  ,0x39);
    memcpy(local_40,__s,__n);
  }
  else {
    __s = *(basic_string **)(param_1 + 0x10);
    local_50 = &PTR__String_01c67868;
    if (__s != (basic_string *)0x0) goto LAB_00d1496c;
    local_48 = 0;
    local_40 = (void *)0x0;
  }
  uVar4 = Skeleton::findSlot(this_00,(String *)&local_50);
  pvVar2 = local_40;
  local_50 = &PTR__String_01c67868;
  if (local_40 != (void *)0x0) {
    plVar3 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar3 + 0x28))
              (plVar3,pvVar2,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",0xc9
              );
  }
  SpineObject::~SpineObject((SpineObject *)&local_50);
LAB_00d149fc:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

