
/* cocos2d::extension::TableView::reloadData() */

void __thiscall cocos2d::extension::TableView::reloadData(TableView *this)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  __tree<long,std::__ndk1::less<long>,std::__ndk1::allocator<long>> *this_00;
  __tree<long,std::__ndk1::less<long>,std::__ndk1::allocator<long>> *p_Var6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  Ref *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  puVar7 = *(undefined8 **)(this + 0x4a0);
  puVar8 = *(undefined8 **)(this + 0x4a8);
  *(undefined4 *)(this + 0x4e0) = 0xffffffff;
  if (puVar7 != puVar8) {
    plVar2 = *(long **)(this + 0x4d8);
    while( true ) {
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,this,*puVar7);
      }
      local_50 = (Ref *)*puVar7;
      puVar5 = *(undefined8 **)(this + 0x4c0);
      if (puVar5 == *(undefined8 **)(this + 0x4c8)) {
        std::__ndk1::
        vector<cocos2d::extension::TableViewCell*,std::__ndk1::allocator<cocos2d::extension::TableViewCell*>>
        ::__push_back_slow_path<cocos2d::extension::TableViewCell*const&>
                  ((vector<cocos2d::extension::TableViewCell*,std::__ndk1::allocator<cocos2d::extension::TableViewCell*>>
                    *)(this + 0x4b8),(TableViewCell **)&local_50);
      }
      else {
        *puVar5 = local_50;
        *(undefined8 **)(this + 0x4c0) = puVar5 + 1;
      }
      Ref::retain(local_50);
      TableViewCell::reset((TableViewCell *)*puVar7);
      lVar3 = (**(code **)(*(long *)*puVar7 + 0x260))();
      lVar4 = ScrollView::getContainer((ScrollView *)this);
      if (lVar3 == lVar4) {
        plVar2 = (long *)ScrollView::getContainer((ScrollView *)this);
        (**(code **)(*plVar2 + 0x280))(plVar2,*puVar7,0);
      }
      puVar7 = puVar7 + 1;
      if (puVar8 == puVar7) break;
      plVar2 = *(long **)(this + 0x4d8);
    }
  }
  this_00 = *(__tree<long,std::__ndk1::less<long>,std::__ndk1::allocator<long>> **)(this + 0x480);
  p_Var6 = this_00 + 8;
  std::__ndk1::__tree<long,std::__ndk1::less<long>,std::__ndk1::allocator<long>>::destroy
            (this_00,*(__tree_node **)p_Var6);
  *(__tree<long,std::__ndk1::less<long>,std::__ndk1::allocator<long>> **)this_00 = p_Var6;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)p_Var6 = 0;
  puVar7 = *(undefined8 **)(this + 0x4a0);
  puVar8 = *(undefined8 **)(this + 0x4a8);
  if (puVar7 != puVar8) {
    do {
      puVar5 = puVar7 + 1;
      Ref::release((Ref *)*puVar7);
      puVar7 = puVar5;
    } while (puVar8 != puVar5);
    puVar7 = *(undefined8 **)(this + 0x4a0);
  }
  *(undefined8 **)(this + 0x4a8) = puVar7;
  _updateCellPositions(this);
  _updateContentSize(this);
  lVar3 = (**(code **)(**(long **)(this + 0x4d0) + 0x28))(*(long **)(this + 0x4d0),this);
  if (0 < lVar3) {
    (**(code **)(*(long *)this + 0x660))(this,this);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

