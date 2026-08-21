
/* cocos2d::extension::TableView::_addCellIfNecessary(cocos2d::extension::TableViewCell*) */

void __thiscall
cocos2d::extension::TableView::_addCellIfNecessary(TableView *this,TableViewCell *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  __tree_node_base *p_Var5;
  undefined8 *puVar6;
  EventDispatcher *this_00;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  Ref *local_60 [2];
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_1 == (TableViewCell *)0x0) {
    lVar2 = Director::getInstance();
    this_00 = *(EventDispatcher **)(lVar2 + 0xb0);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               local_60,"G_TRACKBACK");
    EventDispatcher::dispatchCustomEvent(this_00,(basic_string *)local_60,(void *)0x0);
    if (((ulong)local_60[0] & 1) != 0) {
      operator_delete(local_50);
    }
  }
  else {
    lVar2 = (**(code **)(*(long *)param_1 + 0x260))(param_1);
    lVar3 = ScrollView::getContainer((ScrollView *)this);
    if (lVar2 != lVar3) {
      plVar4 = (long *)ScrollView::getContainer((ScrollView *)this);
      (**(code **)(*plVar4 + 0x208))(plVar4,param_1);
    }
    puVar6 = *(undefined8 **)(this + 0x4a8);
    local_60[0] = (Ref *)param_1;
    if (puVar6 == *(undefined8 **)(this + 0x4b0)) {
      std::__ndk1::
      vector<cocos2d::extension::TableViewCell*,std::__ndk1::allocator<cocos2d::extension::TableViewCell*>>
      ::__push_back_slow_path<cocos2d::extension::TableViewCell*const&>
                ((vector<cocos2d::extension::TableViewCell*,std::__ndk1::allocator<cocos2d::extension::TableViewCell*>>
                  *)(this + 0x4a0),(TableViewCell **)local_60);
    }
    else {
      *puVar6 = param_1;
      *(undefined8 **)(this + 0x4a8) = puVar6 + 1;
    }
    Ref::retain(local_60[0]);
    plVar7 = *(long **)(this + 0x480);
                    /* try { // try from 00e188a8 to 00f18907 has its CatchHandler @ 00e188a8
                       catch() { ... } // from try @ 00e188a8 with catch @ 00e188a8
                       catch() { ... } // from try @ 00e1890c with catch @ 00e188a8 */
    lVar2 = TableViewCell::getIdx(param_1);
    plVar4 = plVar7 + 1;
    plVar8 = (long *)*plVar4;
    plVar9 = plVar4;
    if (plVar8 != (long *)0x0) {
      plVar4 = plVar7 + 1;
      do {
        while (plVar9 = plVar8, lVar2 < plVar9[4]) {
          plVar4 = plVar9;
          plVar8 = (long *)*plVar9;
          if ((long *)*plVar9 == (long *)0x0) {
            lVar3 = *plVar9;
            goto joined_r0x00e18940;
          }
        }
        if (lVar2 <= plVar9[4]) break;
        plVar4 = plVar9 + 1;
        plVar8 = (long *)*plVar4;
      } while ((long *)*plVar4 != (long *)0x0);
    }
    lVar3 = *plVar4;
joined_r0x00e18940:
    if (lVar3 == 0) {
                    /* try { // try from 00e18908 to 00f1890b has its CatchHandler @ 00e18988 */
                    /* try { // try from 00e1890c to 00f1899b has its CatchHandler @ 00e188a8 */
      p_Var5 = operator_new(0x28);
      *(long *)(p_Var5 + 0x20) = lVar2;
      *(undefined8 *)p_Var5 = 0;
      *(undefined8 *)(p_Var5 + 8) = 0;
      *(long **)(p_Var5 + 0x10) = plVar9;
      *plVar4 = (long)p_Var5;
      if (*(long *)*plVar7 != 0) {
        *plVar7 = *(long *)*plVar7;
        p_Var5 = (__tree_node_base *)*plVar4;
      }
      std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                ((__tree_node_base *)plVar7[1],p_Var5);
      plVar7[2] = plVar7[2] + 1;
    }
    this[0x4e4] = (TableView)0x1;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* catch() { ... } // from try @ 00e18908 with catch @ 00e18988 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

