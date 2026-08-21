
/* spine::SkeletonRenderer::initWithJsonFile(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, spine::Atlas*, float) */

void __thiscall
spine::SkeletonRenderer::initWithJsonFile
          (SkeletonRenderer *this,basic_string *param_1,Atlas *param_2,float param_3)

{
  long lVar1;
  long lVar2;
  void *pvVar3;
  Cocos2dAtlasAttachmentLoader *this_00;
  long *plVar4;
  SkeletonData *pSVar5;
  Skeleton *this_01;
  basic_string *__s;
  undefined **local_b0;
  size_t local_a8;
  void *local_a0;
  SkeletonJson aSStack_98 [48];
  float local_68;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  *(Atlas **)(this + 0x20) = param_2;
  this_00 = SpineObject::operator_new
                      (0x10,
                       "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine-creator-support/SkeletonRenderer.cpp"
                       ,0xd1);
  Cocos2dAtlasAttachmentLoader::Cocos2dAtlasAttachmentLoader(this_00,*(Atlas **)(this + 0x20));
  *(Cocos2dAtlasAttachmentLoader **)(this + 0x28) = this_00;
  SkeletonJson::SkeletonJson(aSStack_98,(AttachmentLoader *)this_00);
  local_68 = param_3;
  if (((byte)*param_1 & 1) == 0) {
    __s = param_1 + 1;
  }
  else {
    __s = *(basic_string **)(param_1 + 0x10);
    local_b0 = &PTR__String_01c67868;
    if (__s == (basic_string *)0x0) {
      local_a8 = 0;
      local_a0 = (void *)0x0;
      goto LAB_00d11390;
    }
  }
  local_b0 = &PTR__String_01c67868;
  local_a8 = strlen((char *)__s);
  lVar1 = local_a8 + 1;
  plVar4 = (long *)SpineExtension::getInstance();
  local_a0 = (void *)(**(code **)(*plVar4 + 0x18))
                               (plVar4,lVar1,
                                "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                ,0x39);
  memcpy(local_a0,__s,local_a8 + 1);
LAB_00d11390:
  pSVar5 = (SkeletonData *)SkeletonJson::readSkeletonDataFile(aSStack_98,(String *)&local_b0);
  pvVar3 = local_a0;
  local_b0 = &PTR__String_01c67868;
  if (local_a0 != (void *)0x0) {
    plVar4 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar4 + 0x28))
              (plVar4,pvVar3,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",0xc9
              );
  }
  SpineObject::~SpineObject((SpineObject *)&local_b0);
  this[0x19] = (SkeletonRenderer)0x1;
  this_01 = SpineObject::operator_new
                      (0x148,
                       "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine-creator-support/SkeletonRenderer.cpp"
                       ,0x7d);
  Skeleton::Skeleton(this_01,pSVar5);
  *(Skeleton **)(this + 0x30) = this_01;
  this[0x18] = (SkeletonRenderer)0x1;
  (**(code **)(*(long *)this + 0x48))(this);
  SkeletonJson::~SkeletonJson(aSStack_98);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

