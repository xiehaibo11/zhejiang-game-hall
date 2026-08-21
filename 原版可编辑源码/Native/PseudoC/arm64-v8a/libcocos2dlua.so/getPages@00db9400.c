
/* cocos2d::ui::PageView::getPages() */

undefined8 * __thiscall cocos2d::ui::PageView::getPages(PageView *this)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  Ref *pRVar8;
  long *plVar9;
  Ref *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  puVar2 = DAT_01788040;
  puVar3 = DAT_01788048;
  if (((DAT_01788058 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(&DAT_01788058), puVar2 = DAT_01788040, puVar3 = DAT_01788048,
     iVar5 != 0)) {
    DAT_01788040 = (undefined8 *)0x0;
    DAT_01788048 = (undefined8 *)0x0;
    DAT_01788050 = (undefined8 *)0x0;
    __cxa_atexit(Vector<cocos2d::ui::Layout*>::~Vector,&DAT_01788040,&PTR_LOOP_016979c0);
    __cxa_guard_release(&DAT_01788058);
    puVar2 = DAT_01788040;
    puVar3 = DAT_01788048;
  }
  for (; puVar4 = DAT_01788048, puVar2 != DAT_01788048; puVar2 = puVar2 + 1) {
    DAT_01788048 = puVar3;
    Ref::release((Ref *)*puVar2);
    puVar3 = DAT_01788048;
    DAT_01788048 = puVar4;
  }
  DAT_01788048 = DAT_01788040;
  plVar6 = (long *)ListView::getItems((ListView *)this);
  plVar9 = (long *)*plVar6;
  plVar6 = (long *)plVar6[1];
  if (plVar9 != plVar6) {
    lVar7 = *plVar9;
    if (lVar7 != 0) goto LAB_00db94d8;
    pRVar8 = (Ref *)0x0;
    while( true ) {
      local_60 = pRVar8;
      if (DAT_01788048 == DAT_01788050) {
        std::__ndk1::vector<cocos2d::ui::Layout*,std::__ndk1::allocator<cocos2d::ui::Layout*>>::
        __push_back_slow_path<cocos2d::ui::Layout*const&>
                  ((vector<cocos2d::ui::Layout*,std::__ndk1::allocator<cocos2d::ui::Layout*>> *)
                   &DAT_01788040,(Layout **)&local_60);
      }
      else {
        *DAT_01788048 = pRVar8;
        DAT_01788048 = DAT_01788048 + 1;
      }
      Ref::retain(local_60);
      plVar9 = plVar9 + 1;
      if (plVar6 == plVar9) break;
      lVar7 = *plVar9;
      pRVar8 = (Ref *)0x0;
      if (lVar7 != 0) {
LAB_00db94d8:
        pRVar8 = (Ref *)__dynamic_cast(lVar7,&Widget::typeinfo,&Layout::typeinfo,0);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return &DAT_01788040;
}

