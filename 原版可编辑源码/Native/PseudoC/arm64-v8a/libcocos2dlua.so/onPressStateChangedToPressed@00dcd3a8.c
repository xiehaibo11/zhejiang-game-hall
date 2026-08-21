
/* cocos2d::ui::Slider::onPressStateChangedToPressed() */

void __thiscall cocos2d::ui::Slider::onPressStateChangedToPressed(Slider *this)

{
  Texture2D *pTVar1;
  undefined8 uVar2;
  long *plVar3;
  
  plVar3 = *(long **)(this + 0x530);
  pTVar1 = (Texture2D *)(**(code **)(*plVar3 + 0x550))(plVar3);
  uVar2 = Widget::getNormalGLProgramState((Widget *)this,pTVar1);
  (**(code **)(*plVar3 + 0x310))(plVar3,uVar2);
  plVar3 = *(long **)(this + 0x530);
  if (this[0x56c] != (Slider)0x0) {
    (**(code **)(*plVar3 + 0x170))(plVar3,0);
    (**(code **)(**(long **)(this + 0x538) + 0x170))(*(long **)(this + 0x538),1);
                    /* WARNING: Could not recover jumptable at 0x00dcd434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x540) + 0x170))(*(long **)(this + 0x540),0);
    return;
  }
                    /* try { // try from 00dcd454 to 00ecd4ef has its CatchHandler @ 00dcd454
                       catch() { ... } // from try @ 00dcd454 with catch @ 00dcd454
                       catch() { ... } // from try @ 00dcd4fc with catch @ 00dcd454
                       catch() { ... } // from try @ 00dce658 with catch @ 00dcd454 */
                    /* WARNING: Could not recover jumptable at 0x00dcd45c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x90))
            (*(float *)(this + 0x564) + *(float *)(this + 0x560),
             *(float *)(this + 0x560) + *(float *)(this + 0x568));
  return;
}

