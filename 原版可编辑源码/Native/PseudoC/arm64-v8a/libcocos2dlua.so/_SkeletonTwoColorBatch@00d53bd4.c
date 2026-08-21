
/* spine::SkeletonTwoColorBatch::~SkeletonTwoColorBatch() */

void __thiscall spine::SkeletonTwoColorBatch::~SkeletonTwoColorBatch(SkeletonTwoColorBatch *this)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  void *pvVar6;
  long *plVar7;
  basic_string *pbVar8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *(undefined ***)this = &PTR__SkeletonTwoColorBatch_016d5d50;
  lVar4 = cocos2d::Director::getInstance();
  pbVar8 = *(basic_string **)(lVar4 + 0xb0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_50,"director_after_draw");
  cocos2d::EventDispatcher::removeCustomEventListeners(pbVar8);
  if (((byte)local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  spUnsignedShortArray_dispose(*(undefined8 *)(this + 0x48));
  plVar7 = *(long **)(this + 8);
                    /* try { // try from 00d53c48 to 00e53c4f has its CatchHandler @ 00d53d10 */
  if (*(long **)(this + 0x10) != plVar7) {
                    /* try { // try from 00d53c58 to 00e53c63 has its CatchHandler @ 00d53d00 */
    plVar5 = (long *)*plVar7;
    uVar2 = 0;
    uVar3 = 1;
    while( true ) {
      if (plVar5 != (long *)0x0) {
                    /* try { // try from 00d53c84 to 00e53d5b has its CatchHandler @ 00d53b48 */
        (**(code **)(*plVar5 + 8))();
        plVar7 = *(long **)(this + 8);
      }
      plVar7[uVar2] = 0;
      plVar7 = *(long **)(this + 8);
                    /* try { // try from 00d53c78 to 00e53c83 has its CatchHandler @ 00d53d14 */
      if ((ulong)(*(long *)(this + 0x10) - (long)plVar7 >> 3) <= uVar3) break;
      plVar5 = (long *)plVar7[uVar3];
      uVar2 = uVar3;
      uVar3 = (ulong)((int)uVar3 + 1);
    }
  }
  cocos2d::Ref::release(*(Ref **)(this + 0x50));
  if (*(void **)(this + 0x68) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x68));
  }
  if (*(void **)(this + 0x80) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x80));
  }
  pvVar6 = *(void **)(this + 0x28);
  if (pvVar6 != (void *)0x0) {
    *(void **)(this + 0x30) = pvVar6;
    operator_delete(pvVar6);
  }
  pvVar6 = *(void **)(this + 8);
  if (pvVar6 != (void *)0x0) {
    *(void **)(this + 0x10) = pvVar6;
    operator_delete(pvVar6);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

