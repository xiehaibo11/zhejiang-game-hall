
/* cocos2d::ui::Button::ignoreContentAdaptWithSize(bool) */

void __thiscall cocos2d::ui::Button::ignoreContentAdaptWithSize(Button *this,bool param_1)

{
  long lVar1;
  Button *pBVar2;
  Size aSStack_40 [8];
  long local_38;
  
  pBVar2 = (Button *)aSStack_40;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (this[0x381] == (Button)0x0) {
    if ((this[0x515] == (Button)0x0) || (!param_1)) {
      Widget::ignoreContentAdaptWithSize((Widget *)this,param_1);
      this[0x514] = (Button)param_1;
    }
  }
  else {
    if (this[0x515] == (Button)0x0) {
      (**(code **)(*(long *)this + 0x6a8))(aSStack_40,this);
    }
    else {
      pBVar2 = this + 0x39c;
    }
    Node::setContentSize((Node *)this,(Size *)pBVar2);
    (**(code **)(*(long *)this + 0x628))(this);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

