
/* cocos2d::extension::TableView::_moveCellOutOfSight(cocos2d::extension::TableViewCell*) */

void __thiscall
cocos2d::extension::TableView::_moveCellOutOfSight(TableView *this,TableViewCell *param_1)

{
  undefined8 *puVar1;
  __tree_node_base *p_Var2;
  size_t __n;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  __tree_node_base *p_Var9;
  __tree_node_base *p_Var10;
  long *plVar11;
  __tree_node_base *p_Var12;
  __tree_node_base *p_Var13;
  TableViewCell *local_50;
  long local_48;
  
                    /* try { // try from 00e18448 to 00f184a7 has its CatchHandler @ 00e18448
                       catch() { ... } // from try @ 00e18448 with catch @ 00e18448
                       catch() { ... } // from try @ 00e184ac with catch @ 00e18448 */
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  plVar4 = *(long **)(this + 0x4d8);
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x38))(plVar4,this,param_1);
  }
  puVar7 = *(undefined8 **)(this + 0x4c0);
  local_50 = param_1;
  if (puVar7 == *(undefined8 **)(this + 0x4c8)) {
                    /* try { // try from 00e184a8 to 00f184ab has its CatchHandler @ 00e18524 */
                    /* try { // try from 00e184ac to 00f18537 has its CatchHandler @ 00e18448 */
    std::__ndk1::
    vector<cocos2d::extension::TableViewCell*,std::__ndk1::allocator<cocos2d::extension::TableViewCell*>>
    ::__push_back_slow_path<cocos2d::extension::TableViewCell*const&>
              ((vector<cocos2d::extension::TableViewCell*,std::__ndk1::allocator<cocos2d::extension::TableViewCell*>>
                *)(this + 0x4b8),&local_50);
  }
  else {
    *puVar7 = param_1;
    *(undefined8 **)(this + 0x4c0) = puVar7 + 1;
  }
  Ref::retain((Ref *)local_50);
  puVar7 = *(undefined8 **)(this + 0x4a0);
  puVar8 = *(undefined8 **)(this + 0x4a8);
  if (puVar7 != puVar8) {
    if ((TableViewCell *)*puVar7 != param_1) {
      do {
        if (puVar8 + -1 == puVar7) goto LAB_00e18528;
        puVar1 = puVar7 + 1;
        puVar7 = puVar7 + 1;
      } while ((TableViewCell *)*puVar1 != param_1);
    }
    if (puVar7 != puVar8) {
      __n = (long)puVar8 - (long)(puVar7 + 1);
      if (__n != 0) {
        memmove(puVar7,puVar7 + 1,__n);
      }
      *(undefined8 **)(this + 0x4a8) = puVar7 + ((long)__n >> 3);
                    /* catch() { ... } // from try @ 00e184a8 with catch @ 00e18524 */
      Ref::release((Ref *)param_1);
    }
  }
LAB_00e18528:
  puVar7 = *(undefined8 **)(this + 0x480);
  this[0x4e4] = (TableView)0x1;
  lVar5 = TableViewCell::getIdx(param_1);
  p_Var10 = (__tree_node_base *)(puVar7 + 1);
  p_Var9 = *(__tree_node_base **)p_Var10;
  p_Var12 = p_Var9;
  p_Var13 = p_Var10;
  if (p_Var9 != (__tree_node_base *)0x0) {
    do {
      if (lVar5 <= *(long *)(p_Var12 + 0x20)) {
        p_Var13 = p_Var12;
      }
      p_Var2 = p_Var12 + (ulong)(*(long *)(p_Var12 + 0x20) < lVar5) * 8;
      p_Var12 = *(__tree_node_base **)p_Var2;
    } while (*(__tree_node_base **)p_Var2 != (__tree_node_base *)0x0);
    if ((p_Var13 != p_Var10) && (*(long *)(p_Var13 + 0x20) <= lVar5)) {
      plVar4 = *(long **)(p_Var13 + 8);
      if (*(long **)(p_Var13 + 8) == (long *)0x0) {
        p_Var12 = p_Var13 + 0x10;
        plVar11 = *(long **)p_Var12;
        if ((__tree_node_base *)*plVar11 != p_Var13) {
          do {
            lVar5 = *(long *)p_Var12;
            p_Var12 = (__tree_node_base *)(lVar5 + 0x10);
            plVar11 = *(long **)p_Var12;
          } while (*plVar11 != lVar5);
        }
      }
      else {
        do {
          plVar11 = plVar4;
          plVar4 = (long *)*plVar11;
        } while ((long *)*plVar11 != (long *)0x0);
      }
      if ((__tree_node_base *)*puVar7 == p_Var13) {
        *puVar7 = plVar11;
      }
      puVar7[2] = puVar7[2] + -1;
      std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>(p_Var9,p_Var13);
      operator_delete(p_Var13);
    }
  }
  TableViewCell::reset(param_1);
  lVar5 = (**(code **)(*(long *)param_1 + 0x260))(param_1);
  lVar6 = ScrollView::getContainer((ScrollView *)this);
  if (lVar5 == lVar6) {
    plVar4 = (long *)ScrollView::getContainer((ScrollView *)this);
    (**(code **)(*plVar4 + 0x280))(plVar4,param_1,0);
  }
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

