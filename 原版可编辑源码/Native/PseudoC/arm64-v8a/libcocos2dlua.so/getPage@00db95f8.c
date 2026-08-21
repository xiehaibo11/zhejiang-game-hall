
/* cocos2d::ui::PageView::getPage(long) */

void __thiscall cocos2d::ui::PageView::getPage(PageView *this,long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  Ref *pRVar9;
  undefined8 uVar10;
  Ref *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if ((param_1 < 0) ||
     (plVar6 = (long *)ListView::getItems((ListView *)this), plVar6[1] - *plVar6 >> 3 <= param_1)) {
    uVar10 = 0;
  }
  else {
    puVar2 = DAT_01788060;
    puVar3 = DAT_01788068;
    if (((DAT_01788078 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(&DAT_01788078), puVar2 = DAT_01788060, puVar3 = DAT_01788068,
       iVar5 != 0)) {
      DAT_01788060 = (undefined8 *)0x0;
      DAT_01788068 = (undefined8 *)0x0;
      DAT_01788070 = (undefined8 *)0x0;
      __cxa_atexit(Vector<cocos2d::ui::Layout*>::~Vector,&DAT_01788060,&PTR_LOOP_016979c0);
      __cxa_guard_release(&DAT_01788078);
      puVar2 = DAT_01788060;
      puVar3 = DAT_01788068;
    }
    for (; puVar4 = DAT_01788068, puVar2 != DAT_01788068; puVar2 = puVar2 + 1) {
      DAT_01788068 = puVar3;
      Ref::release((Ref *)*puVar2);
      puVar3 = DAT_01788068;
      DAT_01788068 = puVar4;
    }
    DAT_01788068 = DAT_01788060;
    plVar7 = (long *)ListView::getItems((ListView *)this);
    plVar6 = (long *)*plVar7;
    plVar7 = (long *)plVar7[1];
    if (plVar6 != plVar7) {
      lVar8 = *plVar6;
      if (lVar8 != 0) goto LAB_00db96f0;
      pRVar9 = (Ref *)0x0;
      while( true ) {
        local_70 = pRVar9;
        if (DAT_01788068 == DAT_01788070) {
          std::__ndk1::vector<cocos2d::ui::Layout*,std::__ndk1::allocator<cocos2d::ui::Layout*>>::
          __push_back_slow_path<cocos2d::ui::Layout*const&>
                    ((vector<cocos2d::ui::Layout*,std::__ndk1::allocator<cocos2d::ui::Layout*>> *)
                     &DAT_01788060,(Layout **)&local_70);
        }
        else {
          *DAT_01788068 = pRVar9;
          DAT_01788068 = DAT_01788068 + 1;
        }
        Ref::retain(local_70);
        plVar6 = plVar6 + 1;
        if (plVar7 == plVar6) break;
        lVar8 = *plVar6;
        pRVar9 = (Ref *)0x0;
        if (lVar8 != 0) {
LAB_00db96f0:
          pRVar9 = (Ref *)__dynamic_cast(lVar8,&Widget::typeinfo,&Layout::typeinfo,0);
        }
      }
    }
    uVar10 = DAT_01788060[param_1];
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar10);
  }
  return;
}

