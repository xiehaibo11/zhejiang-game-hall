
/* cocos2d::ui::Widget::setSizePercent(cocos2d::Vec2 const&) */

void __thiscall cocos2d::ui::Widget::setSizePercent(Widget *this,Vec2 *param_1)

{
  long lVar1;
  LayoutComponent *this_00;
  long lVar2;
  long *plVar3;
  float *pfVar4;
  Size *pSVar5;
  float fVar6;
  Size aSStack_68 [8];
  Size aSStack_60 [8];
  long local_58;
  
                    /* catch() { ... } // from try @ 00da9ff0 with catch @ 00daa0b0 */
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (this[0x380] == (Widget)0x0) {
    *(undefined8 *)(this + 0x3a4) = *(undefined8 *)param_1;
    Size::Size(aSStack_60,(Size *)(this + 0x39c));
    if (this[0x1f8] != (Widget)0x0) {
      lVar2 = (**(code **)(*(long *)this + 0x260))(this);
      if ((lVar2 == 0) ||
         (plVar3 = (long *)__dynamic_cast(lVar2,&Node::typeinfo,&typeinfo,0), plVar3 == (long *)0x0)
         ) {
        pfVar4 = (float *)(**(code **)(**(long **)(this + 400) + 0x168))();
        fVar6 = *pfVar4 * *(float *)param_1;
        lVar2 = (**(code **)(**(long **)(this + 400) + 0x168))(*(long **)(this + 400));
      }
      else {
                    /* try { // try from 00daa15c to 00eaa217 has its CatchHandler @ 00daa15c
                       catch(type#1 @ 00000000) { ... } // from try @ 00daa15c with catch @ 00daa15c
                        */
        pfVar4 = (float *)(**(code **)(*plVar3 + 0x168))();
        fVar6 = *pfVar4 * *(float *)param_1;
        lVar2 = (**(code **)(*plVar3 + 0x168))(plVar3);
      }
      Size::Size(aSStack_68,fVar6,*(float *)(lVar2 + 4) * *(float *)(param_1 + 4));
      Size::operator=(aSStack_60,aSStack_68);
    }
    if (this[0x387] == (Widget)0x0) {
      lVar2 = *(long *)this;
      pSVar5 = aSStack_60;
    }
    else {
      (**(code **)(*(long *)this + 0x610))(aSStack_68,this);
      lVar2 = *(long *)this;
      pSVar5 = aSStack_68;
    }
    (**(code **)(lVar2 + 0x160))(this,pSVar5);
                    /* try { // try from 00daa218 to 00eaa21b has its CatchHandler @ 00daa260 */
    Size::operator=((Size *)(this + 0x39c),aSStack_60);
  }
  else {
    this_00 = (LayoutComponent *)getOrCreateLayoutComponent(this);
    LayoutComponent::setUsingPercentContentSize(this_00,true);
    LayoutComponent::setPercentContentSize(this_00,param_1);
    LayoutComponent::refreshLayout(this_00);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

