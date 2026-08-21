
/* cocos2d::ui::Widget::setContentSize(cocos2d::Size const&) */

void __thiscall cocos2d::ui::Widget::setContentSize(Widget *this,Size *param_1)

{
  long lVar1;
  Size *pSVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  float fVar6;
  float fVar7;
  float local_48;
  float local_44;
  Size aSStack_40 [8];
  long local_38;
  
                    /* try { // try from 00da9f10 to 00ea9f17 has its CatchHandler @ 00da9f6c */
                    /* try { // try from 00da9f18 to 00ea9f87 has its CatchHandler @ 00da9ee8 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pSVar2 = (Size *)Node::getContentSize((Node *)this);
  Size::Size(aSStack_40,pSVar2);
  uVar3 = Size::equals(aSStack_40,param_1);
  if ((uVar3 & 1) == 0) {
    Node::setContentSize((Node *)this,param_1);
    Size::operator=((Size *)(this + 0x39c),param_1);
                    /* catch() { ... } // from try @ 00da9f10 with catch @ 00da9f6c */
    if ((this[0x381] == (Widget)0x0) && (this[0x387] != (Widget)0x0)) {
      (**(code **)(*(long *)this + 0x610))(&local_48,this);
      Node::setContentSize((Node *)this,(Size *)&local_48);
    }
    if ((this[0x380] == (Widget)0x0) && (this[0x1f8] != (Widget)0x0)) {
      lVar4 = (**(code **)(*(long *)this + 0x260))(this);
      if (lVar4 == 0) {
        plVar5 = (long *)0x0;
      }
      else {
                    /* catch() { ... } // from try @ 00da9ff8 with catch @ 00da9fcc */
        plVar5 = (long *)__dynamic_cast(lVar4,&Node::typeinfo,&typeinfo,0);
      }
      Size::Size((Size *)&local_48);
      if (plVar5 == (long *)0x0) {
        plVar5 = *(long **)(this + 400);
        lVar4 = *plVar5;
      }
      else {
                    /* try { // try from 00da9ff0 to 00ea9ff7 has its CatchHandler @ 00daa0b0 */
        lVar4 = *plVar5;
                    /* try { // try from 00da9ff8 to 00eaa0cb has its CatchHandler @ 00da9fcc */
      }
      pSVar2 = (Size *)(**(code **)(lVar4 + 0x168))(plVar5);
      Size::operator=((Size *)&local_48,pSVar2);
      fVar6 = 0.0;
      fVar7 = 0.0;
      if (0.0 < local_48) {
        fVar7 = *(float *)(this + 0x39c) / local_48;
      }
      if (0.0 < local_44) {
        fVar6 = *(float *)(this + 0x3a0) / local_44;
      }
      *(float *)(this + 0x3a4) = fVar7;
      *(float *)(this + 0x3a8) = fVar6;
    }
    (**(code **)(*(long *)this + 0x628))(this);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

