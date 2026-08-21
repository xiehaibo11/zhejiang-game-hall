
/* cocos2d::ui::Widget::onEnter() */

void __thiscall cocos2d::ui::Widget::onEnter(Widget *this)

{
  long lVar1;
  ulong uVar2;
  Size *pSVar3;
  Size aSStack_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if ((*(int *)(this + 0x208) != 2) ||
     (uVar2 = ScriptEngineManager::sendNodeEventToJSExtended((Node *)this,0), (uVar2 & 1) == 0)) {
    if (this[0x380] == (Widget)0x0) {
      pSVar3 = (Size *)(**(code **)(**(long **)(this + 400) + 0x168))();
      Size::Size(aSStack_30,pSVar3);
      updateSizeAndPosition(this,aSStack_30);
    }
    ProtectedNode::onEnter((ProtectedNode *)this);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

