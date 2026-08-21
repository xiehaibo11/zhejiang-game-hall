
/* cocos2d::Scene::getCameras() */

Scene * __thiscall cocos2d::Scene::getCameras(Scene *this)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  code *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (this[0x318] != (Scene)0x0) {
    lVar4 = *(long *)(this + 0x2f8);
    lVar5 = *(long *)(this + 0x300);
    local_60 = FUN_00f3cdac;
    lVar3 = lVar5 - lVar4;
    uVar6 = lVar3 >> 3;
    if (lVar3 < 0x401) {
      pvVar2 = (void *)0x0;
      uVar7 = 0;
    }
    else {
      uVar7 = uVar6;
      if (0xffffffffffffffe < (long)uVar6) {
        uVar7 = 0xfffffffffffffff;
      }
      do {
        pvVar2 = operator_new(uVar7 << 3,(nothrow_t *)&std::nothrow);
        if (pvVar2 != (void *)0x0) goto LAB_00f3cd34;
        uVar7 = uVar7 >> 1;
      } while (uVar7 != 0);
      pvVar2 = (void *)0x0;
    }
LAB_00f3cd34:
                    /* try { // try from 00f3cd48 to 0103cdcb has its CatchHandler @ 00f3ca74 */
    std::__ndk1::
    __stable_sort<bool(*&)(cocos2d::Camera_const*,cocos2d::Camera_const*),std::__ndk1::__wrap_iter<cocos2d::Camera**>>
              (lVar4,lVar5,&local_60,uVar6,pvVar2,uVar7);
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
    }
    this[0x318] = (Scene)0x0;
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this + 0x2f8;
}

