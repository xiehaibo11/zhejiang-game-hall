
/* fairygui::InputProcessor::onTouchCancelled(cocos2d::Touch*, cocos2d::Event*) */

void fairygui::InputProcessor::onTouchCancelled(Touch *param_1,Event *param_2)

{
  int iVar1;
  long lVar2;
  TouchInfo *pTVar3;
  long lVar4;
  long *plVar5;
  UIEventDispatcher *this;
  InputProcessor *this_00;
  WeakPtr *this_01;
  long lVar6;
  ulong uVar7;
  WeakPtr *pWVar8;
  undefined8 uVar9;
  undefined4 local_6c;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  pTVar3 = (TouchInfo *)getTouch((InputProcessor *)param_1,*(int *)(param_2 + 0x24),true);
  if (pTVar3 != (TouchInfo *)0x0) {
    *(Event **)pTVar3 = param_2;
    lVar6 = *(long *)(param_1 + 0x30);
    uVar9 = NEON_scvtf(CONCAT44((int)(float)((ulong)*(undefined8 *)(pTVar3 + 8) >> 0x20),
                                (int)(float)*(undefined8 *)(pTVar3 + 8)),4);
    *(undefined8 *)(param_1 + 0x80) = uVar9;
    *(long *)(param_1 + 0x70) = lVar6;
    *(Event **)(param_1 + 0x78) = param_2;
    uVar9 = *(undefined8 *)(pTVar3 + 0x10);
    *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(pTVar3 + 0x18);
    *(undefined8 *)(param_1 + 0x88) = uVar9;
    lVar4 = cocos2d::Director::getInstance();
    iVar1 = *(int *)(lVar4 + 0x14c);
    if (iVar1 == _touchOnUIFlagFrameId) {
      if (*(long *)(param_1 + 0x30) != lVar6) {
        _touchOnUI = 1;
      }
    }
    else {
      _touchOnUI = *(long *)(param_1 + 0x30) != lVar6;
    }
    plVar5 = *(long **)(param_1 + 0x60);
    _activeProcessor = param_1;
    _touchOnUIFlagFrameId = iVar1;
    if (plVar5 != (long *)0x0) {
      local_6c = 0xc;
      (**(code **)(*plVar5 + 0x30))(plVar5,&local_6c);
    }
    pWVar8 = *(WeakPtr **)(pTVar3 + 0x58);
    lVar4 = *(long *)(pTVar3 + 0x60) - (long)pWVar8;
    if (lVar4 != 0) {
      lVar6 = 0;
      uVar7 = 0;
      do {
        this = (UIEventDispatcher *)WeakPtr::ptr(pWVar8 + lVar6);
        if ((this != (UIEventDispatcher *)0x0) && (this != *(UIEventDispatcher **)(param_1 + 0x30)))
        {
          UIEventDispatcher::dispatchEvent(this,0xc,(void *)0x0,(Value *)&cocos2d::Value::Null);
        }
        pWVar8 = *(WeakPtr **)(pTVar3 + 0x58);
        uVar7 = uVar7 + 1;
        lVar6 = lVar6 + 8;
      } while (uVar7 < (ulong)(lVar4 >> 3));
      this_01 = *(WeakPtr **)(pTVar3 + 0x60);
      while (this_01 != pWVar8) {
        this_01 = this_01 + -8;
        WeakPtr::~WeakPtr(this_01);
      }
      *(WeakPtr **)(pTVar3 + 0x60) = pWVar8;
    }
    this_00 = (InputProcessor *)
              UIEventDispatcher::dispatchEvent
                        (*(UIEventDispatcher **)(param_1 + 0x30),0xc,(void *)0x0,
                         (Value *)&cocos2d::Value::Null);
    handleRollOver(this_00,pTVar3,(GObject *)0x0);
    *(undefined4 *)(pTVar3 + 0x10) = 0xffffffff;
    *(undefined4 *)(pTVar3 + 0x1c) = 0xffffffff;
    _activeProcessor = (Touch *)0x0;
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

