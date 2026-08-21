
/* spine::SkeletonRenderer::initWithBinaryFile(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, float) */

void __thiscall
spine::SkeletonRenderer::initWithBinaryFile
          (SkeletonRenderer *this,basic_string *param_1,basic_string *param_2,float param_3)

{
  size_t __n;
  long lVar1;
  long lVar2;
  void *pvVar3;
  Atlas *this_00;
  long *plVar4;
  Cocos2dAtlasAttachmentLoader *this_01;
  SkeletonData *pSVar5;
  Skeleton *this_02;
  basic_string *pbVar6;
  undefined **local_c0;
  size_t local_b8;
  void *local_b0;
  undefined **local_a8;
  size_t local_a0;
  void *local_98;
  float local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  this_00 = SpineObject::operator_new
                      (0x50,
                       "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine-creator-support/SkeletonRenderer.cpp"
                       ,0x100);
  if (((byte)*param_2 & 1) == 0) {
    pbVar6 = param_2 + 1;
LAB_00d11db4:
    local_a8 = &PTR__String_01c67868;
    local_a0 = strlen((char *)pbVar6);
    __n = local_a0 + 1;
    plVar4 = (long *)SpineExtension::getInstance();
    local_98 = (void *)(**(code **)(*plVar4 + 0x18))
                                 (plVar4,__n,
                                  "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                  ,0x39);
    memcpy(local_98,pbVar6,__n);
  }
  else {
    pbVar6 = *(basic_string **)(param_2 + 0x10);
    local_a8 = &PTR__String_01c67868;
    if (pbVar6 != (basic_string *)0x0) goto LAB_00d11db4;
    local_a0 = 0;
    local_98 = (void *)0x0;
  }
  Atlas::Atlas(this_00,(String *)&local_a8,(TextureLoader *)&DAT_01d3dc50,true);
  pvVar3 = local_98;
  *(Atlas **)(this + 0x20) = this_00;
  local_a8 = &PTR__String_01c67868;
  if (local_98 != (void *)0x0) {
    plVar4 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar4 + 0x28))
              (plVar4,pvVar3,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",0xc9
              );
  }
  SpineObject::~SpineObject((SpineObject *)&local_a8);
  this_01 = SpineObject::operator_new
                      (0x10,
                       "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine-creator-support/SkeletonRenderer.cpp"
                       ,0x103);
  Cocos2dAtlasAttachmentLoader::Cocos2dAtlasAttachmentLoader(this_01,*(Atlas **)(this + 0x20));
  *(Cocos2dAtlasAttachmentLoader **)(this + 0x28) = this_01;
  SkeletonBinary::SkeletonBinary((SkeletonBinary *)&local_a8,(AttachmentLoader *)this_01);
  local_60 = param_3;
  if (((byte)*param_1 & 1) == 0) {
    pbVar6 = param_1 + 1;
  }
  else {
    pbVar6 = *(basic_string **)(param_1 + 0x10);
    local_c0 = &PTR__String_01c67868;
    if (pbVar6 == (basic_string *)0x0) {
      local_b8 = 0;
      local_b0 = (void *)0x0;
      goto LAB_00d11ef0;
    }
  }
  local_c0 = &PTR__String_01c67868;
  local_b8 = strlen((char *)pbVar6);
  lVar1 = local_b8 + 1;
  plVar4 = (long *)SpineExtension::getInstance();
  local_b0 = (void *)(**(code **)(*plVar4 + 0x18))
                               (plVar4,lVar1,
                                "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                ,0x39);
  memcpy(local_b0,pbVar6,local_b8 + 1);
LAB_00d11ef0:
  pSVar5 = (SkeletonData *)
           SkeletonBinary::readSkeletonDataFile((SkeletonBinary *)&local_a8,(String *)&local_c0);
  pvVar3 = local_b0;
  local_c0 = &PTR__String_01c67868;
  if (local_b0 != (void *)0x0) {
    plVar4 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar4 + 0x28))
              (plVar4,pvVar3,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",0xc9
              );
  }
  SpineObject::~SpineObject((SpineObject *)&local_c0);
  *(undefined2 *)(this + 0x19) = 0x101;
  this_02 = SpineObject::operator_new
                      (0x148,
                       "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine-creator-support/SkeletonRenderer.cpp"
                       ,0x7d);
  Skeleton::Skeleton(this_02,pSVar5);
  *(Skeleton **)(this + 0x30) = this_02;
  this[0x18] = (SkeletonRenderer)0x1;
  (**(code **)(*(long *)this + 0x48))(this);
  SkeletonBinary::~SkeletonBinary((SkeletonBinary *)&local_a8);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

