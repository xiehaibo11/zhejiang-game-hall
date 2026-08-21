
/* cocos2d::extension::TableView::_updateContentSize() */

void __thiscall cocos2d::extension::TableView::_updateContentSize(TableView *this)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  Size aSStack_48 [8];
  Size aSStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  Size::Size(aSStack_40,(Size *)&Size::ZERO);
  lVar2 = (**(code **)(**(long **)(this + 0x4d0) + 0x28))(*(long **)(this + 0x4d0),this);
  if (0 < lVar2) {
    fVar3 = *(float *)(*(long *)(this + 0x488) + lVar2 * 4);
    if (*(int *)(this + 0x330) == 0) {
      fVar4 = *(float *)(this + 0x394);
    }
    else {
      fVar4 = fVar3;
      fVar3 = *(float *)(this + 0x390);
    }
    Size::Size(aSStack_48,fVar3,fVar4);
    Size::operator=(aSStack_40,aSStack_48);
  }
  (**(code **)(*(long *)this + 0x160))(this,aSStack_40);
  if (*(int *)(this + 0x4e0) != *(int *)(this + 0x330)) {
    if (*(int *)(this + 0x330) != 0) {
      ScrollView::minContainerOffset((ScrollView *)this);
    }
    ScrollView::setContentOffset(0,this,0);
    *(undefined4 *)(this + 0x4e0) = *(undefined4 *)(this + 0x330);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

