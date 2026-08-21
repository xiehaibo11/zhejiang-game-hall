
/* cocos2d::ui::Slider::onPressStateChangedToNormal() */

void __thiscall cocos2d::ui::Slider::onPressStateChangedToNormal(Slider *this)

{
  Texture2D *pTVar1;
  undefined8 uVar2;
  long *plVar3;
  
  (**(code **)(**(long **)(this + 0x530) + 0x170))(*(long **)(this + 0x530),1);
  (**(code **)(**(long **)(this + 0x538) + 0x170))(*(long **)(this + 0x538),0);
  (**(code **)(**(long **)(this + 0x540) + 0x170))(*(long **)(this + 0x540),0);
  plVar3 = *(long **)(this + 0x530);
  pTVar1 = (Texture2D *)(**(code **)(*plVar3 + 0x550))(plVar3);
  uVar2 = Widget::getNormalGLProgramState((Widget *)this,pTVar1);
  (**(code **)(*plVar3 + 0x310))(plVar3,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00dcd3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x530) + 0x90))
            (*(undefined4 *)(this + 0x564),*(undefined4 *)(this + 0x568));
  return;
}

