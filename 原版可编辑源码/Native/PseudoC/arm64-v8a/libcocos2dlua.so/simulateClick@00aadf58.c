
/* fairygui::InputProcessor::simulateClick(fairygui::GObject*, int) */

void fairygui::InputProcessor::simulateClick(GObject *param_1,int param_2)

{
  long lVar1;
  long *plVar2;
  UIEventDispatcher *pUVar3;
  GObject *this;
  undefined4 in_w2;
  undefined4 uVar4;
  undefined4 in_s1;
  undefined4 local_50 [2];
  long local_48;
  
  this = (GObject *)(ulong)(uint)param_2;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  _activeProcessor = param_1;
  uVar4 = GObject::localToGlobal(this,(Vec2 *)&cocos2d::Vec2::ZERO);
  plVar2 = *(long **)(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0x80) = uVar4;
  *(undefined4 *)(param_1 + 0x84) = in_s1;
  *(undefined4 *)(param_1 + 0x88) = in_w2;
  *(undefined4 *)(param_1 + 0x8c) = 1;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(GObject **)(param_1 + 0x70) = this;
  *(undefined8 *)(param_1 + 0x78) = 0;
  if (plVar2 != (long *)0x0) {
    local_50[0] = 10;
    (**(code **)(*plVar2 + 0x30))(plVar2,local_50);
  }
  WeakPtr::WeakPtr((WeakPtr *)local_50,this);
  UIEventDispatcher::bubbleEvent
            ((UIEventDispatcher *)this,10,(void *)0x0,(Value *)&cocos2d::Value::Null);
  pUVar3 = (UIEventDispatcher *)WeakPtr::ptr((WeakPtr *)local_50);
  if (pUVar3 != (UIEventDispatcher *)0x0) {
    UIEventDispatcher::bubbleEvent(pUVar3,0xc,(void *)0x0,(Value *)&cocos2d::Value::Null);
    pUVar3 = (UIEventDispatcher *)WeakPtr::ptr((WeakPtr *)local_50);
    if (pUVar3 != (UIEventDispatcher *)0x0) {
      UIEventDispatcher::bubbleEvent(pUVar3,0xd,(void *)0x0,(Value *)&cocos2d::Value::Null);
    }
  }
  _activeProcessor = (GObject *)0x0;
  WeakPtr::~WeakPtr((WeakPtr *)local_50);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

