
/* spine::SkeletonRenderer::initWithJsonFile(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, spAtlas*, float) */

void __thiscall
spine::SkeletonRenderer::initWithJsonFile
          (SkeletonRenderer *this,basic_string *param_1,spAtlas *param_2,float param_3)

{
  undefined8 uVar1;
  float *pfVar2;
  basic_string *pbVar3;
  
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
                    /* WARNING: Could not recover jumptable at 0x00d513e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x548))(this);
  return;
}

