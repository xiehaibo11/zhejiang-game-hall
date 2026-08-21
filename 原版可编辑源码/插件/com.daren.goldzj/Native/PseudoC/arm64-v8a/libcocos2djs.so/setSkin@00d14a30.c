
/* spine::SkeletonRenderer::setSkin(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall spine::SkeletonRenderer::setSkin(SkeletonRenderer *this,basic_string *param_1)

{
  size_t __n;
  ulong uVar1;
  basic_string bVar2;
  long lVar3;
  void *pvVar4;
  long *plVar5;
  Skeleton *this_00;
  basic_string *__s;
  undefined **local_60;
  size_t local_58;
  void *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  this_00 = *(Skeleton **)(this + 0x30);
  if (this_00 == (Skeleton *)0x0) goto LAB_00d14b5c;
  bVar2 = *param_1;
  uVar1 = (ulong)((byte)bVar2 >> 1);
  if (((byte)bVar2 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  if (uVar1 == 0) {
LAB_00d14b04:
    local_60 = &PTR__String_01c67868;
    local_58 = 0;
    local_50 = (void *)0x0;
  }
  else {
    if (((byte)bVar2 & 1) == 0) {
      __s = param_1 + 1;
    }
    else {
      __s = *(basic_string **)(param_1 + 0x10);
      if (__s == (basic_string *)0x0) goto LAB_00d14b04;
    }
    local_60 = &PTR__String_01c67868;
    local_58 = strlen((char *)__s);
    __n = local_58 + 1;
    plVar5 = (long *)SpineExtension::getInstance();
    local_50 = (void *)(**(code **)(*plVar5 + 0x18))
                                 (plVar5,__n,
                                  "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                  ,0x39);
    memcpy(local_50,__s,__n);
  }
  Skeleton::setSkin(this_00,(String *)&local_60);
  pvVar4 = local_50;
  local_60 = &PTR__String_01c67868;
  if (local_50 != (void *)0x0) {
    plVar5 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar5 + 0x28))
              (plVar5,pvVar4,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",0xc9
              );
  }
  SpineObject::~SpineObject((SpineObject *)&local_60);
  Skeleton::setSlotsToSetupPose(*(Skeleton **)(this + 0x30));
LAB_00d14b5c:
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

