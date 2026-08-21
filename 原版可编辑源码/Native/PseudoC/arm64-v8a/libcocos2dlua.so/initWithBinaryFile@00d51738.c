
/* spine::SkeletonRenderer::initWithBinaryFile(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, float) */

void __thiscall
spine::SkeletonRenderer::initWithBinaryFile
          (SkeletonRenderer *this,basic_string *param_1,basic_string *param_2,float param_3)

{
  undefined8 uVar1;
  float *pfVar2;
  basic_string *pbVar3;
  
  pbVar3 = *(basic_string **)(param_2 + 0x10);
  if (((byte)*param_2 & 1) == 0) {
    pbVar3 = param_2 + 1;
  }
  uVar1 = spAtlas_createFromFile(pbVar3,0);
  *(undefined8 *)(this + 0x308) = uVar1;
                    /* try { // try from 00d51774 to 00e5177f has its CatchHandler @ 00d51d40 */
  uVar1 = Cocos2dAttachmentLoader_create();
  *(undefined8 *)(this + 0x310) = uVar1;
  pfVar2 = (float *)spSkeletonBinary_createWithLoader();
  *pfVar2 = param_3;
  pbVar3 = *(basic_string **)(param_1 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    pbVar3 = param_1 + 1;
  }
  uVar1 = spSkeletonBinary_readSkeletonDataFile(pfVar2,pbVar3);
  spSkeletonBinary_dispose(pfVar2);
  uVar1 = spSkeleton_create(uVar1);
                    /* try { // try from 00d517b4 to 00e517bb has its CatchHandler @ 00d51d04 */
  *(undefined8 *)(this + 0x388) = uVar1;
                    /* try { // try from 00d517bc to 00e517c3 has its CatchHandler @ 00d51d2c */
  this[0x300] = (SkeletonRenderer)0x1;
                    /* try { // try from 00d517c8 to 00e517d3 has its CatchHandler @ 00d51d28 */
                    /* WARNING: Could not recover jumptable at 0x00d517d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x548))(this);
  return;
}

