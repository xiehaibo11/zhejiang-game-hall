
/* cocos2d::ui::Button::updateContentSize() */

void __thiscall cocos2d::ui::Button::updateContentSize(Button *this)

{
  long lVar1;
  Button *pBVar2;
  Size aSStack_30 [8];
  long local_28;
  
  pBVar2 = (Button *)aSStack_30;
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (this[0x381] == (Button)0x0) {
    if (this[0x387] != (Button)0x0) {
      (**(code **)(*(long *)this + 0x610))(aSStack_30,this);
      (**(code **)(*(long *)this + 0x160))(this,aSStack_30);
    }
  }
  else {
    if (this[0x515] == (Button)0x0) {
      (**(code **)(*(long *)this + 0x6a8))(aSStack_30,this);
    }
    else {
      pBVar2 = this + 0x39c;
    }
    Node::setContentSize((Node *)this,(Size *)pBVar2);
    (**(code **)(*(long *)this + 0x628))(this);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

