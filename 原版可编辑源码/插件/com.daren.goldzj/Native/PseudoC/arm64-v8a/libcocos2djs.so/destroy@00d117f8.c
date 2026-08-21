
/* spine::SkeletonRenderer::destroy() */

void __thiscall spine::SkeletonRenderer::destroy(SkeletonRenderer *this)

{
  ulong uVar1;
  long *plVar2;
  basic_string *this_00;
  
  (**(code **)(*(long *)this + 0x38))();
  if (*(Ref **)(this + 0x38) != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)(this + 0x38));
    *(undefined8 *)(this + 0x38) = 0;
  }
  if (this[0x18] != (SkeletonRenderer)0x0) {
    if ((*(Skeleton **)(this + 0x30) != (Skeleton *)0x0) &&
       (plVar2 = (long *)Skeleton::getData(*(Skeleton **)(this + 0x30)), plVar2 != (long *)0x0)) {
      (**(code **)(*plVar2 + 8))();
    }
    this[0x18] = (SkeletonRenderer)0x0;
  }
  if (this[0x19] != (SkeletonRenderer)0x0) {
    if (*(long **)(this + 0x30) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x30) + 8))();
    }
    *(undefined8 *)(this + 0x30) = 0;
  }
  if ((this[0x1a] != (SkeletonRenderer)0x0) && (*(long **)(this + 0x20) != (long *)0x0)) {
    (**(code **)(**(long **)(this + 0x20) + 8))();
    *(undefined8 *)(this + 0x20) = 0;
  }
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  if (*(long **)(this + 0x28) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x28) + 8))();
  }
  this_00 = (basic_string *)(this + 0x70);
  *(undefined8 *)(this + 0x28) = 0;
  uVar1 = (ulong)((byte)*this_00 >> 1);
  if (((byte)*this_00 & 1) != 0) {
    uVar1 = *(ulong *)(this + 0x78);
  }
  if (uVar1 != 0) {
    if (SkeletonDataMgr::_instance == (SkeletonDataMgr *)0x0) {
      SkeletonDataMgr::_instance = operator_new(0x60);
      *(undefined8 *)(SkeletonDataMgr::_instance + 0x30) = 0;
      *(undefined8 *)(SkeletonDataMgr::_instance + 0x50) = 0;
      *(undefined ***)SkeletonDataMgr::_instance = &PTR__SkeletonDataMgr_01c8cea8;
      *(undefined8 *)(SkeletonDataMgr::_instance + 0x48) = 0;
      *(SkeletonDataMgr **)(SkeletonDataMgr::_instance + 0x40) = SkeletonDataMgr::_instance + 0x48;
    }
    SkeletonDataMgr::releaseByUUID(SkeletonDataMgr::_instance,this_00);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)this_00
           ,"",0);
  }
  if (*(long **)(this + 0x60) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x60) + 8))();
  }
  *(undefined8 *)(this + 0x60) = 0;
  if (*(long **)(this + 0x90) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x90) + 8))();
  }
  *(undefined8 *)(this + 0x90) = 0;
  if (*(Ref **)(this + 0xa8) != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)(this + 0xa8));
    *(undefined8 *)(this + 0xa8) = 0;
  }
  if (*(Ref **)(this + 0x98) != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)(this + 0x98));
    *(undefined8 *)(this + 0x98) = 0;
  }
  if (*(Ref **)(this + 0xa0) != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)(this + 0xa0));
    *(undefined8 *)(this + 0xa0) = 0;
  }
  return;
}

