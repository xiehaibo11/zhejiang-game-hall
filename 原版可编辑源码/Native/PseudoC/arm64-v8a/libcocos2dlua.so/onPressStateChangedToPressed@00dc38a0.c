
/* cocos2d::ui::AbstractCheckButton::onPressStateChangedToPressed() */

void __thiscall
cocos2d::ui::AbstractCheckButton::onPressStateChangedToPressed(AbstractCheckButton *this)

{
  Texture2D *pTVar1;
  undefined8 uVar2;
  long *plVar3;
  
  plVar3 = *(long **)(this + 0x4f0);
  pTVar1 = (Texture2D *)(**(code **)(*plVar3 + 0x550))(plVar3);
  uVar2 = Widget::getNormalGLProgramState((Widget *)this,pTVar1);
  (**(code **)(*plVar3 + 0x310))(plVar3,uVar2);
  plVar3 = *(long **)(this + 0x500);
  pTVar1 = (Texture2D *)(**(code **)(*plVar3 + 0x550))(plVar3);
  uVar2 = Widget::getNormalGLProgramState((Widget *)this,pTVar1);
  (**(code **)(*plVar3 + 0x310))(plVar3,uVar2);
  plVar3 = *(long **)(this + 0x4f0);
  if (this[0x519] != (AbstractCheckButton)0x0) {
    (**(code **)(*plVar3 + 0x170))(plVar3,0);
    (**(code **)(**(long **)(this + 0x4f8) + 0x170))(*(long **)(this + 0x4f8),1);
    (**(code **)(**(long **)(this + 0x508) + 0x170))(*(long **)(this + 0x508),0);
                    /* WARNING: Could not recover jumptable at 0x00dc3974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x510) + 0x170))(*(long **)(this + 0x510),0);
    return;
  }
  (**(code **)(*plVar3 + 0x90))
            (*(float *)(this + 0x534) + *(float *)(this + 0x530),
             *(float *)(this + 0x530) + *(float *)(this + 0x538));
                    /* WARNING: Could not recover jumptable at 0x00dc39c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x500) + 0x90))
            (*(float *)(this + 0x534) + *(float *)(this + 0x530),
             *(float *)(this + 0x530) + *(float *)(this + 0x538));
  return;
}

