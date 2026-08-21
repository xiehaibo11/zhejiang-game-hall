
/* cocos2d::extension::Control::removeTargetWithActionForControlEvent(cocos2d::Ref*, void
   (cocos2d::Ref::*)(cocos2d::Ref*, cocos2d::extension::Control::EventType),
   cocos2d::extension::Control::EventType) */

void cocos2d::extension::Control::removeTargetWithActionForControlEvent
               (Control *param_1,long param_2,long param_3,ulong param_4,undefined4 param_5)

{
  long *plVar1;
  Invocation **ppIVar2;
  long *plVar3;
  size_t __n;
  long lVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  long *__dest;
  undefined8 *puVar8;
  undefined8 *puVar9;
  Ref *this;
  Invocation **ppIVar10;
  undefined8 *puVar11;
  undefined1 auVar12 [16];
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 *puStack_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  plVar6 = (long *)dispatchListforControlEvent(param_1,param_5);
  if ((param_2 == 0) && ((param_4 & 1) == 0 && param_3 == 0)) {
    puVar9 = (undefined8 *)*plVar6;
    puVar11 = (undefined8 *)plVar6[1];
                    /* try { // try from 00e095b0 to 00f095df has its CatchHandler @ 00e09694 */
    if (puVar9 != puVar11) {
      do {
        puVar8 = puVar9 + 1;
        Ref::release((Ref *)*puVar9);
        puVar9 = puVar8;
      } while (puVar11 != puVar8);
      puVar9 = (undefined8 *)*plVar6;
    }
    plVar6[1] = (long)puVar9;
  }
  else {
    local_68 = (undefined8 *)0x0;
    puStack_60 = (undefined8 *)0x0;
    local_70 = (undefined8 *)0x0;
    ppIVar10 = (Invocation **)*plVar6;
    ppIVar2 = (Invocation **)plVar6[1];
                    /* try { // try from 00e09444 to 00f0945b has its CatchHandler @ 00e09678 */
    if (ppIVar10 != ppIVar2) {
      if (param_2 != 0) goto LAB_00e09478;
LAB_00e094d8:
      bVar5 = true;
      if ((param_4 & 1) != 0 || param_3 != 0) goto LAB_00e09494;
LAB_00e094e0:
      if (!bVar5) goto LAB_00e09468;
      do {
        if (local_68 == puStack_60) {
                    /* try { // try from 00e094f4 to 00f09503 has its CatchHandler @ 00e09658 */
          std::__ndk1::
          vector<cocos2d::extension::Invocation*,std::__ndk1::allocator<cocos2d::extension::Invocation*>>
          ::__push_back_slow_path<cocos2d::extension::Invocation*const&>
                    ((vector<cocos2d::extension::Invocation*,std::__ndk1::allocator<cocos2d::extension::Invocation*>>
                      *)&local_70,ppIVar10);
        }
        else {
          *local_68 = *ppIVar10;
          local_68 = local_68 + 1;
        }
LAB_00e09468:
        do {
          do {
            puVar9 = local_68;
            ppIVar10 = ppIVar10 + 1;
                    /* try { // try from 00e0946c to 00f094d7 has its CatchHandler @ 00e09690 */
            if (ppIVar2 == ppIVar10) {
                    /* try { // try from 00e09504 to 00f0950f has its CatchHandler @ 00e09640 */
              puVar11 = local_70;
              if (local_70 != local_68) goto LAB_00e09530;
              if (local_68 == (undefined8 *)0x0) goto LAB_00e095d0;
              goto LAB_00e0959c;
            }
            if (param_2 == 0) goto LAB_00e094d8;
LAB_00e09478:
            lVar7 = (**(code **)(*(long *)*ppIVar10 + 0x18))();
            bVar5 = lVar7 == param_2;
            if ((param_4 & 1) == 0 && param_3 == 0) goto LAB_00e094e0;
LAB_00e09494:
          } while (!bVar5);
          auVar12 = (**(code **)(*(long *)*ppIVar10 + 0x10))();
        } while ((param_3 != auVar12._0_8_) ||
                (param_4 != auVar12._8_8_ &&
                 (((auVar12._8_4_ | (uint)param_4) & 1) != 0 || param_3 != 0)));
      } while( true );
    }
  }
  goto LAB_00e095d0;
LAB_00e09530:
  do {
    __dest = (long *)*plVar6;
    plVar3 = (long *)plVar6[1];
    if (__dest != plVar3) {
      this = (Ref *)*puVar11;
      if ((Ref *)*__dest != this) {
        do {
          if (plVar3 + -1 == __dest) goto LAB_00e09524;
          plVar1 = __dest + 1;
          __dest = __dest + 1;
        } while ((Ref *)*plVar1 != this);
      }
      if (__dest != plVar3) {
        __n = (long)plVar3 - (long)(__dest + 1);
        if (__n != 0) {
                    /* try { // try from 00e0958c to 00f09593 has its CatchHandler @ 00e0963c */
          memmove(__dest,__dest + 1,__n);
        }
        plVar6[1] = (long)(__dest + ((long)__n >> 3));
        Ref::release(this);
      }
    }
LAB_00e09524:
    puVar11 = puVar11 + 1;
  } while (puVar11 != puVar9);
  puVar9 = local_70;
  if (local_70 != (undefined8 *)0x0) {
LAB_00e0959c:
    local_68 = puVar9;
    operator_delete(puVar9);
  }
LAB_00e095d0:
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00e095e0 to 00f096c3 has its CatchHandler @ 00e090dc */
  return;
}

