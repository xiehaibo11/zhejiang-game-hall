
/* cocos2d::ui::AbstractCheckButton::onPressStateChangedToDisabled() */

void __thiscall
cocos2d::ui::AbstractCheckButton::onPressStateChangedToDisabled(AbstractCheckButton *this)

{
  Texture2D *pTVar1;
  undefined8 uVar2;
  long *plVar3;
  
  if ((this[0x51a] == (AbstractCheckButton)0x0) || (this[0x51b] == (AbstractCheckButton)0x0)) {
    plVar3 = *(long **)(this + 0x4f0);
    pTVar1 = (Texture2D *)(**(code **)(*plVar3 + 0x550))(plVar3);
    uVar2 = Widget::getGrayGLProgramState((Widget *)this,pTVar1);
    (**(code **)(*plVar3 + 0x310))(plVar3,uVar2);
    plVar3 = *(long **)(this + 0x500);
    pTVar1 = (Texture2D *)(**(code **)(**(long **)(this + 0x4f0) + 0x550))();
    uVar2 = Widget::getGrayGLProgramState((Widget *)this,pTVar1);
    (**(code **)(*plVar3 + 0x310))(plVar3,uVar2);
  }
  else {
    (**(code **)(**(long **)(this + 0x4f0) + 0x170))(*(long **)(this + 0x4f0),0);
    (**(code **)(**(long **)(this + 0x508) + 0x170))(*(long **)(this + 0x508),1);
  }
  (**(code **)(**(long **)(this + 0x4f8) + 0x170))(*(long **)(this + 0x4f8),0);
  (**(code **)(**(long **)(this + 0x500) + 0x170))(*(long **)(this + 0x500),0);
  (**(code **)(**(long **)(this + 0x4f0) + 0x90))
            (*(undefined4 *)(this + 0x534),*(undefined4 *)(this + 0x538));
  (**(code **)(**(long **)(this + 0x500) + 0x90))
            (*(undefined4 *)(this + 0x534),*(undefined4 *)(this + 0x538));
  if (this[0x518] != (AbstractCheckButton)0x0) {
    (**(code **)(**(long **)(this + 0x510) + 0x170))(*(long **)(this + 0x510),1);
    this[0x540] = (AbstractCheckButton)0x1;
  }
  return;
}

