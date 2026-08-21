
/* cocos2d::RenderQueue::sort() */

void __thiscall cocos2d::RenderQueue::sort(RenderQueue *this)

{
  long lVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  code *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  lVar1 = *(long *)(this + 0x30);
  lVar2 = *(long *)(this + 0x38);
  local_70 = FUN_00fe3bcc;
  lVar5 = lVar2 - lVar1;
  uVar6 = lVar5 >> 3;
  if (lVar5 < 0x401) {
    pvVar4 = (void *)0x0;
    uVar7 = 0;
  }
  else {
                    /* catch() { ... } // from try @ 00fe398c with catch @ 00fe39f8 */
    uVar7 = uVar6;
    if (0xffffffffffffffe < (long)uVar6) {
      uVar7 = 0xfffffffffffffff;
    }
    do {
      pvVar4 = operator_new(uVar7 << 3,(nothrow_t *)&std::nothrow);
      if (pvVar4 != (void *)0x0) goto LAB_00fe3a2c;
      uVar7 = uVar7 >> 1;
    } while (uVar7 != 0);
    pvVar4 = (void *)0x0;
                    /* catch() { ... } // from try @ 00fe3a4c with catch @ 00fe3a18 */
  }
LAB_00fe3a2c:
                    /* try { // try from 00fe3a44 to 010e3a4b has its CatchHandler @ 00fe3aa8 */
  std::__ndk1::
  __stable_sort<bool(*&)(cocos2d::RenderCommand*,cocos2d::RenderCommand*),std::__ndk1::__wrap_iter<cocos2d::RenderCommand**>>
            (lVar1,lVar2,&local_70,uVar6,pvVar4,uVar7);
  if (pvVar4 != (void *)0x0) {
                    /* try { // try from 00fe3a4c to 010e3ac3 has its CatchHandler @ 00fe3a18 */
    operator_delete(pvVar4);
  }
  lVar1 = *(long *)this;
  lVar2 = *(long *)(this + 8);
  local_70 = FUN_00fe3be0;
  lVar5 = lVar2 - lVar1;
  uVar6 = lVar5 >> 3;
  if (lVar5 < 0x401) {
                    /* catch() { ... } // from try @ 00fe3a44 with catch @ 00fe3aa8 */
    pvVar4 = (void *)0x0;
    uVar7 = 0;
  }
  else {
    uVar7 = uVar6;
    if (0xffffffffffffffe < (long)uVar6) {
      uVar7 = 0xfffffffffffffff;
    }
    do {
      pvVar4 = operator_new(uVar7 << 3,(nothrow_t *)&std::nothrow);
      if (pvVar4 != (void *)0x0) goto LAB_00fe3ab8;
      uVar7 = uVar7 >> 1;
    } while (uVar7 != 0);
    pvVar4 = (void *)0x0;
  }
LAB_00fe3ab8:
                    /* catch() { ... } // from try @ 00fe3af4 with catch @ 00fe3ac4 */
  std::__ndk1::
  __stable_sort<bool(*&)(cocos2d::RenderCommand*,cocos2d::RenderCommand*),std::__ndk1::__wrap_iter<cocos2d::RenderCommand**>>
            (lVar1,lVar2,&local_70,uVar6,pvVar4,uVar7);
  if (pvVar4 != (void *)0x0) {
    operator_delete(pvVar4);
  }
  lVar1 = *(long *)(this + 0x60);
  lVar2 = *(long *)(this + 0x68);
  local_70 = FUN_00fe3be0;
  lVar5 = lVar2 - lVar1;
                    /* try { // try from 00fe3aec to 010e3af3 has its CatchHandler @ 00fe3bb4 */
  uVar6 = lVar5 >> 3;
                    /* try { // try from 00fe3af4 to 010e3bcf has its CatchHandler @ 00fe3ac4 */
  if (lVar5 < 0x401) {
    pvVar4 = (void *)0x0;
    uVar7 = 0;
  }
  else {
    uVar7 = uVar6;
    if (0xffffffffffffffe < (long)uVar6) {
      uVar7 = 0xfffffffffffffff;
    }
    do {
      pvVar4 = operator_new(uVar7 << 3,(nothrow_t *)&std::nothrow);
      if (pvVar4 != (void *)0x0) goto LAB_00fe3b3c;
      uVar7 = uVar7 >> 1;
    } while (uVar7 != 0);
    pvVar4 = (void *)0x0;
  }
LAB_00fe3b3c:
  std::__ndk1::
  __stable_sort<bool(*&)(cocos2d::RenderCommand*,cocos2d::RenderCommand*),std::__ndk1::__wrap_iter<cocos2d::RenderCommand**>>
            (lVar1,lVar2,&local_70,uVar6,pvVar4,uVar7);
  if (pvVar4 != (void *)0x0) {
    operator_delete(pvVar4);
  }
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

