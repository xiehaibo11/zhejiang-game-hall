
/* cocos2d::ui::AbstractCheckButton::onPressStateChangedToNormal() */

void __thiscall
cocos2d::ui::AbstractCheckButton::onPressStateChangedToNormal(AbstractCheckButton *this)

{
  Texture2D *pTVar1;
  undefined8 uVar2;
  long *plVar3;
  
                    /* try { // try from 00dc3780 to 00ec37f3 has its CatchHandler @ 00dc3850 */
  (**(code **)(**(long **)(this + 0x4f0) + 0x170))(*(long **)(this + 0x4f0),1);
  (**(code **)(**(long **)(this + 0x4f8) + 0x170))(*(long **)(this + 0x4f8),0);
  (**(code **)(**(long **)(this + 0x508) + 0x170))(*(long **)(this + 0x508),0);
  (**(code **)(**(long **)(this + 0x510) + 0x170))(*(long **)(this + 0x510),0);
  plVar3 = *(long **)(this + 0x4f0);
  pTVar1 = (Texture2D *)(**(code **)(*plVar3 + 0x550))(plVar3);
                    /* try { // try from 00dc37f4 to 00ec38ab has its CatchHandler @ 00dc34e8 */
  uVar2 = Widget::getNormalGLProgramState((Widget *)this,pTVar1);
  (**(code **)(*plVar3 + 0x310))(plVar3,uVar2);
  plVar3 = *(long **)(this + 0x500);
  pTVar1 = (Texture2D *)(**(code **)(*plVar3 + 0x550))(plVar3);
  uVar2 = Widget::getNormalGLProgramState((Widget *)this,pTVar1);
  (**(code **)(*plVar3 + 0x310))(plVar3,uVar2);
                    /* catch() { ... } // from try @ 00dc3628 with catch @ 00dc384c */
                    /* catch() { ... } // from try @ 00dc3618 with catch @ 00dc3850
                       catch() { ... } // from try @ 00dc3780 with catch @ 00dc3850 */
                    /* catch() { ... } // from try @ 00dc3750 with catch @ 00dc3854 */
  (**(code **)(**(long **)(this + 0x4f0) + 0x90))
            (*(undefined4 *)(this + 0x534),*(undefined4 *)(this + 0x538));
                    /* catch() { ... } // from try @ 00dc3560 with catch @ 00dc3858 */
                    /* catch() { ... } // from try @ 00dc3574 with catch @ 00dc385c */
                    /* catch() { ... } // from try @ 00dc3664 with catch @ 00dc3860 */
  (**(code **)(**(long **)(this + 0x500) + 0x90))
            (*(undefined4 *)(this + 0x534),*(undefined4 *)(this + 0x538));
                    /* catch() { ... } // from try @ 00dc3678 with catch @ 00dc3870 */
  if (this[0x518] != (AbstractCheckButton)0x0) {
    (**(code **)(**(long **)(this + 0x500) + 0x170))(*(long **)(this + 0x500),1);
    this[0x53e] = (AbstractCheckButton)0x1;
  }
  return;
}

