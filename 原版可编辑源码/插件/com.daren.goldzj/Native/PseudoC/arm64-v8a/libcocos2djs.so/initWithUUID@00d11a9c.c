
/* spine::SkeletonRenderer::initWithUUID(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall spine::SkeletonRenderer::initWithUUID(SkeletonRenderer *this,basic_string *param_1)

{
  ulong uVar1;
  basic_string *pbVar2;
  SkeletonData *pSVar3;
  Skeleton *this_00;
  
  this[0x19] = (SkeletonRenderer)0x1;
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x70) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1) {
    uVar1 = *(ulong *)(param_1 + 8);
    pbVar2 = *(basic_string **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      pbVar2 = param_1 + 1;
      uVar1 = (ulong)((byte)*param_1 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x70),(char *)pbVar2,uVar1);
  }
  if (SkeletonDataMgr::_instance == (SkeletonDataMgr *)0x0) {
    SkeletonDataMgr::_instance = operator_new(0x60);
    *(undefined8 *)(SkeletonDataMgr::_instance + 0x30) = 0;
    *(undefined8 *)(SkeletonDataMgr::_instance + 0x50) = 0;
    *(undefined ***)SkeletonDataMgr::_instance = &PTR__SkeletonDataMgr_01c8cea8;
    *(undefined8 *)(SkeletonDataMgr::_instance + 0x48) = 0;
    *(SkeletonDataMgr **)(SkeletonDataMgr::_instance + 0x40) = SkeletonDataMgr::_instance + 0x48;
  }
  pSVar3 = (SkeletonData *)SkeletonDataMgr::retainByUUID(SkeletonDataMgr::_instance,param_1);
  this_00 = SpineObject::operator_new
                      (0x148,
                       "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine-creator-support/SkeletonRenderer.cpp"
                       ,0x7d);
  Skeleton::Skeleton(this_00,pSVar3);
  *(Skeleton **)(this + 0x30) = this_00;
  this[0x18] = (SkeletonRenderer)0x0;
                    /* WARNING: Could not recover jumptable at 0x00d11b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x48))(this);
  return;
}

