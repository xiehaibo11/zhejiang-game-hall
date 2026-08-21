
/* spine::SkeletonRenderer::SkeletonRenderer(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, spAtlas*, float) */

void __thiscall
spine::SkeletonRenderer::SkeletonRenderer
          (SkeletonRenderer *this,basic_string *param_1,spAtlas *param_2,float param_3)

{
  undefined8 uVar1;
  float *pfVar2;
  basic_string *pbVar3;
  
  cocos2d::Node::Node((Node *)this);
  *(undefined ***)this = &PTR__SkeletonRenderer_016d5758;
  *(undefined ***)(this + 0x2f8) = &PTR__SkeletonRenderer_016d5cc8;
  *(undefined8 *)(this + 0x310) = 0;
  *(undefined8 *)(this + 0x308) = 0;
  cocos2d::CustomCommand::CustomCommand((CustomCommand *)(this + 800));
  *(undefined2 *)(this + 0x394) = 0;
  this[0x396] = (SkeletonRenderer)0x0;
  *(undefined8 *)(this + 0x3a0) = 0;
  *(undefined4 *)(this + 0x390) = 0x3f800000;
  *(spAtlas **)(this + 0x308) = param_2;
  uVar1 = Cocos2dAttachmentLoader_create(param_2);
  *(undefined8 *)(this + 0x310) = uVar1;
  pfVar2 = (float *)spSkeletonJson_createWithLoader();
  *pfVar2 = param_3;
  pbVar3 = *(basic_string **)(param_1 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    pbVar3 = param_1 + 1;
  }
  uVar1 = spSkeletonJson_readSkeletonDataFile(pfVar2,pbVar3);
  spSkeletonJson_dispose(pfVar2);
  uVar1 = spSkeleton_create(uVar1);
  *(undefined8 *)(this + 0x388) = uVar1;
  this[0x300] = (SkeletonRenderer)0x1;
  (**(code **)(*(long *)this + 0x548))(this);
  return;
}

