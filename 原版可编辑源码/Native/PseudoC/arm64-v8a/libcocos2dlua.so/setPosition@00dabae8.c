
/* cocos2d::ui::Widget::setPosition(cocos2d::Vec2 const&) */

void __thiscall cocos2d::ui::Widget::setPosition(Widget *this,Vec2 *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  Size *pSVar4;
  undefined8 uVar5;
  float local_40;
  float local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00dabb0c to 00eabb0f has its CatchHandler @ 00dabb98 */
  if ((((this[0x380] == (Widget)0x0) && (this[0x1f8] != (Widget)0x0)) &&
      (lVar2 = (**(code **)(*(long *)this + 0x260))(this), lVar2 != 0)) &&
     (plVar3 = (long *)__dynamic_cast(lVar2,&Node::typeinfo,&typeinfo,0), plVar3 != (long *)0x0)) {
                    /* try { // try from 00dabb88 to 00eabb8b has its CatchHandler @ 00dabb90 */
    pSVar4 = (Size *)(**(code **)(*plVar3 + 0x168))();
                    /* try { // try from 00dabb8c to 00eabbaf has its CatchHandler @ 00daba64 */
                    /* catch() { ... } // from try @ 00dabb88 with catch @ 00dabb90 */
                    /* catch() { ... } // from try @ 00dabad8 with catch @ 00dabb94 */
    Size::Size((Size *)&local_40,pSVar4);
                    /* catch() { ... } // from try @ 00dabb0c with catch @ 00dabb98 */
    uVar5 = 0;
    if ((0.0 < local_40) && (0.0 < local_3c)) {
      uVar5 = CONCAT44((float)((ulong)*(undefined8 *)param_1 >> 0x20) / local_3c,
                       (float)*(undefined8 *)param_1 / local_40);
    }
    *(undefined8 *)(this + 0x3ac) = uVar5;
  }
  Node::setPosition((Node *)this,param_1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

