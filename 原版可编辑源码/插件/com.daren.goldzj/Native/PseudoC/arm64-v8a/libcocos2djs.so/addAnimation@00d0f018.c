
/* spine::SkeletonAnimation::addAnimation(int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, bool, float) */

void __thiscall
spine::SkeletonAnimation::addAnimation
          (SkeletonAnimation *this,int param_1,basic_string *param_2,bool param_3,float param_4)

{
  size_t __n;
  long lVar1;
  void *pvVar2;
  SkeletonData *this_00;
  long *plVar3;
  Animation *pAVar4;
  undefined8 uVar5;
  basic_string *pbVar6;
  undefined **local_80;
  size_t local_78;
  void *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar5 = 0;
  if (*(Skeleton **)(this + 0x30) == (Skeleton *)0x0) goto LAB_00d0f170;
  this_00 = (SkeletonData *)Skeleton::getData(*(Skeleton **)(this + 0x30));
  if (((byte)*param_2 & 1) == 0) {
    pbVar6 = param_2 + 1;
LAB_00d0f0a0:
    local_80 = &PTR__String_01c67868;
    local_78 = strlen((char *)pbVar6);
    __n = local_78 + 1;
    plVar3 = (long *)SpineExtension::getInstance();
    local_70 = (void *)(**(code **)(*plVar3 + 0x18))
                                 (plVar3,__n,
                                  "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                  ,0x39);
    memcpy(local_70,pbVar6,__n);
  }
  else {
    pbVar6 = *(basic_string **)(param_2 + 0x10);
    local_80 = &PTR__String_01c67868;
    if (pbVar6 != (basic_string *)0x0) goto LAB_00d0f0a0;
    local_78 = 0;
    local_70 = (void *)0x0;
  }
  pAVar4 = (Animation *)SkeletonData::findAnimation(this_00,(String *)&local_80);
  pvVar2 = local_70;
  local_80 = &PTR__String_01c67868;
  if (local_70 != (void *)0x0) {
    plVar3 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar3 + 0x28))
              (plVar3,pvVar2,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",0xc9
              );
  }
  SpineObject::~SpineObject((SpineObject *)&local_80);
  if (pAVar4 == (Animation *)0x0) {
    pbVar6 = *(basic_string **)(param_2 + 0x10);
    if (((byte)*param_2 & 1) == 0) {
      pbVar6 = param_2 + 1;
    }
    cocos2d::log("Spine: Animation not found: %s",pbVar6);
    uVar5 = 0;
  }
  else {
    uVar5 = AnimationState::addAnimation
                      (*(AnimationState **)(this + 0xb0),(long)param_1,pAVar4,param_3,param_4);
  }
LAB_00d0f170:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

