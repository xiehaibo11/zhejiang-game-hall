
/* cocos2d::ui::Slider::onPressStateChangedToDisabled() */

void __thiscall cocos2d::ui::Slider::onPressStateChangedToDisabled(Slider *this)

{
  Texture2D *pTVar1;
  undefined8 uVar2;
  long *plVar3;
  
  plVar3 = *(long **)(this + 0x530);
  if (this[0x56d] == (Slider)0x0) {
    pTVar1 = (Texture2D *)(**(code **)(*plVar3 + 0x550))(plVar3);
    uVar2 = Widget::getGrayGLProgramState((Widget *)this,pTVar1);
    (**(code **)(*plVar3 + 0x310))(plVar3,uVar2);
    plVar3 = *(long **)(this + 0x530);
  }
  else {
    (**(code **)(*plVar3 + 0x170))(plVar3,0);
    plVar3 = *(long **)(this + 0x540);
  }
  (**(code **)(*plVar3 + 0x170))(plVar3,1);
                    /* try { // try from 00dcd4f0 to 00ecd4fb has its CatchHandler @ 00dcee64 */
  (**(code **)(**(long **)(this + 0x530) + 0x90))
            (*(undefined4 *)(this + 0x564),*(undefined4 *)(this + 0x568));
                    /* try { // try from 00dcd4fc to 00ecd5cb has its CatchHandler @ 00dcd454 */
                    /* WARNING: Could not recover jumptable at 0x00dcd50c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x538) + 0x170))(*(long **)(this + 0x538),0);
  return;
}

