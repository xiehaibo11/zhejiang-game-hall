
/* spine::SkeletonBatch::~SkeletonBatch() */

void __thiscall spine::SkeletonBatch::~SkeletonBatch(SkeletonBatch *this)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  void *pvVar7;
  basic_string *pbVar8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *(undefined ***)this = &PTR__SkeletonBatch_016d5e98;
  lVar4 = cocos2d::Director::getInstance();
  pbVar8 = *(basic_string **)(lVar4 + 0xb0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_50,"director_after_draw");
  cocos2d::EventDispatcher::removeCustomEventListeners(pbVar8);
  if (((byte)local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  spUnsignedShortArray_dispose(*(undefined8 *)(this + 0x48));
  plVar5 = *(long **)(this + 8);
  if (*(long **)(this + 0x10) != plVar5) {
    plVar6 = (long *)*plVar5;
    uVar2 = 0;
    uVar3 = 1;
    while( true ) {
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))(plVar6);
        plVar5 = *(long **)(this + 8);
      }
      plVar5[uVar2] = 0;
      plVar5 = *(long **)(this + 8);
      if ((ulong)(*(long *)(this + 0x10) - (long)plVar5 >> 3) <= uVar3) break;
      plVar6 = (long *)plVar5[uVar3];
      uVar2 = uVar3;
      uVar3 = (ulong)((int)uVar3 + 1);
    }
  }
  pvVar7 = *(void **)(this + 0x28);
  if (pvVar7 != (void *)0x0) {
    *(void **)(this + 0x30) = pvVar7;
    operator_delete(pvVar7);
    plVar5 = *(long **)(this + 8);
  }
  if (plVar5 != (long *)0x0) {
    *(long **)(this + 0x10) = plVar5;
    operator_delete(plVar5);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

