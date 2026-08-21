
/* cocos2d::extension::TableView::_setIndexForCell(long, cocos2d::extension::TableViewCell*) */

void __thiscall
cocos2d::extension::TableView::_setIndexForCell(TableView *this,long param_1,TableViewCell *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  EventDispatcher *this_00;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 local_60;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_2 == (TableViewCell *)0x0) {
    lVar3 = Director::getInstance();
    this_00 = *(EventDispatcher **)(lVar3 + 0xb0);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_60,"G_TRACKBACK");
    EventDispatcher::dispatchCustomEvent(this_00,(basic_string *)&local_60,(void *)0x0);
    if ((local_60 & 1) != 0) {
      operator_delete(local_50);
    }
  }
  else {
    local_60 = 0;
    (**(code **)(*(long *)param_2 + 0x148))(param_2,&local_60);
    Size::Size((Size *)&local_60);
    fVar4 = *(float *)(*(long *)(this + 0x488) + param_1 * 4);
    fVar5 = fVar4;
    fVar6 = 0.0;
    if (*(int *)(this + 0x330) != 0) {
      fVar5 = 0.0;
      fVar6 = fVar4;
    }
    (**(code **)(**(long **)(this + 0x4d0) + 0x10))(&local_60,*(long **)(this + 0x4d0),this,param_1)
    ;
    if (*(int *)(this + 0x478) == 0) {
      plVar2 = (long *)ScrollView::getContainer((ScrollView *)this);
      lVar3 = (**(code **)(*plVar2 + 0x168))();
      fVar6 = (*(float *)(lVar3 + 4) - fVar6) - local_60._4_4_;
    }
    local_60 = CONCAT44(fVar6,fVar5);
    (**(code **)(*(long *)param_2 + 0x98))(param_2,&local_60);
    TableViewCell::setIdx(param_2,param_1);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

