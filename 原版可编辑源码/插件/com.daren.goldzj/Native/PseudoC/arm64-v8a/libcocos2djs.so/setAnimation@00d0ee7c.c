
/* spine::SkeletonAnimation::setAnimation(int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, bool) */

undefined8 __thiscall
spine::SkeletonAnimation::setAnimation
          (SkeletonAnimation *this,int param_1,basic_string *param_2,bool param_3)

{
  size_t __n;
  long lVar1;
  void *pvVar2;
  SkeletonData *this_00;
  long *plVar3;
  Animation *pAVar4;
  undefined8 uVar5;
  basic_string *pbVar6;
  undefined **local_70;
  size_t local_68;
  void *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (*(Skeleton **)(this + 0x30) != (Skeleton *)0x0) {
    this_00 = (SkeletonData *)Skeleton::getData(*(Skeleton **)(this + 0x30));
    if (((byte)*param_2 & 1) == 0) {
      pbVar6 = param_2 + 1;
LAB_00d0eefc:
      local_70 = &PTR__String_01c67868;
      local_68 = strlen((char *)pbVar6);
      __n = local_68 + 1;
      plVar3 = (long *)SpineExtension::getInstance();
      local_60 = (void *)(**(code **)(*plVar3 + 0x18))
                                   (plVar3,__n,
                                    "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                    ,0x39);
      memcpy(local_60,pbVar6,__n);
    }
    else {
      pbVar6 = *(basic_string **)(param_2 + 0x10);
      local_70 = &PTR__String_01c67868;
      if (pbVar6 != (basic_string *)0x0) goto LAB_00d0eefc;
      local_68 = 0;
      local_60 = (void *)0x0;
    }
    pAVar4 = (Animation *)SkeletonData::findAnimation(this_00,(String *)&local_70);
    pvVar2 = local_60;
    local_70 = &PTR__String_01c67868;
    if (local_60 != (void *)0x0) {
      plVar3 = (long *)SpineExtension::getInstance();
      (**(code **)(*plVar3 + 0x28))
                (plVar3,pvVar2,
                 "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",
                 0xc9);
    }
    SpineObject::~SpineObject((SpineObject *)&local_70);
    if (pAVar4 != (Animation *)0x0) {
      uVar5 = AnimationState::setAnimation
                        (*(AnimationState **)(this + 0xb0),(long)param_1,pAVar4,param_3);
      AnimationState::apply(*(AnimationState **)(this + 0xb0),*(Skeleton **)(this + 0x30));
      goto LAB_00d0efdc;
    }
    pbVar6 = *(basic_string **)(param_2 + 0x10);
    if (((byte)*param_2 & 1) == 0) {
      pbVar6 = param_2 + 1;
    }
    cocos2d::log("Spine: Animation not found: %s",pbVar6);
  }
  uVar5 = 0;
LAB_00d0efdc:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

